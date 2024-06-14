
#include <godot_cpp/classes/image.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/texture.hpp>
#include <godot_cpp/classes/texture3d.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_Texture3D() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<Texture3D>("Texture3D")
			.constructor<>()
			.base<Texture>()
			.fun<static_cast<Image::Format (Texture3D::*)() const>(&Texture3D::_get_format)>((new std::string("_get_format"))->c_str())
			.fun<static_cast<int32_t (Texture3D::*)() const>(&Texture3D::_get_width)>((new std::string("_get_width"))->c_str())
			.fun<static_cast<int32_t (Texture3D::*)() const>(&Texture3D::_get_height)>((new std::string("_get_height"))->c_str())
			.fun<static_cast<int32_t (Texture3D::*)() const>(&Texture3D::_get_depth)>((new std::string("_get_depth"))->c_str())
			.fun<static_cast<bool (Texture3D::*)() const>(&Texture3D::_has_mipmaps)>((new std::string("_has_mipmaps"))->c_str())
			.fun<static_cast<TypedArray<Image> (Texture3D::*)() const>(&Texture3D::_get_data)>((new std::string("_get_data"))->c_str())
			.fun<static_cast<Image::Format (Texture3D::*)() const>(&Texture3D::get_format)>((new std::string("get_format"))->c_str())
			.fun<static_cast<int32_t (Texture3D::*)() const>(&Texture3D::get_width)>((new std::string("get_width"))->c_str())
			.fun<static_cast<int32_t (Texture3D::*)() const>(&Texture3D::get_height)>((new std::string("get_height"))->c_str())
			.fun<static_cast<int32_t (Texture3D::*)() const>(&Texture3D::get_depth)>((new std::string("get_depth"))->c_str())
			.fun<static_cast<bool (Texture3D::*)() const>(&Texture3D::has_mipmaps)>((new std::string("has_mipmaps"))->c_str())
			.fun<static_cast<TypedArray<Image> (Texture3D::*)() const>(&Texture3D::get_data)>((new std::string("get_data"))->c_str())
			.fun<static_cast<Ref<Resource> (Texture3D::*)() const>(&Texture3D::create_placeholder)>((new std::string("create_placeholder"))->c_str());
}