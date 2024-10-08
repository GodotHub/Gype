
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/xr_hand_tracker.hpp>
#include <godot_cpp/classes/xr_positional_tracker.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void xr_hand_tracker_class_finalizer(JSRuntime *rt, JSValue val) {
	XRHandTracker *xr_hand_tracker = static_cast<XRHandTracker *>(JS_GetOpaque(val, XRHandTracker::__class_id));
	if (xr_hand_tracker)
		XRHandTracker::free(nullptr, xr_hand_tracker);
}

static JSClassDef xr_hand_tracker_class_def = {
	"XRHandTracker",
	.finalizer = xr_hand_tracker_class_finalizer
};

static JSValue xr_hand_tracker_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	XRHandTracker *xr_hand_tracker_class;
	JSValue obj = JS_NewObjectClass(ctx, XRHandTracker::__class_id);
	if (JS_IsException(obj))
		return obj;
	xr_hand_tracker_class = memnew(XRHandTracker);
	if (!xr_hand_tracker_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, xr_hand_tracker_class);
	return obj;
}
static JSValue xr_hand_tracker_class_set_has_tracking_data(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&XRHandTracker::set_has_tracking_data, XRHandTracker::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue xr_hand_tracker_class_get_has_tracking_data(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&XRHandTracker::get_has_tracking_data, XRHandTracker::__class_id, ctx, this_val, argv);
};
static JSValue xr_hand_tracker_class_set_hand_tracking_source(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&XRHandTracker::set_hand_tracking_source, XRHandTracker::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue xr_hand_tracker_class_get_hand_tracking_source(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&XRHandTracker::get_hand_tracking_source, XRHandTracker::__class_id, ctx, this_val, argv);
};
static JSValue xr_hand_tracker_class_set_hand_joint_flags(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&XRHandTracker::set_hand_joint_flags, XRHandTracker::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue xr_hand_tracker_class_get_hand_joint_flags(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&XRHandTracker::get_hand_joint_flags, XRHandTracker::__class_id, ctx, this_val, argv);
};
static JSValue xr_hand_tracker_class_set_hand_joint_transform(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&XRHandTracker::set_hand_joint_transform, XRHandTracker::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue xr_hand_tracker_class_get_hand_joint_transform(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&XRHandTracker::get_hand_joint_transform, XRHandTracker::__class_id, ctx, this_val, argv);
};
static JSValue xr_hand_tracker_class_set_hand_joint_radius(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&XRHandTracker::set_hand_joint_radius, XRHandTracker::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue xr_hand_tracker_class_get_hand_joint_radius(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&XRHandTracker::get_hand_joint_radius, XRHandTracker::__class_id, ctx, this_val, argv);
};
static JSValue xr_hand_tracker_class_set_hand_joint_linear_velocity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&XRHandTracker::set_hand_joint_linear_velocity, XRHandTracker::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue xr_hand_tracker_class_get_hand_joint_linear_velocity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&XRHandTracker::get_hand_joint_linear_velocity, XRHandTracker::__class_id, ctx, this_val, argv);
};
static JSValue xr_hand_tracker_class_set_hand_joint_angular_velocity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&XRHandTracker::set_hand_joint_angular_velocity, XRHandTracker::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue xr_hand_tracker_class_get_hand_joint_angular_velocity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&XRHandTracker::get_hand_joint_angular_velocity, XRHandTracker::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry xr_hand_tracker_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_has_tracking_data", 1, &xr_hand_tracker_class_set_has_tracking_data),
	JS_CFUNC_DEF("get_has_tracking_data", 0, &xr_hand_tracker_class_get_has_tracking_data),
	JS_CFUNC_DEF("set_hand_tracking_source", 1, &xr_hand_tracker_class_set_hand_tracking_source),
	JS_CFUNC_DEF("get_hand_tracking_source", 0, &xr_hand_tracker_class_get_hand_tracking_source),
	JS_CFUNC_DEF("set_hand_joint_flags", 2, &xr_hand_tracker_class_set_hand_joint_flags),
	JS_CFUNC_DEF("get_hand_joint_flags", 1, &xr_hand_tracker_class_get_hand_joint_flags),
	JS_CFUNC_DEF("set_hand_joint_transform", 2, &xr_hand_tracker_class_set_hand_joint_transform),
	JS_CFUNC_DEF("get_hand_joint_transform", 1, &xr_hand_tracker_class_get_hand_joint_transform),
	JS_CFUNC_DEF("set_hand_joint_radius", 2, &xr_hand_tracker_class_set_hand_joint_radius),
	JS_CFUNC_DEF("get_hand_joint_radius", 1, &xr_hand_tracker_class_get_hand_joint_radius),
	JS_CFUNC_DEF("set_hand_joint_linear_velocity", 2, &xr_hand_tracker_class_set_hand_joint_linear_velocity),
	JS_CFUNC_DEF("get_hand_joint_linear_velocity", 1, &xr_hand_tracker_class_get_hand_joint_linear_velocity),
	JS_CFUNC_DEF("set_hand_joint_angular_velocity", 2, &xr_hand_tracker_class_set_hand_joint_angular_velocity),
	JS_CFUNC_DEF("get_hand_joint_angular_velocity", 1, &xr_hand_tracker_class_get_hand_joint_angular_velocity),
};

static int js_xr_hand_tracker_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&XRHandTracker::__class_id);
	classes["XRHandTracker"] = XRHandTracker::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), XRHandTracker::__class_id, &xr_hand_tracker_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, XRPositionalTracker::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, XRHandTracker::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, xr_hand_tracker_class_proto_funcs, _countof(xr_hand_tracker_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, xr_hand_tracker_class_constructor, "XRHandTracker", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "XRHandTracker", ctor);

	return 0;
}

JSModuleDef *_js_init_xr_hand_tracker_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_xr_hand_tracker_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "XRHandTracker");
	return m;
}

JSModuleDef *js_init_xr_hand_tracker_module(JSContext *ctx) {
	return _js_init_xr_hand_tracker_module(ctx, "godot/classes/xr_hand_tracker");
}

void register_xr_hand_tracker() {
	js_init_xr_hand_tracker_module(ctx);
}