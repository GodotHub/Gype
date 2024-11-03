
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/classes/physical_sky_material.hpp>
#include <godot_cpp/classes/material.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void physical_sky_material_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef physical_sky_material_class_def = {
	"PhysicalSkyMaterial",
	.finalizer = physical_sky_material_class_finalizer
};

static JSValue physical_sky_material_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, PhysicalSkyMaterial::__class_id);
	if (JS_IsException(obj))
		return obj;

	PhysicalSkyMaterial *physical_sky_material_class;
	if (argc == 1) 
		physical_sky_material_class = static_cast<PhysicalSkyMaterial *>(Variant(*argv).operator Object *());
	else 
		physical_sky_material_class = memnew(PhysicalSkyMaterial);
	if (!physical_sky_material_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, physical_sky_material_class);
	return obj;
}
static JSValue physical_sky_material_class_set_rayleigh_coefficient(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&PhysicalSkyMaterial::set_rayleigh_coefficient, ctx, this_val, argc, argv);
};
static JSValue physical_sky_material_class_get_rayleigh_coefficient(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&PhysicalSkyMaterial::get_rayleigh_coefficient, ctx, this_val, argc, argv);
};
static JSValue physical_sky_material_class_set_rayleigh_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&PhysicalSkyMaterial::set_rayleigh_color, ctx, this_val, argc, argv);
};
static JSValue physical_sky_material_class_get_rayleigh_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&PhysicalSkyMaterial::get_rayleigh_color, ctx, this_val, argc, argv);
};
static JSValue physical_sky_material_class_set_mie_coefficient(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&PhysicalSkyMaterial::set_mie_coefficient, ctx, this_val, argc, argv);
};
static JSValue physical_sky_material_class_get_mie_coefficient(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&PhysicalSkyMaterial::get_mie_coefficient, ctx, this_val, argc, argv);
};
static JSValue physical_sky_material_class_set_mie_eccentricity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&PhysicalSkyMaterial::set_mie_eccentricity, ctx, this_val, argc, argv);
};
static JSValue physical_sky_material_class_get_mie_eccentricity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&PhysicalSkyMaterial::get_mie_eccentricity, ctx, this_val, argc, argv);
};
static JSValue physical_sky_material_class_set_mie_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&PhysicalSkyMaterial::set_mie_color, ctx, this_val, argc, argv);
};
static JSValue physical_sky_material_class_get_mie_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&PhysicalSkyMaterial::get_mie_color, ctx, this_val, argc, argv);
};
static JSValue physical_sky_material_class_set_turbidity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&PhysicalSkyMaterial::set_turbidity, ctx, this_val, argc, argv);
};
static JSValue physical_sky_material_class_get_turbidity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&PhysicalSkyMaterial::get_turbidity, ctx, this_val, argc, argv);
};
static JSValue physical_sky_material_class_set_sun_disk_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&PhysicalSkyMaterial::set_sun_disk_scale, ctx, this_val, argc, argv);
};
static JSValue physical_sky_material_class_get_sun_disk_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&PhysicalSkyMaterial::get_sun_disk_scale, ctx, this_val, argc, argv);
};
static JSValue physical_sky_material_class_set_ground_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&PhysicalSkyMaterial::set_ground_color, ctx, this_val, argc, argv);
};
static JSValue physical_sky_material_class_get_ground_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&PhysicalSkyMaterial::get_ground_color, ctx, this_val, argc, argv);
};
static JSValue physical_sky_material_class_set_energy_multiplier(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&PhysicalSkyMaterial::set_energy_multiplier, ctx, this_val, argc, argv);
};
static JSValue physical_sky_material_class_get_energy_multiplier(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&PhysicalSkyMaterial::get_energy_multiplier, ctx, this_val, argc, argv);
};
static JSValue physical_sky_material_class_set_use_debanding(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&PhysicalSkyMaterial::set_use_debanding, ctx, this_val, argc, argv);
};
static JSValue physical_sky_material_class_get_use_debanding(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&PhysicalSkyMaterial::get_use_debanding, ctx, this_val, argc, argv);
};
static JSValue physical_sky_material_class_set_night_sky(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&PhysicalSkyMaterial::set_night_sky, ctx, this_val, argc, argv);
};
static JSValue physical_sky_material_class_get_night_sky(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&PhysicalSkyMaterial::get_night_sky, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry physical_sky_material_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_rayleigh_coefficient", 1, &physical_sky_material_class_set_rayleigh_coefficient),
	JS_CFUNC_DEF("get_rayleigh_coefficient", 0, &physical_sky_material_class_get_rayleigh_coefficient),
	JS_CFUNC_DEF("set_rayleigh_color", 1, &physical_sky_material_class_set_rayleigh_color),
	JS_CFUNC_DEF("get_rayleigh_color", 0, &physical_sky_material_class_get_rayleigh_color),
	JS_CFUNC_DEF("set_mie_coefficient", 1, &physical_sky_material_class_set_mie_coefficient),
	JS_CFUNC_DEF("get_mie_coefficient", 0, &physical_sky_material_class_get_mie_coefficient),
	JS_CFUNC_DEF("set_mie_eccentricity", 1, &physical_sky_material_class_set_mie_eccentricity),
	JS_CFUNC_DEF("get_mie_eccentricity", 0, &physical_sky_material_class_get_mie_eccentricity),
	JS_CFUNC_DEF("set_mie_color", 1, &physical_sky_material_class_set_mie_color),
	JS_CFUNC_DEF("get_mie_color", 0, &physical_sky_material_class_get_mie_color),
	JS_CFUNC_DEF("set_turbidity", 1, &physical_sky_material_class_set_turbidity),
	JS_CFUNC_DEF("get_turbidity", 0, &physical_sky_material_class_get_turbidity),
	JS_CFUNC_DEF("set_sun_disk_scale", 1, &physical_sky_material_class_set_sun_disk_scale),
	JS_CFUNC_DEF("get_sun_disk_scale", 0, &physical_sky_material_class_get_sun_disk_scale),
	JS_CFUNC_DEF("set_ground_color", 1, &physical_sky_material_class_set_ground_color),
	JS_CFUNC_DEF("get_ground_color", 0, &physical_sky_material_class_get_ground_color),
	JS_CFUNC_DEF("set_energy_multiplier", 1, &physical_sky_material_class_set_energy_multiplier),
	JS_CFUNC_DEF("get_energy_multiplier", 0, &physical_sky_material_class_get_energy_multiplier),
	JS_CFUNC_DEF("set_use_debanding", 1, &physical_sky_material_class_set_use_debanding),
	JS_CFUNC_DEF("get_use_debanding", 0, &physical_sky_material_class_get_use_debanding),
	JS_CFUNC_DEF("set_night_sky", 1, &physical_sky_material_class_set_night_sky),
	JS_CFUNC_DEF("get_night_sky", 0, &physical_sky_material_class_get_night_sky),
};

