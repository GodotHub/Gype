#include <godot_cpp/classes/base_button.hpp>
#include <godot_cpp/classes/bit_map.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/classes/texture_button.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_TextureButton() {
	qjs::Context::Module &_module = get_Control_module();
	_module.class_<TextureButton>("TextureButton")
			.constructor<>()
			.base<BaseButton>()
			.property<static_cast<Ref<Texture2D> (TextureButton::*)() const>(&TextureButton::get_texture_normal), static_cast<void (TextureButton::*)(const Ref<Texture2D> &)>(&TextureButton::set_texture_normal)>((new std::string("texture_normal"))->c_str())
			.property<static_cast<Ref<Texture2D> (TextureButton::*)() const>(&TextureButton::get_texture_pressed), static_cast<void (TextureButton::*)(const Ref<Texture2D> &)>(&TextureButton::set_texture_pressed)>((new std::string("texture_pressed"))->c_str())
			.property<static_cast<Ref<Texture2D> (TextureButton::*)() const>(&TextureButton::get_texture_hover), static_cast<void (TextureButton::*)(const Ref<Texture2D> &)>(&TextureButton::set_texture_hover)>((new std::string("texture_hover"))->c_str())
			.property<static_cast<Ref<Texture2D> (TextureButton::*)() const>(&TextureButton::get_texture_disabled), static_cast<void (TextureButton::*)(const Ref<Texture2D> &)>(&TextureButton::set_texture_disabled)>((new std::string("texture_disabled"))->c_str())
			.property<static_cast<Ref<Texture2D> (TextureButton::*)() const>(&TextureButton::get_texture_focused), static_cast<void (TextureButton::*)(const Ref<Texture2D> &)>(&TextureButton::set_texture_focused)>((new std::string("texture_focused"))->c_str())
			.property<static_cast<Ref<BitMap> (TextureButton::*)() const>(&TextureButton::get_click_mask), static_cast<void (TextureButton::*)(const Ref<BitMap> &)>(&TextureButton::set_click_mask)>((new std::string("texture_click_mask"))->c_str())
			.property<static_cast<bool (TextureButton::*)() const>(&TextureButton::get_ignore_texture_size), static_cast<void (TextureButton::*)(bool)>(&TextureButton::set_ignore_texture_size)>((new std::string("ignore_texture_size"))->c_str())
			.property<static_cast<TextureButton::StretchMode (TextureButton::*)() const>(&TextureButton::get_stretch_mode), static_cast<void (TextureButton::*)(TextureButton::StretchMode)>(&TextureButton::set_stretch_mode)>((new std::string("stretch_mode"))->c_str())
			.property<static_cast<bool (TextureButton::*)() const>(&TextureButton::is_flipped_h), static_cast<void (TextureButton::*)(bool)>(&TextureButton::set_flip_h)>((new std::string("flip_h"))->c_str())
			.property<static_cast<bool (TextureButton::*)() const>(&TextureButton::is_flipped_v), static_cast<void (TextureButton::*)(bool)>(&TextureButton::set_flip_v)>((new std::string("flip_v"))->c_str());
	qjs::Value _StretchMode = context->newObject();
	_StretchMode[(new std::string("STRETCH_SCALE"))->c_str()] = TextureButton::StretchMode::STRETCH_SCALE;
	_StretchMode[(new std::string("STRETCH_TILE"))->c_str()] = TextureButton::StretchMode::STRETCH_TILE;
	_StretchMode[(new std::string("STRETCH_KEEP"))->c_str()] = TextureButton::StretchMode::STRETCH_KEEP;
	_StretchMode[(new std::string("STRETCH_KEEP_CENTERED"))->c_str()] = TextureButton::StretchMode::STRETCH_KEEP_CENTERED;
	_StretchMode[(new std::string("STRETCH_KEEP_ASPECT"))->c_str()] = TextureButton::StretchMode::STRETCH_KEEP_ASPECT;
	_StretchMode[(new std::string("STRETCH_KEEP_ASPECT_CENTERED"))->c_str()] = TextureButton::StretchMode::STRETCH_KEEP_ASPECT_CENTERED;
	_StretchMode[(new std::string("STRETCH_KEEP_ASPECT_COVERED"))->c_str()] = TextureButton::StretchMode::STRETCH_KEEP_ASPECT_COVERED;
	_module.add("StretchMode", std::move(_StretchMode));
}