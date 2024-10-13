
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/xr_positional_tracker.hpp>
#include <godot_cpp/classes/xr_body_tracker.hpp>
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
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");

	if (JS_IsObject(proto)) {
		JS_SetPrototype(ctx, obj, proto);
	}
	JS_FreeValue(ctx, proto);

	
	return obj;
}
static JSValue xr_body_tracker_class_set_has_tracking_data(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&XRBodyTracker::set_has_tracking_data, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue xr_body_tracker_class_get_has_tracking_data(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&XRBodyTracker::get_has_tracking_data, ctx, this_val, argc, argv);
};
static JSValue xr_body_tracker_class_set_body_flags(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&XRBodyTracker::set_body_flags, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue xr_body_tracker_class_get_body_flags(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&XRBodyTracker::get_body_flags, ctx, this_val, argc, argv);
};
static JSValue xr_body_tracker_class_set_joint_flags(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&XRBodyTracker::set_joint_flags, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue xr_body_tracker_class_get_joint_flags(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&XRBodyTracker::get_joint_flags, ctx, this_val, argc, argv);
};
static JSValue xr_body_tracker_class_set_joint_transform(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&XRBodyTracker::set_joint_transform, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue xr_body_tracker_class_get_joint_transform(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&XRBodyTracker::get_joint_transform, ctx, this_val, argc, argv);
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

void define_xr_body_tracker_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "has_tracking_data"),
        JS_NewCFunction(ctx, xr_body_tracker_class_get_has_tracking_data, "get_has_tracking_data", 0),
        JS_NewCFunction(ctx, xr_body_tracker_class_set_has_tracking_data, "set_has_tracking_data", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "body_flags"),
        JS_NewCFunction(ctx, xr_body_tracker_class_get_body_flags, "get_body_flags", 0),
        JS_NewCFunction(ctx, xr_body_tracker_class_set_body_flags, "set_body_flags", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
}

static int js_xr_body_tracker_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&XRBodyTracker::__class_id);
	classes["XRBodyTracker"] = XRBodyTracker::__class_id;
	class_id_list.insert(XRBodyTracker::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), XRBodyTracker::__class_id, &xr_body_tracker_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, XRPositionalTracker::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, XRBodyTracker::__class_id, proto);
	define_xr_body_tracker_property(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, xr_body_tracker_class_proto_funcs, _countof(xr_body_tracker_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, xr_body_tracker_class_constructor, "XRBodyTracker", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "XRBodyTracker", ctor);

	return 0;
}

JSModuleDef *_js_init_xr_body_tracker_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/xr_positional_tracker';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
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
	XRBodyTracker::__init_js_class_id();
	js_init_xr_body_tracker_module(ctx);
}