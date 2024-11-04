
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/camera2d.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/node2d.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void camera2d_class_finalizer(JSRuntime *rt, JSValue val) {
	Camera2D *camera2d = static_cast<Camera2D *>(JS_GetOpaque(val, Camera2D::__class_id));
	if (camera2d)
		memdelete(camera2d);
}

static JSClassDef camera2d_class_def = {
	"Camera2D",
	.finalizer = camera2d_class_finalizer
};

static JSValue camera2d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, Camera2D::__class_id);
	if (JS_IsException(obj))
		return obj;

	Camera2D *camera2d_class;
	if (argc == 1) 
		camera2d_class = static_cast<Camera2D *>(Variant(*argv).operator Object *());
	else 
		camera2d_class = memnew(Camera2D);
	if (!camera2d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, camera2d_class);
	return obj;
}
static JSValue camera2d_class_set_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&Camera2D::set_offset, ctx, this_val, argc, argv);
};
static JSValue camera2d_class_get_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Camera2D::get_offset, ctx, this_val, argc, argv);
};
static JSValue camera2d_class_set_anchor_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&Camera2D::set_anchor_mode, ctx, this_val, argc, argv);
};
static JSValue camera2d_class_get_anchor_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Camera2D::get_anchor_mode, ctx, this_val, argc, argv);
};
static JSValue camera2d_class_set_ignore_rotation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&Camera2D::set_ignore_rotation, ctx, this_val, argc, argv);
};
static JSValue camera2d_class_is_ignoring_rotation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Camera2D::is_ignoring_rotation, ctx, this_val, argc, argv);
};
static JSValue camera2d_class_set_process_callback(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&Camera2D::set_process_callback, ctx, this_val, argc, argv);
};
static JSValue camera2d_class_get_process_callback(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Camera2D::get_process_callback, ctx, this_val, argc, argv);
};
static JSValue camera2d_class_set_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&Camera2D::set_enabled, ctx, this_val, argc, argv);
};
static JSValue camera2d_class_is_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Camera2D::is_enabled, ctx, this_val, argc, argv);
};
static JSValue camera2d_class_make_current(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&Camera2D::make_current, ctx, this_val, argc, argv);
};
static JSValue camera2d_class_is_current(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Camera2D::is_current, ctx, this_val, argc, argv);
};
static JSValue camera2d_class_set_limit(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&Camera2D::set_limit, ctx, this_val, argc, argv);
};
static JSValue camera2d_class_get_limit(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Camera2D::get_limit, ctx, this_val, argc, argv);
};
static JSValue camera2d_class_set_limit_smoothing_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&Camera2D::set_limit_smoothing_enabled, ctx, this_val, argc, argv);
};
static JSValue camera2d_class_is_limit_smoothing_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Camera2D::is_limit_smoothing_enabled, ctx, this_val, argc, argv);
};
static JSValue camera2d_class_set_drag_vertical_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&Camera2D::set_drag_vertical_enabled, ctx, this_val, argc, argv);
};
static JSValue camera2d_class_is_drag_vertical_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Camera2D::is_drag_vertical_enabled, ctx, this_val, argc, argv);
};
static JSValue camera2d_class_set_drag_horizontal_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&Camera2D::set_drag_horizontal_enabled, ctx, this_val, argc, argv);
};
static JSValue camera2d_class_is_drag_horizontal_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Camera2D::is_drag_horizontal_enabled, ctx, this_val, argc, argv);
};
static JSValue camera2d_class_set_drag_vertical_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&Camera2D::set_drag_vertical_offset, ctx, this_val, argc, argv);
};
static JSValue camera2d_class_get_drag_vertical_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Camera2D::get_drag_vertical_offset, ctx, this_val, argc, argv);
};
static JSValue camera2d_class_set_drag_horizontal_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&Camera2D::set_drag_horizontal_offset, ctx, this_val, argc, argv);
};
static JSValue camera2d_class_get_drag_horizontal_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Camera2D::get_drag_horizontal_offset, ctx, this_val, argc, argv);
};
static JSValue camera2d_class_set_drag_margin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&Camera2D::set_drag_margin, ctx, this_val, argc, argv);
};
static JSValue camera2d_class_get_drag_margin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Camera2D::get_drag_margin, ctx, this_val, argc, argv);
};
static JSValue camera2d_class_get_target_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Camera2D::get_target_position, ctx, this_val, argc, argv);
};
static JSValue camera2d_class_get_screen_center_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Camera2D::get_screen_center_position, ctx, this_val, argc, argv);
};
static JSValue camera2d_class_set_zoom(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&Camera2D::set_zoom, ctx, this_val, argc, argv);
};
static JSValue camera2d_class_get_zoom(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Camera2D::get_zoom, ctx, this_val, argc, argv);
};
static JSValue camera2d_class_set_custom_viewport(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&Camera2D::set_custom_viewport, ctx, this_val, argc, argv);
};
static JSValue camera2d_class_get_custom_viewport(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Camera2D::get_custom_viewport, ctx, this_val, argc, argv);
};
static JSValue camera2d_class_set_position_smoothing_speed(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&Camera2D::set_position_smoothing_speed, ctx, this_val, argc, argv);
};
static JSValue camera2d_class_get_position_smoothing_speed(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Camera2D::get_position_smoothing_speed, ctx, this_val, argc, argv);
};
static JSValue camera2d_class_set_position_smoothing_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&Camera2D::set_position_smoothing_enabled, ctx, this_val, argc, argv);
};
static JSValue camera2d_class_is_position_smoothing_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Camera2D::is_position_smoothing_enabled, ctx, this_val, argc, argv);
};
static JSValue camera2d_class_set_rotation_smoothing_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&Camera2D::set_rotation_smoothing_enabled, ctx, this_val, argc, argv);
};
static JSValue camera2d_class_is_rotation_smoothing_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Camera2D::is_rotation_smoothing_enabled, ctx, this_val, argc, argv);
};
static JSValue camera2d_class_set_rotation_smoothing_speed(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&Camera2D::set_rotation_smoothing_speed, ctx, this_val, argc, argv);
};
static JSValue camera2d_class_get_rotation_smoothing_speed(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Camera2D::get_rotation_smoothing_speed, ctx, this_val, argc, argv);
};
static JSValue camera2d_class_force_update_scroll(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&Camera2D::force_update_scroll, ctx, this_val, argc, argv);
};
static JSValue camera2d_class_reset_smoothing(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&Camera2D::reset_smoothing, ctx, this_val, argc, argv);
};
static JSValue camera2d_class_align(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&Camera2D::align, ctx, this_val, argc, argv);
};
static JSValue camera2d_class_set_screen_drawing_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&Camera2D::set_screen_drawing_enabled, ctx, this_val, argc, argv);
};
static JSValue camera2d_class_is_screen_drawing_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Camera2D::is_screen_drawing_enabled, ctx, this_val, argc, argv);
};
static JSValue camera2d_class_set_limit_drawing_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&Camera2D::set_limit_drawing_enabled, ctx, this_val, argc, argv);
};
static JSValue camera2d_class_is_limit_drawing_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Camera2D::is_limit_drawing_enabled, ctx, this_val, argc, argv);
};
static JSValue camera2d_class_set_margin_drawing_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&Camera2D::set_margin_drawing_enabled, ctx, this_val, argc, argv);
};
static JSValue camera2d_class_is_margin_drawing_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Camera2D::is_margin_drawing_enabled, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry camera2d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_offset", 1, &camera2d_class_set_offset),
	JS_CFUNC_DEF("get_offset", 0, &camera2d_class_get_offset),
	JS_CFUNC_DEF("set_anchor_mode", 1, &camera2d_class_set_anchor_mode),
	JS_CFUNC_DEF("get_anchor_mode", 0, &camera2d_class_get_anchor_mode),
	JS_CFUNC_DEF("set_ignore_rotation", 1, &camera2d_class_set_ignore_rotation),
	JS_CFUNC_DEF("is_ignoring_rotation", 0, &camera2d_class_is_ignoring_rotation),
	JS_CFUNC_DEF("set_process_callback", 1, &camera2d_class_set_process_callback),
	JS_CFUNC_DEF("get_process_callback", 0, &camera2d_class_get_process_callback),
	JS_CFUNC_DEF("set_enabled", 1, &camera2d_class_set_enabled),
	JS_CFUNC_DEF("is_enabled", 0, &camera2d_class_is_enabled),
	JS_CFUNC_DEF("make_current", 0, &camera2d_class_make_current),
	JS_CFUNC_DEF("is_current", 0, &camera2d_class_is_current),
	JS_CFUNC_DEF("set_limit", 2, &camera2d_class_set_limit),
	JS_CFUNC_DEF("get_limit", 1, &camera2d_class_get_limit),
	JS_CFUNC_DEF("set_limit_smoothing_enabled", 1, &camera2d_class_set_limit_smoothing_enabled),
	JS_CFUNC_DEF("is_limit_smoothing_enabled", 0, &camera2d_class_is_limit_smoothing_enabled),
	JS_CFUNC_DEF("set_drag_vertical_enabled", 1, &camera2d_class_set_drag_vertical_enabled),
	JS_CFUNC_DEF("is_drag_vertical_enabled", 0, &camera2d_class_is_drag_vertical_enabled),
	JS_CFUNC_DEF("set_drag_horizontal_enabled", 1, &camera2d_class_set_drag_horizontal_enabled),
	JS_CFUNC_DEF("is_drag_horizontal_enabled", 0, &camera2d_class_is_drag_horizontal_enabled),
	JS_CFUNC_DEF("set_drag_vertical_offset", 1, &camera2d_class_set_drag_vertical_offset),
	JS_CFUNC_DEF("get_drag_vertical_offset", 0, &camera2d_class_get_drag_vertical_offset),
	JS_CFUNC_DEF("set_drag_horizontal_offset", 1, &camera2d_class_set_drag_horizontal_offset),
	JS_CFUNC_DEF("get_drag_horizontal_offset", 0, &camera2d_class_get_drag_horizontal_offset),
	JS_CFUNC_DEF("set_drag_margin", 2, &camera2d_class_set_drag_margin),
	JS_CFUNC_DEF("get_drag_margin", 1, &camera2d_class_get_drag_margin),
	JS_CFUNC_DEF("get_target_position", 0, &camera2d_class_get_target_position),
	JS_CFUNC_DEF("get_screen_center_position", 0, &camera2d_class_get_screen_center_position),
	JS_CFUNC_DEF("set_zoom", 1, &camera2d_class_set_zoom),
	JS_CFUNC_DEF("get_zoom", 0, &camera2d_class_get_zoom),
	JS_CFUNC_DEF("set_custom_viewport", 1, &camera2d_class_set_custom_viewport),
	JS_CFUNC_DEF("get_custom_viewport", 0, &camera2d_class_get_custom_viewport),
	JS_CFUNC_DEF("set_position_smoothing_speed", 1, &camera2d_class_set_position_smoothing_speed),
	JS_CFUNC_DEF("get_position_smoothing_speed", 0, &camera2d_class_get_position_smoothing_speed),
	JS_CFUNC_DEF("set_position_smoothing_enabled", 1, &camera2d_class_set_position_smoothing_enabled),
	JS_CFUNC_DEF("is_position_smoothing_enabled", 0, &camera2d_class_is_position_smoothing_enabled),
	JS_CFUNC_DEF("set_rotation_smoothing_enabled", 1, &camera2d_class_set_rotation_smoothing_enabled),
	JS_CFUNC_DEF("is_rotation_smoothing_enabled", 0, &camera2d_class_is_rotation_smoothing_enabled),
	JS_CFUNC_DEF("set_rotation_smoothing_speed", 1, &camera2d_class_set_rotation_smoothing_speed),
	JS_CFUNC_DEF("get_rotation_smoothing_speed", 0, &camera2d_class_get_rotation_smoothing_speed),
	JS_CFUNC_DEF("force_update_scroll", 0, &camera2d_class_force_update_scroll),
	JS_CFUNC_DEF("reset_smoothing", 0, &camera2d_class_reset_smoothing),
	JS_CFUNC_DEF("align", 0, &camera2d_class_align),
	JS_CFUNC_DEF("set_screen_drawing_enabled", 1, &camera2d_class_set_screen_drawing_enabled),
	JS_CFUNC_DEF("is_screen_drawing_enabled", 0, &camera2d_class_is_screen_drawing_enabled),
	JS_CFUNC_DEF("set_limit_drawing_enabled", 1, &camera2d_class_set_limit_drawing_enabled),
	JS_CFUNC_DEF("is_limit_drawing_enabled", 0, &camera2d_class_is_limit_drawing_enabled),
	JS_CFUNC_DEF("set_margin_drawing_enabled", 1, &camera2d_class_set_margin_drawing_enabled),
	JS_CFUNC_DEF("is_margin_drawing_enabled", 0, &camera2d_class_is_margin_drawing_enabled),
};

