
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/xr_tracker.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void xr_tracker_class_finalizer(JSRuntime *rt, JSValue val) {
	XRTracker *xr_tracker = static_cast<XRTracker *>(JS_GetOpaque(val, XRTracker::__class_id));
	if (xr_tracker)
		XRTracker::free(nullptr, xr_tracker);
}

static JSClassDef xr_tracker_class_def = {
	"XRTracker",
	.finalizer = xr_tracker_class_finalizer
};

static JSValue xr_tracker_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	XRTracker *xr_tracker_class;
	JSValue obj = JS_NewObjectClass(ctx, XRTracker::__class_id);
	if (JS_IsException(obj))
		return obj;
	xr_tracker_class = memnew(XRTracker);
	if (!xr_tracker_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, xr_tracker_class);
	return obj;
}
static JSValue xr_tracker_class_get_tracker_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&XRTracker::get_tracker_type, XRTracker::__class_id, ctx, this_val, argv);
};
static JSValue xr_tracker_class_set_tracker_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&XRTracker::set_tracker_type, XRTracker::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue xr_tracker_class_get_tracker_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&XRTracker::get_tracker_name, XRTracker::__class_id, ctx, this_val, argv);
};
static JSValue xr_tracker_class_set_tracker_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&XRTracker::set_tracker_name, XRTracker::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue xr_tracker_class_get_tracker_desc(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&XRTracker::get_tracker_desc, XRTracker::__class_id, ctx, this_val, argv);
};
static JSValue xr_tracker_class_set_tracker_desc(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&XRTracker::set_tracker_desc, XRTracker::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static const JSCFunctionListEntry xr_tracker_class_proto_funcs[] = {
	JS_CFUNC_DEF("get_tracker_type", 0, &xr_tracker_class_get_tracker_type),
	JS_CFUNC_DEF("set_tracker_type", 1, &xr_tracker_class_set_tracker_type),
	JS_CFUNC_DEF("get_tracker_name", 0, &xr_tracker_class_get_tracker_name),
	JS_CFUNC_DEF("set_tracker_name", 1, &xr_tracker_class_set_tracker_name),
	JS_CFUNC_DEF("get_tracker_desc", 0, &xr_tracker_class_get_tracker_desc),
	JS_CFUNC_DEF("set_tracker_desc", 1, &xr_tracker_class_set_tracker_desc),
};

static int js_xr_tracker_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&XRTracker::__class_id);
	classes["XRTracker"] = XRTracker::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), XRTracker::__class_id, &xr_tracker_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, RefCounted::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, XRTracker::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, xr_tracker_class_proto_funcs, _countof(xr_tracker_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, xr_tracker_class_constructor, "XRTracker", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "XRTracker", ctor);

	return 0;
}

JSModuleDef *_js_init_xr_tracker_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_xr_tracker_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "XRTracker");
	return m;
}

JSModuleDef *js_init_xr_tracker_module(JSContext *ctx) {
	return _js_init_xr_tracker_module(ctx, "godot/classes/xr_tracker");
}

void register_xr_tracker() {
	js_init_xr_tracker_module(ctx);
}