
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/material.hpp>
#include <godot_cpp/classes/sky.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void sky_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef sky_class_def = {
	"Sky",
	.finalizer = sky_class_finalizer
};

static JSValue sky_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, Sky::__class_id);
	if (JS_IsException(obj))
		return obj;
	Sky *sky_class = memnew(Sky);
	if (!sky_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, sky_class);	
	return obj;
}
static JSValue sky_class_set_radiance_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&Sky::set_radiance_size, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue sky_class_get_radiance_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Sky::get_radiance_size, ctx, this_val, argc, argv);
};
static JSValue sky_class_set_process_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&Sky::set_process_mode, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue sky_class_get_process_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Sky::get_process_mode, ctx, this_val, argc, argv);
};
static JSValue sky_class_set_material(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&Sky::set_material, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue sky_class_get_material(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Sky::get_material, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry sky_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_radiance_size", 1, &sky_class_set_radiance_size),
	JS_CFUNC_DEF("get_radiance_size", 0, &sky_class_get_radiance_size),
	JS_CFUNC_DEF("set_process_mode", 1, &sky_class_set_process_mode),
	JS_CFUNC_DEF("get_process_mode", 0, &sky_class_get_process_mode),
	JS_CFUNC_DEF("set_material", 1, &sky_class_set_material),
	JS_CFUNC_DEF("get_material", 0, &sky_class_get_material),
};

void define_sky_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "sky_material"),
        JS_NewCFunction(ctx, sky_class_get_material, "get_material", 0),
        JS_NewCFunction(ctx, sky_class_set_material, "set_material", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "process_mode"),
        JS_NewCFunction(ctx, sky_class_get_process_mode, "get_process_mode", 0),
        JS_NewCFunction(ctx, sky_class_set_process_mode, "set_process_mode", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "radiance_size"),
        JS_NewCFunction(ctx, sky_class_get_radiance_size, "get_radiance_size", 0),
        JS_NewCFunction(ctx, sky_class_set_radiance_size, "set_radiance_size", 1),
        JS_PROP_GETSET
    );
}

static int js_sky_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&Sky::__class_id);
	classes["Sky"] = Sky::__class_id;
	class_id_list.insert(Sky::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), Sky::__class_id, &sky_class_def);

	JSValue proto = JS_NewObjectClass(ctx, Sky::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Resource::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, Sky::__class_id, proto);

	define_sky_property(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, sky_class_proto_funcs, _countof(sky_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, sky_class_constructor, "Sky", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "Sky", ctor);

	return 0;
}

JSModuleDef *_js_init_sky_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/resource';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_sky_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "Sky");
	return m;
}

JSModuleDef *js_init_sky_module(JSContext *ctx) {
	return _js_init_sky_module(ctx, "godot/classes/sky");
}

void register_sky() {
	Sky::__init_js_class_id();
	js_init_sky_module(ctx);
}