static void define_camera2d_property(JSContext *ctx, JSValue proto) {
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "offset"),
        JS_NewCFunction(ctx, camera2d_class_get_offset, "get_offset", 0),
        JS_NewCFunction(ctx, camera2d_class_set_offset, "set_offset", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "anchor_mode"),
        JS_NewCFunction(ctx, camera2d_class_get_anchor_mode, "get_anchor_mode", 0),
        JS_NewCFunction(ctx, camera2d_class_set_anchor_mode, "set_anchor_mode", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "ignore_rotation"),
        JS_NewCFunction(ctx, camera2d_class_is_ignoring_rotation, "is_ignoring_rotation", 0),
        JS_NewCFunction(ctx, camera2d_class_set_ignore_rotation, "set_ignore_rotation", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "enabled"),
        JS_NewCFunction(ctx, camera2d_class_is_enabled, "is_enabled", 0),
        JS_NewCFunction(ctx, camera2d_class_set_enabled, "set_enabled", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "zoom"),
        JS_NewCFunction(ctx, camera2d_class_get_zoom, "get_zoom", 0),
        JS_NewCFunction(ctx, camera2d_class_set_zoom, "set_zoom", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "custom_viewport"),
        JS_NewCFunction(ctx, camera2d_class_get_custom_viewport, "get_custom_viewport", 0),
        JS_NewCFunction(ctx, camera2d_class_set_custom_viewport, "set_custom_viewport", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "process_callback"),
        JS_NewCFunction(ctx, camera2d_class_get_process_callback, "get_process_callback", 0),
        JS_NewCFunction(ctx, camera2d_class_set_process_callback, "set_process_callback", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "limit_left"),
        JS_NewCFunction(ctx, camera2d_class_get_limit, "get_limit", 0),
        JS_NewCFunction(ctx, camera2d_class_set_limit, "set_limit", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "limit_top"),
        JS_NewCFunction(ctx, camera2d_class_get_limit, "get_limit", 0),
        JS_NewCFunction(ctx, camera2d_class_set_limit, "set_limit", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "limit_right"),
        JS_NewCFunction(ctx, camera2d_class_get_limit, "get_limit", 0),
        JS_NewCFunction(ctx, camera2d_class_set_limit, "set_limit", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "limit_bottom"),
        JS_NewCFunction(ctx, camera2d_class_get_limit, "get_limit", 0),
        JS_NewCFunction(ctx, camera2d_class_set_limit, "set_limit", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "limit_smoothed"),
        JS_NewCFunction(ctx, camera2d_class_is_limit_smoothing_enabled, "is_limit_smoothing_enabled", 0),
        JS_NewCFunction(ctx, camera2d_class_set_limit_smoothing_enabled, "set_limit_smoothing_enabled", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "position_smoothing_enabled"),
        JS_NewCFunction(ctx, camera2d_class_is_position_smoothing_enabled, "is_position_smoothing_enabled", 0),
        JS_NewCFunction(ctx, camera2d_class_set_position_smoothing_enabled, "set_position_smoothing_enabled", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "position_smoothing_speed"),
        JS_NewCFunction(ctx, camera2d_class_get_position_smoothing_speed, "get_position_smoothing_speed", 0),
        JS_NewCFunction(ctx, camera2d_class_set_position_smoothing_speed, "set_position_smoothing_speed", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "rotation_smoothing_enabled"),
        JS_NewCFunction(ctx, camera2d_class_is_rotation_smoothing_enabled, "is_rotation_smoothing_enabled", 0),
        JS_NewCFunction(ctx, camera2d_class_set_rotation_smoothing_enabled, "set_rotation_smoothing_enabled", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "rotation_smoothing_speed"),
        JS_NewCFunction(ctx, camera2d_class_get_rotation_smoothing_speed, "get_rotation_smoothing_speed", 0),
        JS_NewCFunction(ctx, camera2d_class_set_rotation_smoothing_speed, "set_rotation_smoothing_speed", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "drag_horizontal_enabled"),
        JS_NewCFunction(ctx, camera2d_class_is_drag_horizontal_enabled, "is_drag_horizontal_enabled", 0),
        JS_NewCFunction(ctx, camera2d_class_set_drag_horizontal_enabled, "set_drag_horizontal_enabled", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "drag_vertical_enabled"),
        JS_NewCFunction(ctx, camera2d_class_is_drag_vertical_enabled, "is_drag_vertical_enabled", 0),
        JS_NewCFunction(ctx, camera2d_class_set_drag_vertical_enabled, "set_drag_vertical_enabled", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "drag_horizontal_offset"),
        JS_NewCFunction(ctx, camera2d_class_get_drag_horizontal_offset, "get_drag_horizontal_offset", 0),
        JS_NewCFunction(ctx, camera2d_class_set_drag_horizontal_offset, "set_drag_horizontal_offset", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "drag_vertical_offset"),
        JS_NewCFunction(ctx, camera2d_class_get_drag_vertical_offset, "get_drag_vertical_offset", 0),
        JS_NewCFunction(ctx, camera2d_class_set_drag_vertical_offset, "set_drag_vertical_offset", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "drag_left_margin"),
        JS_NewCFunction(ctx, camera2d_class_get_drag_margin, "get_drag_margin", 0),
        JS_NewCFunction(ctx, camera2d_class_set_drag_margin, "set_drag_margin", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "drag_top_margin"),
        JS_NewCFunction(ctx, camera2d_class_get_drag_margin, "get_drag_margin", 0),
        JS_NewCFunction(ctx, camera2d_class_set_drag_margin, "set_drag_margin", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "drag_right_margin"),
        JS_NewCFunction(ctx, camera2d_class_get_drag_margin, "get_drag_margin", 0),
        JS_NewCFunction(ctx, camera2d_class_set_drag_margin, "set_drag_margin", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "drag_bottom_margin"),
        JS_NewCFunction(ctx, camera2d_class_get_drag_margin, "get_drag_margin", 0),
        JS_NewCFunction(ctx, camera2d_class_set_drag_margin, "set_drag_margin", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "editor_draw_screen"),
        JS_NewCFunction(ctx, camera2d_class_is_screen_drawing_enabled, "is_screen_drawing_enabled", 0),
        JS_NewCFunction(ctx, camera2d_class_set_screen_drawing_enabled, "set_screen_drawing_enabled", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "editor_draw_limits"),
        JS_NewCFunction(ctx, camera2d_class_is_limit_drawing_enabled, "is_limit_drawing_enabled", 0),
        JS_NewCFunction(ctx, camera2d_class_set_limit_drawing_enabled, "set_limit_drawing_enabled", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "editor_draw_drag_margin"),
        JS_NewCFunction(ctx, camera2d_class_is_margin_drawing_enabled, "is_margin_drawing_enabled", 0),
        JS_NewCFunction(ctx, camera2d_class_set_margin_drawing_enabled, "set_margin_drawing_enabled", 1),
        JS_PROP_GETSET
    );
	
}

