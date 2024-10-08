
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/physics_ray_query_parameters3d.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void physics_ray_query_parameters3d_class_finalizer(JSRuntime *rt, JSValue val) {
	PhysicsRayQueryParameters3D *physics_ray_query_parameters3d = static_cast<PhysicsRayQueryParameters3D *>(JS_GetOpaque(val, PhysicsRayQueryParameters3D::__class_id));
	if (physics_ray_query_parameters3d)
		PhysicsRayQueryParameters3D::free(nullptr, physics_ray_query_parameters3d);
}

static JSClassDef physics_ray_query_parameters3d_class_def = {
	"PhysicsRayQueryParameters3D",
	.finalizer = physics_ray_query_parameters3d_class_finalizer
};

static JSValue physics_ray_query_parameters3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	PhysicsRayQueryParameters3D *physics_ray_query_parameters3d_class;
	JSValue obj = JS_NewObjectClass(ctx, PhysicsRayQueryParameters3D::__class_id);
	if (JS_IsException(obj))
		return obj;
	physics_ray_query_parameters3d_class = memnew(PhysicsRayQueryParameters3D);
	if (!physics_ray_query_parameters3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, physics_ray_query_parameters3d_class);
	return obj;
}
static JSValue physics_ray_query_parameters3d_class_set_from(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&PhysicsRayQueryParameters3D::set_from, PhysicsRayQueryParameters3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue physics_ray_query_parameters3d_class_get_from(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PhysicsRayQueryParameters3D::get_from, PhysicsRayQueryParameters3D::__class_id, ctx, this_val, argv);
};
static JSValue physics_ray_query_parameters3d_class_set_to(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&PhysicsRayQueryParameters3D::set_to, PhysicsRayQueryParameters3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue physics_ray_query_parameters3d_class_get_to(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PhysicsRayQueryParameters3D::get_to, PhysicsRayQueryParameters3D::__class_id, ctx, this_val, argv);
};
static JSValue physics_ray_query_parameters3d_class_set_collision_mask(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&PhysicsRayQueryParameters3D::set_collision_mask, PhysicsRayQueryParameters3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue physics_ray_query_parameters3d_class_get_collision_mask(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PhysicsRayQueryParameters3D::get_collision_mask, PhysicsRayQueryParameters3D::__class_id, ctx, this_val, argv);
};
static JSValue physics_ray_query_parameters3d_class_set_exclude(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&PhysicsRayQueryParameters3D::set_exclude, PhysicsRayQueryParameters3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue physics_ray_query_parameters3d_class_get_exclude(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PhysicsRayQueryParameters3D::get_exclude, PhysicsRayQueryParameters3D::__class_id, ctx, this_val, argv);
};
static JSValue physics_ray_query_parameters3d_class_set_collide_with_bodies(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&PhysicsRayQueryParameters3D::set_collide_with_bodies, PhysicsRayQueryParameters3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue physics_ray_query_parameters3d_class_is_collide_with_bodies_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PhysicsRayQueryParameters3D::is_collide_with_bodies_enabled, PhysicsRayQueryParameters3D::__class_id, ctx, this_val, argv);
};
static JSValue physics_ray_query_parameters3d_class_set_collide_with_areas(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&PhysicsRayQueryParameters3D::set_collide_with_areas, PhysicsRayQueryParameters3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue physics_ray_query_parameters3d_class_is_collide_with_areas_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PhysicsRayQueryParameters3D::is_collide_with_areas_enabled, PhysicsRayQueryParameters3D::__class_id, ctx, this_val, argv);
};
static JSValue physics_ray_query_parameters3d_class_set_hit_from_inside(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&PhysicsRayQueryParameters3D::set_hit_from_inside, PhysicsRayQueryParameters3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue physics_ray_query_parameters3d_class_is_hit_from_inside_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PhysicsRayQueryParameters3D::is_hit_from_inside_enabled, PhysicsRayQueryParameters3D::__class_id, ctx, this_val, argv);
};
static JSValue physics_ray_query_parameters3d_class_set_hit_back_faces(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&PhysicsRayQueryParameters3D::set_hit_back_faces, PhysicsRayQueryParameters3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue physics_ray_query_parameters3d_class_is_hit_back_faces_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PhysicsRayQueryParameters3D::is_hit_back_faces_enabled, PhysicsRayQueryParameters3D::__class_id, ctx, this_val, argv);
};
static JSValue physics_ray_query_parameters3d_class_create(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_static_method_ret(&PhysicsRayQueryParameters3D::create, PhysicsRayQueryParameters3D::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry physics_ray_query_parameters3d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_from", 1, &physics_ray_query_parameters3d_class_set_from),
	JS_CFUNC_DEF("get_from", 0, &physics_ray_query_parameters3d_class_get_from),
	JS_CFUNC_DEF("set_to", 1, &physics_ray_query_parameters3d_class_set_to),
	JS_CFUNC_DEF("get_to", 0, &physics_ray_query_parameters3d_class_get_to),
	JS_CFUNC_DEF("set_collision_mask", 1, &physics_ray_query_parameters3d_class_set_collision_mask),
	JS_CFUNC_DEF("get_collision_mask", 0, &physics_ray_query_parameters3d_class_get_collision_mask),
	JS_CFUNC_DEF("set_exclude", 1, &physics_ray_query_parameters3d_class_set_exclude),
	JS_CFUNC_DEF("get_exclude", 0, &physics_ray_query_parameters3d_class_get_exclude),
	JS_CFUNC_DEF("set_collide_with_bodies", 1, &physics_ray_query_parameters3d_class_set_collide_with_bodies),
	JS_CFUNC_DEF("is_collide_with_bodies_enabled", 0, &physics_ray_query_parameters3d_class_is_collide_with_bodies_enabled),
	JS_CFUNC_DEF("set_collide_with_areas", 1, &physics_ray_query_parameters3d_class_set_collide_with_areas),
	JS_CFUNC_DEF("is_collide_with_areas_enabled", 0, &physics_ray_query_parameters3d_class_is_collide_with_areas_enabled),
	JS_CFUNC_DEF("set_hit_from_inside", 1, &physics_ray_query_parameters3d_class_set_hit_from_inside),
	JS_CFUNC_DEF("is_hit_from_inside_enabled", 0, &physics_ray_query_parameters3d_class_is_hit_from_inside_enabled),
	JS_CFUNC_DEF("set_hit_back_faces", 1, &physics_ray_query_parameters3d_class_set_hit_back_faces),
	JS_CFUNC_DEF("is_hit_back_faces_enabled", 0, &physics_ray_query_parameters3d_class_is_hit_back_faces_enabled),
};
static const JSCFunctionListEntry physics_ray_query_parameters3d_class_static_funcs[] = {
	JS_CFUNC_DEF("create", 4, &physics_ray_query_parameters3d_class_create),
};

static int js_physics_ray_query_parameters3d_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&PhysicsRayQueryParameters3D::__class_id);
	classes["PhysicsRayQueryParameters3D"] = PhysicsRayQueryParameters3D::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), PhysicsRayQueryParameters3D::__class_id, &physics_ray_query_parameters3d_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, RefCounted::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, PhysicsRayQueryParameters3D::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, physics_ray_query_parameters3d_class_proto_funcs, _countof(physics_ray_query_parameters3d_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, physics_ray_query_parameters3d_class_constructor, "PhysicsRayQueryParameters3D", 0, JS_CFUNC_constructor, 0);
	JS_SetPropertyFunctionList(ctx, ctor, physics_ray_query_parameters3d_class_static_funcs, _countof(physics_ray_query_parameters3d_class_static_funcs));

	JS_SetModuleExport(ctx, m, "PhysicsRayQueryParameters3D", ctor);

	return 0;
}

JSModuleDef *_js_init_physics_ray_query_parameters3d_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_physics_ray_query_parameters3d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "PhysicsRayQueryParameters3D");
	return m;
}

JSModuleDef *js_init_physics_ray_query_parameters3d_module(JSContext *ctx) {
	return _js_init_physics_ray_query_parameters3d_module(ctx, "godot/classes/physics_ray_query_parameters3d");
}

void register_physics_ray_query_parameters3d() {
	js_init_physics_ray_query_parameters3d_module(ctx);
}