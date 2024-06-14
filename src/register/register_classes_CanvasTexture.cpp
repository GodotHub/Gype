#include <godot_cpp/classes/canvas_item.hpp>
#include <godot_cpp/classes/canvas_texture.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/variant/color.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_CanvasTexture() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<CanvasTexture>("CanvasTexture")
			.constructor<>()
			.base<Texture2D>()
			.property<static_cast<Ref<Texture2D> (CanvasTexture::*)() const>(&CanvasTexture::get_diffuse_texture), static_cast<void (CanvasTexture::*)(const Ref<Texture2D> &)>(&CanvasTexture::set_diffuse_texture)>((new std::string("diffuse_texture"))->c_str())
			.property<static_cast<Ref<Texture2D> (CanvasTexture::*)() const>(&CanvasTexture::get_normal_texture), static_cast<void (CanvasTexture::*)(const Ref<Texture2D> &)>(&CanvasTexture::set_normal_texture)>((new std::string("normal_texture"))->c_str())
			.property<static_cast<Ref<Texture2D> (CanvasTexture::*)() const>(&CanvasTexture::get_specular_texture), static_cast<void (CanvasTexture::*)(const Ref<Texture2D> &)>(&CanvasTexture::set_specular_texture)>((new std::string("specular_texture"))->c_str())
			.property<static_cast<Color (CanvasTexture::*)() const>(&CanvasTexture::get_specular_color), static_cast<void (CanvasTexture::*)(const Color &)>(&CanvasTexture::set_specular_color)>((new std::string("specular_color"))->c_str())
			.property<static_cast<double (CanvasTexture::*)() const>(&CanvasTexture::get_specular_shininess), static_cast<void (CanvasTexture::*)(double)>(&CanvasTexture::set_specular_shininess)>((new std::string("specular_shininess"))->c_str())
			.property<static_cast<CanvasItem::TextureFilter (CanvasTexture::*)() const>(&CanvasTexture::get_texture_filter), static_cast<void (CanvasTexture::*)(CanvasItem::TextureFilter)>(&CanvasTexture::set_texture_filter)>((new std::string("texture_filter"))->c_str())
			.property<static_cast<CanvasItem::TextureRepeat (CanvasTexture::*)() const>(&CanvasTexture::get_texture_repeat), static_cast<void (CanvasTexture::*)(CanvasItem::TextureRepeat)>(&CanvasTexture::set_texture_repeat)>((new std::string("texture_repeat"))->c_str());
}