
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/style_box.hpp>
#include <godot_cpp/classes/style_box_flat.hpp>
#include <godot_cpp/variant/color.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_StyleBoxFlat() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<StyleBoxFlat>("StyleBoxFlat")
			.constructor<>()
			.base<StyleBox>()
			.property<static_cast<Color (StyleBoxFlat::*)() const>(&StyleBoxFlat::get_bg_color), static_cast<void (StyleBoxFlat::*)(const Color &)>(&StyleBoxFlat::set_bg_color)>((new std::string("bg_color"))->c_str())
			.property<static_cast<bool (StyleBoxFlat::*)() const>(&StyleBoxFlat::is_draw_center_enabled), static_cast<void (StyleBoxFlat::*)(bool)>(&StyleBoxFlat::set_draw_center)>((new std::string("draw_center"))->c_str())
			.property<static_cast<Vector2 (StyleBoxFlat::*)() const>(&StyleBoxFlat::get_skew), static_cast<void (StyleBoxFlat::*)(const Vector2 &)>(&StyleBoxFlat::set_skew)>((new std::string("skew"))->c_str())
			.property<static_cast<int32_t (StyleBoxFlat::*)(Side) const>(&StyleBoxFlat::get_border_width), static_cast<void (StyleBoxFlat::*)(Side, int32_t)>(&StyleBoxFlat::set_border_width)>((new std::string("border_width_left"))->c_str())
			.property<static_cast<int32_t (StyleBoxFlat::*)(Side) const>(&StyleBoxFlat::get_border_width), static_cast<void (StyleBoxFlat::*)(Side, int32_t)>(&StyleBoxFlat::set_border_width)>((new std::string("border_width_top"))->c_str())
			.property<static_cast<int32_t (StyleBoxFlat::*)(Side) const>(&StyleBoxFlat::get_border_width), static_cast<void (StyleBoxFlat::*)(Side, int32_t)>(&StyleBoxFlat::set_border_width)>((new std::string("border_width_right"))->c_str())
			.property<static_cast<int32_t (StyleBoxFlat::*)(Side) const>(&StyleBoxFlat::get_border_width), static_cast<void (StyleBoxFlat::*)(Side, int32_t)>(&StyleBoxFlat::set_border_width)>((new std::string("border_width_bottom"))->c_str())
			.property<static_cast<Color (StyleBoxFlat::*)() const>(&StyleBoxFlat::get_border_color), static_cast<void (StyleBoxFlat::*)(const Color &)>(&StyleBoxFlat::set_border_color)>((new std::string("border_color"))->c_str())
			.property<static_cast<bool (StyleBoxFlat::*)() const>(&StyleBoxFlat::get_border_blend), static_cast<void (StyleBoxFlat::*)(bool)>(&StyleBoxFlat::set_border_blend)>((new std::string("border_blend"))->c_str())
			.property<static_cast<int32_t (StyleBoxFlat::*)(Corner) const>(&StyleBoxFlat::get_corner_radius), static_cast<void (StyleBoxFlat::*)(Corner, int32_t)>(&StyleBoxFlat::set_corner_radius)>((new std::string("corner_radius_top_left"))->c_str())
			.property<static_cast<int32_t (StyleBoxFlat::*)(Corner) const>(&StyleBoxFlat::get_corner_radius), static_cast<void (StyleBoxFlat::*)(Corner, int32_t)>(&StyleBoxFlat::set_corner_radius)>((new std::string("corner_radius_top_right"))->c_str())
			.property<static_cast<int32_t (StyleBoxFlat::*)(Corner) const>(&StyleBoxFlat::get_corner_radius), static_cast<void (StyleBoxFlat::*)(Corner, int32_t)>(&StyleBoxFlat::set_corner_radius)>((new std::string("corner_radius_bottom_right"))->c_str())
			.property<static_cast<int32_t (StyleBoxFlat::*)(Corner) const>(&StyleBoxFlat::get_corner_radius), static_cast<void (StyleBoxFlat::*)(Corner, int32_t)>(&StyleBoxFlat::set_corner_radius)>((new std::string("corner_radius_bottom_left"))->c_str())
			.property<static_cast<int32_t (StyleBoxFlat::*)() const>(&StyleBoxFlat::get_corner_detail), static_cast<void (StyleBoxFlat::*)(int32_t)>(&StyleBoxFlat::set_corner_detail)>((new std::string("corner_detail"))->c_str())
			.property<static_cast<double (StyleBoxFlat::*)(Side) const>(&StyleBoxFlat::get_expand_margin), static_cast<void (StyleBoxFlat::*)(Side, double)>(&StyleBoxFlat::set_expand_margin)>((new std::string("expand_margin_left"))->c_str())
			.property<static_cast<double (StyleBoxFlat::*)(Side) const>(&StyleBoxFlat::get_expand_margin), static_cast<void (StyleBoxFlat::*)(Side, double)>(&StyleBoxFlat::set_expand_margin)>((new std::string("expand_margin_top"))->c_str())
			.property<static_cast<double (StyleBoxFlat::*)(Side) const>(&StyleBoxFlat::get_expand_margin), static_cast<void (StyleBoxFlat::*)(Side, double)>(&StyleBoxFlat::set_expand_margin)>((new std::string("expand_margin_right"))->c_str())
			.property<static_cast<double (StyleBoxFlat::*)(Side) const>(&StyleBoxFlat::get_expand_margin), static_cast<void (StyleBoxFlat::*)(Side, double)>(&StyleBoxFlat::set_expand_margin)>((new std::string("expand_margin_bottom"))->c_str())
			.property<static_cast<Color (StyleBoxFlat::*)() const>(&StyleBoxFlat::get_shadow_color), static_cast<void (StyleBoxFlat::*)(const Color &)>(&StyleBoxFlat::set_shadow_color)>((new std::string("shadow_color"))->c_str())
			.property<static_cast<int32_t (StyleBoxFlat::*)() const>(&StyleBoxFlat::get_shadow_size), static_cast<void (StyleBoxFlat::*)(int32_t)>(&StyleBoxFlat::set_shadow_size)>((new std::string("shadow_size"))->c_str())
			.property<static_cast<Vector2 (StyleBoxFlat::*)() const>(&StyleBoxFlat::get_shadow_offset), static_cast<void (StyleBoxFlat::*)(const Vector2 &)>(&StyleBoxFlat::set_shadow_offset)>((new std::string("shadow_offset"))->c_str())
			.property<static_cast<bool (StyleBoxFlat::*)() const>(&StyleBoxFlat::is_anti_aliased), static_cast<void (StyleBoxFlat::*)(bool)>(&StyleBoxFlat::set_anti_aliased)>((new std::string("anti_aliasing"))->c_str())
			.property<static_cast<double (StyleBoxFlat::*)() const>(&StyleBoxFlat::get_aa_size), static_cast<void (StyleBoxFlat::*)(double)>(&StyleBoxFlat::set_aa_size)>((new std::string("anti_aliasing_size"))->c_str())
			.fun<static_cast<void (StyleBoxFlat::*)(int32_t)>(&StyleBoxFlat::set_border_width_all)>((new std::string("set_border_width_all"))->c_str())
			.fun<static_cast<int32_t (StyleBoxFlat::*)() const>(&StyleBoxFlat::get_border_width_min)>((new std::string("get_border_width_min"))->c_str())
			.fun<static_cast<void (StyleBoxFlat::*)(int32_t)>(&StyleBoxFlat::set_corner_radius_all)>((new std::string("set_corner_radius_all"))->c_str())
			.fun<static_cast<void (StyleBoxFlat::*)(double)>(&StyleBoxFlat::set_expand_margin_all)>((new std::string("set_expand_margin_all"))->c_str());
}