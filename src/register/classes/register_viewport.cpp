
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/viewport.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/input_event.hpp>
#include <godot_cpp/classes/world3d.hpp>
#include <godot_cpp/classes/control.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/classes/camera2d.hpp>
#include <godot_cpp/classes/camera3d.hpp>
#include <godot_cpp/classes/window.hpp>
#include <godot_cpp/classes/world2d.hpp>
#include <godot_cpp/classes/viewport_texture.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void viewport_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef viewport_class_def = {
	"Viewport",
	.finalizer = viewport_class_finalizer
};

static JSValue viewport_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, Viewport::__class_id);
	if (JS_IsException(obj))
		return obj;
	Viewport *viewport_class = memnew(Viewport);
	if (!viewport_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, viewport_class);	
	return obj;
}
static JSValue viewport_class_set_world_2d(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Viewport::set_world_2d, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue viewport_class_get_world_2d(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Viewport::get_world_2d, ctx, this_val, argc, argv);
};
static JSValue viewport_class_find_world_2d(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Viewport::find_world_2d, ctx, this_val, argc, argv);
};
static JSValue viewport_class_set_canvas_transform(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Viewport::set_canvas_transform, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue viewport_class_get_canvas_transform(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Viewport::get_canvas_transform, ctx, this_val, argc, argv);
};
static JSValue viewport_class_set_global_canvas_transform(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Viewport::set_global_canvas_transform, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue viewport_class_get_global_canvas_transform(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Viewport::get_global_canvas_transform, ctx, this_val, argc, argv);
};
static JSValue viewport_class_get_final_transform(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Viewport::get_final_transform, ctx, this_val, argc, argv);
};
static JSValue viewport_class_get_screen_transform(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Viewport::get_screen_transform, ctx, this_val, argc, argv);
};
static JSValue viewport_class_get_visible_rect(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Viewport::get_visible_rect, ctx, this_val, argc, argv);
};
static JSValue viewport_class_set_transparent_background(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Viewport::set_transparent_background, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue viewport_class_has_transparent_background(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Viewport::has_transparent_background, ctx, this_val, argc, argv);
};
static JSValue viewport_class_set_use_hdr_2d(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Viewport::set_use_hdr_2d, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue viewport_class_is_using_hdr_2d(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Viewport::is_using_hdr_2d, ctx, this_val, argc, argv);
};
static JSValue viewport_class_set_msaa_2d(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Viewport::set_msaa_2d, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue viewport_class_get_msaa_2d(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Viewport::get_msaa_2d, ctx, this_val, argc, argv);
};
static JSValue viewport_class_set_msaa_3d(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Viewport::set_msaa_3d, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue viewport_class_get_msaa_3d(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Viewport::get_msaa_3d, ctx, this_val, argc, argv);
};
static JSValue viewport_class_set_screen_space_aa(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Viewport::set_screen_space_aa, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue viewport_class_get_screen_space_aa(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Viewport::get_screen_space_aa, ctx, this_val, argc, argv);
};
static JSValue viewport_class_set_use_taa(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Viewport::set_use_taa, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue viewport_class_is_using_taa(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Viewport::is_using_taa, ctx, this_val, argc, argv);
};
static JSValue viewport_class_set_use_debanding(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Viewport::set_use_debanding, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue viewport_class_is_using_debanding(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Viewport::is_using_debanding, ctx, this_val, argc, argv);
};
static JSValue viewport_class_set_use_occlusion_culling(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Viewport::set_use_occlusion_culling, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue viewport_class_is_using_occlusion_culling(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Viewport::is_using_occlusion_culling, ctx, this_val, argc, argv);
};
static JSValue viewport_class_set_debug_draw(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Viewport::set_debug_draw, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue viewport_class_get_debug_draw(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Viewport::get_debug_draw, ctx, this_val, argc, argv);
};
static JSValue viewport_class_get_render_info(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Viewport::get_render_info, ctx, this_val, argc, argv);
};
static JSValue viewport_class_get_texture(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Viewport::get_texture, ctx, this_val, argc, argv);
};
static JSValue viewport_class_set_physics_object_picking(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Viewport::set_physics_object_picking, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue viewport_class_get_physics_object_picking(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Viewport::get_physics_object_picking, ctx, this_val, argc, argv);
};
static JSValue viewport_class_set_physics_object_picking_sort(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Viewport::set_physics_object_picking_sort, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue viewport_class_get_physics_object_picking_sort(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Viewport::get_physics_object_picking_sort, ctx, this_val, argc, argv);
};
static JSValue viewport_class_set_physics_object_picking_first_only(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Viewport::set_physics_object_picking_first_only, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue viewport_class_get_physics_object_picking_first_only(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Viewport::get_physics_object_picking_first_only, ctx, this_val, argc, argv);
};
static JSValue viewport_class_get_viewport_rid(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Viewport::get_viewport_rid, ctx, this_val, argc, argv);
};
static JSValue viewport_class_push_text_input(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Viewport::push_text_input, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue viewport_class_push_input(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Viewport::push_input, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue viewport_class_push_unhandled_input(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Viewport::push_unhandled_input, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue viewport_class_get_mouse_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Viewport::get_mouse_position, ctx, this_val, argc, argv);
};
static JSValue viewport_class_warp_mouse(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Viewport::warp_mouse, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue viewport_class_update_mouse_cursor_state(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Viewport::update_mouse_cursor_state, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue viewport_class_gui_get_drag_data(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Viewport::gui_get_drag_data, ctx, this_val, argc, argv);
};
static JSValue viewport_class_gui_is_dragging(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Viewport::gui_is_dragging, ctx, this_val, argc, argv);
};
static JSValue viewport_class_gui_is_drag_successful(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Viewport::gui_is_drag_successful, ctx, this_val, argc, argv);
};
static JSValue viewport_class_gui_release_focus(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Viewport::gui_release_focus, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue viewport_class_gui_get_focus_owner(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Viewport::gui_get_focus_owner, ctx, this_val, argc, argv);
};
static JSValue viewport_class_gui_get_hovered_control(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Viewport::gui_get_hovered_control, ctx, this_val, argc, argv);
};
static JSValue viewport_class_set_disable_input(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Viewport::set_disable_input, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue viewport_class_is_input_disabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Viewport::is_input_disabled, ctx, this_val, argc, argv);
};
static JSValue viewport_class_set_positional_shadow_atlas_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Viewport::set_positional_shadow_atlas_size, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue viewport_class_get_positional_shadow_atlas_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Viewport::get_positional_shadow_atlas_size, ctx, this_val, argc, argv);
};
static JSValue viewport_class_set_positional_shadow_atlas_16_bits(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Viewport::set_positional_shadow_atlas_16_bits, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue viewport_class_get_positional_shadow_atlas_16_bits(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Viewport::get_positional_shadow_atlas_16_bits, ctx, this_val, argc, argv);
};
static JSValue viewport_class_set_snap_controls_to_pixels(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Viewport::set_snap_controls_to_pixels, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue viewport_class_is_snap_controls_to_pixels_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Viewport::is_snap_controls_to_pixels_enabled, ctx, this_val, argc, argv);
};
static JSValue viewport_class_set_snap_2d_transforms_to_pixel(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Viewport::set_snap_2d_transforms_to_pixel, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue viewport_class_is_snap_2d_transforms_to_pixel_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Viewport::is_snap_2d_transforms_to_pixel_enabled, ctx, this_val, argc, argv);
};
static JSValue viewport_class_set_snap_2d_vertices_to_pixel(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Viewport::set_snap_2d_vertices_to_pixel, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue viewport_class_is_snap_2d_vertices_to_pixel_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Viewport::is_snap_2d_vertices_to_pixel_enabled, ctx, this_val, argc, argv);
};
static JSValue viewport_class_set_positional_shadow_atlas_quadrant_subdiv(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Viewport::set_positional_shadow_atlas_quadrant_subdiv, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue viewport_class_get_positional_shadow_atlas_quadrant_subdiv(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Viewport::get_positional_shadow_atlas_quadrant_subdiv, ctx, this_val, argc, argv);
};
static JSValue viewport_class_set_input_as_handled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Viewport::set_input_as_handled, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue viewport_class_is_input_handled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Viewport::is_input_handled, ctx, this_val, argc, argv);
};
static JSValue viewport_class_set_handle_input_locally(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Viewport::set_handle_input_locally, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue viewport_class_is_handling_input_locally(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Viewport::is_handling_input_locally, ctx, this_val, argc, argv);
};
static JSValue viewport_class_set_default_canvas_item_texture_filter(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Viewport::set_default_canvas_item_texture_filter, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue viewport_class_get_default_canvas_item_texture_filter(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Viewport::get_default_canvas_item_texture_filter, ctx, this_val, argc, argv);
};
static JSValue viewport_class_set_embedding_subwindows(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Viewport::set_embedding_subwindows, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue viewport_class_is_embedding_subwindows(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Viewport::is_embedding_subwindows, ctx, this_val, argc, argv);
};
static JSValue viewport_class_get_embedded_subwindows(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Viewport::get_embedded_subwindows, ctx, this_val, argc, argv);
};
static JSValue viewport_class_set_canvas_cull_mask(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Viewport::set_canvas_cull_mask, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue viewport_class_get_canvas_cull_mask(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Viewport::get_canvas_cull_mask, ctx, this_val, argc, argv);
};
static JSValue viewport_class_set_canvas_cull_mask_bit(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Viewport::set_canvas_cull_mask_bit, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue viewport_class_get_canvas_cull_mask_bit(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Viewport::get_canvas_cull_mask_bit, ctx, this_val, argc, argv);
};
static JSValue viewport_class_set_default_canvas_item_texture_repeat(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Viewport::set_default_canvas_item_texture_repeat, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue viewport_class_get_default_canvas_item_texture_repeat(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Viewport::get_default_canvas_item_texture_repeat, ctx, this_val, argc, argv);
};
static JSValue viewport_class_set_sdf_oversize(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Viewport::set_sdf_oversize, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue viewport_class_get_sdf_oversize(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Viewport::get_sdf_oversize, ctx, this_val, argc, argv);
};
static JSValue viewport_class_set_sdf_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Viewport::set_sdf_scale, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue viewport_class_get_sdf_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Viewport::get_sdf_scale, ctx, this_val, argc, argv);
};
static JSValue viewport_class_set_mesh_lod_threshold(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Viewport::set_mesh_lod_threshold, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue viewport_class_get_mesh_lod_threshold(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Viewport::get_mesh_lod_threshold, ctx, this_val, argc, argv);
};
static JSValue viewport_class_set_as_audio_listener_2d(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Viewport::set_as_audio_listener_2d, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue viewport_class_is_audio_listener_2d(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Viewport::is_audio_listener_2d, ctx, this_val, argc, argv);
};
static JSValue viewport_class_get_camera_2d(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Viewport::get_camera_2d, ctx, this_val, argc, argv);
};
static JSValue viewport_class_set_world_3d(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Viewport::set_world_3d, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue viewport_class_get_world_3d(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Viewport::get_world_3d, ctx, this_val, argc, argv);
};
static JSValue viewport_class_find_world_3d(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Viewport::find_world_3d, ctx, this_val, argc, argv);
};
static JSValue viewport_class_set_use_own_world_3d(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Viewport::set_use_own_world_3d, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue viewport_class_is_using_own_world_3d(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Viewport::is_using_own_world_3d, ctx, this_val, argc, argv);
};
static JSValue viewport_class_get_camera_3d(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Viewport::get_camera_3d, ctx, this_val, argc, argv);
};
static JSValue viewport_class_set_as_audio_listener_3d(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Viewport::set_as_audio_listener_3d, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue viewport_class_is_audio_listener_3d(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Viewport::is_audio_listener_3d, ctx, this_val, argc, argv);
};
static JSValue viewport_class_set_disable_3d(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Viewport::set_disable_3d, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue viewport_class_is_3d_disabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Viewport::is_3d_disabled, ctx, this_val, argc, argv);
};
static JSValue viewport_class_set_use_xr(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Viewport::set_use_xr, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue viewport_class_is_using_xr(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Viewport::is_using_xr, ctx, this_val, argc, argv);
};
static JSValue viewport_class_set_scaling_3d_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Viewport::set_scaling_3d_mode, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue viewport_class_get_scaling_3d_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Viewport::get_scaling_3d_mode, ctx, this_val, argc, argv);
};
static JSValue viewport_class_set_scaling_3d_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Viewport::set_scaling_3d_scale, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue viewport_class_get_scaling_3d_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Viewport::get_scaling_3d_scale, ctx, this_val, argc, argv);
};
static JSValue viewport_class_set_fsr_sharpness(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Viewport::set_fsr_sharpness, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue viewport_class_get_fsr_sharpness(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Viewport::get_fsr_sharpness, ctx, this_val, argc, argv);
};
static JSValue viewport_class_set_texture_mipmap_bias(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Viewport::set_texture_mipmap_bias, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue viewport_class_get_texture_mipmap_bias(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Viewport::get_texture_mipmap_bias, ctx, this_val, argc, argv);
};
static JSValue viewport_class_set_vrs_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Viewport::set_vrs_mode, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue viewport_class_get_vrs_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Viewport::get_vrs_mode, ctx, this_val, argc, argv);
};
static JSValue viewport_class_set_vrs_update_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Viewport::set_vrs_update_mode, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue viewport_class_get_vrs_update_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Viewport::get_vrs_update_mode, ctx, this_val, argc, argv);
};
static JSValue viewport_class_set_vrs_texture(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Viewport::set_vrs_texture, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue viewport_class_get_vrs_texture(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Viewport::get_vrs_texture, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry viewport_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_world_2d", 1, &viewport_class_set_world_2d),
	JS_CFUNC_DEF("get_world_2d", 0, &viewport_class_get_world_2d),
	JS_CFUNC_DEF("find_world_2d", 0, &viewport_class_find_world_2d),
	JS_CFUNC_DEF("set_canvas_transform", 1, &viewport_class_set_canvas_transform),
	JS_CFUNC_DEF("get_canvas_transform", 0, &viewport_class_get_canvas_transform),
	JS_CFUNC_DEF("set_global_canvas_transform", 1, &viewport_class_set_global_canvas_transform),
	JS_CFUNC_DEF("get_global_canvas_transform", 0, &viewport_class_get_global_canvas_transform),
	JS_CFUNC_DEF("get_final_transform", 0, &viewport_class_get_final_transform),
	JS_CFUNC_DEF("get_screen_transform", 0, &viewport_class_get_screen_transform),
	JS_CFUNC_DEF("get_visible_rect", 0, &viewport_class_get_visible_rect),
	JS_CFUNC_DEF("set_transparent_background", 1, &viewport_class_set_transparent_background),
	JS_CFUNC_DEF("has_transparent_background", 0, &viewport_class_has_transparent_background),
	JS_CFUNC_DEF("set_use_hdr_2d", 1, &viewport_class_set_use_hdr_2d),
	JS_CFUNC_DEF("is_using_hdr_2d", 0, &viewport_class_is_using_hdr_2d),
	JS_CFUNC_DEF("set_msaa_2d", 1, &viewport_class_set_msaa_2d),
	JS_CFUNC_DEF("get_msaa_2d", 0, &viewport_class_get_msaa_2d),
	JS_CFUNC_DEF("set_msaa_3d", 1, &viewport_class_set_msaa_3d),
	JS_CFUNC_DEF("get_msaa_3d", 0, &viewport_class_get_msaa_3d),
	JS_CFUNC_DEF("set_screen_space_aa", 1, &viewport_class_set_screen_space_aa),
	JS_CFUNC_DEF("get_screen_space_aa", 0, &viewport_class_get_screen_space_aa),
	JS_CFUNC_DEF("set_use_taa", 1, &viewport_class_set_use_taa),
	JS_CFUNC_DEF("is_using_taa", 0, &viewport_class_is_using_taa),
	JS_CFUNC_DEF("set_use_debanding", 1, &viewport_class_set_use_debanding),
	JS_CFUNC_DEF("is_using_debanding", 0, &viewport_class_is_using_debanding),
	JS_CFUNC_DEF("set_use_occlusion_culling", 1, &viewport_class_set_use_occlusion_culling),
	JS_CFUNC_DEF("is_using_occlusion_culling", 0, &viewport_class_is_using_occlusion_culling),
	JS_CFUNC_DEF("set_debug_draw", 1, &viewport_class_set_debug_draw),
	JS_CFUNC_DEF("get_debug_draw", 0, &viewport_class_get_debug_draw),
	JS_CFUNC_DEF("get_render_info", 2, &viewport_class_get_render_info),
	JS_CFUNC_DEF("get_texture", 0, &viewport_class_get_texture),
	JS_CFUNC_DEF("set_physics_object_picking", 1, &viewport_class_set_physics_object_picking),
	JS_CFUNC_DEF("get_physics_object_picking", 0, &viewport_class_get_physics_object_picking),
	JS_CFUNC_DEF("set_physics_object_picking_sort", 1, &viewport_class_set_physics_object_picking_sort),
	JS_CFUNC_DEF("get_physics_object_picking_sort", 0, &viewport_class_get_physics_object_picking_sort),
	JS_CFUNC_DEF("set_physics_object_picking_first_only", 1, &viewport_class_set_physics_object_picking_first_only),
	JS_CFUNC_DEF("get_physics_object_picking_first_only", 0, &viewport_class_get_physics_object_picking_first_only),
	JS_CFUNC_DEF("get_viewport_rid", 0, &viewport_class_get_viewport_rid),
	JS_CFUNC_DEF("push_text_input", 1, &viewport_class_push_text_input),
	JS_CFUNC_DEF("push_input", 2, &viewport_class_push_input),
	JS_CFUNC_DEF("push_unhandled_input", 2, &viewport_class_push_unhandled_input),
	JS_CFUNC_DEF("get_mouse_position", 0, &viewport_class_get_mouse_position),
	JS_CFUNC_DEF("warp_mouse", 1, &viewport_class_warp_mouse),
	JS_CFUNC_DEF("update_mouse_cursor_state", 0, &viewport_class_update_mouse_cursor_state),
	JS_CFUNC_DEF("gui_get_drag_data", 0, &viewport_class_gui_get_drag_data),
	JS_CFUNC_DEF("gui_is_dragging", 0, &viewport_class_gui_is_dragging),
	JS_CFUNC_DEF("gui_is_drag_successful", 0, &viewport_class_gui_is_drag_successful),
	JS_CFUNC_DEF("gui_release_focus", 0, &viewport_class_gui_release_focus),
	JS_CFUNC_DEF("gui_get_focus_owner", 0, &viewport_class_gui_get_focus_owner),
	JS_CFUNC_DEF("gui_get_hovered_control", 0, &viewport_class_gui_get_hovered_control),
	JS_CFUNC_DEF("set_disable_input", 1, &viewport_class_set_disable_input),
	JS_CFUNC_DEF("is_input_disabled", 0, &viewport_class_is_input_disabled),
	JS_CFUNC_DEF("set_positional_shadow_atlas_size", 1, &viewport_class_set_positional_shadow_atlas_size),
	JS_CFUNC_DEF("get_positional_shadow_atlas_size", 0, &viewport_class_get_positional_shadow_atlas_size),
	JS_CFUNC_DEF("set_positional_shadow_atlas_16_bits", 1, &viewport_class_set_positional_shadow_atlas_16_bits),
	JS_CFUNC_DEF("get_positional_shadow_atlas_16_bits", 0, &viewport_class_get_positional_shadow_atlas_16_bits),
	JS_CFUNC_DEF("set_snap_controls_to_pixels", 1, &viewport_class_set_snap_controls_to_pixels),
	JS_CFUNC_DEF("is_snap_controls_to_pixels_enabled", 0, &viewport_class_is_snap_controls_to_pixels_enabled),
	JS_CFUNC_DEF("set_snap_2d_transforms_to_pixel", 1, &viewport_class_set_snap_2d_transforms_to_pixel),
	JS_CFUNC_DEF("is_snap_2d_transforms_to_pixel_enabled", 0, &viewport_class_is_snap_2d_transforms_to_pixel_enabled),
	JS_CFUNC_DEF("set_snap_2d_vertices_to_pixel", 1, &viewport_class_set_snap_2d_vertices_to_pixel),
	JS_CFUNC_DEF("is_snap_2d_vertices_to_pixel_enabled", 0, &viewport_class_is_snap_2d_vertices_to_pixel_enabled),
	JS_CFUNC_DEF("set_positional_shadow_atlas_quadrant_subdiv", 2, &viewport_class_set_positional_shadow_atlas_quadrant_subdiv),
	JS_CFUNC_DEF("get_positional_shadow_atlas_quadrant_subdiv", 1, &viewport_class_get_positional_shadow_atlas_quadrant_subdiv),
	JS_CFUNC_DEF("set_input_as_handled", 0, &viewport_class_set_input_as_handled),
	JS_CFUNC_DEF("is_input_handled", 0, &viewport_class_is_input_handled),
	JS_CFUNC_DEF("set_handle_input_locally", 1, &viewport_class_set_handle_input_locally),
	JS_CFUNC_DEF("is_handling_input_locally", 0, &viewport_class_is_handling_input_locally),
	JS_CFUNC_DEF("set_default_canvas_item_texture_filter", 1, &viewport_class_set_default_canvas_item_texture_filter),
	JS_CFUNC_DEF("get_default_canvas_item_texture_filter", 0, &viewport_class_get_default_canvas_item_texture_filter),
	JS_CFUNC_DEF("set_embedding_subwindows", 1, &viewport_class_set_embedding_subwindows),
	JS_CFUNC_DEF("is_embedding_subwindows", 0, &viewport_class_is_embedding_subwindows),
	JS_CFUNC_DEF("get_embedded_subwindows", 0, &viewport_class_get_embedded_subwindows),
	JS_CFUNC_DEF("set_canvas_cull_mask", 1, &viewport_class_set_canvas_cull_mask),
	JS_CFUNC_DEF("get_canvas_cull_mask", 0, &viewport_class_get_canvas_cull_mask),
	JS_CFUNC_DEF("set_canvas_cull_mask_bit", 2, &viewport_class_set_canvas_cull_mask_bit),
	JS_CFUNC_DEF("get_canvas_cull_mask_bit", 1, &viewport_class_get_canvas_cull_mask_bit),
	JS_CFUNC_DEF("set_default_canvas_item_texture_repeat", 1, &viewport_class_set_default_canvas_item_texture_repeat),
	JS_CFUNC_DEF("get_default_canvas_item_texture_repeat", 0, &viewport_class_get_default_canvas_item_texture_repeat),
	JS_CFUNC_DEF("set_sdf_oversize", 1, &viewport_class_set_sdf_oversize),
	JS_CFUNC_DEF("get_sdf_oversize", 0, &viewport_class_get_sdf_oversize),
	JS_CFUNC_DEF("set_sdf_scale", 1, &viewport_class_set_sdf_scale),
	JS_CFUNC_DEF("get_sdf_scale", 0, &viewport_class_get_sdf_scale),
	JS_CFUNC_DEF("set_mesh_lod_threshold", 1, &viewport_class_set_mesh_lod_threshold),
	JS_CFUNC_DEF("get_mesh_lod_threshold", 0, &viewport_class_get_mesh_lod_threshold),
	JS_CFUNC_DEF("set_as_audio_listener_2d", 1, &viewport_class_set_as_audio_listener_2d),
	JS_CFUNC_DEF("is_audio_listener_2d", 0, &viewport_class_is_audio_listener_2d),
	JS_CFUNC_DEF("get_camera_2d", 0, &viewport_class_get_camera_2d),
	JS_CFUNC_DEF("set_world_3d", 1, &viewport_class_set_world_3d),
	JS_CFUNC_DEF("get_world_3d", 0, &viewport_class_get_world_3d),
	JS_CFUNC_DEF("find_world_3d", 0, &viewport_class_find_world_3d),
	JS_CFUNC_DEF("set_use_own_world_3d", 1, &viewport_class_set_use_own_world_3d),
	JS_CFUNC_DEF("is_using_own_world_3d", 0, &viewport_class_is_using_own_world_3d),
	JS_CFUNC_DEF("get_camera_3d", 0, &viewport_class_get_camera_3d),
	JS_CFUNC_DEF("set_as_audio_listener_3d", 1, &viewport_class_set_as_audio_listener_3d),
	JS_CFUNC_DEF("is_audio_listener_3d", 0, &viewport_class_is_audio_listener_3d),
	JS_CFUNC_DEF("set_disable_3d", 1, &viewport_class_set_disable_3d),
	JS_CFUNC_DEF("is_3d_disabled", 0, &viewport_class_is_3d_disabled),
	JS_CFUNC_DEF("set_use_xr", 1, &viewport_class_set_use_xr),
	JS_CFUNC_DEF("is_using_xr", 0, &viewport_class_is_using_xr),
	JS_CFUNC_DEF("set_scaling_3d_mode", 1, &viewport_class_set_scaling_3d_mode),
	JS_CFUNC_DEF("get_scaling_3d_mode", 0, &viewport_class_get_scaling_3d_mode),
	JS_CFUNC_DEF("set_scaling_3d_scale", 1, &viewport_class_set_scaling_3d_scale),
	JS_CFUNC_DEF("get_scaling_3d_scale", 0, &viewport_class_get_scaling_3d_scale),
	JS_CFUNC_DEF("set_fsr_sharpness", 1, &viewport_class_set_fsr_sharpness),
	JS_CFUNC_DEF("get_fsr_sharpness", 0, &viewport_class_get_fsr_sharpness),
	JS_CFUNC_DEF("set_texture_mipmap_bias", 1, &viewport_class_set_texture_mipmap_bias),
	JS_CFUNC_DEF("get_texture_mipmap_bias", 0, &viewport_class_get_texture_mipmap_bias),
	JS_CFUNC_DEF("set_vrs_mode", 1, &viewport_class_set_vrs_mode),
	JS_CFUNC_DEF("get_vrs_mode", 0, &viewport_class_get_vrs_mode),
	JS_CFUNC_DEF("set_vrs_update_mode", 1, &viewport_class_set_vrs_update_mode),
	JS_CFUNC_DEF("get_vrs_update_mode", 0, &viewport_class_get_vrs_update_mode),
	JS_CFUNC_DEF("set_vrs_texture", 1, &viewport_class_set_vrs_texture),
	JS_CFUNC_DEF("get_vrs_texture", 0, &viewport_class_get_vrs_texture),
};

void define_viewport_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "disable_3d"),
        JS_NewCFunction(ctx, viewport_class_is_3d_disabled, "is_3d_disabled", 0),
        JS_NewCFunction(ctx, viewport_class_set_disable_3d, "set_disable_3d", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "use_xr"),
        JS_NewCFunction(ctx, viewport_class_is_using_xr, "is_using_xr", 0),
        JS_NewCFunction(ctx, viewport_class_set_use_xr, "set_use_xr", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "own_world_3d"),
        JS_NewCFunction(ctx, viewport_class_is_using_own_world_3d, "is_using_own_world_3d", 0),
        JS_NewCFunction(ctx, viewport_class_set_use_own_world_3d, "set_use_own_world_3d", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "world_3d"),
        JS_NewCFunction(ctx, viewport_class_get_world_3d, "get_world_3d", 0),
        JS_NewCFunction(ctx, viewport_class_set_world_3d, "set_world_3d", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "world_2d"),
        JS_NewCFunction(ctx, viewport_class_get_world_2d, "get_world_2d", 0),
        JS_NewCFunction(ctx, viewport_class_set_world_2d, "set_world_2d", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "transparent_bg"),
        JS_NewCFunction(ctx, viewport_class_has_transparent_background, "has_transparent_background", 0),
        JS_NewCFunction(ctx, viewport_class_set_transparent_background, "set_transparent_background", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "handle_input_locally"),
        JS_NewCFunction(ctx, viewport_class_is_handling_input_locally, "is_handling_input_locally", 0),
        JS_NewCFunction(ctx, viewport_class_set_handle_input_locally, "set_handle_input_locally", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "snap_2d_transforms_to_pixel"),
        JS_NewCFunction(ctx, viewport_class_is_snap_2d_transforms_to_pixel_enabled, "is_snap_2d_transforms_to_pixel_enabled", 0),
        JS_NewCFunction(ctx, viewport_class_set_snap_2d_transforms_to_pixel, "set_snap_2d_transforms_to_pixel", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "snap_2d_vertices_to_pixel"),
        JS_NewCFunction(ctx, viewport_class_is_snap_2d_vertices_to_pixel_enabled, "is_snap_2d_vertices_to_pixel_enabled", 0),
        JS_NewCFunction(ctx, viewport_class_set_snap_2d_vertices_to_pixel, "set_snap_2d_vertices_to_pixel", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "msaa_2d"),
        JS_NewCFunction(ctx, viewport_class_get_msaa_2d, "get_msaa_2d", 0),
        JS_NewCFunction(ctx, viewport_class_set_msaa_2d, "set_msaa_2d", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "msaa_3d"),
        JS_NewCFunction(ctx, viewport_class_get_msaa_3d, "get_msaa_3d", 0),
        JS_NewCFunction(ctx, viewport_class_set_msaa_3d, "set_msaa_3d", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "screen_space_aa"),
        JS_NewCFunction(ctx, viewport_class_get_screen_space_aa, "get_screen_space_aa", 0),
        JS_NewCFunction(ctx, viewport_class_set_screen_space_aa, "set_screen_space_aa", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "use_taa"),
        JS_NewCFunction(ctx, viewport_class_is_using_taa, "is_using_taa", 0),
        JS_NewCFunction(ctx, viewport_class_set_use_taa, "set_use_taa", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "use_debanding"),
        JS_NewCFunction(ctx, viewport_class_is_using_debanding, "is_using_debanding", 0),
        JS_NewCFunction(ctx, viewport_class_set_use_debanding, "set_use_debanding", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "use_occlusion_culling"),
        JS_NewCFunction(ctx, viewport_class_is_using_occlusion_culling, "is_using_occlusion_culling", 0),
        JS_NewCFunction(ctx, viewport_class_set_use_occlusion_culling, "set_use_occlusion_culling", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "mesh_lod_threshold"),
        JS_NewCFunction(ctx, viewport_class_get_mesh_lod_threshold, "get_mesh_lod_threshold", 0),
        JS_NewCFunction(ctx, viewport_class_set_mesh_lod_threshold, "set_mesh_lod_threshold", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "debug_draw"),
        JS_NewCFunction(ctx, viewport_class_get_debug_draw, "get_debug_draw", 0),
        JS_NewCFunction(ctx, viewport_class_set_debug_draw, "set_debug_draw", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "use_hdr_2d"),
        JS_NewCFunction(ctx, viewport_class_is_using_hdr_2d, "is_using_hdr_2d", 0),
        JS_NewCFunction(ctx, viewport_class_set_use_hdr_2d, "set_use_hdr_2d", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "scaling_3d_mode"),
        JS_NewCFunction(ctx, viewport_class_get_scaling_3d_mode, "get_scaling_3d_mode", 0),
        JS_NewCFunction(ctx, viewport_class_set_scaling_3d_mode, "set_scaling_3d_mode", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "scaling_3d_scale"),
        JS_NewCFunction(ctx, viewport_class_get_scaling_3d_scale, "get_scaling_3d_scale", 0),
        JS_NewCFunction(ctx, viewport_class_set_scaling_3d_scale, "set_scaling_3d_scale", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "texture_mipmap_bias"),
        JS_NewCFunction(ctx, viewport_class_get_texture_mipmap_bias, "get_texture_mipmap_bias", 0),
        JS_NewCFunction(ctx, viewport_class_set_texture_mipmap_bias, "set_texture_mipmap_bias", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "fsr_sharpness"),
        JS_NewCFunction(ctx, viewport_class_get_fsr_sharpness, "get_fsr_sharpness", 0),
        JS_NewCFunction(ctx, viewport_class_set_fsr_sharpness, "set_fsr_sharpness", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "vrs_mode"),
        JS_NewCFunction(ctx, viewport_class_get_vrs_mode, "get_vrs_mode", 0),
        JS_NewCFunction(ctx, viewport_class_set_vrs_mode, "set_vrs_mode", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "vrs_update_mode"),
        JS_NewCFunction(ctx, viewport_class_get_vrs_update_mode, "get_vrs_update_mode", 0),
        JS_NewCFunction(ctx, viewport_class_set_vrs_update_mode, "set_vrs_update_mode", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "vrs_texture"),
        JS_NewCFunction(ctx, viewport_class_get_vrs_texture, "get_vrs_texture", 0),
        JS_NewCFunction(ctx, viewport_class_set_vrs_texture, "set_vrs_texture", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "canvas_item_default_texture_filter"),
        JS_NewCFunction(ctx, viewport_class_get_default_canvas_item_texture_filter, "get_default_canvas_item_texture_filter", 0),
        JS_NewCFunction(ctx, viewport_class_set_default_canvas_item_texture_filter, "set_default_canvas_item_texture_filter", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "canvas_item_default_texture_repeat"),
        JS_NewCFunction(ctx, viewport_class_get_default_canvas_item_texture_repeat, "get_default_canvas_item_texture_repeat", 0),
        JS_NewCFunction(ctx, viewport_class_set_default_canvas_item_texture_repeat, "set_default_canvas_item_texture_repeat", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "audio_listener_enable_2d"),
        JS_NewCFunction(ctx, viewport_class_is_audio_listener_2d, "is_audio_listener_2d", 0),
        JS_NewCFunction(ctx, viewport_class_set_as_audio_listener_2d, "set_as_audio_listener_2d", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "audio_listener_enable_3d"),
        JS_NewCFunction(ctx, viewport_class_is_audio_listener_3d, "is_audio_listener_3d", 0),
        JS_NewCFunction(ctx, viewport_class_set_as_audio_listener_3d, "set_as_audio_listener_3d", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "physics_object_picking"),
        JS_NewCFunction(ctx, viewport_class_get_physics_object_picking, "get_physics_object_picking", 0),
        JS_NewCFunction(ctx, viewport_class_set_physics_object_picking, "set_physics_object_picking", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "physics_object_picking_sort"),
        JS_NewCFunction(ctx, viewport_class_get_physics_object_picking_sort, "get_physics_object_picking_sort", 0),
        JS_NewCFunction(ctx, viewport_class_set_physics_object_picking_sort, "set_physics_object_picking_sort", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "physics_object_picking_first_only"),
        JS_NewCFunction(ctx, viewport_class_get_physics_object_picking_first_only, "get_physics_object_picking_first_only", 0),
        JS_NewCFunction(ctx, viewport_class_set_physics_object_picking_first_only, "set_physics_object_picking_first_only", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "gui_disable_input"),
        JS_NewCFunction(ctx, viewport_class_is_input_disabled, "is_input_disabled", 0),
        JS_NewCFunction(ctx, viewport_class_set_disable_input, "set_disable_input", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "gui_snap_controls_to_pixels"),
        JS_NewCFunction(ctx, viewport_class_is_snap_controls_to_pixels_enabled, "is_snap_controls_to_pixels_enabled", 0),
        JS_NewCFunction(ctx, viewport_class_set_snap_controls_to_pixels, "set_snap_controls_to_pixels", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "gui_embed_subwindows"),
        JS_NewCFunction(ctx, viewport_class_is_embedding_subwindows, "is_embedding_subwindows", 0),
        JS_NewCFunction(ctx, viewport_class_set_embedding_subwindows, "set_embedding_subwindows", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "sdf_oversize"),
        JS_NewCFunction(ctx, viewport_class_get_sdf_oversize, "get_sdf_oversize", 0),
        JS_NewCFunction(ctx, viewport_class_set_sdf_oversize, "set_sdf_oversize", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "sdf_scale"),
        JS_NewCFunction(ctx, viewport_class_get_sdf_scale, "get_sdf_scale", 0),
        JS_NewCFunction(ctx, viewport_class_set_sdf_scale, "set_sdf_scale", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "positional_shadow_atlas_size"),
        JS_NewCFunction(ctx, viewport_class_get_positional_shadow_atlas_size, "get_positional_shadow_atlas_size", 0),
        JS_NewCFunction(ctx, viewport_class_set_positional_shadow_atlas_size, "set_positional_shadow_atlas_size", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "positional_shadow_atlas_16_bits"),
        JS_NewCFunction(ctx, viewport_class_get_positional_shadow_atlas_16_bits, "get_positional_shadow_atlas_16_bits", 0),
        JS_NewCFunction(ctx, viewport_class_set_positional_shadow_atlas_16_bits, "set_positional_shadow_atlas_16_bits", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "positional_shadow_atlas_quad_0"),
        JS_NewCFunction(ctx, viewport_class_get_positional_shadow_atlas_quadrant_subdiv, "get_positional_shadow_atlas_quadrant_subdiv", 0),
        JS_NewCFunction(ctx, viewport_class_set_positional_shadow_atlas_quadrant_subdiv, "set_positional_shadow_atlas_quadrant_subdiv", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "positional_shadow_atlas_quad_1"),
        JS_NewCFunction(ctx, viewport_class_get_positional_shadow_atlas_quadrant_subdiv, "get_positional_shadow_atlas_quadrant_subdiv", 0),
        JS_NewCFunction(ctx, viewport_class_set_positional_shadow_atlas_quadrant_subdiv, "set_positional_shadow_atlas_quadrant_subdiv", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "positional_shadow_atlas_quad_2"),
        JS_NewCFunction(ctx, viewport_class_get_positional_shadow_atlas_quadrant_subdiv, "get_positional_shadow_atlas_quadrant_subdiv", 0),
        JS_NewCFunction(ctx, viewport_class_set_positional_shadow_atlas_quadrant_subdiv, "set_positional_shadow_atlas_quadrant_subdiv", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "positional_shadow_atlas_quad_3"),
        JS_NewCFunction(ctx, viewport_class_get_positional_shadow_atlas_quadrant_subdiv, "get_positional_shadow_atlas_quadrant_subdiv", 0),
        JS_NewCFunction(ctx, viewport_class_set_positional_shadow_atlas_quadrant_subdiv, "set_positional_shadow_atlas_quadrant_subdiv", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "canvas_transform"),
        JS_NewCFunction(ctx, viewport_class_get_canvas_transform, "get_canvas_transform", 0),
        JS_NewCFunction(ctx, viewport_class_set_canvas_transform, "set_canvas_transform", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "global_canvas_transform"),
        JS_NewCFunction(ctx, viewport_class_get_global_canvas_transform, "get_global_canvas_transform", 0),
        JS_NewCFunction(ctx, viewport_class_set_global_canvas_transform, "set_global_canvas_transform", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "canvas_cull_mask"),
        JS_NewCFunction(ctx, viewport_class_get_canvas_cull_mask, "get_canvas_cull_mask", 0),
        JS_NewCFunction(ctx, viewport_class_set_canvas_cull_mask, "set_canvas_cull_mask", 1),
        JS_PROP_GETSET
    );
}

static int js_viewport_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&Viewport::__class_id);
	classes["Viewport"] = Viewport::__class_id;
	class_id_list.insert(Viewport::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), Viewport::__class_id, &viewport_class_def);

	JSValue proto = JS_NewObjectClass(ctx, Viewport::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Node::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, Viewport::__class_id, proto);

	define_viewport_property(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, viewport_class_proto_funcs, _countof(viewport_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, viewport_class_constructor, "Viewport", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "Viewport", ctor);

	return 0;
}

JSModuleDef *_js_init_viewport_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/node';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_viewport_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "Viewport");
	return m;
}

JSModuleDef *js_init_viewport_module(JSContext *ctx) {
	return _js_init_viewport_module(ctx, "godot/classes/viewport");
}

void register_viewport() {
	Viewport::__init_js_class_id();
	js_init_viewport_module(ctx);
}