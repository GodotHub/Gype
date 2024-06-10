#include <godot_cpp/classes/style_box_flat.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_StyleBoxFlat() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<StyleBoxFlat>("StyleBoxFlat")
			.constructor<>()
			.property<&StyleBoxFlat::get_bg_color, &StyleBoxFlat::set_bg_color>("bg_color")
			.property<&StyleBoxFlat::is_draw_center_enabled, &StyleBoxFlat::set_draw_center>("draw_center")
			.property<&StyleBoxFlat::get_skew, &StyleBoxFlat::set_skew>("skew")
			.property<&StyleBoxFlat::get_border_width, &StyleBoxFlat::set_border_width>("border_width_left")
			.property<&StyleBoxFlat::get_border_width, &StyleBoxFlat::set_border_width>("border_width_top")
			.property<&StyleBoxFlat::get_border_width, &StyleBoxFlat::set_border_width>("border_width_right")
			.property<&StyleBoxFlat::get_border_width, &StyleBoxFlat::set_border_width>("border_width_bottom")
			.property<&StyleBoxFlat::get_border_color, &StyleBoxFlat::set_border_color>("border_color")
			.property<&StyleBoxFlat::get_border_blend, &StyleBoxFlat::set_border_blend>("border_blend")
			.property<&StyleBoxFlat::get_corner_radius, &StyleBoxFlat::set_corner_radius>("corner_radius_top_left")
			.property<&StyleBoxFlat::get_corner_radius, &StyleBoxFlat::set_corner_radius>("corner_radius_top_right")
			.property<&StyleBoxFlat::get_corner_radius, &StyleBoxFlat::set_corner_radius>("corner_radius_bottom_right")
			.property<&StyleBoxFlat::get_corner_radius, &StyleBoxFlat::set_corner_radius>("corner_radius_bottom_left")
			.property<&StyleBoxFlat::get_corner_detail, &StyleBoxFlat::set_corner_detail>("corner_detail")
			.property<&StyleBoxFlat::get_expand_margin, &StyleBoxFlat::set_expand_margin>("expand_margin_left")
			.property<&StyleBoxFlat::get_expand_margin, &StyleBoxFlat::set_expand_margin>("expand_margin_top")
			.property<&StyleBoxFlat::get_expand_margin, &StyleBoxFlat::set_expand_margin>("expand_margin_right")
			.property<&StyleBoxFlat::get_expand_margin, &StyleBoxFlat::set_expand_margin>("expand_margin_bottom")
			.property<&StyleBoxFlat::get_shadow_color, &StyleBoxFlat::set_shadow_color>("shadow_color")
			.property<&StyleBoxFlat::get_shadow_size, &StyleBoxFlat::set_shadow_size>("shadow_size")
			.property<&StyleBoxFlat::get_shadow_offset, &StyleBoxFlat::set_shadow_offset>("shadow_offset")
			.property<&StyleBoxFlat::is_anti_aliased, &StyleBoxFlat::set_anti_aliased>("anti_aliasing")
			.property<&StyleBoxFlat::get_aa_size, &StyleBoxFlat::set_aa_size>("anti_aliasing_size")
			.fun<static_cast<void (StyleBoxFlat::*)(int32_t)>(&StyleBoxFlat::set_border_width_all)>("set_border_width_all")
			.fun<static_cast<int32_t (StyleBoxFlat::*)() const>(&StyleBoxFlat::get_border_width_min)>("get_border_width_min")
			.fun<static_cast<void (StyleBoxFlat::*)(int32_t)>(&StyleBoxFlat::set_corner_radius_all)>("set_corner_radius_all")
			.fun<static_cast<void (StyleBoxFlat::*)(double)>(&StyleBoxFlat::set_expand_margin_all)>("set_expand_margin_all");
}