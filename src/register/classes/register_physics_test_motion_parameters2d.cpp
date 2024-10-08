
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/physics_test_motion_parameters2d.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void physics_test_motion_parameters2d_class_finalizer(JSRuntime *rt, JSValue val) {
	PhysicsTestMotionParameters2D *physics_test_motion_parameters2d = static_cast<PhysicsTestMotionParameters2D *>(JS_GetOpaque(val, PhysicsTestMotionParameters2D::__class_id));
	if (physics_test_motion_parameters2d)
		PhysicsTestMotionParameters2D::free(nullptr, physics_test_motion_parameters2d);
}

static JSClassDef physics_test_motion_parameters2d_class_def = {
	"PhysicsTestMotionParameters2D",
	.finalizer = physics_test_motion_parameters2d_class_finalizer
};

static JSValue physics_test_motion_parameters2d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	PhysicsTestMotionParameters2D *physics_test_motion_parameters2d_class;
	JSValue obj = JS_NewObjectClass(ctx, PhysicsTestMotionParameters2D::__class_id);
	if (JS_IsException(obj))
		return obj;
	physics_test_motion_parameters2d_class = memnew(PhysicsTestMotionParameters2D);
	if (!physics_test_motion_parameters2d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, physics_test_motion_parameters2d_class);
	return obj;
}
static JSValue physics_test_motion_parameters2d_class_get_from(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PhysicsTestMotionParameters2D::get_from, PhysicsTestMotionParameters2D::__class_id, ctx, this_val, argv);
};
static JSValue physics_test_motion_parameters2d_class_set_from(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&PhysicsTestMotionParameters2D::set_from, PhysicsTestMotionParameters2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue physics_test_motion_parameters2d_class_get_motion(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PhysicsTestMotionParameters2D::get_motion, PhysicsTestMotionParameters2D::__class_id, ctx, this_val, argv);
};
static JSValue physics_test_motion_parameters2d_class_set_motion(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&PhysicsTestMotionParameters2D::set_motion, PhysicsTestMotionParameters2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue physics_test_motion_parameters2d_class_get_margin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PhysicsTestMotionParameters2D::get_margin, PhysicsTestMotionParameters2D::__class_id, ctx, this_val, argv);
};
static JSValue physics_test_motion_parameters2d_class_set_margin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&PhysicsTestMotionParameters2D::set_margin, PhysicsTestMotionParameters2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue physics_test_motion_parameters2d_class_is_collide_separation_ray_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PhysicsTestMotionParameters2D::is_collide_separation_ray_enabled, PhysicsTestMotionParameters2D::__class_id, ctx, this_val, argv);
};
static JSValue physics_test_motion_parameters2d_class_set_collide_separation_ray_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&PhysicsTestMotionParameters2D::set_collide_separation_ray_enabled, PhysicsTestMotionParameters2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue physics_test_motion_parameters2d_class_get_exclude_bodies(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PhysicsTestMotionParameters2D::get_exclude_bodies, PhysicsTestMotionParameters2D::__class_id, ctx, this_val, argv);
};
static JSValue physics_test_motion_parameters2d_class_set_exclude_bodies(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&PhysicsTestMotionParameters2D::set_exclude_bodies, PhysicsTestMotionParameters2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue physics_test_motion_parameters2d_class_get_exclude_objects(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PhysicsTestMotionParameters2D::get_exclude_objects, PhysicsTestMotionParameters2D::__class_id, ctx, this_val, argv);
};
static JSValue physics_test_motion_parameters2d_class_set_exclude_objects(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&PhysicsTestMotionParameters2D::set_exclude_objects, PhysicsTestMotionParameters2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue physics_test_motion_parameters2d_class_is_recovery_as_collision_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PhysicsTestMotionParameters2D::is_recovery_as_collision_enabled, PhysicsTestMotionParameters2D::__class_id, ctx, this_val, argv);
};
static JSValue physics_test_motion_parameters2d_class_set_recovery_as_collision_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&PhysicsTestMotionParameters2D::set_recovery_as_collision_enabled, PhysicsTestMotionParameters2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static const JSCFunctionListEntry physics_test_motion_parameters2d_class_proto_funcs[] = {
	JS_CFUNC_DEF("get_from", 0, &physics_test_motion_parameters2d_class_get_from),
	JS_CFUNC_DEF("set_from", 1, &physics_test_motion_parameters2d_class_set_from),
	JS_CFUNC_DEF("get_motion", 0, &physics_test_motion_parameters2d_class_get_motion),
	JS_CFUNC_DEF("set_motion", 1, &physics_test_motion_parameters2d_class_set_motion),
	JS_CFUNC_DEF("get_margin", 0, &physics_test_motion_parameters2d_class_get_margin),
	JS_CFUNC_DEF("set_margin", 1, &physics_test_motion_parameters2d_class_set_margin),
	JS_CFUNC_DEF("is_collide_separation_ray_enabled", 0, &physics_test_motion_parameters2d_class_is_collide_separation_ray_enabled),
	JS_CFUNC_DEF("set_collide_separation_ray_enabled", 1, &physics_test_motion_parameters2d_class_set_collide_separation_ray_enabled),
	JS_CFUNC_DEF("get_exclude_bodies", 0, &physics_test_motion_parameters2d_class_get_exclude_bodies),
	JS_CFUNC_DEF("set_exclude_bodies", 1, &physics_test_motion_parameters2d_class_set_exclude_bodies),
	JS_CFUNC_DEF("get_exclude_objects", 0, &physics_test_motion_parameters2d_class_get_exclude_objects),
	JS_CFUNC_DEF("set_exclude_objects", 1, &physics_test_motion_parameters2d_class_set_exclude_objects),
	JS_CFUNC_DEF("is_recovery_as_collision_enabled", 0, &physics_test_motion_parameters2d_class_is_recovery_as_collision_enabled),
	JS_CFUNC_DEF("set_recovery_as_collision_enabled", 1, &physics_test_motion_parameters2d_class_set_recovery_as_collision_enabled),
};

static int js_physics_test_motion_parameters2d_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&PhysicsTestMotionParameters2D::__class_id);
	classes["PhysicsTestMotionParameters2D"] = PhysicsTestMotionParameters2D::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), PhysicsTestMotionParameters2D::__class_id, &physics_test_motion_parameters2d_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, RefCounted::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, PhysicsTestMotionParameters2D::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, physics_test_motion_parameters2d_class_proto_funcs, _countof(physics_test_motion_parameters2d_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, physics_test_motion_parameters2d_class_constructor, "PhysicsTestMotionParameters2D", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "PhysicsTestMotionParameters2D", ctor);

	return 0;
}

JSModuleDef *_js_init_physics_test_motion_parameters2d_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_physics_test_motion_parameters2d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "PhysicsTestMotionParameters2D");
	return m;
}

JSModuleDef *js_init_physics_test_motion_parameters2d_module(JSContext *ctx) {
	return _js_init_physics_test_motion_parameters2d_module(ctx, "godot/classes/physics_test_motion_parameters2d");
}

void register_physics_test_motion_parameters2d() {
	js_init_physics_test_motion_parameters2d_module(ctx);
}