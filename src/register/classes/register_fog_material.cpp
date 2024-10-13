
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/material.hpp>
#include <godot_cpp/classes/fog_material.hpp>
#include <godot_cpp/classes/texture3d.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void fog_material_class_finalizer(JSRuntime *rt, JSValue val) {
	FogMaterial *fog_material = static_cast<FogMaterial *>(JS_GetOpaque(val, FogMaterial::__class_id));
	if (fog_material)
		FogMaterial::free(nullptr, fog_material);
}

static JSClassDef fog_material_class_def = {
	"FogMaterial",
	.finalizer = fog_material_class_finalizer
};

static JSValue fog_material_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	FogMaterial *fog_material_class;
	JSValue obj = JS_NewObjectClass(ctx, FogMaterial::__class_id);
	if (JS_IsException(obj))
		return obj;
	fog_material_class = memnew(FogMaterial);
	if (!fog_material_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, fog_material_class);
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");

	if (JS_IsObject(proto)) {
		JS_SetPrototype(ctx, obj, proto);
	}
	JS_FreeValue(ctx, proto);

	
	return obj;
}
static JSValue fog_material_class_set_density(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&FogMaterial::set_density, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue fog_material_class_get_density(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&FogMaterial::get_density, ctx, this_val, argc, argv);
};
static JSValue fog_material_class_set_albedo(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&FogMaterial::set_albedo, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue fog_material_class_get_albedo(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&FogMaterial::get_albedo, ctx, this_val, argc, argv);
};
static JSValue fog_material_class_set_emission(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&FogMaterial::set_emission, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue fog_material_class_get_emission(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&FogMaterial::get_emission, ctx, this_val, argc, argv);
};
static JSValue fog_material_class_set_height_falloff(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&FogMaterial::set_height_falloff, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue fog_material_class_get_height_falloff(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&FogMaterial::get_height_falloff, ctx, this_val, argc, argv);
};
static JSValue fog_material_class_set_edge_fade(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&FogMaterial::set_edge_fade, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue fog_material_class_get_edge_fade(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&FogMaterial::get_edge_fade, ctx, this_val, argc, argv);
};
static JSValue fog_material_class_set_density_texture(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&FogMaterial::set_density_texture, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue fog_material_class_get_density_texture(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&FogMaterial::get_density_texture, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry fog_material_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_density", 1, &fog_material_class_set_density),
	JS_CFUNC_DEF("get_density", 0, &fog_material_class_get_density),
	JS_CFUNC_DEF("set_albedo", 1, &fog_material_class_set_albedo),
	JS_CFUNC_DEF("get_albedo", 0, &fog_material_class_get_albedo),
	JS_CFUNC_DEF("set_emission", 1, &fog_material_class_set_emission),
	JS_CFUNC_DEF("get_emission", 0, &fog_material_class_get_emission),
	JS_CFUNC_DEF("set_height_falloff", 1, &fog_material_class_set_height_falloff),
	JS_CFUNC_DEF("get_height_falloff", 0, &fog_material_class_get_height_falloff),
	JS_CFUNC_DEF("set_edge_fade", 1, &fog_material_class_set_edge_fade),
	JS_CFUNC_DEF("get_edge_fade", 0, &fog_material_class_get_edge_fade),
	JS_CFUNC_DEF("set_density_texture", 1, &fog_material_class_set_density_texture),
	JS_CFUNC_DEF("get_density_texture", 0, &fog_material_class_get_density_texture),
};

void define_fog_material_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "density"),
        JS_NewCFunction(ctx, fog_material_class_get_density, "get_density", 0),
        JS_NewCFunction(ctx, fog_material_class_set_density, "set_density", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "albedo"),
        JS_NewCFunction(ctx, fog_material_class_get_albedo, "get_albedo", 0),
        JS_NewCFunction(ctx, fog_material_class_set_albedo, "set_albedo", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "emission"),
        JS_NewCFunction(ctx, fog_material_class_get_emission, "get_emission", 0),
        JS_NewCFunction(ctx, fog_material_class_set_emission, "set_emission", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "height_falloff"),
        JS_NewCFunction(ctx, fog_material_class_get_height_falloff, "get_height_falloff", 0),
        JS_NewCFunction(ctx, fog_material_class_set_height_falloff, "set_height_falloff", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "edge_fade"),
        JS_NewCFunction(ctx, fog_material_class_get_edge_fade, "get_edge_fade", 0),
        JS_NewCFunction(ctx, fog_material_class_set_edge_fade, "set_edge_fade", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "density_texture"),
        JS_NewCFunction(ctx, fog_material_class_get_density_texture, "get_density_texture", 0),
        JS_NewCFunction(ctx, fog_material_class_set_density_texture, "set_density_texture", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
}

static int js_fog_material_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&FogMaterial::__class_id);
	classes["FogMaterial"] = FogMaterial::__class_id;
	class_id_list.insert(FogMaterial::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), FogMaterial::__class_id, &fog_material_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Material::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, FogMaterial::__class_id, proto);
	define_fog_material_property(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, fog_material_class_proto_funcs, _countof(fog_material_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, fog_material_class_constructor, "FogMaterial", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "FogMaterial", ctor);

	return 0;
}

JSModuleDef *_js_init_fog_material_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/material';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_fog_material_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "FogMaterial");
	return m;
}

JSModuleDef *js_init_fog_material_module(JSContext *ctx) {
	return _js_init_fog_material_module(ctx, "godot/classes/fog_material");
}

void register_fog_material() {
	FogMaterial::__init_js_class_id();
	js_init_fog_material_module(ctx);
}