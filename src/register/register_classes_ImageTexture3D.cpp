
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/image.hpp>
#include <godot_cpp/classes/image_texture3d.hpp>
#include <godot_cpp/classes/texture3d.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_ImageTexture3D() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<ImageTexture3D>("ImageTexture3D")
			.constructor<>()
			.base<Texture3D>()
			.fun<static_cast<Error (ImageTexture3D::*)(Image::Format, int32_t, int32_t, int32_t, bool, const TypedArray<Image> &)>(&ImageTexture3D::create)>((new std::string("create"))->c_str())
			.fun<static_cast<void (ImageTexture3D::*)(const TypedArray<Image> &)>(&ImageTexture3D::update)>((new std::string("update"))->c_str());
}