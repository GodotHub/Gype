
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/font.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/style_box.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/classes/theme.hpp>
#include <godot_cpp/classes/viewport.hpp>
#include <godot_cpp/classes/window.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void window_class_finalizer(JSRuntime *rt, JSValue val) {
	Window *window = static_cast<Window *>(JS_GetOpaque(val, Window::__class_id));
	if (window)
		Window::free(nullptr, window);
}

static JSClassDef window_class_def = {
	"Window",
	.finalizer = window_class_finalizer
};

static JSValue window_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	Window *window_class;
	JSValue obj = JS_NewObjectClass(ctx, Window::__class_id);
	if (JS_IsException(obj))
		return obj;
	window_class = memnew(Window);
	if (!window_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, window_class);
	return obj;
}
static JSValue window_class_set_title(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Window::set_title, Window::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue window_class_get_title(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Window::get_title, Window::__class_id, ctx, this_val, argv);
};
static JSValue window_class_get_window_id(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Window::get_window_id, Window::__class_id, ctx, this_val, argv);
};
static JSValue window_class_set_initial_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Window::set_initial_position, Window::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue window_class_get_initial_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Window::get_initial_position, Window::__class_id, ctx, this_val, argv);
};
static JSValue window_class_set_current_screen(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Window::set_current_screen, Window::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue window_class_get_current_screen(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Window::get_current_screen, Window::__class_id, ctx, this_val, argv);
};
static JSValue window_class_set_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Window::set_position, Window::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue window_class_get_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Window::get_position, Window::__class_id, ctx, this_val, argv);
};
static JSValue window_class_move_to_center(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Window::move_to_center, Window::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue window_class_set_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Window::set_size, Window::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue window_class_get_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Window::get_size, Window::__class_id, ctx, this_val, argv);
};
static JSValue window_class_reset_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Window::reset_size, Window::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue window_class_get_position_with_decorations(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Window::get_position_with_decorations, Window::__class_id, ctx, this_val, argv);
};
static JSValue window_class_get_size_with_decorations(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Window::get_size_with_decorations, Window::__class_id, ctx, this_val, argv);
};
static JSValue window_class_set_max_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Window::set_max_size, Window::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue window_class_get_max_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Window::get_max_size, Window::__class_id, ctx, this_val, argv);
};
static JSValue window_class_set_min_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Window::set_min_size, Window::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue window_class_get_min_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Window::get_min_size, Window::__class_id, ctx, this_val, argv);
};
static JSValue window_class_set_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Window::set_mode, Window::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue window_class_get_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Window::get_mode, Window::__class_id, ctx, this_val, argv);
};
static JSValue window_class_set_flag(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Window::set_flag, Window::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue window_class_get_flag(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Window::get_flag, Window::__class_id, ctx, this_val, argv);
};
static JSValue window_class_is_maximize_allowed(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Window::is_maximize_allowed, Window::__class_id, ctx, this_val, argv);
};
static JSValue window_class_request_attention(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Window::request_attention, Window::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue window_class_move_to_foreground(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Window::move_to_foreground, Window::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue window_class_set_visible(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Window::set_visible, Window::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue window_class_is_visible(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Window::is_visible, Window::__class_id, ctx, this_val, argv);
};
static JSValue window_class_hide(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Window::hide, Window::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue window_class_show(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Window::show, Window::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue window_class_set_transient(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Window::set_transient, Window::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue window_class_is_transient(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Window::is_transient, Window::__class_id, ctx, this_val, argv);
};
static JSValue window_class_set_transient_to_focused(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Window::set_transient_to_focused, Window::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue window_class_is_transient_to_focused(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Window::is_transient_to_focused, Window::__class_id, ctx, this_val, argv);
};
static JSValue window_class_set_exclusive(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Window::set_exclusive, Window::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue window_class_is_exclusive(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Window::is_exclusive, Window::__class_id, ctx, this_val, argv);
};
static JSValue window_class_set_unparent_when_invisible(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Window::set_unparent_when_invisible, Window::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue window_class_can_draw(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Window::can_draw, Window::__class_id, ctx, this_val, argv);
};
static JSValue window_class_has_focus(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Window::has_focus, Window::__class_id, ctx, this_val, argv);
};
static JSValue window_class_grab_focus(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Window::grab_focus, Window::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue window_class_set_ime_active(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Window::set_ime_active, Window::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue window_class_set_ime_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Window::set_ime_position, Window::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue window_class_is_embedded(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Window::is_embedded, Window::__class_id, ctx, this_val, argv);
};
static JSValue window_class_get_contents_minimum_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Window::get_contents_minimum_size, Window::__class_id, ctx, this_val, argv);
};
static JSValue window_class_set_force_native(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Window::set_force_native, Window::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue window_class_get_force_native(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Window::get_force_native, Window::__class_id, ctx, this_val, argv);
};
static JSValue window_class_set_content_scale_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Window::set_content_scale_size, Window::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue window_class_get_content_scale_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Window::get_content_scale_size, Window::__class_id, ctx, this_val, argv);
};
static JSValue window_class_set_content_scale_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Window::set_content_scale_mode, Window::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue window_class_get_content_scale_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Window::get_content_scale_mode, Window::__class_id, ctx, this_val, argv);
};
static JSValue window_class_set_content_scale_aspect(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Window::set_content_scale_aspect, Window::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue window_class_get_content_scale_aspect(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Window::get_content_scale_aspect, Window::__class_id, ctx, this_val, argv);
};
static JSValue window_class_set_content_scale_stretch(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Window::set_content_scale_stretch, Window::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue window_class_get_content_scale_stretch(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Window::get_content_scale_stretch, Window::__class_id, ctx, this_val, argv);
};
static JSValue window_class_set_keep_title_visible(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Window::set_keep_title_visible, Window::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue window_class_get_keep_title_visible(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Window::get_keep_title_visible, Window::__class_id, ctx, this_val, argv);
};
static JSValue window_class_set_content_scale_factor(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Window::set_content_scale_factor, Window::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue window_class_get_content_scale_factor(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Window::get_content_scale_factor, Window::__class_id, ctx, this_val, argv);
};
static JSValue window_class_set_use_font_oversampling(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Window::set_use_font_oversampling, Window::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue window_class_is_using_font_oversampling(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Window::is_using_font_oversampling, Window::__class_id, ctx, this_val, argv);
};
static JSValue window_class_set_mouse_passthrough_polygon(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Window::set_mouse_passthrough_polygon, Window::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue window_class_get_mouse_passthrough_polygon(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Window::get_mouse_passthrough_polygon, Window::__class_id, ctx, this_val, argv);
};
static JSValue window_class_set_wrap_controls(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Window::set_wrap_controls, Window::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue window_class_is_wrapping_controls(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Window::is_wrapping_controls, Window::__class_id, ctx, this_val, argv);
};
static JSValue window_class_child_controls_changed(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Window::child_controls_changed, Window::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue window_class_set_theme(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Window::set_theme, Window::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue window_class_get_theme(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Window::get_theme, Window::__class_id, ctx, this_val, argv);
};
static JSValue window_class_set_theme_type_variation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Window::set_theme_type_variation, Window::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue window_class_get_theme_type_variation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Window::get_theme_type_variation, Window::__class_id, ctx, this_val, argv);
};
static JSValue window_class_begin_bulk_theme_override(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Window::begin_bulk_theme_override, Window::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue window_class_end_bulk_theme_override(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Window::end_bulk_theme_override, Window::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue window_class_add_theme_icon_override(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Window::add_theme_icon_override, Window::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue window_class_add_theme_stylebox_override(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Window::add_theme_stylebox_override, Window::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue window_class_add_theme_font_override(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Window::add_theme_font_override, Window::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue window_class_add_theme_font_size_override(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Window::add_theme_font_size_override, Window::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue window_class_add_theme_color_override(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Window::add_theme_color_override, Window::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue window_class_add_theme_constant_override(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Window::add_theme_constant_override, Window::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue window_class_remove_theme_icon_override(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Window::remove_theme_icon_override, Window::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue window_class_remove_theme_stylebox_override(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Window::remove_theme_stylebox_override, Window::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue window_class_remove_theme_font_override(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Window::remove_theme_font_override, Window::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue window_class_remove_theme_font_size_override(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Window::remove_theme_font_size_override, Window::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue window_class_remove_theme_color_override(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Window::remove_theme_color_override, Window::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue window_class_remove_theme_constant_override(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Window::remove_theme_constant_override, Window::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue window_class_get_theme_icon(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Window::get_theme_icon, Window::__class_id, ctx, this_val, argv);
};
static JSValue window_class_get_theme_stylebox(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Window::get_theme_stylebox, Window::__class_id, ctx, this_val, argv);
};
static JSValue window_class_get_theme_font(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Window::get_theme_font, Window::__class_id, ctx, this_val, argv);
};
static JSValue window_class_get_theme_font_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Window::get_theme_font_size, Window::__class_id, ctx, this_val, argv);
};
static JSValue window_class_get_theme_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Window::get_theme_color, Window::__class_id, ctx, this_val, argv);
};
static JSValue window_class_get_theme_constant(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Window::get_theme_constant, Window::__class_id, ctx, this_val, argv);
};
static JSValue window_class_has_theme_icon_override(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Window::has_theme_icon_override, Window::__class_id, ctx, this_val, argv);
};
static JSValue window_class_has_theme_stylebox_override(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Window::has_theme_stylebox_override, Window::__class_id, ctx, this_val, argv);
};
static JSValue window_class_has_theme_font_override(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Window::has_theme_font_override, Window::__class_id, ctx, this_val, argv);
};
static JSValue window_class_has_theme_font_size_override(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Window::has_theme_font_size_override, Window::__class_id, ctx, this_val, argv);
};
static JSValue window_class_has_theme_color_override(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Window::has_theme_color_override, Window::__class_id, ctx, this_val, argv);
};
static JSValue window_class_has_theme_constant_override(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Window::has_theme_constant_override, Window::__class_id, ctx, this_val, argv);
};
static JSValue window_class_has_theme_icon(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Window::has_theme_icon, Window::__class_id, ctx, this_val, argv);
};
static JSValue window_class_has_theme_stylebox(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Window::has_theme_stylebox, Window::__class_id, ctx, this_val, argv);
};
static JSValue window_class_has_theme_font(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Window::has_theme_font, Window::__class_id, ctx, this_val, argv);
};
static JSValue window_class_has_theme_font_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Window::has_theme_font_size, Window::__class_id, ctx, this_val, argv);
};
static JSValue window_class_has_theme_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Window::has_theme_color, Window::__class_id, ctx, this_val, argv);
};
static JSValue window_class_has_theme_constant(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Window::has_theme_constant, Window::__class_id, ctx, this_val, argv);
};
static JSValue window_class_get_theme_default_base_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Window::get_theme_default_base_scale, Window::__class_id, ctx, this_val, argv);
};
static JSValue window_class_get_theme_default_font(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Window::get_theme_default_font, Window::__class_id, ctx, this_val, argv);
};
static JSValue window_class_get_theme_default_font_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Window::get_theme_default_font_size, Window::__class_id, ctx, this_val, argv);
};
static JSValue window_class_set_layout_direction(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Window::set_layout_direction, Window::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue window_class_get_layout_direction(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Window::get_layout_direction, Window::__class_id, ctx, this_val, argv);
};
static JSValue window_class_is_layout_rtl(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Window::is_layout_rtl, Window::__class_id, ctx, this_val, argv);
};
static JSValue window_class_set_auto_translate(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Window::set_auto_translate, Window::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue window_class_is_auto_translating(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Window::is_auto_translating, Window::__class_id, ctx, this_val, argv);
};
static JSValue window_class_popup(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Window::popup, Window::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue window_class_popup_on_parent(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Window::popup_on_parent, Window::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue window_class_popup_centered(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Window::popup_centered, Window::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue window_class_popup_centered_ratio(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Window::popup_centered_ratio, Window::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue window_class_popup_centered_clamped(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Window::popup_centered_clamped, Window::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue window_class_popup_exclusive(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Window::popup_exclusive, Window::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue window_class_popup_exclusive_on_parent(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Window::popup_exclusive_on_parent, Window::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue window_class_popup_exclusive_centered(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Window::popup_exclusive_centered, Window::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue window_class_popup_exclusive_centered_ratio(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Window::popup_exclusive_centered_ratio, Window::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue window_class_popup_exclusive_centered_clamped(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Window::popup_exclusive_centered_clamped, Window::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static const JSCFunctionListEntry window_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_title", 1, &window_class_set_title),
	JS_CFUNC_DEF("get_title", 0, &window_class_get_title),
	JS_CFUNC_DEF("get_window_id", 0, &window_class_get_window_id),
	JS_CFUNC_DEF("set_initial_position", 1, &window_class_set_initial_position),
	JS_CFUNC_DEF("get_initial_position", 0, &window_class_get_initial_position),
	JS_CFUNC_DEF("set_current_screen", 1, &window_class_set_current_screen),
	JS_CFUNC_DEF("get_current_screen", 0, &window_class_get_current_screen),
	JS_CFUNC_DEF("set_position", 1, &window_class_set_position),
	JS_CFUNC_DEF("get_position", 0, &window_class_get_position),
	JS_CFUNC_DEF("move_to_center", 0, &window_class_move_to_center),
	JS_CFUNC_DEF("set_size", 1, &window_class_set_size),
	JS_CFUNC_DEF("get_size", 0, &window_class_get_size),
	JS_CFUNC_DEF("reset_size", 0, &window_class_reset_size),
	JS_CFUNC_DEF("get_position_with_decorations", 0, &window_class_get_position_with_decorations),
	JS_CFUNC_DEF("get_size_with_decorations", 0, &window_class_get_size_with_decorations),
	JS_CFUNC_DEF("set_max_size", 1, &window_class_set_max_size),
	JS_CFUNC_DEF("get_max_size", 0, &window_class_get_max_size),
	JS_CFUNC_DEF("set_min_size", 1, &window_class_set_min_size),
	JS_CFUNC_DEF("get_min_size", 0, &window_class_get_min_size),
	JS_CFUNC_DEF("set_mode", 1, &window_class_set_mode),
	JS_CFUNC_DEF("get_mode", 0, &window_class_get_mode),
	JS_CFUNC_DEF("set_flag", 2, &window_class_set_flag),
	JS_CFUNC_DEF("get_flag", 1, &window_class_get_flag),
	JS_CFUNC_DEF("is_maximize_allowed", 0, &window_class_is_maximize_allowed),
	JS_CFUNC_DEF("request_attention", 0, &window_class_request_attention),
	JS_CFUNC_DEF("move_to_foreground", 0, &window_class_move_to_foreground),
	JS_CFUNC_DEF("set_visible", 1, &window_class_set_visible),
	JS_CFUNC_DEF("is_visible", 0, &window_class_is_visible),
	JS_CFUNC_DEF("hide", 0, &window_class_hide),
	JS_CFUNC_DEF("show", 0, &window_class_show),
	JS_CFUNC_DEF("set_transient", 1, &window_class_set_transient),
	JS_CFUNC_DEF("is_transient", 0, &window_class_is_transient),
	JS_CFUNC_DEF("set_transient_to_focused", 1, &window_class_set_transient_to_focused),
	JS_CFUNC_DEF("is_transient_to_focused", 0, &window_class_is_transient_to_focused),
	JS_CFUNC_DEF("set_exclusive", 1, &window_class_set_exclusive),
	JS_CFUNC_DEF("is_exclusive", 0, &window_class_is_exclusive),
	JS_CFUNC_DEF("set_unparent_when_invisible", 1, &window_class_set_unparent_when_invisible),
	JS_CFUNC_DEF("can_draw", 0, &window_class_can_draw),
	JS_CFUNC_DEF("has_focus", 0, &window_class_has_focus),
	JS_CFUNC_DEF("grab_focus", 0, &window_class_grab_focus),
	JS_CFUNC_DEF("set_ime_active", 1, &window_class_set_ime_active),
	JS_CFUNC_DEF("set_ime_position", 1, &window_class_set_ime_position),
	JS_CFUNC_DEF("is_embedded", 0, &window_class_is_embedded),
	JS_CFUNC_DEF("get_contents_minimum_size", 0, &window_class_get_contents_minimum_size),
	JS_CFUNC_DEF("set_force_native", 1, &window_class_set_force_native),
	JS_CFUNC_DEF("get_force_native", 0, &window_class_get_force_native),
	JS_CFUNC_DEF("set_content_scale_size", 1, &window_class_set_content_scale_size),
	JS_CFUNC_DEF("get_content_scale_size", 0, &window_class_get_content_scale_size),
	JS_CFUNC_DEF("set_content_scale_mode", 1, &window_class_set_content_scale_mode),
	JS_CFUNC_DEF("get_content_scale_mode", 0, &window_class_get_content_scale_mode),
	JS_CFUNC_DEF("set_content_scale_aspect", 1, &window_class_set_content_scale_aspect),
	JS_CFUNC_DEF("get_content_scale_aspect", 0, &window_class_get_content_scale_aspect),
	JS_CFUNC_DEF("set_content_scale_stretch", 1, &window_class_set_content_scale_stretch),
	JS_CFUNC_DEF("get_content_scale_stretch", 0, &window_class_get_content_scale_stretch),
	JS_CFUNC_DEF("set_keep_title_visible", 1, &window_class_set_keep_title_visible),
	JS_CFUNC_DEF("get_keep_title_visible", 0, &window_class_get_keep_title_visible),
	JS_CFUNC_DEF("set_content_scale_factor", 1, &window_class_set_content_scale_factor),
	JS_CFUNC_DEF("get_content_scale_factor", 0, &window_class_get_content_scale_factor),
	JS_CFUNC_DEF("set_use_font_oversampling", 1, &window_class_set_use_font_oversampling),
	JS_CFUNC_DEF("is_using_font_oversampling", 0, &window_class_is_using_font_oversampling),
	JS_CFUNC_DEF("set_mouse_passthrough_polygon", 1, &window_class_set_mouse_passthrough_polygon),
	JS_CFUNC_DEF("get_mouse_passthrough_polygon", 0, &window_class_get_mouse_passthrough_polygon),
	JS_CFUNC_DEF("set_wrap_controls", 1, &window_class_set_wrap_controls),
	JS_CFUNC_DEF("is_wrapping_controls", 0, &window_class_is_wrapping_controls),
	JS_CFUNC_DEF("child_controls_changed", 0, &window_class_child_controls_changed),
	JS_CFUNC_DEF("set_theme", 1, &window_class_set_theme),
	JS_CFUNC_DEF("get_theme", 0, &window_class_get_theme),
	JS_CFUNC_DEF("set_theme_type_variation", 1, &window_class_set_theme_type_variation),
	JS_CFUNC_DEF("get_theme_type_variation", 0, &window_class_get_theme_type_variation),
	JS_CFUNC_DEF("begin_bulk_theme_override", 0, &window_class_begin_bulk_theme_override),
	JS_CFUNC_DEF("end_bulk_theme_override", 0, &window_class_end_bulk_theme_override),
	JS_CFUNC_DEF("add_theme_icon_override", 2, &window_class_add_theme_icon_override),
	JS_CFUNC_DEF("add_theme_stylebox_override", 2, &window_class_add_theme_stylebox_override),
	JS_CFUNC_DEF("add_theme_font_override", 2, &window_class_add_theme_font_override),
	JS_CFUNC_DEF("add_theme_font_size_override", 2, &window_class_add_theme_font_size_override),
	JS_CFUNC_DEF("add_theme_color_override", 2, &window_class_add_theme_color_override),
	JS_CFUNC_DEF("add_theme_constant_override", 2, &window_class_add_theme_constant_override),
	JS_CFUNC_DEF("remove_theme_icon_override", 1, &window_class_remove_theme_icon_override),
	JS_CFUNC_DEF("remove_theme_stylebox_override", 1, &window_class_remove_theme_stylebox_override),
	JS_CFUNC_DEF("remove_theme_font_override", 1, &window_class_remove_theme_font_override),
	JS_CFUNC_DEF("remove_theme_font_size_override", 1, &window_class_remove_theme_font_size_override),
	JS_CFUNC_DEF("remove_theme_color_override", 1, &window_class_remove_theme_color_override),
	JS_CFUNC_DEF("remove_theme_constant_override", 1, &window_class_remove_theme_constant_override),
	JS_CFUNC_DEF("get_theme_icon", 2, &window_class_get_theme_icon),
	JS_CFUNC_DEF("get_theme_stylebox", 2, &window_class_get_theme_stylebox),
	JS_CFUNC_DEF("get_theme_font", 2, &window_class_get_theme_font),
	JS_CFUNC_DEF("get_theme_font_size", 2, &window_class_get_theme_font_size),
	JS_CFUNC_DEF("get_theme_color", 2, &window_class_get_theme_color),
	JS_CFUNC_DEF("get_theme_constant", 2, &window_class_get_theme_constant),
	JS_CFUNC_DEF("has_theme_icon_override", 1, &window_class_has_theme_icon_override),
	JS_CFUNC_DEF("has_theme_stylebox_override", 1, &window_class_has_theme_stylebox_override),
	JS_CFUNC_DEF("has_theme_font_override", 1, &window_class_has_theme_font_override),
	JS_CFUNC_DEF("has_theme_font_size_override", 1, &window_class_has_theme_font_size_override),
	JS_CFUNC_DEF("has_theme_color_override", 1, &window_class_has_theme_color_override),
	JS_CFUNC_DEF("has_theme_constant_override", 1, &window_class_has_theme_constant_override),
	JS_CFUNC_DEF("has_theme_icon", 2, &window_class_has_theme_icon),
	JS_CFUNC_DEF("has_theme_stylebox", 2, &window_class_has_theme_stylebox),
	JS_CFUNC_DEF("has_theme_font", 2, &window_class_has_theme_font),
	JS_CFUNC_DEF("has_theme_font_size", 2, &window_class_has_theme_font_size),
	JS_CFUNC_DEF("has_theme_color", 2, &window_class_has_theme_color),
	JS_CFUNC_DEF("has_theme_constant", 2, &window_class_has_theme_constant),
	JS_CFUNC_DEF("get_theme_default_base_scale", 0, &window_class_get_theme_default_base_scale),
	JS_CFUNC_DEF("get_theme_default_font", 0, &window_class_get_theme_default_font),
	JS_CFUNC_DEF("get_theme_default_font_size", 0, &window_class_get_theme_default_font_size),
	JS_CFUNC_DEF("set_layout_direction", 1, &window_class_set_layout_direction),
	JS_CFUNC_DEF("get_layout_direction", 0, &window_class_get_layout_direction),
	JS_CFUNC_DEF("is_layout_rtl", 0, &window_class_is_layout_rtl),
	JS_CFUNC_DEF("set_auto_translate", 1, &window_class_set_auto_translate),
	JS_CFUNC_DEF("is_auto_translating", 0, &window_class_is_auto_translating),
	JS_CFUNC_DEF("popup", 1, &window_class_popup),
	JS_CFUNC_DEF("popup_on_parent", 1, &window_class_popup_on_parent),
	JS_CFUNC_DEF("popup_centered", 1, &window_class_popup_centered),
	JS_CFUNC_DEF("popup_centered_ratio", 1, &window_class_popup_centered_ratio),
	JS_CFUNC_DEF("popup_centered_clamped", 2, &window_class_popup_centered_clamped),
	JS_CFUNC_DEF("popup_exclusive", 2, &window_class_popup_exclusive),
	JS_CFUNC_DEF("popup_exclusive_on_parent", 2, &window_class_popup_exclusive_on_parent),
	JS_CFUNC_DEF("popup_exclusive_centered", 2, &window_class_popup_exclusive_centered),
	JS_CFUNC_DEF("popup_exclusive_centered_ratio", 2, &window_class_popup_exclusive_centered_ratio),
	JS_CFUNC_DEF("popup_exclusive_centered_clamped", 3, &window_class_popup_exclusive_centered_clamped),
};

static int js_window_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&Window::__class_id);
	classes["Window"] = Window::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), Window::__class_id, &window_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Viewport::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, Window::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, window_class_proto_funcs, _countof(window_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, window_class_constructor, "Window", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "Window", ctor);

	return 0;
}

JSModuleDef *_js_init_window_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_window_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "Window");
	return m;
}

JSModuleDef *js_init_window_module(JSContext *ctx) {
	return _js_init_window_module(ctx, "godot/classes/window");
}

void register_window() {
	js_init_window_module(ctx);
}