static void define_camera2d_enum(JSContext *ctx, JSValue proto) {
	JSValue AnchorMode_obj = JS_NewObject(ctx);
	JS_SetPropertyStr(ctx, AnchorMode_obj, "ANCHOR_MODE_FIXED_TOP_LEFT", JS_NewInt64(ctx, 0));
	JS_SetPropertyStr(ctx, AnchorMode_obj, "ANCHOR_MODE_DRAG_CENTER", JS_NewInt64(ctx, 1));
	JS_SetPropertyStr(ctx, proto, "AnchorMode", AnchorMode_obj);
	JSValue Camera2DProcessCallback_obj = JS_NewObject(ctx);
	JS_SetPropertyStr(ctx, Camera2DProcessCallback_obj, "CAMERA2D_PROCESS_PHYSICS", JS_NewInt64(ctx, 0));
	JS_SetPropertyStr(ctx, Camera2DProcessCallback_obj, "CAMERA2D_PROCESS_IDLE", JS_NewInt64(ctx, 1));
	JS_SetPropertyStr(ctx, proto, "Camera2DProcessCallback", Camera2DProcessCallback_obj);
}

static int js_camera2d_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["Camera2D"] = Camera2D::__class_id;
	class_id_list.insert(Camera2D::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), Camera2D::__class_id, &camera2d_class_def);

	JSValue proto = JS_NewObjectClass(ctx, Camera2D::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Node2D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, Camera2D::__class_id, proto);

	define_camera2d_property(ctx, proto);
	define_camera2d_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, camera2d_class_proto_funcs, _countof(camera2d_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, camera2d_class_constructor, "Camera2D", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);
	JS_SetModuleExport(ctx, m, "Camera2D", ctor);
	constructors[Camera2D::__class_id] = ctor;

	return 0;
}

JSModuleDef *_js_init_camera2d_module(JSContext *ctx, const char *module_name) {
	// 需要提前完成import依赖
	const char *code = "import * as _ from '@godot/classes/node2d';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_camera2d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "Camera2D");
	return m;
}

JSModuleDef *js_init_camera2d_module(JSContext *ctx) {
	return _js_init_camera2d_module(ctx, "@godot/classes/camera2d");
}

void register_camera2d() {
	Camera2D::__init_js_class_id();
	js_init_camera2d_module(ctx);
}