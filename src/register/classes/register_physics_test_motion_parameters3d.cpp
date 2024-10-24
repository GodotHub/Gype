
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/physics_test_motion_parameters3d.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void physics_test_motion_parameters3d_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef physics_test_motion_parameters3d_class_def = {
	"PhysicsTestMotionParameters3D",
	.finalizer = physics_test_motion_parameters3d_class_finalizer
};

static JSValue physics_test_motion_parameters3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, PhysicsTestMotionParameters3D::__class_id);
	if (JS_IsException(obj))
		return obj;
	PhysicsTestMotionParameters3D *physics_test_motion_parameters3d_class = memnew(PhysicsTestMotionParameters3D);
	if (!physics_test_motion_parameters3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, physics_test_motion_parameters3d_class);	
	return obj;
}
static JSValue physics_test_motion_parameters3d_class_get_from(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&PhysicsTestMotionParameters3D::get_from, ctx, this_val, argc, argv);
};
static JSValue physics_test_motion_parameters3d_class_set_from(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&PhysicsTestMotionParameters3D::set_from, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue physics_test_motion_parameters3d_class_get_motion(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&PhysicsTestMotionParameters3D::get_motion, ctx, this_val, argc, argv);
};
static JSValue physics_test_motion_parameters3d_class_set_motion(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&PhysicsTestMotionParameters3D::set_motion, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue physics_test_motion_parameters3d_class_get_margin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&PhysicsTestMotionParameters3D::get_margin, ctx, this_val, argc, argv);
};
static JSValue physics_test_motion_parameters3d_class_set_margin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&PhysicsTestMotionParameters3D::set_margin, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue physics_test_motion_parameters3d_class_get_max_collisions(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&PhysicsTestMotionParameters3D::get_max_collisions, ctx, this_val, argc, argv);
};
static JSValue physics_test_motion_parameters3d_class_set_max_collisions(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&PhysicsTestMotionParameters3D::set_max_collisions, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue physics_test_motion_parameters3d_class_is_collide_separation_ray_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&PhysicsTestMotionParameters3D::is_collide_separation_ray_enabled, ctx, this_val, argc, argv);
};
static JSValue physics_test_motion_parameters3d_class_set_collide_separation_ray_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&PhysicsTestMotionParameters3D::set_collide_separation_ray_enabled, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue physics_test_motion_parameters3d_class_get_exclude_bodies(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&PhysicsTestMotionParameters3D::get_exclude_bodies, ctx, this_val, argc, argv);
};
static JSValue physics_test_motion_parameters3d_class_set_exclude_bodies(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&PhysicsTestMotionParameters3D::set_exclude_bodies, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue physics_test_motion_parameters3d_class_get_exclude_objects(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&PhysicsTestMotionParameters3D::get_exclude_objects, ctx, this_val, argc, argv);
};
static JSValue physics_test_motion_parameters3d_class_set_exclude_objects(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&PhysicsTestMotionParameters3D::set_exclude_objects, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue physics_test_motion_parameters3d_class_is_recovery_as_collision_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&PhysicsTestMotionParameters3D::is_recovery_as_collision_enabled, ctx, this_val, argc, argv);
};
static JSValue physics_test_motion_parameters3d_class_set_recovery_as_collision_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&PhysicsTestMotionParameters3D::set_recovery_as_collision_enabled, ctx, this_val, argc, argv);
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

void define_physics_test_motion_parameters3d_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "from"),
        JS_NewCFunction(ctx, physics_test_motion_parameters3d_class_get_from, "get_from", 0),
        JS_NewCFunction(ctx, physics_test_motion_parameters3d_class_set_from, "set_from", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "motion"),
        JS_NewCFunction(ctx, physics_test_motion_parameters3d_class_get_motion, "get_motion", 0),
        JS_NewCFunction(ctx, physics_test_motion_parameters3d_class_set_motion, "set_motion", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "margin"),
        JS_NewCFunction(ctx, physics_test_motion_parameters3d_class_get_margin, "get_margin", 0),
        JS_NewCFunction(ctx, physics_test_motion_parameters3d_class_set_margin, "set_margin", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "max_collisions"),
        JS_NewCFunction(ctx, physics_test_motion_parameters3d_class_get_max_collisions, "get_max_collisions", 0),
        JS_NewCFunction(ctx, physics_test_motion_parameters3d_class_set_max_collisions, "set_max_collisions", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "collide_separation_ray"),
        JS_NewCFunction(ctx, physics_test_motion_parameters3d_class_is_collide_separation_ray_enabled, "is_collide_separation_ray_enabled", 0),
        JS_NewCFunction(ctx, physics_test_motion_parameters3d_class_set_collide_separation_ray_enabled, "set_collide_separation_ray_enabled", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "exclude_bodies"),
        JS_NewCFunction(ctx, physics_test_motion_parameters3d_class_get_exclude_bodies, "get_exclude_bodies", 0),
        JS_NewCFunction(ctx, physics_test_motion_parameters3d_class_set_exclude_bodies, "set_exclude_bodies", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "exclude_objects"),
        JS_NewCFunction(ctx, physics_test_motion_parameters3d_class_get_exclude_objects, "get_exclude_objects", 0),
        JS_NewCFunction(ctx, physics_test_motion_parameters3d_class_set_exclude_objects, "set_exclude_objects", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "recovery_as_collision"),
        JS_NewCFunction(ctx, physics_test_motion_parameters3d_class_is_recovery_as_collision_enabled, "is_recovery_as_collision_enabled", 0),
        JS_NewCFunction(ctx, physics_test_motion_parameters3d_class_set_recovery_as_collision_enabled, "set_recovery_as_collision_enabled", 1),
        JS_PROP_GETSET
    );
}

static int js_physics_test_motion_parameters3d_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&PhysicsTestMotionParameters3D::__class_id);
	classes["PhysicsTestMotionParameters3D"] = PhysicsTestMotionParameters3D::__class_id;
	class_id_list.insert(PhysicsTestMotionParameters3D::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), PhysicsTestMotionParameters3D::__class_id, &physics_test_motion_parameters3d_class_def);

	JSValue proto = JS_NewObjectClass(ctx, PhysicsTestMotionParameters3D::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, RefCounted::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, PhysicsTestMotionParameters3D::__class_id, proto);

	define_physics_test_motion_parameters3d_property(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, physics_test_motion_parameters3d_class_proto_funcs, _countof(physics_test_motion_parameters3d_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, physics_test_motion_parameters3d_class_constructor, "PhysicsTestMotionParameters3D", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "PhysicsTestMotionParameters3D", ctor);

	return 0;
}

JSModuleDef *_js_init_physics_test_motion_parameters3d_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/ref_counted';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
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
	PhysicsTestMotionParameters3D::__init_js_class_id();
	js_init_physics_test_motion_parameters3d_module(ctx);
}