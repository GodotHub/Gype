#include <godot_cpp/classes/control.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/classes/texture_rect.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_TextureRect() {
	qjs::Context::Module &_module = get_Control_module();
	_module.class_<TextureRect>("TextureRect")
			.constructor<>()
			.base<Control>()
			.property<static_cast<Ref<Texture2D> (TextureRect::*)() const>(&TextureRect::get_texture), static_cast<void (TextureRect::*)(const Ref<Texture2D> &)>(&TextureRect::set_texture)>((new std::string("texture"))->c_str())
			.property<static_cast<TextureRect::ExpandMode (TextureRect::*)() const>(&TextureRect::get_expand_mode), static_cast<void (TextureRect::*)(TextureRect::ExpandMode)>(&TextureRect::set_expand_mode)>((new std::string("expand_mode"))->c_str())
			.property<static_cast<TextureRect::StretchMode (TextureRect::*)() const>(&TextureRect::get_stretch_mode), static_cast<void (TextureRect::*)(TextureRect::StretchMode)>(&TextureRect::set_stretch_mode)>((new std::string("stretch_mode"))->c_str())
			.property<static_cast<bool (TextureRect::*)() const>(&TextureRect::is_flipped_h), static_cast<void (TextureRect::*)(bool)>(&TextureRect::set_flip_h)>((new std::string("flip_h"))->c_str())
			.property<static_cast<bool (TextureRect::*)() const>(&TextureRect::is_flipped_v), static_cast<void (TextureRect::*)(bool)>(&TextureRect::set_flip_v)>((new std::string("flip_v"))->c_str());
	qjs::Value _ExpandMode = context->newObject();
	_ExpandMode[(new std::string("EXPAND_KEEP_SIZE"))->c_str()] = TextureRect::ExpandMode::EXPAND_KEEP_SIZE;
	_ExpandMode[(new std::string("EXPAND_IGNORE_SIZE"))->c_str()] = TextureRect::ExpandMode::EXPAND_IGNORE_SIZE;
	_ExpandMode[(new std::string("EXPAND_FIT_WIDTH"))->c_str()] = TextureRect::ExpandMode::EXPAND_FIT_WIDTH;
	_ExpandMode[(new std::string("EXPAND_FIT_WIDTH_PROPORTIONAL"))->c_str()] = TextureRect::ExpandMode::EXPAND_FIT_WIDTH_PROPORTIONAL;
	_ExpandMode[(new std::string("EXPAND_FIT_HEIGHT"))->c_str()] = TextureRect::ExpandMode::EXPAND_FIT_HEIGHT;
	_ExpandMode[(new std::string("EXPAND_FIT_HEIGHT_PROPORTIONAL"))->c_str()] = TextureRect::ExpandMode::EXPAND_FIT_HEIGHT_PROPORTIONAL;
	_module.add("ExpandMode", std::move(_ExpandMode));
	qjs::Value _StretchMode = context->newObject();
	_StretchMode[(new std::string("STRETCH_SCALE"))->c_str()] = TextureRect::StretchMode::STRETCH_SCALE;
	_StretchMode[(new std::string("STRETCH_TILE"))->c_str()] = TextureRect::StretchMode::STRETCH_TILE;
	_StretchMode[(new std::string("STRETCH_KEEP"))->c_str()] = TextureRect::StretchMode::STRETCH_KEEP;
	_StretchMode[(new std::string("STRETCH_KEEP_CENTERED"))->c_str()] = TextureRect::StretchMode::STRETCH_KEEP_CENTERED;
	_StretchMode[(new std::string("STRETCH_KEEP_ASPECT"))->c_str()] = TextureRect::StretchMode::STRETCH_KEEP_ASPECT;
	_StretchMode[(new std::string("STRETCH_KEEP_ASPECT_CENTERED"))->c_str()] = TextureRect::StretchMode::STRETCH_KEEP_ASPECT_CENTERED;
	_StretchMode[(new std::string("STRETCH_KEEP_ASPECT_COVERED"))->c_str()] = TextureRect::StretchMode::STRETCH_KEEP_ASPECT_COVERED;
	_module.add("StretchMode", std::move(_StretchMode));
}