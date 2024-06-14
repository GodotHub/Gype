
#include <godot_cpp/classes/char_fx_transform.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/variant/color.hpp>
#include <godot_cpp/variant/dictionary.hpp>
#include <godot_cpp/variant/rid.hpp>
#include <godot_cpp/variant/transform2d.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <godot_cpp/variant/vector2i.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_CharFXTransform() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<CharFXTransform>("CharFXTransform")
			.constructor<>()
			.base<RefCounted>()
			.property<static_cast<Transform2D (CharFXTransform::*)()>(&CharFXTransform::get_transform), static_cast<void (CharFXTransform::*)(const Transform2D &)>(&CharFXTransform::set_transform)>((new std::string("transform"))->c_str())
			.property<static_cast<Vector2i (CharFXTransform::*)()>(&CharFXTransform::get_range), static_cast<void (CharFXTransform::*)(const Vector2i &)>(&CharFXTransform::set_range)>((new std::string("range"))->c_str())
			.property<static_cast<double (CharFXTransform::*)()>(&CharFXTransform::get_elapsed_time), static_cast<void (CharFXTransform::*)(double)>(&CharFXTransform::set_elapsed_time)>((new std::string("elapsed_time"))->c_str())
			.property<static_cast<bool (CharFXTransform::*)()>(&CharFXTransform::is_visible), static_cast<void (CharFXTransform::*)(bool)>(&CharFXTransform::set_visibility)>((new std::string("visible"))->c_str())
			.property<static_cast<bool (CharFXTransform::*)()>(&CharFXTransform::is_outline), static_cast<void (CharFXTransform::*)(bool)>(&CharFXTransform::set_outline)>((new std::string("outline"))->c_str())
			.property<static_cast<Vector2 (CharFXTransform::*)()>(&CharFXTransform::get_offset), static_cast<void (CharFXTransform::*)(const Vector2 &)>(&CharFXTransform::set_offset)>((new std::string("offset"))->c_str())
			.property<static_cast<Color (CharFXTransform::*)()>(&CharFXTransform::get_color), static_cast<void (CharFXTransform::*)(const Color &)>(&CharFXTransform::set_color)>((new std::string("color"))->c_str())
			.property<static_cast<Dictionary (CharFXTransform::*)()>(&CharFXTransform::get_environment), static_cast<void (CharFXTransform::*)(const Dictionary &)>(&CharFXTransform::set_environment)>((new std::string("env"))->c_str())
			.property<static_cast<uint32_t (CharFXTransform::*)() const>(&CharFXTransform::get_glyph_index), static_cast<void (CharFXTransform::*)(uint32_t)>(&CharFXTransform::set_glyph_index)>((new std::string("glyph_index"))->c_str())
			.property<static_cast<uint8_t (CharFXTransform::*)() const>(&CharFXTransform::get_glyph_count), static_cast<void (CharFXTransform::*)(uint8_t)>(&CharFXTransform::set_glyph_count)>((new std::string("glyph_count"))->c_str())
			.property<static_cast<uint16_t (CharFXTransform::*)() const>(&CharFXTransform::get_glyph_flags), static_cast<void (CharFXTransform::*)(uint16_t)>(&CharFXTransform::set_glyph_flags)>((new std::string("glyph_flags"))->c_str())
			.property<static_cast<int32_t (CharFXTransform::*)() const>(&CharFXTransform::get_relative_index), static_cast<void (CharFXTransform::*)(int32_t)>(&CharFXTransform::set_relative_index)>((new std::string("relative_index"))->c_str())
			.property<static_cast<RID (CharFXTransform::*)() const>(&CharFXTransform::get_font), static_cast<void (CharFXTransform::*)(const RID &)>(&CharFXTransform::set_font)>((new std::string("font"))->c_str());
}