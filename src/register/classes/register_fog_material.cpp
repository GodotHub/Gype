
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/texture3d.hpp>
#include <godot_cpp/classes/fog_material.hpp>
#include <godot_cpp/classes/material.hpp>
#include <godot_cpp/core/convert_helper.hpp>
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
	return obj;
}
static JSValue fog_material_class_set_density(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&FogMaterial::set_density, FogMaterial::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue fog_material_class_get_density(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&FogMaterial::get_density, FogMaterial::__class_id, ctx, this_val, argv);
};
static JSValue fog_material_class_set_albedo(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&FogMaterial::set_albedo, FogMaterial::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue fog_material_class_get_albedo(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&FogMaterial::get_albedo, FogMaterial::__class_id, ctx, this_val, argv);
};
static JSValue fog_material_class_set_emission(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&FogMaterial::set_emission, FogMaterial::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue fog_material_class_get_emission(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&FogMaterial::get_emission, FogMaterial::__class_id, ctx, this_val, argv);
};
static JSValue fog_material_class_set_height_falloff(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&FogMaterial::set_height_falloff, FogMaterial::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue fog_material_class_get_height_falloff(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&FogMaterial::get_height_falloff, FogMaterial::__class_id, ctx, this_val, argv);
};
static JSValue fog_material_class_set_edge_fade(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&FogMaterial::set_edge_fade, FogMaterial::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue fog_material_class_get_edge_fade(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&FogMaterial::get_edge_fade, FogMaterial::__class_id, ctx, this_val, argv);
};
static JSValue fog_material_class_set_density_texture(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&FogMaterial::set_density_texture, FogMaterial::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue fog_material_class_get_density_texture(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&FogMaterial::get_density_texture, FogMaterial::__class_id, ctx, this_val, argv);
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

static int js_fog_material_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&FogMaterial::__class_id);
	classes["FogMaterial"] = FogMaterial::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), FogMaterial::__class_id, &fog_material_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Material::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, FogMaterial::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, fog_material_class_proto_funcs, _countof(fog_material_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, fog_material_class_constructor, "FogMaterial", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "FogMaterial", ctor);

	return 0;
}

JSModuleDef *_js_init_fog_material_module(JSContext *ctx, const char *module_name) {
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
	js_init_fog_material_module(ctx);
}