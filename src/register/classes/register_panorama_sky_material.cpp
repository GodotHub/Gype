
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/material.hpp>
#include <godot_cpp/classes/panorama_sky_material.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void panorama_sky_material_class_finalizer(JSRuntime *rt, JSValue val) {
	PanoramaSkyMaterial *panorama_sky_material = static_cast<PanoramaSkyMaterial *>(JS_GetOpaque(val, PanoramaSkyMaterial::__class_id));
	if (panorama_sky_material)
		PanoramaSkyMaterial::free(nullptr, panorama_sky_material);
}

static JSClassDef panorama_sky_material_class_def = {
	"PanoramaSkyMaterial",
	.finalizer = panorama_sky_material_class_finalizer
};

static JSValue panorama_sky_material_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	PanoramaSkyMaterial *panorama_sky_material_class;
	JSValue obj = JS_NewObjectClass(ctx, PanoramaSkyMaterial::__class_id);
	if (JS_IsException(obj))
		return obj;
	panorama_sky_material_class = memnew(PanoramaSkyMaterial);
	if (!panorama_sky_material_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, panorama_sky_material_class);
	return obj;
}
static JSValue panorama_sky_material_class_set_panorama(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&PanoramaSkyMaterial::set_panorama, PanoramaSkyMaterial::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue panorama_sky_material_class_get_panorama(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PanoramaSkyMaterial::get_panorama, PanoramaSkyMaterial::__class_id, ctx, this_val, argv);
};
static JSValue panorama_sky_material_class_set_filtering_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&PanoramaSkyMaterial::set_filtering_enabled, PanoramaSkyMaterial::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue panorama_sky_material_class_is_filtering_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PanoramaSkyMaterial::is_filtering_enabled, PanoramaSkyMaterial::__class_id, ctx, this_val, argv);
};
static JSValue panorama_sky_material_class_set_energy_multiplier(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&PanoramaSkyMaterial::set_energy_multiplier, PanoramaSkyMaterial::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue panorama_sky_material_class_get_energy_multiplier(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PanoramaSkyMaterial::get_energy_multiplier, PanoramaSkyMaterial::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry panorama_sky_material_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_panorama", 1, &panorama_sky_material_class_set_panorama),
	JS_CFUNC_DEF("get_panorama", 0, &panorama_sky_material_class_get_panorama),
	JS_CFUNC_DEF("set_filtering_enabled", 1, &panorama_sky_material_class_set_filtering_enabled),
	JS_CFUNC_DEF("is_filtering_enabled", 0, &panorama_sky_material_class_is_filtering_enabled),
	JS_CFUNC_DEF("set_energy_multiplier", 1, &panorama_sky_material_class_set_energy_multiplier),
	JS_CFUNC_DEF("get_energy_multiplier", 0, &panorama_sky_material_class_get_energy_multiplier),
};

static int js_panorama_sky_material_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&PanoramaSkyMaterial::__class_id);
	classes["PanoramaSkyMaterial"] = PanoramaSkyMaterial::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), PanoramaSkyMaterial::__class_id, &panorama_sky_material_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Material::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, PanoramaSkyMaterial::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, panorama_sky_material_class_proto_funcs, _countof(panorama_sky_material_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, panorama_sky_material_class_constructor, "PanoramaSkyMaterial", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "PanoramaSkyMaterial", ctor);

	return 0;
}

JSModuleDef *_js_init_panorama_sky_material_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_panorama_sky_material_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "PanoramaSkyMaterial");
	return m;
}

JSModuleDef *js_init_panorama_sky_material_module(JSContext *ctx) {
	return _js_init_panorama_sky_material_module(ctx, "godot/classes/panorama_sky_material");
}

void register_panorama_sky_material() {
	js_init_panorama_sky_material_module(ctx);
}