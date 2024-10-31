
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/physics_test_motion_result3d.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void physics_test_motion_result3d_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef physics_test_motion_result3d_class_def = {
	"PhysicsTestMotionResult3D",
	.finalizer = physics_test_motion_result3d_class_finalizer
};

static JSValue physics_test_motion_result3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, PhysicsTestMotionResult3D::__class_id);
	if (JS_IsException(obj))
		return obj;

	PhysicsTestMotionResult3D *physics_test_motion_result3d_class;
	if (argc == 1) 
		physics_test_motion_result3d_class = static_cast<PhysicsTestMotionResult3D *>(Variant(*argv).operator Object *());
	else 
		physics_test_motion_result3d_class = memnew(PhysicsTestMotionResult3D);
	if (!physics_test_motion_result3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, physics_test_motion_result3d_class);
	return obj;
}
static JSValue physics_test_motion_result3d_class_get_travel(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&PhysicsTestMotionResult3D::get_travel, ctx, this_val, argc, argv);
};
static JSValue physics_test_motion_result3d_class_get_remainder(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&PhysicsTestMotionResult3D::get_remainder, ctx, this_val, argc, argv);
};
static JSValue physics_test_motion_result3d_class_get_collision_safe_fraction(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&PhysicsTestMotionResult3D::get_collision_safe_fraction, ctx, this_val, argc, argv);
};
static JSValue physics_test_motion_result3d_class_get_collision_unsafe_fraction(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&PhysicsTestMotionResult3D::get_collision_unsafe_fraction, ctx, this_val, argc, argv);
};
static JSValue physics_test_motion_result3d_class_get_collision_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&PhysicsTestMotionResult3D::get_collision_count, ctx, this_val, argc, argv);
};
static JSValue physics_test_motion_result3d_class_get_collision_point(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&PhysicsTestMotionResult3D::get_collision_point, ctx, this_val, argc, argv);
};
static JSValue physics_test_motion_result3d_class_get_collision_normal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&PhysicsTestMotionResult3D::get_collision_normal, ctx, this_val, argc, argv);
};
static JSValue physics_test_motion_result3d_class_get_collider_velocity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&PhysicsTestMotionResult3D::get_collider_velocity, ctx, this_val, argc, argv);
};
static JSValue physics_test_motion_result3d_class_get_collider_id(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&PhysicsTestMotionResult3D::get_collider_id, ctx, this_val, argc, argv);
};
static JSValue physics_test_motion_result3d_class_get_collider_rid(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&PhysicsTestMotionResult3D::get_collider_rid, ctx, this_val, argc, argv);
};
static JSValue physics_test_motion_result3d_class_get_collider(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&PhysicsTestMotionResult3D::get_collider, ctx, this_val, argc, argv);
};
static JSValue physics_test_motion_result3d_class_get_collider_shape(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&PhysicsTestMotionResult3D::get_collider_shape, ctx, this_val, argc, argv);
};
static JSValue physics_test_motion_result3d_class_get_collision_local_shape(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&PhysicsTestMotionResult3D::get_collision_local_shape, ctx, this_val, argc, argv);
};
static JSValue physics_test_motion_result3d_class_get_collision_depth(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&PhysicsTestMotionResult3D::get_collision_depth, ctx, this_val, argc, argv);
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

static void define_physics_test_motion_result3d_property(JSContext *ctx, JSValue proto) {
	
}

static void define_physics_test_motion_result3d_enum(JSContext *ctx, JSValue proto) {
}

static int js_physics_test_motion_result3d_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["PhysicsTestMotionResult3D"] = PhysicsTestMotionResult3D::__class_id;
	class_id_list.insert(PhysicsTestMotionResult3D::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), PhysicsTestMotionResult3D::__class_id, &physics_test_motion_result3d_class_def);

	JSValue proto = JS_NewObjectClass(ctx, PhysicsTestMotionResult3D::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, RefCounted::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, PhysicsTestMotionResult3D::__class_id, proto);

	define_physics_test_motion_result3d_property(ctx, proto);
	define_physics_test_motion_result3d_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, physics_test_motion_result3d_class_proto_funcs, _countof(physics_test_motion_result3d_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, physics_test_motion_result3d_class_constructor, "PhysicsTestMotionResult3D", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "PhysicsTestMotionResult3D", ctor);

	return 0;
}

JSModuleDef *_js_init_physics_test_motion_result3d_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/ref_counted';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_physics_test_motion_result3d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "PhysicsTestMotionResult3D");
	return m;
}

JSModuleDef *js_init_physics_test_motion_result3d_module(JSContext *ctx) {
	return _js_init_physics_test_motion_result3d_module(ctx, "@godot/classes/physics_test_motion_result3d");
}

void register_physics_test_motion_result3d() {
	PhysicsTestMotionResult3D::__init_js_class_id();
	js_init_physics_test_motion_result3d_module(ctx);
}