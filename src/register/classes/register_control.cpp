
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/font.hpp>
#include <godot_cpp/classes/theme.hpp>
#include <godot_cpp/classes/input_event.hpp>
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/canvas_item.hpp>
#include <godot_cpp/classes/control.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/classes/style_box.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void control_class_finalizer(JSRuntime *rt, JSValue val) {
	Control *control = static_cast<Control *>(JS_GetOpaque(val, Control::__class_id));
	if (control)
		Control::free(nullptr, control);
}

static JSClassDef control_class_def = {
	"Control",
	.finalizer = control_class_finalizer
};

static JSValue control_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	Control *control_class;
	JSValue obj = JS_NewObjectClass(ctx, Control::__class_id);
	if (JS_IsException(obj))
		return obj;
	control_class = memnew(Control);
	if (!control_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, control_class);
	return obj;
}
static JSValue control_class_accept_event(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Control::accept_event, Control::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue control_class_get_minimum_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Control::get_minimum_size, Control::__class_id, ctx, this_val, argv);
};
static JSValue control_class_get_combined_minimum_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Control::get_combined_minimum_size, Control::__class_id, ctx, this_val, argv);
};
static JSValue control_class_set_anchors_preset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Control::set_anchors_preset, Control::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue control_class_set_offsets_preset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Control::set_offsets_preset, Control::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue control_class_set_anchors_and_offsets_preset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Control::set_anchors_and_offsets_preset, Control::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue control_class_set_anchor(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Control::set_anchor, Control::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue control_class_get_anchor(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Control::get_anchor, Control::__class_id, ctx, this_val, argv);
};
static JSValue control_class_set_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Control::set_offset, Control::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue control_class_get_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Control::get_offset, Control::__class_id, ctx, this_val, argv);
};
static JSValue control_class_set_anchor_and_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Control::set_anchor_and_offset, Control::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue control_class_set_begin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Control::set_begin, Control::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue control_class_set_end(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Control::set_end, Control::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue control_class_set_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Control::set_position, Control::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue control_class_set_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Control::set_size, Control::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue control_class_reset_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Control::reset_size, Control::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue control_class_set_custom_minimum_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Control::set_custom_minimum_size, Control::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue control_class_set_global_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Control::set_global_position, Control::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue control_class_set_rotation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Control::set_rotation, Control::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue control_class_set_rotation_degrees(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Control::set_rotation_degrees, Control::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue control_class_set_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Control::set_scale, Control::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue control_class_set_pivot_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Control::set_pivot_offset, Control::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue control_class_get_begin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Control::get_begin, Control::__class_id, ctx, this_val, argv);
};
static JSValue control_class_get_end(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Control::get_end, Control::__class_id, ctx, this_val, argv);
};
static JSValue control_class_get_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Control::get_position, Control::__class_id, ctx, this_val, argv);
};
static JSValue control_class_get_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Control::get_size, Control::__class_id, ctx, this_val, argv);
};
static JSValue control_class_get_rotation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Control::get_rotation, Control::__class_id, ctx, this_val, argv);
};
static JSValue control_class_get_rotation_degrees(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Control::get_rotation_degrees, Control::__class_id, ctx, this_val, argv);
};
static JSValue control_class_get_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Control::get_scale, Control::__class_id, ctx, this_val, argv);
};
static JSValue control_class_get_pivot_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Control::get_pivot_offset, Control::__class_id, ctx, this_val, argv);
};
static JSValue control_class_get_custom_minimum_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Control::get_custom_minimum_size, Control::__class_id, ctx, this_val, argv);
};
static JSValue control_class_get_parent_area_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Control::get_parent_area_size, Control::__class_id, ctx, this_val, argv);
};
static JSValue control_class_get_global_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Control::get_global_position, Control::__class_id, ctx, this_val, argv);
};
static JSValue control_class_get_screen_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Control::get_screen_position, Control::__class_id, ctx, this_val, argv);
};
static JSValue control_class_get_rect(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Control::get_rect, Control::__class_id, ctx, this_val, argv);
};
static JSValue control_class_get_global_rect(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Control::get_global_rect, Control::__class_id, ctx, this_val, argv);
};
static JSValue control_class_set_focus_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Control::set_focus_mode, Control::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue control_class_get_focus_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Control::get_focus_mode, Control::__class_id, ctx, this_val, argv);
};
static JSValue control_class_has_focus(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Control::has_focus, Control::__class_id, ctx, this_val, argv);
};
static JSValue control_class_grab_focus(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Control::grab_focus, Control::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue control_class_release_focus(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Control::release_focus, Control::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue control_class_find_prev_valid_focus(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Control::find_prev_valid_focus, Control::__class_id, ctx, this_val, argv);
};
static JSValue control_class_find_next_valid_focus(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Control::find_next_valid_focus, Control::__class_id, ctx, this_val, argv);
};
static JSValue control_class_find_valid_focus_neighbor(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Control::find_valid_focus_neighbor, Control::__class_id, ctx, this_val, argv);
};
static JSValue control_class_set_h_size_flags(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Control::set_h_size_flags, Control::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue control_class_get_h_size_flags(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Control::get_h_size_flags, Control::__class_id, ctx, this_val, argv);
};
static JSValue control_class_set_stretch_ratio(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Control::set_stretch_ratio, Control::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue control_class_get_stretch_ratio(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Control::get_stretch_ratio, Control::__class_id, ctx, this_val, argv);
};
static JSValue control_class_set_v_size_flags(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Control::set_v_size_flags, Control::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue control_class_get_v_size_flags(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Control::get_v_size_flags, Control::__class_id, ctx, this_val, argv);
};
static JSValue control_class_set_theme(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Control::set_theme, Control::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue control_class_get_theme(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Control::get_theme, Control::__class_id, ctx, this_val, argv);
};
static JSValue control_class_set_theme_type_variation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Control::set_theme_type_variation, Control::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue control_class_get_theme_type_variation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Control::get_theme_type_variation, Control::__class_id, ctx, this_val, argv);
};
static JSValue control_class_begin_bulk_theme_override(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Control::begin_bulk_theme_override, Control::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue control_class_end_bulk_theme_override(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Control::end_bulk_theme_override, Control::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue control_class_add_theme_icon_override(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Control::add_theme_icon_override, Control::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue control_class_add_theme_stylebox_override(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Control::add_theme_stylebox_override, Control::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue control_class_add_theme_font_override(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Control::add_theme_font_override, Control::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue control_class_add_theme_font_size_override(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Control::add_theme_font_size_override, Control::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue control_class_add_theme_color_override(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Control::add_theme_color_override, Control::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue control_class_add_theme_constant_override(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Control::add_theme_constant_override, Control::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue control_class_remove_theme_icon_override(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Control::remove_theme_icon_override, Control::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue control_class_remove_theme_stylebox_override(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Control::remove_theme_stylebox_override, Control::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue control_class_remove_theme_font_override(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Control::remove_theme_font_override, Control::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue control_class_remove_theme_font_size_override(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Control::remove_theme_font_size_override, Control::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue control_class_remove_theme_color_override(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Control::remove_theme_color_override, Control::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue control_class_remove_theme_constant_override(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Control::remove_theme_constant_override, Control::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue control_class_get_theme_icon(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Control::get_theme_icon, Control::__class_id, ctx, this_val, argv);
};
static JSValue control_class_get_theme_stylebox(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Control::get_theme_stylebox, Control::__class_id, ctx, this_val, argv);
};
static JSValue control_class_get_theme_font(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Control::get_theme_font, Control::__class_id, ctx, this_val, argv);
};
static JSValue control_class_get_theme_font_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Control::get_theme_font_size, Control::__class_id, ctx, this_val, argv);
};
static JSValue control_class_get_theme_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Control::get_theme_color, Control::__class_id, ctx, this_val, argv);
};
static JSValue control_class_get_theme_constant(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Control::get_theme_constant, Control::__class_id, ctx, this_val, argv);
};
static JSValue control_class_has_theme_icon_override(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Control::has_theme_icon_override, Control::__class_id, ctx, this_val, argv);
};
static JSValue control_class_has_theme_stylebox_override(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Control::has_theme_stylebox_override, Control::__class_id, ctx, this_val, argv);
};
static JSValue control_class_has_theme_font_override(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Control::has_theme_font_override, Control::__class_id, ctx, this_val, argv);
};
static JSValue control_class_has_theme_font_size_override(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Control::has_theme_font_size_override, Control::__class_id, ctx, this_val, argv);
};
static JSValue control_class_has_theme_color_override(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Control::has_theme_color_override, Control::__class_id, ctx, this_val, argv);
};
static JSValue control_class_has_theme_constant_override(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Control::has_theme_constant_override, Control::__class_id, ctx, this_val, argv);
};
static JSValue control_class_has_theme_icon(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Control::has_theme_icon, Control::__class_id, ctx, this_val, argv);
};
static JSValue control_class_has_theme_stylebox(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Control::has_theme_stylebox, Control::__class_id, ctx, this_val, argv);
};
static JSValue control_class_has_theme_font(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Control::has_theme_font, Control::__class_id, ctx, this_val, argv);
};
static JSValue control_class_has_theme_font_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Control::has_theme_font_size, Control::__class_id, ctx, this_val, argv);
};
static JSValue control_class_has_theme_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Control::has_theme_color, Control::__class_id, ctx, this_val, argv);
};
static JSValue control_class_has_theme_constant(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Control::has_theme_constant, Control::__class_id, ctx, this_val, argv);
};
static JSValue control_class_get_theme_default_base_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Control::get_theme_default_base_scale, Control::__class_id, ctx, this_val, argv);
};
static JSValue control_class_get_theme_default_font(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Control::get_theme_default_font, Control::__class_id, ctx, this_val, argv);
};
static JSValue control_class_get_theme_default_font_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Control::get_theme_default_font_size, Control::__class_id, ctx, this_val, argv);
};
static JSValue control_class_get_parent_control(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Control::get_parent_control, Control::__class_id, ctx, this_val, argv);
};
static JSValue control_class_set_h_grow_direction(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Control::set_h_grow_direction, Control::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue control_class_get_h_grow_direction(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Control::get_h_grow_direction, Control::__class_id, ctx, this_val, argv);
};
static JSValue control_class_set_v_grow_direction(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Control::set_v_grow_direction, Control::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue control_class_get_v_grow_direction(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Control::get_v_grow_direction, Control::__class_id, ctx, this_val, argv);
};
static JSValue control_class_set_tooltip_text(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Control::set_tooltip_text, Control::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue control_class_get_tooltip_text(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Control::get_tooltip_text, Control::__class_id, ctx, this_val, argv);
};
static JSValue control_class_get_tooltip(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Control::get_tooltip, Control::__class_id, ctx, this_val, argv);
};
static JSValue control_class_set_default_cursor_shape(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Control::set_default_cursor_shape, Control::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue control_class_get_default_cursor_shape(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Control::get_default_cursor_shape, Control::__class_id, ctx, this_val, argv);
};
static JSValue control_class_get_cursor_shape(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Control::get_cursor_shape, Control::__class_id, ctx, this_val, argv);
};
static JSValue control_class_set_focus_neighbor(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Control::set_focus_neighbor, Control::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue control_class_get_focus_neighbor(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Control::get_focus_neighbor, Control::__class_id, ctx, this_val, argv);
};
static JSValue control_class_set_focus_next(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Control::set_focus_next, Control::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue control_class_get_focus_next(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Control::get_focus_next, Control::__class_id, ctx, this_val, argv);
};
static JSValue control_class_set_focus_previous(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Control::set_focus_previous, Control::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue control_class_get_focus_previous(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Control::get_focus_previous, Control::__class_id, ctx, this_val, argv);
};
static JSValue control_class_force_drag(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Control::force_drag, Control::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue control_class_set_mouse_filter(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Control::set_mouse_filter, Control::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue control_class_get_mouse_filter(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Control::get_mouse_filter, Control::__class_id, ctx, this_val, argv);
};
static JSValue control_class_set_force_pass_scroll_events(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Control::set_force_pass_scroll_events, Control::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue control_class_is_force_pass_scroll_events(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Control::is_force_pass_scroll_events, Control::__class_id, ctx, this_val, argv);
};
static JSValue control_class_set_clip_contents(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Control::set_clip_contents, Control::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue control_class_is_clipping_contents(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Control::is_clipping_contents, Control::__class_id, ctx, this_val, argv);
};
static JSValue control_class_grab_click_focus(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Control::grab_click_focus, Control::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue control_class_set_drag_forwarding(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Control::set_drag_forwarding, Control::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue control_class_set_drag_preview(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Control::set_drag_preview, Control::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue control_class_is_drag_successful(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Control::is_drag_successful, Control::__class_id, ctx, this_val, argv);
};
static JSValue control_class_warp_mouse(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Control::warp_mouse, Control::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue control_class_set_shortcut_context(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Control::set_shortcut_context, Control::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue control_class_get_shortcut_context(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Control::get_shortcut_context, Control::__class_id, ctx, this_val, argv);
};
static JSValue control_class_update_minimum_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Control::update_minimum_size, Control::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue control_class_set_layout_direction(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Control::set_layout_direction, Control::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue control_class_get_layout_direction(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Control::get_layout_direction, Control::__class_id, ctx, this_val, argv);
};
static JSValue control_class_is_layout_rtl(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Control::is_layout_rtl, Control::__class_id, ctx, this_val, argv);
};
static JSValue control_class_set_auto_translate(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Control::set_auto_translate, Control::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue control_class_is_auto_translating(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Control::is_auto_translating, Control::__class_id, ctx, this_val, argv);
};
static JSValue control_class_set_localize_numeral_system(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Control::set_localize_numeral_system, Control::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue control_class_is_localizing_numeral_system(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Control::is_localizing_numeral_system, Control::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry control_class_proto_funcs[] = {
	JS_CFUNC_DEF("accept_event", 0, &control_class_accept_event),
	JS_CFUNC_DEF("get_minimum_size", 0, &control_class_get_minimum_size),
	JS_CFUNC_DEF("get_combined_minimum_size", 0, &control_class_get_combined_minimum_size),
	JS_CFUNC_DEF("set_anchors_preset", 2, &control_class_set_anchors_preset),
	JS_CFUNC_DEF("set_offsets_preset", 3, &control_class_set_offsets_preset),
	JS_CFUNC_DEF("set_anchors_and_offsets_preset", 3, &control_class_set_anchors_and_offsets_preset),
	JS_CFUNC_DEF("set_anchor", 4, &control_class_set_anchor),
	JS_CFUNC_DEF("get_anchor", 1, &control_class_get_anchor),
	JS_CFUNC_DEF("set_offset", 2, &control_class_set_offset),
	JS_CFUNC_DEF("get_offset", 1, &control_class_get_offset),
	JS_CFUNC_DEF("set_anchor_and_offset", 4, &control_class_set_anchor_and_offset),
	JS_CFUNC_DEF("set_begin", 1, &control_class_set_begin),
	JS_CFUNC_DEF("set_end", 1, &control_class_set_end),
	JS_CFUNC_DEF("set_position", 2, &control_class_set_position),
	JS_CFUNC_DEF("set_size", 2, &control_class_set_size),
	JS_CFUNC_DEF("reset_size", 0, &control_class_reset_size),
	JS_CFUNC_DEF("set_custom_minimum_size", 1, &control_class_set_custom_minimum_size),
	JS_CFUNC_DEF("set_global_position", 2, &control_class_set_global_position),
	JS_CFUNC_DEF("set_rotation", 1, &control_class_set_rotation),
	JS_CFUNC_DEF("set_rotation_degrees", 1, &control_class_set_rotation_degrees),
	JS_CFUNC_DEF("set_scale", 1, &control_class_set_scale),
	JS_CFUNC_DEF("set_pivot_offset", 1, &control_class_set_pivot_offset),
	JS_CFUNC_DEF("get_begin", 0, &control_class_get_begin),
	JS_CFUNC_DEF("get_end", 0, &control_class_get_end),
	JS_CFUNC_DEF("get_position", 0, &control_class_get_position),
	JS_CFUNC_DEF("get_size", 0, &control_class_get_size),
	JS_CFUNC_DEF("get_rotation", 0, &control_class_get_rotation),
	JS_CFUNC_DEF("get_rotation_degrees", 0, &control_class_get_rotation_degrees),
	JS_CFUNC_DEF("get_scale", 0, &control_class_get_scale),
	JS_CFUNC_DEF("get_pivot_offset", 0, &control_class_get_pivot_offset),
	JS_CFUNC_DEF("get_custom_minimum_size", 0, &control_class_get_custom_minimum_size),
	JS_CFUNC_DEF("get_parent_area_size", 0, &control_class_get_parent_area_size),
	JS_CFUNC_DEF("get_global_position", 0, &control_class_get_global_position),
	JS_CFUNC_DEF("get_screen_position", 0, &control_class_get_screen_position),
	JS_CFUNC_DEF("get_rect", 0, &control_class_get_rect),
	JS_CFUNC_DEF("get_global_rect", 0, &control_class_get_global_rect),
	JS_CFUNC_DEF("set_focus_mode", 1, &control_class_set_focus_mode),
	JS_CFUNC_DEF("get_focus_mode", 0, &control_class_get_focus_mode),
	JS_CFUNC_DEF("has_focus", 0, &control_class_has_focus),
	JS_CFUNC_DEF("grab_focus", 0, &control_class_grab_focus),
	JS_CFUNC_DEF("release_focus", 0, &control_class_release_focus),
	JS_CFUNC_DEF("find_prev_valid_focus", 0, &control_class_find_prev_valid_focus),
	JS_CFUNC_DEF("find_next_valid_focus", 0, &control_class_find_next_valid_focus),
	JS_CFUNC_DEF("find_valid_focus_neighbor", 1, &control_class_find_valid_focus_neighbor),
	JS_CFUNC_DEF("set_h_size_flags", 1, &control_class_set_h_size_flags),
	JS_CFUNC_DEF("get_h_size_flags", 0, &control_class_get_h_size_flags),
	JS_CFUNC_DEF("set_stretch_ratio", 1, &control_class_set_stretch_ratio),
	JS_CFUNC_DEF("get_stretch_ratio", 0, &control_class_get_stretch_ratio),
	JS_CFUNC_DEF("set_v_size_flags", 1, &control_class_set_v_size_flags),
	JS_CFUNC_DEF("get_v_size_flags", 0, &control_class_get_v_size_flags),
	JS_CFUNC_DEF("set_theme", 1, &control_class_set_theme),
	JS_CFUNC_DEF("get_theme", 0, &control_class_get_theme),
	JS_CFUNC_DEF("set_theme_type_variation", 1, &control_class_set_theme_type_variation),
	JS_CFUNC_DEF("get_theme_type_variation", 0, &control_class_get_theme_type_variation),
	JS_CFUNC_DEF("begin_bulk_theme_override", 0, &control_class_begin_bulk_theme_override),
	JS_CFUNC_DEF("end_bulk_theme_override", 0, &control_class_end_bulk_theme_override),
	JS_CFUNC_DEF("add_theme_icon_override", 2, &control_class_add_theme_icon_override),
	JS_CFUNC_DEF("add_theme_stylebox_override", 2, &control_class_add_theme_stylebox_override),
	JS_CFUNC_DEF("add_theme_font_override", 2, &control_class_add_theme_font_override),
	JS_CFUNC_DEF("add_theme_font_size_override", 2, &control_class_add_theme_font_size_override),
	JS_CFUNC_DEF("add_theme_color_override", 2, &control_class_add_theme_color_override),
	JS_CFUNC_DEF("add_theme_constant_override", 2, &control_class_add_theme_constant_override),
	JS_CFUNC_DEF("remove_theme_icon_override", 1, &control_class_remove_theme_icon_override),
	JS_CFUNC_DEF("remove_theme_stylebox_override", 1, &control_class_remove_theme_stylebox_override),
	JS_CFUNC_DEF("remove_theme_font_override", 1, &control_class_remove_theme_font_override),
	JS_CFUNC_DEF("remove_theme_font_size_override", 1, &control_class_remove_theme_font_size_override),
	JS_CFUNC_DEF("remove_theme_color_override", 1, &control_class_remove_theme_color_override),
	JS_CFUNC_DEF("remove_theme_constant_override", 1, &control_class_remove_theme_constant_override),
	JS_CFUNC_DEF("get_theme_icon", 2, &control_class_get_theme_icon),
	JS_CFUNC_DEF("get_theme_stylebox", 2, &control_class_get_theme_stylebox),
	JS_CFUNC_DEF("get_theme_font", 2, &control_class_get_theme_font),
	JS_CFUNC_DEF("get_theme_font_size", 2, &control_class_get_theme_font_size),
	JS_CFUNC_DEF("get_theme_color", 2, &control_class_get_theme_color),
	JS_CFUNC_DEF("get_theme_constant", 2, &control_class_get_theme_constant),
	JS_CFUNC_DEF("has_theme_icon_override", 1, &control_class_has_theme_icon_override),
	JS_CFUNC_DEF("has_theme_stylebox_override", 1, &control_class_has_theme_stylebox_override),
	JS_CFUNC_DEF("has_theme_font_override", 1, &control_class_has_theme_font_override),
	JS_CFUNC_DEF("has_theme_font_size_override", 1, &control_class_has_theme_font_size_override),
	JS_CFUNC_DEF("has_theme_color_override", 1, &control_class_has_theme_color_override),
	JS_CFUNC_DEF("has_theme_constant_override", 1, &control_class_has_theme_constant_override),
	JS_CFUNC_DEF("has_theme_icon", 2, &control_class_has_theme_icon),
	JS_CFUNC_DEF("has_theme_stylebox", 2, &control_class_has_theme_stylebox),
	JS_CFUNC_DEF("has_theme_font", 2, &control_class_has_theme_font),
	JS_CFUNC_DEF("has_theme_font_size", 2, &control_class_has_theme_font_size),
	JS_CFUNC_DEF("has_theme_color", 2, &control_class_has_theme_color),
	JS_CFUNC_DEF("has_theme_constant", 2, &control_class_has_theme_constant),
	JS_CFUNC_DEF("get_theme_default_base_scale", 0, &control_class_get_theme_default_base_scale),
	JS_CFUNC_DEF("get_theme_default_font", 0, &control_class_get_theme_default_font),
	JS_CFUNC_DEF("get_theme_default_font_size", 0, &control_class_get_theme_default_font_size),
	JS_CFUNC_DEF("get_parent_control", 0, &control_class_get_parent_control),
	JS_CFUNC_DEF("set_h_grow_direction", 1, &control_class_set_h_grow_direction),
	JS_CFUNC_DEF("get_h_grow_direction", 0, &control_class_get_h_grow_direction),
	JS_CFUNC_DEF("set_v_grow_direction", 1, &control_class_set_v_grow_direction),
	JS_CFUNC_DEF("get_v_grow_direction", 0, &control_class_get_v_grow_direction),
	JS_CFUNC_DEF("set_tooltip_text", 1, &control_class_set_tooltip_text),
	JS_CFUNC_DEF("get_tooltip_text", 0, &control_class_get_tooltip_text),
	JS_CFUNC_DEF("get_tooltip", 1, &control_class_get_tooltip),
	JS_CFUNC_DEF("set_default_cursor_shape", 1, &control_class_set_default_cursor_shape),
	JS_CFUNC_DEF("get_default_cursor_shape", 0, &control_class_get_default_cursor_shape),
	JS_CFUNC_DEF("get_cursor_shape", 1, &control_class_get_cursor_shape),
	JS_CFUNC_DEF("set_focus_neighbor", 2, &control_class_set_focus_neighbor),
	JS_CFUNC_DEF("get_focus_neighbor", 1, &control_class_get_focus_neighbor),
	JS_CFUNC_DEF("set_focus_next", 1, &control_class_set_focus_next),
	JS_CFUNC_DEF("get_focus_next", 0, &control_class_get_focus_next),
	JS_CFUNC_DEF("set_focus_previous", 1, &control_class_set_focus_previous),
	JS_CFUNC_DEF("get_focus_previous", 0, &control_class_get_focus_previous),
	JS_CFUNC_DEF("force_drag", 2, &control_class_force_drag),
	JS_CFUNC_DEF("set_mouse_filter", 1, &control_class_set_mouse_filter),
	JS_CFUNC_DEF("get_mouse_filter", 0, &control_class_get_mouse_filter),
	JS_CFUNC_DEF("set_force_pass_scroll_events", 1, &control_class_set_force_pass_scroll_events),
	JS_CFUNC_DEF("is_force_pass_scroll_events", 0, &control_class_is_force_pass_scroll_events),
	JS_CFUNC_DEF("set_clip_contents", 1, &control_class_set_clip_contents),
	JS_CFUNC_DEF("is_clipping_contents", 0, &control_class_is_clipping_contents),
	JS_CFUNC_DEF("grab_click_focus", 0, &control_class_grab_click_focus),
	JS_CFUNC_DEF("set_drag_forwarding", 3, &control_class_set_drag_forwarding),
	JS_CFUNC_DEF("set_drag_preview", 1, &control_class_set_drag_preview),
	JS_CFUNC_DEF("is_drag_successful", 0, &control_class_is_drag_successful),
	JS_CFUNC_DEF("warp_mouse", 1, &control_class_warp_mouse),
	JS_CFUNC_DEF("set_shortcut_context", 1, &control_class_set_shortcut_context),
	JS_CFUNC_DEF("get_shortcut_context", 0, &control_class_get_shortcut_context),
	JS_CFUNC_DEF("update_minimum_size", 0, &control_class_update_minimum_size),
	JS_CFUNC_DEF("set_layout_direction", 1, &control_class_set_layout_direction),
	JS_CFUNC_DEF("get_layout_direction", 0, &control_class_get_layout_direction),
	JS_CFUNC_DEF("is_layout_rtl", 0, &control_class_is_layout_rtl),
	JS_CFUNC_DEF("set_auto_translate", 1, &control_class_set_auto_translate),
	JS_CFUNC_DEF("is_auto_translating", 0, &control_class_is_auto_translating),
	JS_CFUNC_DEF("set_localize_numeral_system", 1, &control_class_set_localize_numeral_system),
	JS_CFUNC_DEF("is_localizing_numeral_system", 0, &control_class_is_localizing_numeral_system),
};

static int js_control_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&Control::__class_id);
	classes["Control"] = Control::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), Control::__class_id, &control_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, CanvasItem::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, Control::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, control_class_proto_funcs, _countof(control_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, control_class_constructor, "Control", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "Control", ctor);

	return 0;
}

JSModuleDef *_js_init_control_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_control_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "Control");
	return m;
}

JSModuleDef *js_init_control_module(JSContext *ctx) {
	return _js_init_control_module(ctx, "godot/classes/control");
}

void register_control() {
	js_init_control_module(ctx);
}