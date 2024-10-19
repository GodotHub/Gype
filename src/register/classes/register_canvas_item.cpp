
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/font.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/input_event.hpp>
#include <godot_cpp/classes/multi_mesh.hpp>
#include <godot_cpp/classes/mesh.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/classes/canvas_item.hpp>
#include <godot_cpp/classes/style_box.hpp>
#include <godot_cpp/classes/material.hpp>
#include <godot_cpp/classes/world2d.hpp>
#include <godot_cpp/classes/canvas_layer.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void canvas_item_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef canvas_item_class_def = {
	"CanvasItem",
	.finalizer = canvas_item_class_finalizer
};

static JSValue canvas_item_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, CanvasItem::__class_id);
	if (JS_IsException(obj))
		return obj;
	CanvasItem *canvas_item_class = memnew(CanvasItem);
	if (!canvas_item_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, canvas_item_class);	
	return obj;
}
static JSValue canvas_item_class_get_canvas_item(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CanvasItem::get_canvas_item, ctx, this_val, argc, argv);
};
static JSValue canvas_item_class_set_visible(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CanvasItem::set_visible, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue canvas_item_class_is_visible(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CanvasItem::is_visible, ctx, this_val, argc, argv);
};
static JSValue canvas_item_class_is_visible_in_tree(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CanvasItem::is_visible_in_tree, ctx, this_val, argc, argv);
};
static JSValue canvas_item_class_show(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CanvasItem::show, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue canvas_item_class_hide(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CanvasItem::hide, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue canvas_item_class_queue_redraw(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CanvasItem::queue_redraw, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue canvas_item_class_move_to_front(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CanvasItem::move_to_front, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue canvas_item_class_set_as_top_level(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CanvasItem::set_as_top_level, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue canvas_item_class_is_set_as_top_level(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CanvasItem::is_set_as_top_level, ctx, this_val, argc, argv);
};
static JSValue canvas_item_class_set_light_mask(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CanvasItem::set_light_mask, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue canvas_item_class_get_light_mask(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CanvasItem::get_light_mask, ctx, this_val, argc, argv);
};
static JSValue canvas_item_class_set_modulate(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CanvasItem::set_modulate, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue canvas_item_class_get_modulate(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CanvasItem::get_modulate, ctx, this_val, argc, argv);
};
static JSValue canvas_item_class_set_self_modulate(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CanvasItem::set_self_modulate, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue canvas_item_class_get_self_modulate(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CanvasItem::get_self_modulate, ctx, this_val, argc, argv);
};
static JSValue canvas_item_class_set_z_index(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CanvasItem::set_z_index, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue canvas_item_class_get_z_index(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CanvasItem::get_z_index, ctx, this_val, argc, argv);
};
static JSValue canvas_item_class_set_z_as_relative(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CanvasItem::set_z_as_relative, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue canvas_item_class_is_z_relative(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CanvasItem::is_z_relative, ctx, this_val, argc, argv);
};
static JSValue canvas_item_class_set_y_sort_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CanvasItem::set_y_sort_enabled, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue canvas_item_class_is_y_sort_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CanvasItem::is_y_sort_enabled, ctx, this_val, argc, argv);
};
static JSValue canvas_item_class_set_draw_behind_parent(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CanvasItem::set_draw_behind_parent, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue canvas_item_class_is_draw_behind_parent_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CanvasItem::is_draw_behind_parent_enabled, ctx, this_val, argc, argv);
};
static JSValue canvas_item_class_draw_line(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CanvasItem::draw_line, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue canvas_item_class_draw_dashed_line(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CanvasItem::draw_dashed_line, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue canvas_item_class_draw_polyline(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CanvasItem::draw_polyline, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue canvas_item_class_draw_polyline_colors(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CanvasItem::draw_polyline_colors, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue canvas_item_class_draw_arc(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CanvasItem::draw_arc, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue canvas_item_class_draw_multiline(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CanvasItem::draw_multiline, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue canvas_item_class_draw_multiline_colors(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CanvasItem::draw_multiline_colors, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue canvas_item_class_draw_rect(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CanvasItem::draw_rect, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue canvas_item_class_draw_circle(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CanvasItem::draw_circle, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue canvas_item_class_draw_texture(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CanvasItem::draw_texture, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue canvas_item_class_draw_texture_rect(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CanvasItem::draw_texture_rect, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue canvas_item_class_draw_texture_rect_region(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CanvasItem::draw_texture_rect_region, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue canvas_item_class_draw_msdf_texture_rect_region(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CanvasItem::draw_msdf_texture_rect_region, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue canvas_item_class_draw_lcd_texture_rect_region(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CanvasItem::draw_lcd_texture_rect_region, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue canvas_item_class_draw_style_box(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CanvasItem::draw_style_box, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue canvas_item_class_draw_primitive(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CanvasItem::draw_primitive, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue canvas_item_class_draw_polygon(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CanvasItem::draw_polygon, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue canvas_item_class_draw_colored_polygon(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CanvasItem::draw_colored_polygon, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue canvas_item_class_draw_string(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_const_method_no_ret(&CanvasItem::draw_string, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue canvas_item_class_draw_multiline_string(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_const_method_no_ret(&CanvasItem::draw_multiline_string, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue canvas_item_class_draw_string_outline(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_const_method_no_ret(&CanvasItem::draw_string_outline, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue canvas_item_class_draw_multiline_string_outline(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_const_method_no_ret(&CanvasItem::draw_multiline_string_outline, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue canvas_item_class_draw_char(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_const_method_no_ret(&CanvasItem::draw_char, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue canvas_item_class_draw_char_outline(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_const_method_no_ret(&CanvasItem::draw_char_outline, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue canvas_item_class_draw_mesh(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CanvasItem::draw_mesh, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue canvas_item_class_draw_multimesh(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CanvasItem::draw_multimesh, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue canvas_item_class_draw_set_transform(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CanvasItem::draw_set_transform, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue canvas_item_class_draw_set_transform_matrix(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CanvasItem::draw_set_transform_matrix, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue canvas_item_class_draw_animation_slice(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CanvasItem::draw_animation_slice, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue canvas_item_class_draw_end_animation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CanvasItem::draw_end_animation, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue canvas_item_class_get_transform(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CanvasItem::get_transform, ctx, this_val, argc, argv);
};
static JSValue canvas_item_class_get_global_transform(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CanvasItem::get_global_transform, ctx, this_val, argc, argv);
};
static JSValue canvas_item_class_get_global_transform_with_canvas(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CanvasItem::get_global_transform_with_canvas, ctx, this_val, argc, argv);
};
static JSValue canvas_item_class_get_viewport_transform(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CanvasItem::get_viewport_transform, ctx, this_val, argc, argv);
};
static JSValue canvas_item_class_get_viewport_rect(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CanvasItem::get_viewport_rect, ctx, this_val, argc, argv);
};
static JSValue canvas_item_class_get_canvas_transform(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CanvasItem::get_canvas_transform, ctx, this_val, argc, argv);
};
static JSValue canvas_item_class_get_screen_transform(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CanvasItem::get_screen_transform, ctx, this_val, argc, argv);
};
static JSValue canvas_item_class_get_local_mouse_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CanvasItem::get_local_mouse_position, ctx, this_val, argc, argv);
};
static JSValue canvas_item_class_get_global_mouse_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CanvasItem::get_global_mouse_position, ctx, this_val, argc, argv);
};
static JSValue canvas_item_class_get_canvas(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CanvasItem::get_canvas, ctx, this_val, argc, argv);
};
static JSValue canvas_item_class_get_canvas_layer_node(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CanvasItem::get_canvas_layer_node, ctx, this_val, argc, argv);
};
static JSValue canvas_item_class_get_world_2d(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CanvasItem::get_world_2d, ctx, this_val, argc, argv);
};
static JSValue canvas_item_class_set_material(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CanvasItem::set_material, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue canvas_item_class_get_material(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CanvasItem::get_material, ctx, this_val, argc, argv);
};
static JSValue canvas_item_class_set_use_parent_material(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CanvasItem::set_use_parent_material, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue canvas_item_class_get_use_parent_material(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CanvasItem::get_use_parent_material, ctx, this_val, argc, argv);
};
static JSValue canvas_item_class_set_notify_local_transform(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CanvasItem::set_notify_local_transform, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue canvas_item_class_is_local_transform_notification_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CanvasItem::is_local_transform_notification_enabled, ctx, this_val, argc, argv);
};
static JSValue canvas_item_class_set_notify_transform(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CanvasItem::set_notify_transform, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue canvas_item_class_is_transform_notification_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CanvasItem::is_transform_notification_enabled, ctx, this_val, argc, argv);
};
static JSValue canvas_item_class_force_update_transform(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CanvasItem::force_update_transform, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue canvas_item_class_make_canvas_position_local(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CanvasItem::make_canvas_position_local, ctx, this_val, argc, argv);
};
static JSValue canvas_item_class_make_input_local(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CanvasItem::make_input_local, ctx, this_val, argc, argv);
};
static JSValue canvas_item_class_set_visibility_layer(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CanvasItem::set_visibility_layer, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue canvas_item_class_get_visibility_layer(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CanvasItem::get_visibility_layer, ctx, this_val, argc, argv);
};
static JSValue canvas_item_class_set_visibility_layer_bit(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CanvasItem::set_visibility_layer_bit, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue canvas_item_class_get_visibility_layer_bit(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CanvasItem::get_visibility_layer_bit, ctx, this_val, argc, argv);
};
static JSValue canvas_item_class_set_texture_filter(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CanvasItem::set_texture_filter, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue canvas_item_class_get_texture_filter(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CanvasItem::get_texture_filter, ctx, this_val, argc, argv);
};
static JSValue canvas_item_class_set_texture_repeat(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CanvasItem::set_texture_repeat, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue canvas_item_class_get_texture_repeat(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CanvasItem::get_texture_repeat, ctx, this_val, argc, argv);
};
static JSValue canvas_item_class_set_clip_children_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CanvasItem::set_clip_children_mode, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue canvas_item_class_get_clip_children_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CanvasItem::get_clip_children_mode, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry canvas_item_class_proto_funcs[] = {
	JS_CFUNC_DEF("get_canvas_item", 0, &canvas_item_class_get_canvas_item),
	JS_CFUNC_DEF("set_visible", 1, &canvas_item_class_set_visible),
	JS_CFUNC_DEF("is_visible", 0, &canvas_item_class_is_visible),
	JS_CFUNC_DEF("is_visible_in_tree", 0, &canvas_item_class_is_visible_in_tree),
	JS_CFUNC_DEF("show", 0, &canvas_item_class_show),
	JS_CFUNC_DEF("hide", 0, &canvas_item_class_hide),
	JS_CFUNC_DEF("queue_redraw", 0, &canvas_item_class_queue_redraw),
	JS_CFUNC_DEF("move_to_front", 0, &canvas_item_class_move_to_front),
	JS_CFUNC_DEF("set_as_top_level", 1, &canvas_item_class_set_as_top_level),
	JS_CFUNC_DEF("is_set_as_top_level", 0, &canvas_item_class_is_set_as_top_level),
	JS_CFUNC_DEF("set_light_mask", 1, &canvas_item_class_set_light_mask),
	JS_CFUNC_DEF("get_light_mask", 0, &canvas_item_class_get_light_mask),
	JS_CFUNC_DEF("set_modulate", 1, &canvas_item_class_set_modulate),
	JS_CFUNC_DEF("get_modulate", 0, &canvas_item_class_get_modulate),
	JS_CFUNC_DEF("set_self_modulate", 1, &canvas_item_class_set_self_modulate),
	JS_CFUNC_DEF("get_self_modulate", 0, &canvas_item_class_get_self_modulate),
	JS_CFUNC_DEF("set_z_index", 1, &canvas_item_class_set_z_index),
	JS_CFUNC_DEF("get_z_index", 0, &canvas_item_class_get_z_index),
	JS_CFUNC_DEF("set_z_as_relative", 1, &canvas_item_class_set_z_as_relative),
	JS_CFUNC_DEF("is_z_relative", 0, &canvas_item_class_is_z_relative),
	JS_CFUNC_DEF("set_y_sort_enabled", 1, &canvas_item_class_set_y_sort_enabled),
	JS_CFUNC_DEF("is_y_sort_enabled", 0, &canvas_item_class_is_y_sort_enabled),
	JS_CFUNC_DEF("set_draw_behind_parent", 1, &canvas_item_class_set_draw_behind_parent),
	JS_CFUNC_DEF("is_draw_behind_parent_enabled", 0, &canvas_item_class_is_draw_behind_parent_enabled),
	JS_CFUNC_DEF("draw_line", 5, &canvas_item_class_draw_line),
	JS_CFUNC_DEF("draw_dashed_line", 7, &canvas_item_class_draw_dashed_line),
	JS_CFUNC_DEF("draw_polyline", 4, &canvas_item_class_draw_polyline),
	JS_CFUNC_DEF("draw_polyline_colors", 4, &canvas_item_class_draw_polyline_colors),
	JS_CFUNC_DEF("draw_arc", 8, &canvas_item_class_draw_arc),
	JS_CFUNC_DEF("draw_multiline", 4, &canvas_item_class_draw_multiline),
	JS_CFUNC_DEF("draw_multiline_colors", 4, &canvas_item_class_draw_multiline_colors),
	JS_CFUNC_DEF("draw_rect", 5, &canvas_item_class_draw_rect),
	JS_CFUNC_DEF("draw_circle", 6, &canvas_item_class_draw_circle),
	JS_CFUNC_DEF("draw_texture", 3, &canvas_item_class_draw_texture),
	JS_CFUNC_DEF("draw_texture_rect", 5, &canvas_item_class_draw_texture_rect),
	JS_CFUNC_DEF("draw_texture_rect_region", 6, &canvas_item_class_draw_texture_rect_region),
	JS_CFUNC_DEF("draw_msdf_texture_rect_region", 7, &canvas_item_class_draw_msdf_texture_rect_region),
	JS_CFUNC_DEF("draw_lcd_texture_rect_region", 4, &canvas_item_class_draw_lcd_texture_rect_region),
	JS_CFUNC_DEF("draw_style_box", 2, &canvas_item_class_draw_style_box),
	JS_CFUNC_DEF("draw_primitive", 4, &canvas_item_class_draw_primitive),
	JS_CFUNC_DEF("draw_polygon", 4, &canvas_item_class_draw_polygon),
	JS_CFUNC_DEF("draw_colored_polygon", 4, &canvas_item_class_draw_colored_polygon),
	JS_CFUNC_DEF("draw_string", 10, &canvas_item_class_draw_string),
	JS_CFUNC_DEF("draw_multiline_string", 12, &canvas_item_class_draw_multiline_string),
	JS_CFUNC_DEF("draw_string_outline", 11, &canvas_item_class_draw_string_outline),
	JS_CFUNC_DEF("draw_multiline_string_outline", 13, &canvas_item_class_draw_multiline_string_outline),
	JS_CFUNC_DEF("draw_char", 5, &canvas_item_class_draw_char),
	JS_CFUNC_DEF("draw_char_outline", 6, &canvas_item_class_draw_char_outline),
	JS_CFUNC_DEF("draw_mesh", 4, &canvas_item_class_draw_mesh),
	JS_CFUNC_DEF("draw_multimesh", 2, &canvas_item_class_draw_multimesh),
	JS_CFUNC_DEF("draw_set_transform", 3, &canvas_item_class_draw_set_transform),
	JS_CFUNC_DEF("draw_set_transform_matrix", 1, &canvas_item_class_draw_set_transform_matrix),
	JS_CFUNC_DEF("draw_animation_slice", 4, &canvas_item_class_draw_animation_slice),
	JS_CFUNC_DEF("draw_end_animation", 0, &canvas_item_class_draw_end_animation),
	JS_CFUNC_DEF("get_transform", 0, &canvas_item_class_get_transform),
	JS_CFUNC_DEF("get_global_transform", 0, &canvas_item_class_get_global_transform),
	JS_CFUNC_DEF("get_global_transform_with_canvas", 0, &canvas_item_class_get_global_transform_with_canvas),
	JS_CFUNC_DEF("get_viewport_transform", 0, &canvas_item_class_get_viewport_transform),
	JS_CFUNC_DEF("get_viewport_rect", 0, &canvas_item_class_get_viewport_rect),
	JS_CFUNC_DEF("get_canvas_transform", 0, &canvas_item_class_get_canvas_transform),
	JS_CFUNC_DEF("get_screen_transform", 0, &canvas_item_class_get_screen_transform),
	JS_CFUNC_DEF("get_local_mouse_position", 0, &canvas_item_class_get_local_mouse_position),
	JS_CFUNC_DEF("get_global_mouse_position", 0, &canvas_item_class_get_global_mouse_position),
	JS_CFUNC_DEF("get_canvas", 0, &canvas_item_class_get_canvas),
	JS_CFUNC_DEF("get_canvas_layer_node", 0, &canvas_item_class_get_canvas_layer_node),
	JS_CFUNC_DEF("get_world_2d", 0, &canvas_item_class_get_world_2d),
	JS_CFUNC_DEF("set_material", 1, &canvas_item_class_set_material),
	JS_CFUNC_DEF("get_material", 0, &canvas_item_class_get_material),
	JS_CFUNC_DEF("set_use_parent_material", 1, &canvas_item_class_set_use_parent_material),
	JS_CFUNC_DEF("get_use_parent_material", 0, &canvas_item_class_get_use_parent_material),
	JS_CFUNC_DEF("set_notify_local_transform", 1, &canvas_item_class_set_notify_local_transform),
	JS_CFUNC_DEF("is_local_transform_notification_enabled", 0, &canvas_item_class_is_local_transform_notification_enabled),
	JS_CFUNC_DEF("set_notify_transform", 1, &canvas_item_class_set_notify_transform),
	JS_CFUNC_DEF("is_transform_notification_enabled", 0, &canvas_item_class_is_transform_notification_enabled),
	JS_CFUNC_DEF("force_update_transform", 0, &canvas_item_class_force_update_transform),
	JS_CFUNC_DEF("make_canvas_position_local", 1, &canvas_item_class_make_canvas_position_local),
	JS_CFUNC_DEF("make_input_local", 1, &canvas_item_class_make_input_local),
	JS_CFUNC_DEF("set_visibility_layer", 1, &canvas_item_class_set_visibility_layer),
	JS_CFUNC_DEF("get_visibility_layer", 0, &canvas_item_class_get_visibility_layer),
	JS_CFUNC_DEF("set_visibility_layer_bit", 2, &canvas_item_class_set_visibility_layer_bit),
	JS_CFUNC_DEF("get_visibility_layer_bit", 1, &canvas_item_class_get_visibility_layer_bit),
	JS_CFUNC_DEF("set_texture_filter", 1, &canvas_item_class_set_texture_filter),
	JS_CFUNC_DEF("get_texture_filter", 0, &canvas_item_class_get_texture_filter),
	JS_CFUNC_DEF("set_texture_repeat", 1, &canvas_item_class_set_texture_repeat),
	JS_CFUNC_DEF("get_texture_repeat", 0, &canvas_item_class_get_texture_repeat),
	JS_CFUNC_DEF("set_clip_children_mode", 1, &canvas_item_class_set_clip_children_mode),
	JS_CFUNC_DEF("get_clip_children_mode", 0, &canvas_item_class_get_clip_children_mode),
};

void define_canvas_item_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "visible"),
        JS_NewCFunction(ctx, canvas_item_class_is_visible, "is_visible", 0),
        JS_NewCFunction(ctx, canvas_item_class_set_visible, "set_visible", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "modulate"),
        JS_NewCFunction(ctx, canvas_item_class_get_modulate, "get_modulate", 0),
        JS_NewCFunction(ctx, canvas_item_class_set_modulate, "set_modulate", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "self_modulate"),
        JS_NewCFunction(ctx, canvas_item_class_get_self_modulate, "get_self_modulate", 0),
        JS_NewCFunction(ctx, canvas_item_class_set_self_modulate, "set_self_modulate", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "show_behind_parent"),
        JS_NewCFunction(ctx, canvas_item_class_is_draw_behind_parent_enabled, "is_draw_behind_parent_enabled", 0),
        JS_NewCFunction(ctx, canvas_item_class_set_draw_behind_parent, "set_draw_behind_parent", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "top_level"),
        JS_NewCFunction(ctx, canvas_item_class_is_set_as_top_level, "is_set_as_top_level", 0),
        JS_NewCFunction(ctx, canvas_item_class_set_as_top_level, "set_as_top_level", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "clip_children"),
        JS_NewCFunction(ctx, canvas_item_class_get_clip_children_mode, "get_clip_children_mode", 0),
        JS_NewCFunction(ctx, canvas_item_class_set_clip_children_mode, "set_clip_children_mode", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "light_mask"),
        JS_NewCFunction(ctx, canvas_item_class_get_light_mask, "get_light_mask", 0),
        JS_NewCFunction(ctx, canvas_item_class_set_light_mask, "set_light_mask", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "visibility_layer"),
        JS_NewCFunction(ctx, canvas_item_class_get_visibility_layer, "get_visibility_layer", 0),
        JS_NewCFunction(ctx, canvas_item_class_set_visibility_layer, "set_visibility_layer", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "z_index"),
        JS_NewCFunction(ctx, canvas_item_class_get_z_index, "get_z_index", 0),
        JS_NewCFunction(ctx, canvas_item_class_set_z_index, "set_z_index", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "z_as_relative"),
        JS_NewCFunction(ctx, canvas_item_class_is_z_relative, "is_z_relative", 0),
        JS_NewCFunction(ctx, canvas_item_class_set_z_as_relative, "set_z_as_relative", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "y_sort_enabled"),
        JS_NewCFunction(ctx, canvas_item_class_is_y_sort_enabled, "is_y_sort_enabled", 0),
        JS_NewCFunction(ctx, canvas_item_class_set_y_sort_enabled, "set_y_sort_enabled", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "texture_filter"),
        JS_NewCFunction(ctx, canvas_item_class_get_texture_filter, "get_texture_filter", 0),
        JS_NewCFunction(ctx, canvas_item_class_set_texture_filter, "set_texture_filter", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "texture_repeat"),
        JS_NewCFunction(ctx, canvas_item_class_get_texture_repeat, "get_texture_repeat", 0),
        JS_NewCFunction(ctx, canvas_item_class_set_texture_repeat, "set_texture_repeat", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "material"),
        JS_NewCFunction(ctx, canvas_item_class_get_material, "get_material", 0),
        JS_NewCFunction(ctx, canvas_item_class_set_material, "set_material", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "use_parent_material"),
        JS_NewCFunction(ctx, canvas_item_class_get_use_parent_material, "get_use_parent_material", 0),
        JS_NewCFunction(ctx, canvas_item_class_set_use_parent_material, "set_use_parent_material", 1),
        JS_PROP_GETSET
    );
}

static int js_canvas_item_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&CanvasItem::__class_id);
	classes["CanvasItem"] = CanvasItem::__class_id;
	class_id_list.insert(CanvasItem::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), CanvasItem::__class_id, &canvas_item_class_def);

	JSValue proto = JS_NewObjectClass(ctx, CanvasItem::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Node::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, CanvasItem::__class_id, proto);

	define_canvas_item_property(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, canvas_item_class_proto_funcs, _countof(canvas_item_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, canvas_item_class_constructor, "CanvasItem", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "CanvasItem", ctor);

	return 0;
}

JSModuleDef *_js_init_canvas_item_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/node';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_canvas_item_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "CanvasItem");
	return m;
}

JSModuleDef *js_init_canvas_item_module(JSContext *ctx) {
	return _js_init_canvas_item_module(ctx, "godot/classes/canvas_item");
}

void register_canvas_item() {
	CanvasItem::__init_js_class_id();
	js_init_canvas_item_module(ctx);
}