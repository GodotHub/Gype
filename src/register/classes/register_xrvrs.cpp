
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/xrvrs.hpp>
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void xrvrs_class_finalizer(JSRuntime *rt, JSValue val) {
	XRVRS *xrvrs = static_cast<XRVRS *>(JS_GetOpaque(val, XRVRS::__class_id));
	if (xrvrs)
		memdelete(xrvrs);
}

static JSClassDef xrvrs_class_def = {
	"XRVRS",
	.finalizer = xrvrs_class_finalizer
};

static JSValue xrvrs_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, XRVRS::__class_id);
	if (JS_IsException(obj))
		return obj;
	XRVRS *xrvrs_class = memnew(XRVRS);
	if (!xrvrs_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, xrvrs_class);	
	return obj;
}
static JSValue xrvrs_class_get_vrs_min_radius(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&XRVRS::get_vrs_min_radius, ctx, this_val, argc, argv);
};
static JSValue xrvrs_class_set_vrs_min_radius(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&XRVRS::set_vrs_min_radius, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue xrvrs_class_get_vrs_strength(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&XRVRS::get_vrs_strength, ctx, this_val, argc, argv);
};
static JSValue xrvrs_class_set_vrs_strength(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&XRVRS::set_vrs_strength, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue xrvrs_class_make_vrs_texture(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&XRVRS::make_vrs_texture, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry xrvrs_class_proto_funcs[] = {
	JS_CFUNC_DEF("get_vrs_min_radius", 0, &xrvrs_class_get_vrs_min_radius),
	JS_CFUNC_DEF("set_vrs_min_radius", 1, &xrvrs_class_set_vrs_min_radius),
	JS_CFUNC_DEF("get_vrs_strength", 0, &xrvrs_class_get_vrs_strength),
	JS_CFUNC_DEF("set_vrs_strength", 1, &xrvrs_class_set_vrs_strength),
	JS_CFUNC_DEF("make_vrs_texture", 2, &xrvrs_class_make_vrs_texture),
};

void define_xrvrs_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "vrs_min_radius"),
        JS_NewCFunction(ctx, xrvrs_class_get_vrs_min_radius, "get_vrs_min_radius", 0),
        JS_NewCFunction(ctx, xrvrs_class_set_vrs_min_radius, "set_vrs_min_radius", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "vrs_strength"),
        JS_NewCFunction(ctx, xrvrs_class_get_vrs_strength, "get_vrs_strength", 0),
        JS_NewCFunction(ctx, xrvrs_class_set_vrs_strength, "set_vrs_strength", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
}

static int js_xrvrs_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&XRVRS::__class_id);
	classes["XRVRS"] = XRVRS::__class_id;
	class_id_list.insert(XRVRS::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), XRVRS::__class_id, &xrvrs_class_def);

	JSValue proto = JS_NewObjectClass(ctx, XRVRS::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Object::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, XRVRS::__class_id, proto);

	define_xrvrs_property(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, xrvrs_class_proto_funcs, _countof(xrvrs_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, xrvrs_class_constructor, "XRVRS", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "XRVRS", ctor);

	return 0;
}

JSModuleDef *_js_init_xrvrs_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/object';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_xrvrs_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "XRVRS");
	return m;
}

JSModuleDef *js_init_xrvrs_module(JSContext *ctx) {
	return _js_init_xrvrs_module(ctx, "godot/classes/xrvrs");
}

void register_xrvrs() {
	XRVRS::__init_js_class_id();
	js_init_xrvrs_module(ctx);
}