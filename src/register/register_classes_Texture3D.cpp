#include <godot_cpp/classes/image.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/texture3d.hpp>
#include <godot_cpp/variant/typed_array.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_Texture3D() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<Texture3D>("Texture3D")
			.constructor<>()
			.fun<static_cast<Image::Format (Texture3D::*)() const>(&Texture3D::_get_format)>("_get_format")
			.fun<static_cast<int32_t (Texture3D::*)() const>(&Texture3D::_get_width)>("_get_width")
			.fun<static_cast<int32_t (Texture3D::*)() const>(&Texture3D::_get_height)>("_get_height")
			.fun<static_cast<int32_t (Texture3D::*)() const>(&Texture3D::_get_depth)>("_get_depth")
			.fun<static_cast<bool (Texture3D::*)() const>(&Texture3D::_has_mipmaps)>("_has_mipmaps")
			.fun<static_cast<TypedArray<Image> (Texture3D::*)() const>(&Texture3D::_get_data)>("_get_data")
			.fun<static_cast<Image::Format (Texture3D::*)() const>(&Texture3D::get_format)>("get_format")
			.fun<static_cast<int32_t (Texture3D::*)() const>(&Texture3D::get_width)>("get_width")
			.fun<static_cast<int32_t (Texture3D::*)() const>(&Texture3D::get_height)>("get_height")
			.fun<static_cast<int32_t (Texture3D::*)() const>(&Texture3D::get_depth)>("get_depth")
			.fun<static_cast<bool (Texture3D::*)() const>(&Texture3D::has_mipmaps)>("has_mipmaps")
			.fun<static_cast<TypedArray<Image> (Texture3D::*)() const>(&Texture3D::get_data)>("get_data")
			.fun<static_cast<Ref<Resource> (Texture3D::*)() const>(&Texture3D::create_placeholder)>("create_placeholder");
}