
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/animation.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void animation_class_finalizer(JSRuntime *rt, JSValue val) {
	Animation *animation = static_cast<Animation *>(JS_GetOpaque(val, Animation::__class_id));
	if (animation)
		Animation::free(nullptr, animation);
}

static JSClassDef animation_class_def = {
	"Animation",
	.finalizer = animation_class_finalizer
};

static JSValue animation_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	Animation *animation_class;
	JSValue obj = JS_NewObjectClass(ctx, Animation::__class_id);
	if (JS_IsException(obj))
		return obj;
	animation_class = memnew(Animation);
	if (!animation_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, animation_class);
	return obj;
}
static JSValue animation_class_add_track(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Animation::add_track, Animation::__class_id, ctx, this_val, argv);
};
static JSValue animation_class_remove_track(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Animation::remove_track, Animation::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue animation_class_get_track_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Animation::get_track_count, Animation::__class_id, ctx, this_val, argv);
};
static JSValue animation_class_track_get_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Animation::track_get_type, Animation::__class_id, ctx, this_val, argv);
};
static JSValue animation_class_track_get_path(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Animation::track_get_path, Animation::__class_id, ctx, this_val, argv);
};
static JSValue animation_class_track_set_path(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Animation::track_set_path, Animation::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue animation_class_find_track(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Animation::find_track, Animation::__class_id, ctx, this_val, argv);
};
static JSValue animation_class_track_move_up(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Animation::track_move_up, Animation::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue animation_class_track_move_down(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Animation::track_move_down, Animation::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue animation_class_track_move_to(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Animation::track_move_to, Animation::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue animation_class_track_swap(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Animation::track_swap, Animation::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue animation_class_track_set_imported(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Animation::track_set_imported, Animation::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue animation_class_track_is_imported(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Animation::track_is_imported, Animation::__class_id, ctx, this_val, argv);
};
static JSValue animation_class_track_set_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Animation::track_set_enabled, Animation::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue animation_class_track_is_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Animation::track_is_enabled, Animation::__class_id, ctx, this_val, argv);
};
static JSValue animation_class_position_track_insert_key(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Animation::position_track_insert_key, Animation::__class_id, ctx, this_val, argv);
};
static JSValue animation_class_rotation_track_insert_key(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Animation::rotation_track_insert_key, Animation::__class_id, ctx, this_val, argv);
};
static JSValue animation_class_scale_track_insert_key(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Animation::scale_track_insert_key, Animation::__class_id, ctx, this_val, argv);
};
static JSValue animation_class_blend_shape_track_insert_key(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Animation::blend_shape_track_insert_key, Animation::__class_id, ctx, this_val, argv);
};
static JSValue animation_class_position_track_interpolate(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Animation::position_track_interpolate, Animation::__class_id, ctx, this_val, argv);
};
static JSValue animation_class_rotation_track_interpolate(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Animation::rotation_track_interpolate, Animation::__class_id, ctx, this_val, argv);
};
static JSValue animation_class_scale_track_interpolate(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Animation::scale_track_interpolate, Animation::__class_id, ctx, this_val, argv);
};
static JSValue animation_class_blend_shape_track_interpolate(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Animation::blend_shape_track_interpolate, Animation::__class_id, ctx, this_val, argv);
};
static JSValue animation_class_track_insert_key(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Animation::track_insert_key, Animation::__class_id, ctx, this_val, argv);
};
static JSValue animation_class_track_remove_key(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Animation::track_remove_key, Animation::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue animation_class_track_remove_key_at_time(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Animation::track_remove_key_at_time, Animation::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue animation_class_track_set_key_value(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Animation::track_set_key_value, Animation::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue animation_class_track_set_key_transition(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Animation::track_set_key_transition, Animation::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue animation_class_track_set_key_time(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Animation::track_set_key_time, Animation::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue animation_class_track_get_key_transition(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Animation::track_get_key_transition, Animation::__class_id, ctx, this_val, argv);
};
static JSValue animation_class_track_get_key_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Animation::track_get_key_count, Animation::__class_id, ctx, this_val, argv);
};
static JSValue animation_class_track_get_key_value(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Animation::track_get_key_value, Animation::__class_id, ctx, this_val, argv);
};
static JSValue animation_class_track_get_key_time(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Animation::track_get_key_time, Animation::__class_id, ctx, this_val, argv);
};
static JSValue animation_class_track_find_key(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Animation::track_find_key, Animation::__class_id, ctx, this_val, argv);
};
static JSValue animation_class_track_set_interpolation_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Animation::track_set_interpolation_type, Animation::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue animation_class_track_get_interpolation_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Animation::track_get_interpolation_type, Animation::__class_id, ctx, this_val, argv);
};
static JSValue animation_class_track_set_interpolation_loop_wrap(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Animation::track_set_interpolation_loop_wrap, Animation::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue animation_class_track_get_interpolation_loop_wrap(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Animation::track_get_interpolation_loop_wrap, Animation::__class_id, ctx, this_val, argv);
};
static JSValue animation_class_track_is_compressed(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Animation::track_is_compressed, Animation::__class_id, ctx, this_val, argv);
};
static JSValue animation_class_value_track_set_update_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Animation::value_track_set_update_mode, Animation::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue animation_class_value_track_get_update_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Animation::value_track_get_update_mode, Animation::__class_id, ctx, this_val, argv);
};
static JSValue animation_class_value_track_interpolate(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Animation::value_track_interpolate, Animation::__class_id, ctx, this_val, argv);
};
static JSValue animation_class_method_track_get_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Animation::method_track_get_name, Animation::__class_id, ctx, this_val, argv);
};
static JSValue animation_class_method_track_get_params(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Animation::method_track_get_params, Animation::__class_id, ctx, this_val, argv);
};
static JSValue animation_class_bezier_track_insert_key(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Animation::bezier_track_insert_key, Animation::__class_id, ctx, this_val, argv);
};
static JSValue animation_class_bezier_track_set_key_value(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Animation::bezier_track_set_key_value, Animation::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue animation_class_bezier_track_set_key_in_handle(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Animation::bezier_track_set_key_in_handle, Animation::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue animation_class_bezier_track_set_key_out_handle(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Animation::bezier_track_set_key_out_handle, Animation::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue animation_class_bezier_track_get_key_value(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Animation::bezier_track_get_key_value, Animation::__class_id, ctx, this_val, argv);
};
static JSValue animation_class_bezier_track_get_key_in_handle(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Animation::bezier_track_get_key_in_handle, Animation::__class_id, ctx, this_val, argv);
};
static JSValue animation_class_bezier_track_get_key_out_handle(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Animation::bezier_track_get_key_out_handle, Animation::__class_id, ctx, this_val, argv);
};
static JSValue animation_class_bezier_track_interpolate(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Animation::bezier_track_interpolate, Animation::__class_id, ctx, this_val, argv);
};
static JSValue animation_class_audio_track_insert_key(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Animation::audio_track_insert_key, Animation::__class_id, ctx, this_val, argv);
};
static JSValue animation_class_audio_track_set_key_stream(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Animation::audio_track_set_key_stream, Animation::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue animation_class_audio_track_set_key_start_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Animation::audio_track_set_key_start_offset, Animation::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue animation_class_audio_track_set_key_end_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Animation::audio_track_set_key_end_offset, Animation::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue animation_class_audio_track_get_key_stream(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Animation::audio_track_get_key_stream, Animation::__class_id, ctx, this_val, argv);
};
static JSValue animation_class_audio_track_get_key_start_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Animation::audio_track_get_key_start_offset, Animation::__class_id, ctx, this_val, argv);
};
static JSValue animation_class_audio_track_get_key_end_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Animation::audio_track_get_key_end_offset, Animation::__class_id, ctx, this_val, argv);
};
static JSValue animation_class_audio_track_set_use_blend(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Animation::audio_track_set_use_blend, Animation::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue animation_class_audio_track_is_use_blend(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Animation::audio_track_is_use_blend, Animation::__class_id, ctx, this_val, argv);
};
static JSValue animation_class_animation_track_insert_key(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Animation::animation_track_insert_key, Animation::__class_id, ctx, this_val, argv);
};
static JSValue animation_class_animation_track_set_key_animation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Animation::animation_track_set_key_animation, Animation::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue animation_class_animation_track_get_key_animation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Animation::animation_track_get_key_animation, Animation::__class_id, ctx, this_val, argv);
};
static JSValue animation_class_set_length(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Animation::set_length, Animation::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue animation_class_get_length(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Animation::get_length, Animation::__class_id, ctx, this_val, argv);
};
static JSValue animation_class_set_loop_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Animation::set_loop_mode, Animation::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue animation_class_get_loop_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Animation::get_loop_mode, Animation::__class_id, ctx, this_val, argv);
};
static JSValue animation_class_set_step(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Animation::set_step, Animation::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue animation_class_get_step(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Animation::get_step, Animation::__class_id, ctx, this_val, argv);
};
static JSValue animation_class_clear(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Animation::clear, Animation::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue animation_class_copy_track(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Animation::copy_track, Animation::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue animation_class_compress(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Animation::compress, Animation::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue animation_class_is_capture_included(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Animation::is_capture_included, Animation::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry animation_class_proto_funcs[] = {
	JS_CFUNC_DEF("add_track", 2, &animation_class_add_track),
	JS_CFUNC_DEF("remove_track", 1, &animation_class_remove_track),
	JS_CFUNC_DEF("get_track_count", 0, &animation_class_get_track_count),
	JS_CFUNC_DEF("track_get_type", 1, &animation_class_track_get_type),
	JS_CFUNC_DEF("track_get_path", 1, &animation_class_track_get_path),
	JS_CFUNC_DEF("track_set_path", 2, &animation_class_track_set_path),
	JS_CFUNC_DEF("find_track", 2, &animation_class_find_track),
	JS_CFUNC_DEF("track_move_up", 1, &animation_class_track_move_up),
	JS_CFUNC_DEF("track_move_down", 1, &animation_class_track_move_down),
	JS_CFUNC_DEF("track_move_to", 2, &animation_class_track_move_to),
	JS_CFUNC_DEF("track_swap", 2, &animation_class_track_swap),
	JS_CFUNC_DEF("track_set_imported", 2, &animation_class_track_set_imported),
	JS_CFUNC_DEF("track_is_imported", 1, &animation_class_track_is_imported),
	JS_CFUNC_DEF("track_set_enabled", 2, &animation_class_track_set_enabled),
	JS_CFUNC_DEF("track_is_enabled", 1, &animation_class_track_is_enabled),
	JS_CFUNC_DEF("position_track_insert_key", 3, &animation_class_position_track_insert_key),
	JS_CFUNC_DEF("rotation_track_insert_key", 3, &animation_class_rotation_track_insert_key),
	JS_CFUNC_DEF("scale_track_insert_key", 3, &animation_class_scale_track_insert_key),
	JS_CFUNC_DEF("blend_shape_track_insert_key", 3, &animation_class_blend_shape_track_insert_key),
	JS_CFUNC_DEF("position_track_interpolate", 3, &animation_class_position_track_interpolate),
	JS_CFUNC_DEF("rotation_track_interpolate", 3, &animation_class_rotation_track_interpolate),
	JS_CFUNC_DEF("scale_track_interpolate", 3, &animation_class_scale_track_interpolate),
	JS_CFUNC_DEF("blend_shape_track_interpolate", 3, &animation_class_blend_shape_track_interpolate),
	JS_CFUNC_DEF("track_insert_key", 4, &animation_class_track_insert_key),
	JS_CFUNC_DEF("track_remove_key", 2, &animation_class_track_remove_key),
	JS_CFUNC_DEF("track_remove_key_at_time", 2, &animation_class_track_remove_key_at_time),
	JS_CFUNC_DEF("track_set_key_value", 3, &animation_class_track_set_key_value),
	JS_CFUNC_DEF("track_set_key_transition", 3, &animation_class_track_set_key_transition),
	JS_CFUNC_DEF("track_set_key_time", 3, &animation_class_track_set_key_time),
	JS_CFUNC_DEF("track_get_key_transition", 2, &animation_class_track_get_key_transition),
	JS_CFUNC_DEF("track_get_key_count", 1, &animation_class_track_get_key_count),
	JS_CFUNC_DEF("track_get_key_value", 2, &animation_class_track_get_key_value),
	JS_CFUNC_DEF("track_get_key_time", 2, &animation_class_track_get_key_time),
	JS_CFUNC_DEF("track_find_key", 5, &animation_class_track_find_key),
	JS_CFUNC_DEF("track_set_interpolation_type", 2, &animation_class_track_set_interpolation_type),
	JS_CFUNC_DEF("track_get_interpolation_type", 1, &animation_class_track_get_interpolation_type),
	JS_CFUNC_DEF("track_set_interpolation_loop_wrap", 2, &animation_class_track_set_interpolation_loop_wrap),
	JS_CFUNC_DEF("track_get_interpolation_loop_wrap", 1, &animation_class_track_get_interpolation_loop_wrap),
	JS_CFUNC_DEF("track_is_compressed", 1, &animation_class_track_is_compressed),
	JS_CFUNC_DEF("value_track_set_update_mode", 2, &animation_class_value_track_set_update_mode),
	JS_CFUNC_DEF("value_track_get_update_mode", 1, &animation_class_value_track_get_update_mode),
	JS_CFUNC_DEF("value_track_interpolate", 3, &animation_class_value_track_interpolate),
	JS_CFUNC_DEF("method_track_get_name", 2, &animation_class_method_track_get_name),
	JS_CFUNC_DEF("method_track_get_params", 2, &animation_class_method_track_get_params),
	JS_CFUNC_DEF("bezier_track_insert_key", 5, &animation_class_bezier_track_insert_key),
	JS_CFUNC_DEF("bezier_track_set_key_value", 3, &animation_class_bezier_track_set_key_value),
	JS_CFUNC_DEF("bezier_track_set_key_in_handle", 4, &animation_class_bezier_track_set_key_in_handle),
	JS_CFUNC_DEF("bezier_track_set_key_out_handle", 4, &animation_class_bezier_track_set_key_out_handle),
	JS_CFUNC_DEF("bezier_track_get_key_value", 2, &animation_class_bezier_track_get_key_value),
	JS_CFUNC_DEF("bezier_track_get_key_in_handle", 2, &animation_class_bezier_track_get_key_in_handle),
	JS_CFUNC_DEF("bezier_track_get_key_out_handle", 2, &animation_class_bezier_track_get_key_out_handle),
	JS_CFUNC_DEF("bezier_track_interpolate", 2, &animation_class_bezier_track_interpolate),
	JS_CFUNC_DEF("audio_track_insert_key", 5, &animation_class_audio_track_insert_key),
	JS_CFUNC_DEF("audio_track_set_key_stream", 3, &animation_class_audio_track_set_key_stream),
	JS_CFUNC_DEF("audio_track_set_key_start_offset", 3, &animation_class_audio_track_set_key_start_offset),
	JS_CFUNC_DEF("audio_track_set_key_end_offset", 3, &animation_class_audio_track_set_key_end_offset),
	JS_CFUNC_DEF("audio_track_get_key_stream", 2, &animation_class_audio_track_get_key_stream),
	JS_CFUNC_DEF("audio_track_get_key_start_offset", 2, &animation_class_audio_track_get_key_start_offset),
	JS_CFUNC_DEF("audio_track_get_key_end_offset", 2, &animation_class_audio_track_get_key_end_offset),
	JS_CFUNC_DEF("audio_track_set_use_blend", 2, &animation_class_audio_track_set_use_blend),
	JS_CFUNC_DEF("audio_track_is_use_blend", 1, &animation_class_audio_track_is_use_blend),
	JS_CFUNC_DEF("animation_track_insert_key", 3, &animation_class_animation_track_insert_key),
	JS_CFUNC_DEF("animation_track_set_key_animation", 3, &animation_class_animation_track_set_key_animation),
	JS_CFUNC_DEF("animation_track_get_key_animation", 2, &animation_class_animation_track_get_key_animation),
	JS_CFUNC_DEF("set_length", 1, &animation_class_set_length),
	JS_CFUNC_DEF("get_length", 0, &animation_class_get_length),
	JS_CFUNC_DEF("set_loop_mode", 1, &animation_class_set_loop_mode),
	JS_CFUNC_DEF("get_loop_mode", 0, &animation_class_get_loop_mode),
	JS_CFUNC_DEF("set_step", 1, &animation_class_set_step),
	JS_CFUNC_DEF("get_step", 0, &animation_class_get_step),
	JS_CFUNC_DEF("clear", 0, &animation_class_clear),
	JS_CFUNC_DEF("copy_track", 2, &animation_class_copy_track),
	JS_CFUNC_DEF("compress", 3, &animation_class_compress),
	JS_CFUNC_DEF("is_capture_included", 0, &animation_class_is_capture_included),
};

static int js_animation_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&Animation::__class_id);
	classes["Animation"] = Animation::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), Animation::__class_id, &animation_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Resource::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, Animation::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, animation_class_proto_funcs, _countof(animation_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, animation_class_constructor, "Animation", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "Animation", ctor);

	return 0;
}

JSModuleDef *_js_init_animation_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_animation_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "Animation");
	return m;
}

JSModuleDef *js_init_animation_module(JSContext *ctx) {
	return _js_init_animation_module(ctx, "godot/classes/animation");
}

void register_animation() {
	js_init_animation_module(ctx);
}