static void define_physical_sky_material_property(JSContext *ctx, JSValue proto) {
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "rayleigh_coefficient"),
        JS_NewCFunction(ctx, physical_sky_material_class_get_rayleigh_coefficient, "get_rayleigh_coefficient", 0),
        JS_NewCFunction(ctx, physical_sky_material_class_set_rayleigh_coefficient, "set_rayleigh_coefficient", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "rayleigh_color"),
        JS_NewCFunction(ctx, physical_sky_material_class_get_rayleigh_color, "get_rayleigh_color", 0),
        JS_NewCFunction(ctx, physical_sky_material_class_set_rayleigh_color, "set_rayleigh_color", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "mie_coefficient"),
        JS_NewCFunction(ctx, physical_sky_material_class_get_mie_coefficient, "get_mie_coefficient", 0),
        JS_NewCFunction(ctx, physical_sky_material_class_set_mie_coefficient, "set_mie_coefficient", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "mie_eccentricity"),
        JS_NewCFunction(ctx, physical_sky_material_class_get_mie_eccentricity, "get_mie_eccentricity", 0),
        JS_NewCFunction(ctx, physical_sky_material_class_set_mie_eccentricity, "set_mie_eccentricity", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "mie_color"),
        JS_NewCFunction(ctx, physical_sky_material_class_get_mie_color, "get_mie_color", 0),
        JS_NewCFunction(ctx, physical_sky_material_class_set_mie_color, "set_mie_color", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "turbidity"),
        JS_NewCFunction(ctx, physical_sky_material_class_get_turbidity, "get_turbidity", 0),
        JS_NewCFunction(ctx, physical_sky_material_class_set_turbidity, "set_turbidity", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "sun_disk_scale"),
        JS_NewCFunction(ctx, physical_sky_material_class_get_sun_disk_scale, "get_sun_disk_scale", 0),
        JS_NewCFunction(ctx, physical_sky_material_class_set_sun_disk_scale, "set_sun_disk_scale", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "ground_color"),
        JS_NewCFunction(ctx, physical_sky_material_class_get_ground_color, "get_ground_color", 0),
        JS_NewCFunction(ctx, physical_sky_material_class_set_ground_color, "set_ground_color", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "energy_multiplier"),
        JS_NewCFunction(ctx, physical_sky_material_class_get_energy_multiplier, "get_energy_multiplier", 0),
        JS_NewCFunction(ctx, physical_sky_material_class_set_energy_multiplier, "set_energy_multiplier", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "use_debanding"),
        JS_NewCFunction(ctx, physical_sky_material_class_get_use_debanding, "get_use_debanding", 0),
        JS_NewCFunction(ctx, physical_sky_material_class_set_use_debanding, "set_use_debanding", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "night_sky"),
        JS_NewCFunction(ctx, physical_sky_material_class_get_night_sky, "get_night_sky", 0),
        JS_NewCFunction(ctx, physical_sky_material_class_set_night_sky, "set_night_sky", 1),
        JS_PROP_GETSET
    );
	
}

static void define_physical_sky_material_enum(JSContext *ctx, JSValue proto) {
}

static int js_physical_sky_material_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["PhysicalSkyMaterial"] = PhysicalSkyMaterial::__class_id;
	class_id_list.insert(PhysicalSkyMaterial::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), PhysicalSkyMaterial::__class_id, &physical_sky_material_class_def);

	JSValue proto = JS_NewObjectClass(ctx, PhysicalSkyMaterial::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Material::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, PhysicalSkyMaterial::__class_id, proto);

	define_physical_sky_material_property(ctx, proto);
	define_physical_sky_material_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, physical_sky_material_class_proto_funcs, _countof(physical_sky_material_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, physical_sky_material_class_constructor, "PhysicalSkyMaterial", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);
	JS_SetModuleExport(ctx, m, "PhysicalSkyMaterial", ctor);
	constructors[PhysicalSkyMaterial::__class_id] = ctor;

	return 0;
}

JSModuleDef *_js_init_physical_sky_material_module(JSContext *ctx, const char *module_name) {
	// 需要提前完成import依赖
	const char *code = "import * as _ from '@godot/classes/material';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_physical_sky_material_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "PhysicalSkyMaterial");
	return m;
}

JSModuleDef *js_init_physical_sky_material_module(JSContext *ctx) {
	return _js_init_physical_sky_material_module(ctx, "@godot/classes/physical_sky_material");
}

void register_physical_sky_material() {
	PhysicalSkyMaterial::__init_js_class_id();
	js_init_physical_sky_material_module(ctx);
}