
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/xr_body_tracker.hpp>
#include <godot_cpp/classes/xr_positional_tracker.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void xr_body_tracker_class_finalizer(JSRuntime *rt, JSValue val) {
	XRBodyTracker *xr_body_tracker = static_cast<XRBodyTracker *>(JS_GetOpaque(val, XRBodyTracker::__class_id));
	if (xr_body_tracker)
		XRBodyTracker::free(nullptr, xr_body_tracker);
}

static JSClassDef xr_body_tracker_class_def = {
	"XRBodyTracker",
	.finalizer = xr_body_tracker_class_finalizer
};

static JSValue xr_body_tracker_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	XRBodyTracker *xr_body_tracker_class;
	JSValue obj = JS_NewObjectClass(ctx, XRBodyTracker::__class_id);
	if (JS_IsException(obj))
		return obj;
	xr_body_tracker_class = memnew(XRBodyTracker);
	if (!xr_body_tracker_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, xr_body_tracker_class);
	return obj;
}
static JSValue xr_body_tracker_class_set_has_tracking_data(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&XRBodyTracker::set_has_tracking_data, XRBodyTracker::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue xr_body_tracker_class_get_has_tracking_data(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&XRBodyTracker::get_has_tracking_data, XRBodyTracker::__class_id, ctx, this_val, argv);
};
static JSValue xr_body_tracker_class_set_body_flags(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&XRBodyTracker::set_body_flags, XRBodyTracker::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue xr_body_tracker_class_get_body_flags(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&XRBodyTracker::get_body_flags, XRBodyTracker::__class_id, ctx, this_val, argv);
};
static JSValue xr_body_tracker_class_set_joint_flags(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&XRBodyTracker::set_joint_flags, XRBodyTracker::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue xr_body_tracker_class_get_joint_flags(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&XRBodyTracker::get_joint_flags, XRBodyTracker::__class_id, ctx, this_val, argv);
};
static JSValue xr_body_tracker_class_set_joint_transform(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&XRBodyTracker::set_joint_transform, XRBodyTracker::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue xr_body_tracker_class_get_joint_transform(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&XRBodyTracker::get_joint_transform, XRBodyTracker::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry xr_body_tracker_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_has_tracking_data", 1, &xr_body_tracker_class_set_has_tracking_data),
	JS_CFUNC_DEF("get_has_tracking_data", 0, &xr_body_tracker_class_get_has_tracking_data),
	JS_CFUNC_DEF("set_body_flags", 1, &xr_body_tracker_class_set_body_flags),
	JS_CFUNC_DEF("get_body_flags", 0, &xr_body_tracker_class_get_body_flags),
	JS_CFUNC_DEF("set_joint_flags", 2, &xr_body_tracker_class_set_joint_flags),
	JS_CFUNC_DEF("get_joint_flags", 1, &xr_body_tracker_class_get_joint_flags),
	JS_CFUNC_DEF("set_joint_transform", 2, &xr_body_tracker_class_set_joint_transform),
	JS_CFUNC_DEF("get_joint_transform", 1, &xr_body_tracker_class_get_joint_transform),
};

static int js_xr_body_tracker_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&XRBodyTracker::__class_id);
	classes["XRBodyTracker"] = XRBodyTracker::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), XRBodyTracker::__class_id, &xr_body_tracker_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, XRPositionalTracker::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, XRBodyTracker::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, xr_body_tracker_class_proto_funcs, _countof(xr_body_tracker_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, xr_body_tracker_class_constructor, "XRBodyTracker", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "XRBodyTracker", ctor);

	return 0;
}

JSModuleDef *_js_init_xr_body_tracker_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_xr_body_tracker_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "XRBodyTracker");
	return m;
}

JSModuleDef *js_init_xr_body_tracker_module(JSContext *ctx) {
	return _js_init_xr_body_tracker_module(ctx, "godot/classes/xr_body_tracker");
}

void register_xr_body_tracker() {
	js_init_xr_body_tracker_module(ctx);
}