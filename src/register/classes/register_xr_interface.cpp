
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/xr_interface.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void xr_interface_class_finalizer(JSRuntime *rt, JSValue val) {
	XRInterface *xr_interface = static_cast<XRInterface *>(JS_GetOpaque(val, XRInterface::__class_id));
	if (xr_interface)
		XRInterface::free(nullptr, xr_interface);
}

static JSClassDef xr_interface_class_def = {
	"XRInterface",
	.finalizer = xr_interface_class_finalizer
};

static JSValue xr_interface_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	XRInterface *xr_interface_class;
	JSValue obj = JS_NewObjectClass(ctx, XRInterface::__class_id);
	if (JS_IsException(obj))
		return obj;
	xr_interface_class = memnew(XRInterface);
	if (!xr_interface_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, xr_interface_class);
	return obj;
}
static JSValue xr_interface_class_get_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&XRInterface::get_name, XRInterface::__class_id, ctx, this_val, argv);
};
static JSValue xr_interface_class_get_capabilities(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&XRInterface::get_capabilities, XRInterface::__class_id, ctx, this_val, argv);
};
static JSValue xr_interface_class_is_primary(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&XRInterface::is_primary, XRInterface::__class_id, ctx, this_val, argv);
};
static JSValue xr_interface_class_set_primary(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&XRInterface::set_primary, XRInterface::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue xr_interface_class_is_initialized(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&XRInterface::is_initialized, XRInterface::__class_id, ctx, this_val, argv);
};
static JSValue xr_interface_class_initialize(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&XRInterface::initialize, XRInterface::__class_id, ctx, this_val, argv);
};
static JSValue xr_interface_class_uninitialize(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&XRInterface::uninitialize, XRInterface::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue xr_interface_class_get_system_info(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&XRInterface::get_system_info, XRInterface::__class_id, ctx, this_val, argv);
};
static JSValue xr_interface_class_get_tracking_status(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&XRInterface::get_tracking_status, XRInterface::__class_id, ctx, this_val, argv);
};
static JSValue xr_interface_class_get_render_target_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&XRInterface::get_render_target_size, XRInterface::__class_id, ctx, this_val, argv);
};
static JSValue xr_interface_class_get_view_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&XRInterface::get_view_count, XRInterface::__class_id, ctx, this_val, argv);
};
static JSValue xr_interface_class_trigger_haptic_pulse(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&XRInterface::trigger_haptic_pulse, XRInterface::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue xr_interface_class_supports_play_area_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&XRInterface::supports_play_area_mode, XRInterface::__class_id, ctx, this_val, argv);
};
static JSValue xr_interface_class_get_play_area_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&XRInterface::get_play_area_mode, XRInterface::__class_id, ctx, this_val, argv);
};
static JSValue xr_interface_class_set_play_area_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&XRInterface::set_play_area_mode, XRInterface::__class_id, ctx, this_val, argv);
};
static JSValue xr_interface_class_get_play_area(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&XRInterface::get_play_area, XRInterface::__class_id, ctx, this_val, argv);
};
static JSValue xr_interface_class_get_anchor_detection_is_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&XRInterface::get_anchor_detection_is_enabled, XRInterface::__class_id, ctx, this_val, argv);
};
static JSValue xr_interface_class_set_anchor_detection_is_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&XRInterface::set_anchor_detection_is_enabled, XRInterface::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue xr_interface_class_get_camera_feed_id(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&XRInterface::get_camera_feed_id, XRInterface::__class_id, ctx, this_val, argv);
};
static JSValue xr_interface_class_is_passthrough_supported(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&XRInterface::is_passthrough_supported, XRInterface::__class_id, ctx, this_val, argv);
};
static JSValue xr_interface_class_is_passthrough_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&XRInterface::is_passthrough_enabled, XRInterface::__class_id, ctx, this_val, argv);
};
static JSValue xr_interface_class_start_passthrough(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&XRInterface::start_passthrough, XRInterface::__class_id, ctx, this_val, argv);
};
static JSValue xr_interface_class_stop_passthrough(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&XRInterface::stop_passthrough, XRInterface::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue xr_interface_class_get_transform_for_view(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&XRInterface::get_transform_for_view, XRInterface::__class_id, ctx, this_val, argv);
};
static JSValue xr_interface_class_get_projection_for_view(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&XRInterface::get_projection_for_view, XRInterface::__class_id, ctx, this_val, argv);
};
static JSValue xr_interface_class_get_supported_environment_blend_modes(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&XRInterface::get_supported_environment_blend_modes, XRInterface::__class_id, ctx, this_val, argv);
};
static JSValue xr_interface_class_set_environment_blend_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&XRInterface::set_environment_blend_mode, XRInterface::__class_id, ctx, this_val, argv);
};
static JSValue xr_interface_class_get_environment_blend_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&XRInterface::get_environment_blend_mode, XRInterface::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry xr_interface_class_proto_funcs[] = {
	JS_CFUNC_DEF("get_name", 0, &xr_interface_class_get_name),
	JS_CFUNC_DEF("get_capabilities", 0, &xr_interface_class_get_capabilities),
	JS_CFUNC_DEF("is_primary", 0, &xr_interface_class_is_primary),
	JS_CFUNC_DEF("set_primary", 1, &xr_interface_class_set_primary),
	JS_CFUNC_DEF("is_initialized", 0, &xr_interface_class_is_initialized),
	JS_CFUNC_DEF("initialize", 0, &xr_interface_class_initialize),
	JS_CFUNC_DEF("uninitialize", 0, &xr_interface_class_uninitialize),
	JS_CFUNC_DEF("get_system_info", 0, &xr_interface_class_get_system_info),
	JS_CFUNC_DEF("get_tracking_status", 0, &xr_interface_class_get_tracking_status),
	JS_CFUNC_DEF("get_render_target_size", 0, &xr_interface_class_get_render_target_size),
	JS_CFUNC_DEF("get_view_count", 0, &xr_interface_class_get_view_count),
	JS_CFUNC_DEF("trigger_haptic_pulse", 6, &xr_interface_class_trigger_haptic_pulse),
	JS_CFUNC_DEF("supports_play_area_mode", 1, &xr_interface_class_supports_play_area_mode),
	JS_CFUNC_DEF("get_play_area_mode", 0, &xr_interface_class_get_play_area_mode),
	JS_CFUNC_DEF("set_play_area_mode", 1, &xr_interface_class_set_play_area_mode),
	JS_CFUNC_DEF("get_play_area", 0, &xr_interface_class_get_play_area),
	JS_CFUNC_DEF("get_anchor_detection_is_enabled", 0, &xr_interface_class_get_anchor_detection_is_enabled),
	JS_CFUNC_DEF("set_anchor_detection_is_enabled", 1, &xr_interface_class_set_anchor_detection_is_enabled),
	JS_CFUNC_DEF("get_camera_feed_id", 0, &xr_interface_class_get_camera_feed_id),
	JS_CFUNC_DEF("is_passthrough_supported", 0, &xr_interface_class_is_passthrough_supported),
	JS_CFUNC_DEF("is_passthrough_enabled", 0, &xr_interface_class_is_passthrough_enabled),
	JS_CFUNC_DEF("start_passthrough", 0, &xr_interface_class_start_passthrough),
	JS_CFUNC_DEF("stop_passthrough", 0, &xr_interface_class_stop_passthrough),
	JS_CFUNC_DEF("get_transform_for_view", 2, &xr_interface_class_get_transform_for_view),
	JS_CFUNC_DEF("get_projection_for_view", 4, &xr_interface_class_get_projection_for_view),
	JS_CFUNC_DEF("get_supported_environment_blend_modes", 0, &xr_interface_class_get_supported_environment_blend_modes),
	JS_CFUNC_DEF("set_environment_blend_mode", 1, &xr_interface_class_set_environment_blend_mode),
	JS_CFUNC_DEF("get_environment_blend_mode", 0, &xr_interface_class_get_environment_blend_mode),
};

static int js_xr_interface_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&XRInterface::__class_id);
	classes["XRInterface"] = XRInterface::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), XRInterface::__class_id, &xr_interface_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, RefCounted::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, XRInterface::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, xr_interface_class_proto_funcs, _countof(xr_interface_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, xr_interface_class_constructor, "XRInterface", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "XRInterface", ctor);

	return 0;
}

JSModuleDef *_js_init_xr_interface_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_xr_interface_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "XRInterface");
	return m;
}

JSModuleDef *js_init_xr_interface_module(JSContext *ctx) {
	return _js_init_xr_interface_module(ctx, "godot/classes/xr_interface");
}

void register_xr_interface() {
	js_init_xr_interface_module(ctx);
}