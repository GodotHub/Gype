
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/xr_pose.hpp>
#include <godot_cpp/classes/xr_positional_tracker.hpp>
#include <godot_cpp/classes/xr_tracker.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void xr_positional_tracker_class_finalizer(JSRuntime *rt, JSValue val) {
	XRPositionalTracker *xr_positional_tracker = static_cast<XRPositionalTracker *>(JS_GetOpaque(val, XRPositionalTracker::__class_id));
	if (xr_positional_tracker)
		XRPositionalTracker::free(nullptr, xr_positional_tracker);
}

static JSClassDef xr_positional_tracker_class_def = {
	"XRPositionalTracker",
	.finalizer = xr_positional_tracker_class_finalizer
};

static JSValue xr_positional_tracker_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	XRPositionalTracker *xr_positional_tracker_class;
	JSValue obj = JS_NewObjectClass(ctx, XRPositionalTracker::__class_id);
	if (JS_IsException(obj))
		return obj;
	xr_positional_tracker_class = memnew(XRPositionalTracker);
	if (!xr_positional_tracker_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, xr_positional_tracker_class);
	return obj;
}
static JSValue xr_positional_tracker_class_get_tracker_profile(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&XRPositionalTracker::get_tracker_profile, XRPositionalTracker::__class_id, ctx, this_val, argv);
};
static JSValue xr_positional_tracker_class_set_tracker_profile(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&XRPositionalTracker::set_tracker_profile, XRPositionalTracker::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue xr_positional_tracker_class_get_tracker_hand(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&XRPositionalTracker::get_tracker_hand, XRPositionalTracker::__class_id, ctx, this_val, argv);
};
static JSValue xr_positional_tracker_class_set_tracker_hand(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&XRPositionalTracker::set_tracker_hand, XRPositionalTracker::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue xr_positional_tracker_class_has_pose(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&XRPositionalTracker::has_pose, XRPositionalTracker::__class_id, ctx, this_val, argv);
};
static JSValue xr_positional_tracker_class_get_pose(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&XRPositionalTracker::get_pose, XRPositionalTracker::__class_id, ctx, this_val, argv);
};
static JSValue xr_positional_tracker_class_invalidate_pose(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&XRPositionalTracker::invalidate_pose, XRPositionalTracker::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue xr_positional_tracker_class_set_pose(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&XRPositionalTracker::set_pose, XRPositionalTracker::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue xr_positional_tracker_class_get_input(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&XRPositionalTracker::get_input, XRPositionalTracker::__class_id, ctx, this_val, argv);
};
static JSValue xr_positional_tracker_class_set_input(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&XRPositionalTracker::set_input, XRPositionalTracker::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static const JSCFunctionListEntry xr_positional_tracker_class_proto_funcs[] = {
	JS_CFUNC_DEF("get_tracker_profile", 0, &xr_positional_tracker_class_get_tracker_profile),
	JS_CFUNC_DEF("set_tracker_profile", 1, &xr_positional_tracker_class_set_tracker_profile),
	JS_CFUNC_DEF("get_tracker_hand", 0, &xr_positional_tracker_class_get_tracker_hand),
	JS_CFUNC_DEF("set_tracker_hand", 1, &xr_positional_tracker_class_set_tracker_hand),
	JS_CFUNC_DEF("has_pose", 1, &xr_positional_tracker_class_has_pose),
	JS_CFUNC_DEF("get_pose", 1, &xr_positional_tracker_class_get_pose),
	JS_CFUNC_DEF("invalidate_pose", 1, &xr_positional_tracker_class_invalidate_pose),
	JS_CFUNC_DEF("set_pose", 5, &xr_positional_tracker_class_set_pose),
	JS_CFUNC_DEF("get_input", 1, &xr_positional_tracker_class_get_input),
	JS_CFUNC_DEF("set_input", 2, &xr_positional_tracker_class_set_input),
};

static int js_xr_positional_tracker_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&XRPositionalTracker::__class_id);
	classes["XRPositionalTracker"] = XRPositionalTracker::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), XRPositionalTracker::__class_id, &xr_positional_tracker_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, XRTracker::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, XRPositionalTracker::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, xr_positional_tracker_class_proto_funcs, _countof(xr_positional_tracker_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, xr_positional_tracker_class_constructor, "XRPositionalTracker", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "XRPositionalTracker", ctor);

	return 0;
}

JSModuleDef *_js_init_xr_positional_tracker_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_xr_positional_tracker_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "XRPositionalTracker");
	return m;
}

JSModuleDef *js_init_xr_positional_tracker_module(JSContext *ctx) {
	return _js_init_xr_positional_tracker_module(ctx, "godot/classes/xr_positional_tracker");
}

void register_xr_positional_tracker() {
	js_init_xr_positional_tracker_module(ctx);
}