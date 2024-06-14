#include <godot_cpp/classes/image.hpp>
#include <godot_cpp/classes/image_texture.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/variant/vector2i.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_ImageTexture() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<ImageTexture>("ImageTexture")
			.constructor<>()
			.base<Texture2D>()
			.static_fun<static_cast<Ref<ImageTexture> (*)(const Ref<Image> &)>(&ImageTexture::create_from_image)>((new std::string("create_from_image"))->c_str())
			.fun<static_cast<Image::Format (ImageTexture::*)() const>(&ImageTexture::get_format)>((new std::string("get_format"))->c_str())
			.fun<static_cast<void (ImageTexture::*)(const Ref<Image> &)>(&ImageTexture::set_image)>((new std::string("set_image"))->c_str())
			.fun<static_cast<void (ImageTexture::*)(const Ref<Image> &)>(&ImageTexture::update)>((new std::string("update"))->c_str())
			.fun<static_cast<void (ImageTexture::*)(const Vector2i &)>(&ImageTexture::set_size_override)>((new std::string("set_size_override"))->c_str());
}