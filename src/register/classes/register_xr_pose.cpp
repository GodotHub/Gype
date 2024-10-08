
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/xr_pose.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void xr_pose_class_finalizer(JSRuntime *rt, JSValue val) {
	XRPose *xr_pose = static_cast<XRPose *>(JS_GetOpaque(val, XRPose::__class_id));
	if (xr_pose)
		XRPose::free(nullptr, xr_pose);
}

static JSClassDef xr_pose_class_def = {
	"XRPose",
	.finalizer = xr_pose_class_finalizer
};

static JSValue xr_pose_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	XRPose *xr_pose_class;
	JSValue obj = JS_NewObjectClass(ctx, XRPose::__class_id);
	if (JS_IsException(obj))
		return obj;
	xr_pose_class = memnew(XRPose);
	if (!xr_pose_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, xr_pose_class);
	return obj;
}
static JSValue xr_pose_class_set_has_tracking_data(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&XRPose::set_has_tracking_data, XRPose::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue xr_pose_class_get_has_tracking_data(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&XRPose::get_has_tracking_data, XRPose::__class_id, ctx, this_val, argv);
};
static JSValue xr_pose_class_set_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&XRPose::set_name, XRPose::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue xr_pose_class_get_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&XRPose::get_name, XRPose::__class_id, ctx, this_val, argv);
};
static JSValue xr_pose_class_set_transform(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&XRPose::set_transform, XRPose::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue xr_pose_class_get_transform(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&XRPose::get_transform, XRPose::__class_id, ctx, this_val, argv);
};
static JSValue xr_pose_class_get_adjusted_transform(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&XRPose::get_adjusted_transform, XRPose::__class_id, ctx, this_val, argv);
};
static JSValue xr_pose_class_set_linear_velocity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&XRPose::set_linear_velocity, XRPose::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue xr_pose_class_get_linear_velocity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&XRPose::get_linear_velocity, XRPose::__class_id, ctx, this_val, argv);
};
static JSValue xr_pose_class_set_angular_velocity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&XRPose::set_angular_velocity, XRPose::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue xr_pose_class_get_angular_velocity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&XRPose::get_angular_velocity, XRPose::__class_id, ctx, this_val, argv);
};
static JSValue xr_pose_class_set_tracking_confidence(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&XRPose::set_tracking_confidence, XRPose::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue xr_pose_class_get_tracking_confidence(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&XRPose::get_tracking_confidence, XRPose::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry xr_pose_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_has_tracking_data", 1, &xr_pose_class_set_has_tracking_data),
	JS_CFUNC_DEF("get_has_tracking_data", 0, &xr_pose_class_get_has_tracking_data),
	JS_CFUNC_DEF("set_name", 1, &xr_pose_class_set_name),
	JS_CFUNC_DEF("get_name", 0, &xr_pose_class_get_name),
	JS_CFUNC_DEF("set_transform", 1, &xr_pose_class_set_transform),
	JS_CFUNC_DEF("get_transform", 0, &xr_pose_class_get_transform),
	JS_CFUNC_DEF("get_adjusted_transform", 0, &xr_pose_class_get_adjusted_transform),
	JS_CFUNC_DEF("set_linear_velocity", 1, &xr_pose_class_set_linear_velocity),
	JS_CFUNC_DEF("get_linear_velocity", 0, &xr_pose_class_get_linear_velocity),
	JS_CFUNC_DEF("set_angular_velocity", 1, &xr_pose_class_set_angular_velocity),
	JS_CFUNC_DEF("get_angular_velocity", 0, &xr_pose_class_get_angular_velocity),
	JS_CFUNC_DEF("set_tracking_confidence", 1, &xr_pose_class_set_tracking_confidence),
	JS_CFUNC_DEF("get_tracking_confidence", 0, &xr_pose_class_get_tracking_confidence),
};

static int js_xr_pose_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&XRPose::__class_id);
	classes["XRPose"] = XRPose::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), XRPose::__class_id, &xr_pose_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, RefCounted::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, XRPose::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, xr_pose_class_proto_funcs, _countof(xr_pose_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, xr_pose_class_constructor, "XRPose", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "XRPose", ctor);

	return 0;
}

JSModuleDef *_js_init_xr_pose_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_xr_pose_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "XRPose");
	return m;
}

JSModuleDef *js_init_xr_pose_module(JSContext *ctx) {
	return _js_init_xr_pose_module(ctx, "godot/classes/xr_pose");
}

void register_xr_pose() {
	js_init_xr_pose_module(ctx);
}