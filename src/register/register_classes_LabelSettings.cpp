
#include <godot_cpp/classes/font.hpp>
#include <godot_cpp/classes/label_settings.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/variant/color.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_LabelSettings() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<LabelSettings>("LabelSettings")
			.constructor<>()
			.base<Resource>()
			.property<static_cast<double (LabelSettings::*)() const>(&LabelSettings::get_line_spacing), static_cast<void (LabelSettings::*)(double)>(&LabelSettings::set_line_spacing)>((new std::string("line_spacing"))->c_str())
			.property<static_cast<Ref<Font> (LabelSettings::*)() const>(&LabelSettings::get_font), static_cast<void (LabelSettings::*)(const Ref<Font> &)>(&LabelSettings::set_font)>((new std::string("font"))->c_str())
			.property<static_cast<int32_t (LabelSettings::*)() const>(&LabelSettings::get_font_size), static_cast<void (LabelSettings::*)(int32_t)>(&LabelSettings::set_font_size)>((new std::string("font_size"))->c_str())
			.property<static_cast<Color (LabelSettings::*)() const>(&LabelSettings::get_font_color), static_cast<void (LabelSettings::*)(const Color &)>(&LabelSettings::set_font_color)>((new std::string("font_color"))->c_str())
			.property<static_cast<int32_t (LabelSettings::*)() const>(&LabelSettings::get_outline_size), static_cast<void (LabelSettings::*)(int32_t)>(&LabelSettings::set_outline_size)>((new std::string("outline_size"))->c_str())
			.property<static_cast<Color (LabelSettings::*)() const>(&LabelSettings::get_outline_color), static_cast<void (LabelSettings::*)(const Color &)>(&LabelSettings::set_outline_color)>((new std::string("outline_color"))->c_str())
			.property<static_cast<int32_t (LabelSettings::*)() const>(&LabelSettings::get_shadow_size), static_cast<void (LabelSettings::*)(int32_t)>(&LabelSettings::set_shadow_size)>((new std::string("shadow_size"))->c_str())
			.property<static_cast<Color (LabelSettings::*)() const>(&LabelSettings::get_shadow_color), static_cast<void (LabelSettings::*)(const Color &)>(&LabelSettings::set_shadow_color)>((new std::string("shadow_color"))->c_str())
			.property<static_cast<Vector2 (LabelSettings::*)() const>(&LabelSettings::get_shadow_offset), static_cast<void (LabelSettings::*)(const Vector2 &)>(&LabelSettings::set_shadow_offset)>((new std::string("shadow_offset"))->c_str());
}