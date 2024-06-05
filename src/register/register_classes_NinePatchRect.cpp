#include <godot_cpp/classes/nine_patch_rect.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"


using namespace godot;

void register_classes_NinePatchRect() {
	qjs::Context::Module &_module = _Control;
	_module.class_<NinePatchRect>("NinePatchRect")
			.constructor<>()
			.property<&NinePatchRect::get_texture, &NinePatchRect::set_texture>("texture")
			.property<&NinePatchRect::is_draw_center_enabled, &NinePatchRect::set_draw_center>("draw_center")
			.property<&NinePatchRect::get_region_rect, &NinePatchRect::set_region_rect>("region_rect")
			.property<&NinePatchRect::get_patch_margin, &NinePatchRect::set_patch_margin>("patch_margin_left")
			.property<&NinePatchRect::get_patch_margin, &NinePatchRect::set_patch_margin>("patch_margin_top")
			.property<&NinePatchRect::get_patch_margin, &NinePatchRect::set_patch_margin>("patch_margin_right")
			.property<&NinePatchRect::get_patch_margin, &NinePatchRect::set_patch_margin>("patch_margin_bottom")
			.property<&NinePatchRect::get_h_axis_stretch_mode, &NinePatchRect::set_h_axis_stretch_mode>("axis_stretch_horizontal")
			.property<&NinePatchRect::get_v_axis_stretch_mode, &NinePatchRect::set_v_axis_stretch_mode>("axis_stretch_vertical");
}