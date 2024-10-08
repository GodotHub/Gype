
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/procedural_sky_material.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/classes/material.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void procedural_sky_material_class_finalizer(JSRuntime *rt, JSValue val) {
	ProceduralSkyMaterial *procedural_sky_material = static_cast<ProceduralSkyMaterial *>(JS_GetOpaque(val, ProceduralSkyMaterial::__class_id));
	if (procedural_sky_material)
		ProceduralSkyMaterial::free(nullptr, procedural_sky_material);
}

static JSClassDef procedural_sky_material_class_def = {
	"ProceduralSkyMaterial",
	.finalizer = procedural_sky_material_class_finalizer
};

static JSValue procedural_sky_material_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	ProceduralSkyMaterial *procedural_sky_material_class;
	JSValue obj = JS_NewObjectClass(ctx, ProceduralSkyMaterial::__class_id);
	if (JS_IsException(obj))
		return obj;
	procedural_sky_material_class = memnew(ProceduralSkyMaterial);
	if (!procedural_sky_material_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, procedural_sky_material_class);
	return obj;
}
static JSValue procedural_sky_material_class_set_sky_top_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&ProceduralSkyMaterial::set_sky_top_color, ProceduralSkyMaterial::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue procedural_sky_material_class_get_sky_top_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ProceduralSkyMaterial::get_sky_top_color, ProceduralSkyMaterial::__class_id, ctx, this_val, argv);
};
static JSValue procedural_sky_material_class_set_sky_horizon_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&ProceduralSkyMaterial::set_sky_horizon_color, ProceduralSkyMaterial::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue procedural_sky_material_class_get_sky_horizon_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ProceduralSkyMaterial::get_sky_horizon_color, ProceduralSkyMaterial::__class_id, ctx, this_val, argv);
};
static JSValue procedural_sky_material_class_set_sky_curve(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&ProceduralSkyMaterial::set_sky_curve, ProceduralSkyMaterial::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue procedural_sky_material_class_get_sky_curve(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ProceduralSkyMaterial::get_sky_curve, ProceduralSkyMaterial::__class_id, ctx, this_val, argv);
};
static JSValue procedural_sky_material_class_set_sky_energy_multiplier(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&ProceduralSkyMaterial::set_sky_energy_multiplier, ProceduralSkyMaterial::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue procedural_sky_material_class_get_sky_energy_multiplier(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ProceduralSkyMaterial::get_sky_energy_multiplier, ProceduralSkyMaterial::__class_id, ctx, this_val, argv);
};
static JSValue procedural_sky_material_class_set_sky_cover(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&ProceduralSkyMaterial::set_sky_cover, ProceduralSkyMaterial::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue procedural_sky_material_class_get_sky_cover(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ProceduralSkyMaterial::get_sky_cover, ProceduralSkyMaterial::__class_id, ctx, this_val, argv);
};
static JSValue procedural_sky_material_class_set_sky_cover_modulate(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&ProceduralSkyMaterial::set_sky_cover_modulate, ProceduralSkyMaterial::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue procedural_sky_material_class_get_sky_cover_modulate(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ProceduralSkyMaterial::get_sky_cover_modulate, ProceduralSkyMaterial::__class_id, ctx, this_val, argv);
};
static JSValue procedural_sky_material_class_set_ground_bottom_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&ProceduralSkyMaterial::set_ground_bottom_color, ProceduralSkyMaterial::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue procedural_sky_material_class_get_ground_bottom_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ProceduralSkyMaterial::get_ground_bottom_color, ProceduralSkyMaterial::__class_id, ctx, this_val, argv);
};
static JSValue procedural_sky_material_class_set_ground_horizon_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&ProceduralSkyMaterial::set_ground_horizon_color, ProceduralSkyMaterial::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue procedural_sky_material_class_get_ground_horizon_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ProceduralSkyMaterial::get_ground_horizon_color, ProceduralSkyMaterial::__class_id, ctx, this_val, argv);
};
static JSValue procedural_sky_material_class_set_ground_curve(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&ProceduralSkyMaterial::set_ground_curve, ProceduralSkyMaterial::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue procedural_sky_material_class_get_ground_curve(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ProceduralSkyMaterial::get_ground_curve, ProceduralSkyMaterial::__class_id, ctx, this_val, argv);
};
static JSValue procedural_sky_material_class_set_ground_energy_multiplier(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&ProceduralSkyMaterial::set_ground_energy_multiplier, ProceduralSkyMaterial::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue procedural_sky_material_class_get_ground_energy_multiplier(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ProceduralSkyMaterial::get_ground_energy_multiplier, ProceduralSkyMaterial::__class_id, ctx, this_val, argv);
};
static JSValue procedural_sky_material_class_set_sun_angle_max(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&ProceduralSkyMaterial::set_sun_angle_max, ProceduralSkyMaterial::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue procedural_sky_material_class_get_sun_angle_max(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ProceduralSkyMaterial::get_sun_angle_max, ProceduralSkyMaterial::__class_id, ctx, this_val, argv);
};
static JSValue procedural_sky_material_class_set_sun_curve(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&ProceduralSkyMaterial::set_sun_curve, ProceduralSkyMaterial::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue procedural_sky_material_class_get_sun_curve(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ProceduralSkyMaterial::get_sun_curve, ProceduralSkyMaterial::__class_id, ctx, this_val, argv);
};
static JSValue procedural_sky_material_class_set_use_debanding(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&ProceduralSkyMaterial::set_use_debanding, ProceduralSkyMaterial::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue procedural_sky_material_class_get_use_debanding(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ProceduralSkyMaterial::get_use_debanding, ProceduralSkyMaterial::__class_id, ctx, this_val, argv);
};
static JSValue procedural_sky_material_class_set_energy_multiplier(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&ProceduralSkyMaterial::set_energy_multiplier, ProceduralSkyMaterial::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue procedural_sky_material_class_get_energy_multiplier(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ProceduralSkyMaterial::get_energy_multiplier, ProceduralSkyMaterial::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry procedural_sky_material_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_sky_top_color", 1, &procedural_sky_material_class_set_sky_top_color),
	JS_CFUNC_DEF("get_sky_top_color", 0, &procedural_sky_material_class_get_sky_top_color),
	JS_CFUNC_DEF("set_sky_horizon_color", 1, &procedural_sky_material_class_set_sky_horizon_color),
	JS_CFUNC_DEF("get_sky_horizon_color", 0, &procedural_sky_material_class_get_sky_horizon_color),
	JS_CFUNC_DEF("set_sky_curve", 1, &procedural_sky_material_class_set_sky_curve),
	JS_CFUNC_DEF("get_sky_curve", 0, &procedural_sky_material_class_get_sky_curve),
	JS_CFUNC_DEF("set_sky_energy_multiplier", 1, &procedural_sky_material_class_set_sky_energy_multiplier),
	JS_CFUNC_DEF("get_sky_energy_multiplier", 0, &procedural_sky_material_class_get_sky_energy_multiplier),
	JS_CFUNC_DEF("set_sky_cover", 1, &procedural_sky_material_class_set_sky_cover),
	JS_CFUNC_DEF("get_sky_cover", 0, &procedural_sky_material_class_get_sky_cover),
	JS_CFUNC_DEF("set_sky_cover_modulate", 1, &procedural_sky_material_class_set_sky_cover_modulate),
	JS_CFUNC_DEF("get_sky_cover_modulate", 0, &procedural_sky_material_class_get_sky_cover_modulate),
	JS_CFUNC_DEF("set_ground_bottom_color", 1, &procedural_sky_material_class_set_ground_bottom_color),
	JS_CFUNC_DEF("get_ground_bottom_color", 0, &procedural_sky_material_class_get_ground_bottom_color),
	JS_CFUNC_DEF("set_ground_horizon_color", 1, &procedural_sky_material_class_set_ground_horizon_color),
	JS_CFUNC_DEF("get_ground_horizon_color", 0, &procedural_sky_material_class_get_ground_horizon_color),
	JS_CFUNC_DEF("set_ground_curve", 1, &procedural_sky_material_class_set_ground_curve),
	JS_CFUNC_DEF("get_ground_curve", 0, &procedural_sky_material_class_get_ground_curve),
	JS_CFUNC_DEF("set_ground_energy_multiplier", 1, &procedural_sky_material_class_set_ground_energy_multiplier),
	JS_CFUNC_DEF("get_ground_energy_multiplier", 0, &procedural_sky_material_class_get_ground_energy_multiplier),
	JS_CFUNC_DEF("set_sun_angle_max", 1, &procedural_sky_material_class_set_sun_angle_max),
	JS_CFUNC_DEF("get_sun_angle_max", 0, &procedural_sky_material_class_get_sun_angle_max),
	JS_CFUNC_DEF("set_sun_curve", 1, &procedural_sky_material_class_set_sun_curve),
	JS_CFUNC_DEF("get_sun_curve", 0, &procedural_sky_material_class_get_sun_curve),
	JS_CFUNC_DEF("set_use_debanding", 1, &procedural_sky_material_class_set_use_debanding),
	JS_CFUNC_DEF("get_use_debanding", 0, &procedural_sky_material_class_get_use_debanding),
	JS_CFUNC_DEF("set_energy_multiplier", 1, &procedural_sky_material_class_set_energy_multiplier),
	JS_CFUNC_DEF("get_energy_multiplier", 0, &procedural_sky_material_class_get_energy_multiplier),
};

static int js_procedural_sky_material_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&ProceduralSkyMaterial::__class_id);
	classes["ProceduralSkyMaterial"] = ProceduralSkyMaterial::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), ProceduralSkyMaterial::__class_id, &procedural_sky_material_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Material::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, ProceduralSkyMaterial::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, procedural_sky_material_class_proto_funcs, _countof(procedural_sky_material_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, procedural_sky_material_class_constructor, "ProceduralSkyMaterial", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "ProceduralSkyMaterial", ctor);

	return 0;
}

JSModuleDef *_js_init_procedural_sky_material_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_procedural_sky_material_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "ProceduralSkyMaterial");
	return m;
}

JSModuleDef *js_init_procedural_sky_material_module(JSContext *ctx) {
	return _js_init_procedural_sky_material_module(ctx, "godot/classes/procedural_sky_material");
}

void register_procedural_sky_material() {
	js_init_procedural_sky_material_module(ctx);
}