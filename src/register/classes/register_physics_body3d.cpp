
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/physics_body3d.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/kinematic_collision3d.hpp>
#include <godot_cpp/classes/collision_object3d.hpp>
#include <godot_cpp/classes/physics_body3d.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void physics_body3d_class_finalizer(JSRuntime *rt, JSValue val) {
	PhysicsBody3D *physics_body3d = static_cast<PhysicsBody3D *>(JS_GetOpaque(val, PhysicsBody3D::__class_id));
	if (physics_body3d)
		memdelete(physics_body3d);
}

static JSClassDef physics_body3d_class_def = {
	"PhysicsBody3D",
	.finalizer = physics_body3d_class_finalizer
};

static JSValue physics_body3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, PhysicsBody3D::__class_id);
	if (JS_IsException(obj))
		return obj;

	PhysicsBody3D *physics_body3d_class;
	if (argc == 1) 
		physics_body3d_class = static_cast<PhysicsBody3D *>(Variant(*argv).operator Object *());
	else 
		physics_body3d_class = memnew(PhysicsBody3D);
	if (!physics_body3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, physics_body3d_class);
	return obj;
}
static JSValue physics_body3d_class_move_and_collide(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&PhysicsBody3D::move_and_collide, ctx, this_val, argc, argv);
};
static JSValue physics_body3d_class_test_move(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&PhysicsBody3D::test_move, ctx, this_val, argc, argv);
};
static JSValue physics_body3d_class_get_gravity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&PhysicsBody3D::get_gravity, ctx, this_val, argc, argv);
};
static JSValue physics_body3d_class_set_axis_lock(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&PhysicsBody3D::set_axis_lock, ctx, this_val, argc, argv);
};
static JSValue physics_body3d_class_get_axis_lock(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&PhysicsBody3D::get_axis_lock, ctx, this_val, argc, argv);
};
static JSValue physics_body3d_class_get_collision_exceptions(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&PhysicsBody3D::get_collision_exceptions, ctx, this_val, argc, argv);
};
static JSValue physics_body3d_class_add_collision_exception_with(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&PhysicsBody3D::add_collision_exception_with, ctx, this_val, argc, argv);
};
static JSValue physics_body3d_class_remove_collision_exception_with(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&PhysicsBody3D::remove_collision_exception_with, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry physics_body3d_class_proto_funcs[] = {
	JS_CFUNC_DEF("move_and_collide", 5, &physics_body3d_class_move_and_collide),
	JS_CFUNC_DEF("test_move", 6, &physics_body3d_class_test_move),
	JS_CFUNC_DEF("get_gravity", 0, &physics_body3d_class_get_gravity),
	JS_CFUNC_DEF("set_axis_lock", 2, &physics_body3d_class_set_axis_lock),
	JS_CFUNC_DEF("get_axis_lock", 1, &physics_body3d_class_get_axis_lock),
	JS_CFUNC_DEF("get_collision_exceptions", 0, &physics_body3d_class_get_collision_exceptions),
	JS_CFUNC_DEF("add_collision_exception_with", 1, &physics_body3d_class_add_collision_exception_with),
	JS_CFUNC_DEF("remove_collision_exception_with", 1, &physics_body3d_class_remove_collision_exception_with),
};

static void define_physics_body3d_property(JSContext *ctx, JSValue proto) {
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "axis_lock_linear_x"),
        JS_NewCFunction(ctx, physics_body3d_class_get_axis_lock, "get_axis_lock", 0),
        JS_NewCFunction(ctx, physics_body3d_class_set_axis_lock, "set_axis_lock", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "axis_lock_linear_y"),
        JS_NewCFunction(ctx, physics_body3d_class_get_axis_lock, "get_axis_lock", 0),
        JS_NewCFunction(ctx, physics_body3d_class_set_axis_lock, "set_axis_lock", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "axis_lock_linear_z"),
        JS_NewCFunction(ctx, physics_body3d_class_get_axis_lock, "get_axis_lock", 0),
        JS_NewCFunction(ctx, physics_body3d_class_set_axis_lock, "set_axis_lock", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "axis_lock_angular_x"),
        JS_NewCFunction(ctx, physics_body3d_class_get_axis_lock, "get_axis_lock", 0),
        JS_NewCFunction(ctx, physics_body3d_class_set_axis_lock, "set_axis_lock", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "axis_lock_angular_y"),
        JS_NewCFunction(ctx, physics_body3d_class_get_axis_lock, "get_axis_lock", 0),
        JS_NewCFunction(ctx, physics_body3d_class_set_axis_lock, "set_axis_lock", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "axis_lock_angular_z"),
        JS_NewCFunction(ctx, physics_body3d_class_get_axis_lock, "get_axis_lock", 0),
        JS_NewCFunction(ctx, physics_body3d_class_set_axis_lock, "set_axis_lock", 1),
        JS_PROP_GETSET
    );
	
}

static void define_physics_body3d_enum(JSContext *ctx, JSValue proto) {
}

static int js_physics_body3d_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["PhysicsBody3D"] = PhysicsBody3D::__class_id;
	class_id_list.insert(PhysicsBody3D::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), PhysicsBody3D::__class_id, &physics_body3d_class_def);

	JSValue proto = JS_NewObjectClass(ctx, PhysicsBody3D::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, CollisionObject3D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, PhysicsBody3D::__class_id, proto);

	define_physics_body3d_property(ctx, proto);
	define_physics_body3d_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, physics_body3d_class_proto_funcs, _countof(physics_body3d_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, physics_body3d_class_constructor, "PhysicsBody3D", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);
	JS_SetModuleExport(ctx, m, "PhysicsBody3D", ctor);
	constructors[PhysicsBody3D::__class_id] = ctor;

	return 0;
}

JSModuleDef *_js_init_physics_body3d_module(JSContext *ctx, const char *module_name) {
	// 需要提前完成import依赖
	const char *code = "import * as _ from '@godot/classes/collision_object3d';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_physics_body3d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "PhysicsBody3D");
	return m;
}

JSModuleDef *js_init_physics_body3d_module(JSContext *ctx) {
	return _js_init_physics_body3d_module(ctx, "@godot/classes/physics_body3d");
}

void register_physics_body3d() {
	PhysicsBody3D::__init_js_class_id();
	js_init_physics_body3d_module(ctx);
}