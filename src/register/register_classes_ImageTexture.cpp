#include <godot_cpp/classes/image.hpp>
#include <godot_cpp/classes/image_texture.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/vector2i.hpp>


#include "qjspp.hpp"
#include "register/register_classes.h"


using namespace godot;

void register_classes_ImageTexture() {
	qjs::Context::Module &_module = _General;
	_module.class_<ImageTexture>("ImageTexture")
			.constructor<>()
			.static_fun<&ImageTexture::create_from_image>("create_from_image")
			.fun<static_cast<Image::Format (ImageTexture::*)() const>(&ImageTexture::get_format)>("get_format")
			.fun<static_cast<void (ImageTexture::*)(const Ref<Image> &)>(&ImageTexture::set_image)>("set_image")
			.fun<static_cast<void (ImageTexture::*)(const Ref<Image> &)>(&ImageTexture::update)>("update")
			.fun<static_cast<void (ImageTexture::*)(const Vector2i &)>(&ImageTexture::set_size_override)>("set_size_override");
}