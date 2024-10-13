
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/physics_ray_query_parameters2d.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void physics_ray_query_parameters2d_class_finalizer(JSRuntime *rt, JSValue val) {
	PhysicsRayQueryParameters2D *physics_ray_query_parameters2d = static_cast<PhysicsRayQueryParameters2D *>(JS_GetOpaque(val, PhysicsRayQueryParameters2D::__class_id));
	if (physics_ray_query_parameters2d)
		PhysicsRayQueryParameters2D::free(nullptr, physics_ray_query_parameters2d);
}

static JSClassDef physics_ray_query_parameters2d_class_def = {
	"PhysicsRayQueryParameters2D",
	.finalizer = physics_ray_query_parameters2d_class_finalizer
};

static JSValue physics_ray_query_parameters2d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	PhysicsRayQueryParameters2D *physics_ray_query_parameters2d_class;
	JSValue obj = JS_NewObjectClass(ctx, PhysicsRayQueryParameters2D::__class_id);
	if (JS_IsException(obj))
		return obj;
	physics_ray_query_parameters2d_class = memnew(PhysicsRayQueryParameters2D);
	if (!physics_ray_query_parameters2d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, physics_ray_query_parameters2d_class);
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");

	if (JS_IsObject(proto)) {
		JS_SetPrototype(ctx, obj, proto);
	}
	JS_FreeValue(ctx, proto);

	
	return obj;
}
static JSValue physics_ray_query_parameters2d_class_set_from(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&PhysicsRayQueryParameters2D::set_from, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue physics_ray_query_parameters2d_class_get_from(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PhysicsRayQueryParameters2D::get_from, ctx, this_val, argc, argv);
};
static JSValue physics_ray_query_parameters2d_class_set_to(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&PhysicsRayQueryParameters2D::set_to, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue physics_ray_query_parameters2d_class_get_to(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PhysicsRayQueryParameters2D::get_to, ctx, this_val, argc, argv);
};
static JSValue physics_ray_query_parameters2d_class_set_collision_mask(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&PhysicsRayQueryParameters2D::set_collision_mask, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue physics_ray_query_parameters2d_class_get_collision_mask(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PhysicsRayQueryParameters2D::get_collision_mask, ctx, this_val, argc, argv);
};
static JSValue physics_ray_query_parameters2d_class_set_exclude(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&PhysicsRayQueryParameters2D::set_exclude, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue physics_ray_query_parameters2d_class_get_exclude(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PhysicsRayQueryParameters2D::get_exclude, ctx, this_val, argc, argv);
};
static JSValue physics_ray_query_parameters2d_class_set_collide_with_bodies(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&PhysicsRayQueryParameters2D::set_collide_with_bodies, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue physics_ray_query_parameters2d_class_is_collide_with_bodies_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PhysicsRayQueryParameters2D::is_collide_with_bodies_enabled, ctx, this_val, argc, argv);
};
static JSValue physics_ray_query_parameters2d_class_set_collide_with_areas(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&PhysicsRayQueryParameters2D::set_collide_with_areas, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue physics_ray_query_parameters2d_class_is_collide_with_areas_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PhysicsRayQueryParameters2D::is_collide_with_areas_enabled, ctx, this_val, argc, argv);
};
static JSValue physics_ray_query_parameters2d_class_set_hit_from_inside(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&PhysicsRayQueryParameters2D::set_hit_from_inside, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue physics_ray_query_parameters2d_class_is_hit_from_inside_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PhysicsRayQueryParameters2D::is_hit_from_inside_enabled, ctx, this_val, argc, argv);
};
static JSValue physics_ray_query_parameters2d_class_create(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_static_method_ret(&PhysicsRayQueryParameters2D::create, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry physics_ray_query_parameters2d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_from", 1, &physics_ray_query_parameters2d_class_set_from),
	JS_CFUNC_DEF("get_from", 0, &physics_ray_query_parameters2d_class_get_from),
	JS_CFUNC_DEF("set_to", 1, &physics_ray_query_parameters2d_class_set_to),
	JS_CFUNC_DEF("get_to", 0, &physics_ray_query_parameters2d_class_get_to),
	JS_CFUNC_DEF("set_collision_mask", 1, &physics_ray_query_parameters2d_class_set_collision_mask),
	JS_CFUNC_DEF("get_collision_mask", 0, &physics_ray_query_parameters2d_class_get_collision_mask),
	JS_CFUNC_DEF("set_exclude", 1, &physics_ray_query_parameters2d_class_set_exclude),
	JS_CFUNC_DEF("get_exclude", 0, &physics_ray_query_parameters2d_class_get_exclude),
	JS_CFUNC_DEF("set_collide_with_bodies", 1, &physics_ray_query_parameters2d_class_set_collide_with_bodies),
	JS_CFUNC_DEF("is_collide_with_bodies_enabled", 0, &physics_ray_query_parameters2d_class_is_collide_with_bodies_enabled),
	JS_CFUNC_DEF("set_collide_with_areas", 1, &physics_ray_query_parameters2d_class_set_collide_with_areas),
	JS_CFUNC_DEF("is_collide_with_areas_enabled", 0, &physics_ray_query_parameters2d_class_is_collide_with_areas_enabled),
	JS_CFUNC_DEF("set_hit_from_inside", 1, &physics_ray_query_parameters2d_class_set_hit_from_inside),
	JS_CFUNC_DEF("is_hit_from_inside_enabled", 0, &physics_ray_query_parameters2d_class_is_hit_from_inside_enabled),
};
static const JSCFunctionListEntry physics_ray_query_parameters2d_class_static_funcs[] = {
	JS_CFUNC_DEF("create", 4, &physics_ray_query_parameters2d_class_create),
};

void define_physics_ray_query_parameters2d_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "from"),
        JS_NewCFunction(ctx, physics_ray_query_parameters2d_class_get_from, "get_from", 0),
        JS_NewCFunction(ctx, physics_ray_query_parameters2d_class_set_from, "set_from", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "to"),
        JS_NewCFunction(ctx, physics_ray_query_parameters2d_class_get_to, "get_to", 0),
        JS_NewCFunction(ctx, physics_ray_query_parameters2d_class_set_to, "set_to", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "collision_mask"),
        JS_NewCFunction(ctx, physics_ray_query_parameters2d_class_get_collision_mask, "get_collision_mask", 0),
        JS_NewCFunction(ctx, physics_ray_query_parameters2d_class_set_collision_mask, "set_collision_mask", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "exclude"),
        JS_NewCFunction(ctx, physics_ray_query_parameters2d_class_get_exclude, "get_exclude", 0),
        JS_NewCFunction(ctx, physics_ray_query_parameters2d_class_set_exclude, "set_exclude", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "collide_with_bodies"),
        JS_NewCFunction(ctx, physics_ray_query_parameters2d_class_is_collide_with_bodies_enabled, "is_collide_with_bodies_enabled", 0),
        JS_NewCFunction(ctx, physics_ray_query_parameters2d_class_set_collide_with_bodies, "set_collide_with_bodies", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "collide_with_areas"),
        JS_NewCFunction(ctx, physics_ray_query_parameters2d_class_is_collide_with_areas_enabled, "is_collide_with_areas_enabled", 0),
        JS_NewCFunction(ctx, physics_ray_query_parameters2d_class_set_collide_with_areas, "set_collide_with_areas", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "hit_from_inside"),
        JS_NewCFunction(ctx, physics_ray_query_parameters2d_class_is_hit_from_inside_enabled, "is_hit_from_inside_enabled", 0),
        JS_NewCFunction(ctx, physics_ray_query_parameters2d_class_set_hit_from_inside, "set_hit_from_inside", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
}

