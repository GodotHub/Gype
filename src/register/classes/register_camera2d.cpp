
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/camera2d.hpp>
#include <godot_cpp/classes/node2d.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void camera2d_class_finalizer(JSRuntime *rt, JSValue val) {
	Camera2D *camera2d = static_cast<Camera2D *>(JS_GetOpaque(val, Camera2D::__class_id));
	if (camera2d)
		Camera2D::free(nullptr, camera2d);
}

static JSClassDef camera2d_class_def = {
	"Camera2D",
	.finalizer = camera2d_class_finalizer
};

static JSValue camera2d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	Camera2D *camera2d_class;
	JSValue obj = JS_NewObjectClass(ctx, Camera2D::__class_id);
	if (JS_IsException(obj))
		return obj;
	camera2d_class = memnew(Camera2D);
	if (!camera2d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, camera2d_class);
	return obj;
}
static JSValue camera2d_class_set_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Camera2D::set_offset, Camera2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue camera2d_class_get_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Camera2D::get_offset, Camera2D::__class_id, ctx, this_val, argv);
};
static JSValue camera2d_class_set_anchor_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Camera2D::set_anchor_mode, Camera2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue camera2d_class_get_anchor_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Camera2D::get_anchor_mode, Camera2D::__class_id, ctx, this_val, argv);
};
static JSValue camera2d_class_set_ignore_rotation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Camera2D::set_ignore_rotation, Camera2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue camera2d_class_is_ignoring_rotation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Camera2D::is_ignoring_rotation, Camera2D::__class_id, ctx, this_val, argv);
};
static JSValue camera2d_class_set_process_callback(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Camera2D::set_process_callback, Camera2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue camera2d_class_get_process_callback(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Camera2D::get_process_callback, Camera2D::__class_id, ctx, this_val, argv);
};
static JSValue camera2d_class_set_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Camera2D::set_enabled, Camera2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue camera2d_class_is_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Camera2D::is_enabled, Camera2D::__class_id, ctx, this_val, argv);
};
static JSValue camera2d_class_make_current(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Camera2D::make_current, Camera2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue camera2d_class_is_current(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Camera2D::is_current, Camera2D::__class_id, ctx, this_val, argv);
};
static JSValue camera2d_class_set_limit(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Camera2D::set_limit, Camera2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue camera2d_class_get_limit(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Camera2D::get_limit, Camera2D::__class_id, ctx, this_val, argv);
};
static JSValue camera2d_class_set_limit_smoothing_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Camera2D::set_limit_smoothing_enabled, Camera2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue camera2d_class_is_limit_smoothing_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Camera2D::is_limit_smoothing_enabled, Camera2D::__class_id, ctx, this_val, argv);
};
static JSValue camera2d_class_set_drag_vertical_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Camera2D::set_drag_vertical_enabled, Camera2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue camera2d_class_is_drag_vertical_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Camera2D::is_drag_vertical_enabled, Camera2D::__class_id, ctx, this_val, argv);
};
static JSValue camera2d_class_set_drag_horizontal_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Camera2D::set_drag_horizontal_enabled, Camera2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue camera2d_class_is_drag_horizontal_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Camera2D::is_drag_horizontal_enabled, Camera2D::__class_id, ctx, this_val, argv);
};
static JSValue camera2d_class_set_drag_vertical_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Camera2D::set_drag_vertical_offset, Camera2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue camera2d_class_get_drag_vertical_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Camera2D::get_drag_vertical_offset, Camera2D::__class_id, ctx, this_val, argv);
};
static JSValue camera2d_class_set_drag_horizontal_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Camera2D::set_drag_horizontal_offset, Camera2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue camera2d_class_get_drag_horizontal_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Camera2D::get_drag_horizontal_offset, Camera2D::__class_id, ctx, this_val, argv);
};
static JSValue camera2d_class_set_drag_margin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Camera2D::set_drag_margin, Camera2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue camera2d_class_get_drag_margin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Camera2D::get_drag_margin, Camera2D::__class_id, ctx, this_val, argv);
};
static JSValue camera2d_class_get_target_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Camera2D::get_target_position, Camera2D::__class_id, ctx, this_val, argv);
};
static JSValue camera2d_class_get_screen_center_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Camera2D::get_screen_center_position, Camera2D::__class_id, ctx, this_val, argv);
};
static JSValue camera2d_class_set_zoom(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Camera2D::set_zoom, Camera2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue camera2d_class_get_zoom(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Camera2D::get_zoom, Camera2D::__class_id, ctx, this_val, argv);
};
static JSValue camera2d_class_set_custom_viewport(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Camera2D::set_custom_viewport, Camera2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue camera2d_class_get_custom_viewport(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Camera2D::get_custom_viewport, Camera2D::__class_id, ctx, this_val, argv);
};
static JSValue camera2d_class_set_position_smoothing_speed(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Camera2D::set_position_smoothing_speed, Camera2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue camera2d_class_get_position_smoothing_speed(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Camera2D::get_position_smoothing_speed, Camera2D::__class_id, ctx, this_val, argv);
};
static JSValue camera2d_class_set_position_smoothing_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Camera2D::set_position_smoothing_enabled, Camera2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue camera2d_class_is_position_smoothing_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Camera2D::is_position_smoothing_enabled, Camera2D::__class_id, ctx, this_val, argv);
};
static JSValue camera2d_class_set_rotation_smoothing_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Camera2D::set_rotation_smoothing_enabled, Camera2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue camera2d_class_is_rotation_smoothing_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Camera2D::is_rotation_smoothing_enabled, Camera2D::__class_id, ctx, this_val, argv);
};
static JSValue camera2d_class_set_rotation_smoothing_speed(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Camera2D::set_rotation_smoothing_speed, Camera2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue camera2d_class_get_rotation_smoothing_speed(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Camera2D::get_rotation_smoothing_speed, Camera2D::__class_id, ctx, this_val, argv);
};
static JSValue camera2d_class_force_update_scroll(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Camera2D::force_update_scroll, Camera2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue camera2d_class_reset_smoothing(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Camera2D::reset_smoothing, Camera2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue camera2d_class_align(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Camera2D::align, Camera2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue camera2d_class_set_screen_drawing_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Camera2D::set_screen_drawing_enabled, Camera2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue camera2d_class_is_screen_drawing_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Camera2D::is_screen_drawing_enabled, Camera2D::__class_id, ctx, this_val, argv);
};
static JSValue camera2d_class_set_limit_drawing_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Camera2D::set_limit_drawing_enabled, Camera2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue camera2d_class_is_limit_drawing_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Camera2D::is_limit_drawing_enabled, Camera2D::__class_id, ctx, this_val, argv);
};
static JSValue camera2d_class_set_margin_drawing_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Camera2D::set_margin_drawing_enabled, Camera2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue camera2d_class_is_margin_drawing_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Camera2D::is_margin_drawing_enabled, Camera2D::__class_id, ctx, this_val, argv);
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

static int js_camera2d_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&Camera2D::__class_id);
	classes["Camera2D"] = Camera2D::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), Camera2D::__class_id, &camera2d_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Node2D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, Camera2D::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, camera2d_class_proto_funcs, _countof(camera2d_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, camera2d_class_constructor, "Camera2D", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "Camera2D", ctor);

	return 0;
}

JSModuleDef *_js_init_camera2d_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_camera2d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "Camera2D");
	return m;
}

JSModuleDef *js_init_camera2d_module(JSContext *ctx) {
	return _js_init_camera2d_module(ctx, "godot/classes/camera2d");
}

void register_camera2d() {
	js_init_camera2d_module(ctx);
}