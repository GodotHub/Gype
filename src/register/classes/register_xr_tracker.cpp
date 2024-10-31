
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/xr_tracker.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void xr_tracker_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef xr_tracker_class_def = {
	"XRTracker",
	.finalizer = xr_tracker_class_finalizer
};

static JSValue xr_tracker_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, XRTracker::__class_id);
	if (JS_IsException(obj))
		return obj;

	XRTracker *xr_tracker_class;
	if (argc == 1) 
		xr_tracker_class = static_cast<XRTracker *>(Variant(*argv).operator Object *());
	else 
		xr_tracker_class = memnew(XRTracker);
	if (!xr_tracker_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, xr_tracker_class);
	return obj;
}
static JSValue xr_tracker_class_get_tracker_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&XRTracker::get_tracker_type, ctx, this_val, argc, argv);
};
static JSValue xr_tracker_class_set_tracker_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&XRTracker::set_tracker_type, ctx, this_val, argc, argv);
};
static JSValue xr_tracker_class_get_tracker_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&XRTracker::get_tracker_name, ctx, this_val, argc, argv);
};
static JSValue xr_tracker_class_set_tracker_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&XRTracker::set_tracker_name, ctx, this_val, argc, argv);
};
static JSValue xr_tracker_class_get_tracker_desc(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&XRTracker::get_tracker_desc, ctx, this_val, argc, argv);
};
static JSValue xr_tracker_class_set_tracker_desc(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&XRTracker::set_tracker_desc, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry xr_tracker_class_proto_funcs[] = {
	JS_CFUNC_DEF("get_tracker_type", 0, &xr_tracker_class_get_tracker_type),
	JS_CFUNC_DEF("set_tracker_type", 1, &xr_tracker_class_set_tracker_type),
	JS_CFUNC_DEF("get_tracker_name", 0, &xr_tracker_class_get_tracker_name),
	JS_CFUNC_DEF("set_tracker_name", 1, &xr_tracker_class_set_tracker_name),
	JS_CFUNC_DEF("get_tracker_desc", 0, &xr_tracker_class_get_tracker_desc),
	JS_CFUNC_DEF("set_tracker_desc", 1, &xr_tracker_class_set_tracker_desc),
};

static void define_xr_tracker_property(JSContext *ctx, JSValue proto) {
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "type"),
        JS_NewCFunction(ctx, xr_tracker_class_get_tracker_type, "get_tracker_type", 0),
        JS_NewCFunction(ctx, xr_tracker_class_set_tracker_type, "set_tracker_type", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "name"),
        JS_NewCFunction(ctx, xr_tracker_class_get_tracker_name, "get_tracker_name", 0),
        JS_NewCFunction(ctx, xr_tracker_class_set_tracker_name, "set_tracker_name", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "description"),
        JS_NewCFunction(ctx, xr_tracker_class_get_tracker_desc, "get_tracker_desc", 0),
        JS_NewCFunction(ctx, xr_tracker_class_set_tracker_desc, "set_tracker_desc", 1),
        JS_PROP_GETSET
    );
	
}

static void define_xr_tracker_enum(JSContext *ctx, JSValue proto) {
}

static int js_xr_tracker_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["XRTracker"] = XRTracker::__class_id;
	class_id_list.insert(XRTracker::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), XRTracker::__class_id, &xr_tracker_class_def);

	JSValue proto = JS_NewObjectClass(ctx, XRTracker::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, RefCounted::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, XRTracker::__class_id, proto);

	define_xr_tracker_property(ctx, proto);
	define_xr_tracker_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, xr_tracker_class_proto_funcs, _countof(xr_tracker_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, xr_tracker_class_constructor, "XRTracker", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "XRTracker", ctor);

	return 0;
}

JSModuleDef *_js_init_xr_tracker_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/ref_counted';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_xr_tracker_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "XRTracker");
	return m;
}

JSModuleDef *js_init_xr_tracker_module(JSContext *ctx) {
	return _js_init_xr_tracker_module(ctx, "@godot/classes/xr_tracker");
}

void register_xr_tracker() {
	XRTracker::__init_js_class_id();
	js_init_xr_tracker_module(ctx);
}