static int js_physics_ray_query_parameters2d_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&PhysicsRayQueryParameters2D::__class_id);
	classes["PhysicsRayQueryParameters2D"] = PhysicsRayQueryParameters2D::__class_id;
	class_id_list.insert(PhysicsRayQueryParameters2D::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), PhysicsRayQueryParameters2D::__class_id, &physics_ray_query_parameters2d_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, RefCounted::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, PhysicsRayQueryParameters2D::__class_id, proto);
	define_physics_ray_query_parameters2d_property(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, physics_ray_query_parameters2d_class_proto_funcs, _countof(physics_ray_query_parameters2d_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, physics_ray_query_parameters2d_class_constructor, "PhysicsRayQueryParameters2D", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);
	JS_SetPropertyFunctionList(ctx, ctor, physics_ray_query_parameters2d_class_static_funcs, _countof(physics_ray_query_parameters2d_class_static_funcs));

	JS_SetModuleExport(ctx, m, "PhysicsRayQueryParameters2D", ctor);

	return 0;
}

JSModuleDef *_js_init_physics_ray_query_parameters2d_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/ref_counted';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_physics_ray_query_parameters2d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "PhysicsRayQueryParameters2D");
	return m;
}

JSModuleDef *js_init_physics_ray_query_parameters2d_module(JSContext *ctx) {
	return _js_init_physics_ray_query_parameters2d_module(ctx, "godot/classes/physics_ray_query_parameters2d");
}

void register_physics_ray_query_parameters2d() {
	PhysicsRayQueryParameters2D::__init_js_class_id();
	js_init_physics_ray_query_parameters2d_module(ctx);
}