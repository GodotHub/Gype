
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/kinematic_collision2d.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/physics_body2d.hpp>
#include <godot_cpp/classes/physics_body2d.hpp>
#include <godot_cpp/classes/collision_object2d.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void physics_body2d_class_finalizer(JSRuntime *rt, JSValue val) {
	PhysicsBody2D *physics_body2d = static_cast<PhysicsBody2D *>(JS_GetOpaque(val, PhysicsBody2D::__class_id));
	if (physics_body2d)
		PhysicsBody2D::free(nullptr, physics_body2d);
}

static JSClassDef physics_body2d_class_def = {
	"PhysicsBody2D",
	.finalizer = physics_body2d_class_finalizer
};

static JSValue physics_body2d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	PhysicsBody2D *physics_body2d_class;
	JSValue obj = JS_NewObjectClass(ctx, PhysicsBody2D::__class_id);
	if (JS_IsException(obj))
		return obj;
	physics_body2d_class = memnew(PhysicsBody2D);
	if (!physics_body2d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, physics_body2d_class);
	return obj;
}
static JSValue physics_body2d_class_move_and_collide(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&PhysicsBody2D::move_and_collide, PhysicsBody2D::__class_id, ctx, this_val, argv);
};
static JSValue physics_body2d_class_test_move(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&PhysicsBody2D::test_move, PhysicsBody2D::__class_id, ctx, this_val, argv);
};
static JSValue physics_body2d_class_get_gravity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PhysicsBody2D::get_gravity, PhysicsBody2D::__class_id, ctx, this_val, argv);
};
static JSValue physics_body2d_class_get_collision_exceptions(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&PhysicsBody2D::get_collision_exceptions, PhysicsBody2D::__class_id, ctx, this_val, argv);
};
static JSValue physics_body2d_class_add_collision_exception_with(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&PhysicsBody2D::add_collision_exception_with, PhysicsBody2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue physics_body2d_class_remove_collision_exception_with(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&PhysicsBody2D::remove_collision_exception_with, PhysicsBody2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static const JSCFunctionListEntry physics_body2d_class_proto_funcs[] = {
	JS_CFUNC_DEF("move_and_collide", 4, &physics_body2d_class_move_and_collide),
	JS_CFUNC_DEF("test_move", 5, &physics_body2d_class_test_move),
	JS_CFUNC_DEF("get_gravity", 0, &physics_body2d_class_get_gravity),
	JS_CFUNC_DEF("get_collision_exceptions", 0, &physics_body2d_class_get_collision_exceptions),
	JS_CFUNC_DEF("add_collision_exception_with", 1, &physics_body2d_class_add_collision_exception_with),
	JS_CFUNC_DEF("remove_collision_exception_with", 1, &physics_body2d_class_remove_collision_exception_with),
};

static int js_physics_body2d_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&PhysicsBody2D::__class_id);
	classes["PhysicsBody2D"] = PhysicsBody2D::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), PhysicsBody2D::__class_id, &physics_body2d_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, CollisionObject2D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, PhysicsBody2D::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, physics_body2d_class_proto_funcs, _countof(physics_body2d_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, physics_body2d_class_constructor, "PhysicsBody2D", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "PhysicsBody2D", ctor);

	return 0;
}

JSModuleDef *_js_init_physics_body2d_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_physics_body2d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "PhysicsBody2D");
	return m;
}

JSModuleDef *js_init_physics_body2d_module(JSContext *ctx) {
	return _js_init_physics_body2d_module(ctx, "godot/classes/physics_body2d");
}

void register_physics_body2d() {
	js_init_physics_body2d_module(ctx);
}