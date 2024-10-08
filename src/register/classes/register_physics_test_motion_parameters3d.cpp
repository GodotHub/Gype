
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/physics_test_motion_parameters3d.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void physics_test_motion_parameters3d_class_finalizer(JSRuntime *rt, JSValue val) {
	PhysicsTestMotionParameters3D *physics_test_motion_parameters3d = static_cast<PhysicsTestMotionParameters3D *>(JS_GetOpaque(val, PhysicsTestMotionParameters3D::__class_id));
	if (physics_test_motion_parameters3d)
		PhysicsTestMotionParameters3D::free(nullptr, physics_test_motion_parameters3d);
}

static JSClassDef physics_test_motion_parameters3d_class_def = {
	"PhysicsTestMotionParameters3D",
	.finalizer = physics_test_motion_parameters3d_class_finalizer
};

static JSValue physics_test_motion_parameters3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	PhysicsTestMotionParameters3D *physics_test_motion_parameters3d_class;
	JSValue obj = JS_NewObjectClass(ctx, PhysicsTestMotionParameters3D::__class_id);
	if (JS_IsException(obj))
		return obj;
	physics_test_motion_parameters3d_class = memnew(PhysicsTestMotionParameters3D);
	if (!physics_test_motion_parameters3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, physics_test_motion_parameters3d_class);
	return obj;
}
static JSValue physics_test_motion_parameters3d_class_get_from(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PhysicsTestMotionParameters3D::get_from, PhysicsTestMotionParameters3D::__class_id, ctx, this_val, argv);
};
static JSValue physics_test_motion_parameters3d_class_set_from(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&PhysicsTestMotionParameters3D::set_from, PhysicsTestMotionParameters3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue physics_test_motion_parameters3d_class_get_motion(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PhysicsTestMotionParameters3D::get_motion, PhysicsTestMotionParameters3D::__class_id, ctx, this_val, argv);
};
static JSValue physics_test_motion_parameters3d_class_set_motion(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&PhysicsTestMotionParameters3D::set_motion, PhysicsTestMotionParameters3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue physics_test_motion_parameters3d_class_get_margin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PhysicsTestMotionParameters3D::get_margin, PhysicsTestMotionParameters3D::__class_id, ctx, this_val, argv);
};
static JSValue physics_test_motion_parameters3d_class_set_margin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&PhysicsTestMotionParameters3D::set_margin, PhysicsTestMotionParameters3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue physics_test_motion_parameters3d_class_get_max_collisions(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PhysicsTestMotionParameters3D::get_max_collisions, PhysicsTestMotionParameters3D::__class_id, ctx, this_val, argv);
};
static JSValue physics_test_motion_parameters3d_class_set_max_collisions(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&PhysicsTestMotionParameters3D::set_max_collisions, PhysicsTestMotionParameters3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue physics_test_motion_parameters3d_class_is_collide_separation_ray_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PhysicsTestMotionParameters3D::is_collide_separation_ray_enabled, PhysicsTestMotionParameters3D::__class_id, ctx, this_val, argv);
};
static JSValue physics_test_motion_parameters3d_class_set_collide_separation_ray_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&PhysicsTestMotionParameters3D::set_collide_separation_ray_enabled, PhysicsTestMotionParameters3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue physics_test_motion_parameters3d_class_get_exclude_bodies(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PhysicsTestMotionParameters3D::get_exclude_bodies, PhysicsTestMotionParameters3D::__class_id, ctx, this_val, argv);
};
static JSValue physics_test_motion_parameters3d_class_set_exclude_bodies(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&PhysicsTestMotionParameters3D::set_exclude_bodies, PhysicsTestMotionParameters3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue physics_test_motion_parameters3d_class_get_exclude_objects(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PhysicsTestMotionParameters3D::get_exclude_objects, PhysicsTestMotionParameters3D::__class_id, ctx, this_val, argv);
};
static JSValue physics_test_motion_parameters3d_class_set_exclude_objects(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&PhysicsTestMotionParameters3D::set_exclude_objects, PhysicsTestMotionParameters3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue physics_test_motion_parameters3d_class_is_recovery_as_collision_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PhysicsTestMotionParameters3D::is_recovery_as_collision_enabled, PhysicsTestMotionParameters3D::__class_id, ctx, this_val, argv);
};
static JSValue physics_test_motion_parameters3d_class_set_recovery_as_collision_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&PhysicsTestMotionParameters3D::set_recovery_as_collision_enabled, PhysicsTestMotionParameters3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static const JSCFunctionListEntry physics_test_motion_parameters3d_class_proto_funcs[] = {
	JS_CFUNC_DEF("get_from", 0, &physics_test_motion_parameters3d_class_get_from),
	JS_CFUNC_DEF("set_from", 1, &physics_test_motion_parameters3d_class_set_from),
	JS_CFUNC_DEF("get_motion", 0, &physics_test_motion_parameters3d_class_get_motion),
	JS_CFUNC_DEF("set_motion", 1, &physics_test_motion_parameters3d_class_set_motion),
	JS_CFUNC_DEF("get_margin", 0, &physics_test_motion_parameters3d_class_get_margin),
	JS_CFUNC_DEF("set_margin", 1, &physics_test_motion_parameters3d_class_set_margin),
	JS_CFUNC_DEF("get_max_collisions", 0, &physics_test_motion_parameters3d_class_get_max_collisions),
	JS_CFUNC_DEF("set_max_collisions", 1, &physics_test_motion_parameters3d_class_set_max_collisions),
	JS_CFUNC_DEF("is_collide_separation_ray_enabled", 0, &physics_test_motion_parameters3d_class_is_collide_separation_ray_enabled),
	JS_CFUNC_DEF("set_collide_separation_ray_enabled", 1, &physics_test_motion_parameters3d_class_set_collide_separation_ray_enabled),
	JS_CFUNC_DEF("get_exclude_bodies", 0, &physics_test_motion_parameters3d_class_get_exclude_bodies),
	JS_CFUNC_DEF("set_exclude_bodies", 1, &physics_test_motion_parameters3d_class_set_exclude_bodies),
	JS_CFUNC_DEF("get_exclude_objects", 0, &physics_test_motion_parameters3d_class_get_exclude_objects),
	JS_CFUNC_DEF("set_exclude_objects", 1, &physics_test_motion_parameters3d_class_set_exclude_objects),
	JS_CFUNC_DEF("is_recovery_as_collision_enabled", 0, &physics_test_motion_parameters3d_class_is_recovery_as_collision_enabled),
	JS_CFUNC_DEF("set_recovery_as_collision_enabled", 1, &physics_test_motion_parameters3d_class_set_recovery_as_collision_enabled),
};

static int js_physics_test_motion_parameters3d_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&PhysicsTestMotionParameters3D::__class_id);
	classes["PhysicsTestMotionParameters3D"] = PhysicsTestMotionParameters3D::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), PhysicsTestMotionParameters3D::__class_id, &physics_test_motion_parameters3d_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, RefCounted::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, PhysicsTestMotionParameters3D::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, physics_test_motion_parameters3d_class_proto_funcs, _countof(physics_test_motion_parameters3d_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, physics_test_motion_parameters3d_class_constructor, "PhysicsTestMotionParameters3D", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "PhysicsTestMotionParameters3D", ctor);

	return 0;
}

JSModuleDef *_js_init_physics_test_motion_parameters3d_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_physics_test_motion_parameters3d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "PhysicsTestMotionParameters3D");
	return m;
}

JSModuleDef *js_init_physics_test_motion_parameters3d_module(JSContext *ctx) {
	return _js_init_physics_test_motion_parameters3d_module(ctx, "godot/classes/physics_test_motion_parameters3d");
}

void register_physics_test_motion_parameters3d() {
	js_init_physics_test_motion_parameters3d_module(ctx);
}