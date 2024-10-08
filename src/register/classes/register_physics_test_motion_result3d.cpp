
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/classes/physics_test_motion_result3d.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void physics_test_motion_result3d_class_finalizer(JSRuntime *rt, JSValue val) {
	PhysicsTestMotionResult3D *physics_test_motion_result3d = static_cast<PhysicsTestMotionResult3D *>(JS_GetOpaque(val, PhysicsTestMotionResult3D::__class_id));
	if (physics_test_motion_result3d)
		PhysicsTestMotionResult3D::free(nullptr, physics_test_motion_result3d);
}

static JSClassDef physics_test_motion_result3d_class_def = {
	"PhysicsTestMotionResult3D",
	.finalizer = physics_test_motion_result3d_class_finalizer
};

static JSValue physics_test_motion_result3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	PhysicsTestMotionResult3D *physics_test_motion_result3d_class;
	JSValue obj = JS_NewObjectClass(ctx, PhysicsTestMotionResult3D::__class_id);
	if (JS_IsException(obj))
		return obj;
	physics_test_motion_result3d_class = memnew(PhysicsTestMotionResult3D);
	if (!physics_test_motion_result3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, physics_test_motion_result3d_class);
	return obj;
}
static JSValue physics_test_motion_result3d_class_get_travel(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PhysicsTestMotionResult3D::get_travel, PhysicsTestMotionResult3D::__class_id, ctx, this_val, argv);
};
static JSValue physics_test_motion_result3d_class_get_remainder(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PhysicsTestMotionResult3D::get_remainder, PhysicsTestMotionResult3D::__class_id, ctx, this_val, argv);
};
static JSValue physics_test_motion_result3d_class_get_collision_safe_fraction(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PhysicsTestMotionResult3D::get_collision_safe_fraction, PhysicsTestMotionResult3D::__class_id, ctx, this_val, argv);
};
static JSValue physics_test_motion_result3d_class_get_collision_unsafe_fraction(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PhysicsTestMotionResult3D::get_collision_unsafe_fraction, PhysicsTestMotionResult3D::__class_id, ctx, this_val, argv);
};
static JSValue physics_test_motion_result3d_class_get_collision_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PhysicsTestMotionResult3D::get_collision_count, PhysicsTestMotionResult3D::__class_id, ctx, this_val, argv);
};
static JSValue physics_test_motion_result3d_class_get_collision_point(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PhysicsTestMotionResult3D::get_collision_point, PhysicsTestMotionResult3D::__class_id, ctx, this_val, argv);
};
static JSValue physics_test_motion_result3d_class_get_collision_normal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PhysicsTestMotionResult3D::get_collision_normal, PhysicsTestMotionResult3D::__class_id, ctx, this_val, argv);
};
static JSValue physics_test_motion_result3d_class_get_collider_velocity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PhysicsTestMotionResult3D::get_collider_velocity, PhysicsTestMotionResult3D::__class_id, ctx, this_val, argv);
};
static JSValue physics_test_motion_result3d_class_get_collider_id(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PhysicsTestMotionResult3D::get_collider_id, PhysicsTestMotionResult3D::__class_id, ctx, this_val, argv);
};
static JSValue physics_test_motion_result3d_class_get_collider_rid(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PhysicsTestMotionResult3D::get_collider_rid, PhysicsTestMotionResult3D::__class_id, ctx, this_val, argv);
};
static JSValue physics_test_motion_result3d_class_get_collider(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PhysicsTestMotionResult3D::get_collider, PhysicsTestMotionResult3D::__class_id, ctx, this_val, argv);
};
static JSValue physics_test_motion_result3d_class_get_collider_shape(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PhysicsTestMotionResult3D::get_collider_shape, PhysicsTestMotionResult3D::__class_id, ctx, this_val, argv);
};
static JSValue physics_test_motion_result3d_class_get_collision_local_shape(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PhysicsTestMotionResult3D::get_collision_local_shape, PhysicsTestMotionResult3D::__class_id, ctx, this_val, argv);
};
static JSValue physics_test_motion_result3d_class_get_collision_depth(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PhysicsTestMotionResult3D::get_collision_depth, PhysicsTestMotionResult3D::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry physics_test_motion_result3d_class_proto_funcs[] = {
	JS_CFUNC_DEF("get_travel", 0, &physics_test_motion_result3d_class_get_travel),
	JS_CFUNC_DEF("get_remainder", 0, &physics_test_motion_result3d_class_get_remainder),
	JS_CFUNC_DEF("get_collision_safe_fraction", 0, &physics_test_motion_result3d_class_get_collision_safe_fraction),
	JS_CFUNC_DEF("get_collision_unsafe_fraction", 0, &physics_test_motion_result3d_class_get_collision_unsafe_fraction),
	JS_CFUNC_DEF("get_collision_count", 0, &physics_test_motion_result3d_class_get_collision_count),
	JS_CFUNC_DEF("get_collision_point", 1, &physics_test_motion_result3d_class_get_collision_point),
	JS_CFUNC_DEF("get_collision_normal", 1, &physics_test_motion_result3d_class_get_collision_normal),
	JS_CFUNC_DEF("get_collider_velocity", 1, &physics_test_motion_result3d_class_get_collider_velocity),
	JS_CFUNC_DEF("get_collider_id", 1, &physics_test_motion_result3d_class_get_collider_id),
	JS_CFUNC_DEF("get_collider_rid", 1, &physics_test_motion_result3d_class_get_collider_rid),
	JS_CFUNC_DEF("get_collider", 1, &physics_test_motion_result3d_class_get_collider),
	JS_CFUNC_DEF("get_collider_shape", 1, &physics_test_motion_result3d_class_get_collider_shape),
	JS_CFUNC_DEF("get_collision_local_shape", 1, &physics_test_motion_result3d_class_get_collision_local_shape),
	JS_CFUNC_DEF("get_collision_depth", 1, &physics_test_motion_result3d_class_get_collision_depth),
};

static int js_physics_test_motion_result3d_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&PhysicsTestMotionResult3D::__class_id);
	classes["PhysicsTestMotionResult3D"] = PhysicsTestMotionResult3D::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), PhysicsTestMotionResult3D::__class_id, &physics_test_motion_result3d_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, RefCounted::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, PhysicsTestMotionResult3D::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, physics_test_motion_result3d_class_proto_funcs, _countof(physics_test_motion_result3d_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, physics_test_motion_result3d_class_constructor, "PhysicsTestMotionResult3D", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "PhysicsTestMotionResult3D", ctor);

	return 0;
}

JSModuleDef *_js_init_physics_test_motion_result3d_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_physics_test_motion_result3d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "PhysicsTestMotionResult3D");
	return m;
}

JSModuleDef *js_init_physics_test_motion_result3d_module(JSContext *ctx) {
	return _js_init_physics_test_motion_result3d_module(ctx, "godot/classes/physics_test_motion_result3d");
}

void register_physics_test_motion_result3d() {
	js_init_physics_test_motion_result3d_module(ctx);
}