
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/physics_point_query_parameters2d.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void physics_point_query_parameters2d_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef physics_point_query_parameters2d_class_def = {
	"PhysicsPointQueryParameters2D",
	.finalizer = physics_point_query_parameters2d_class_finalizer
};

static JSValue physics_point_query_parameters2d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, PhysicsPointQueryParameters2D::__class_id);
	if (JS_IsException(obj))
		return obj;

	PhysicsPointQueryParameters2D *physics_point_query_parameters2d_class;
	if (argc == 1) 
		physics_point_query_parameters2d_class = static_cast<PhysicsPointQueryParameters2D *>(Variant(*argv).operator Object *());
	else 
		physics_point_query_parameters2d_class = memnew(PhysicsPointQueryParameters2D);
	if (!physics_point_query_parameters2d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, physics_point_query_parameters2d_class);
	return obj;
}
static JSValue physics_point_query_parameters2d_class_set_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&PhysicsPointQueryParameters2D::set_position, ctx, this_val, argc, argv);
};
static JSValue physics_point_query_parameters2d_class_get_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&PhysicsPointQueryParameters2D::get_position, ctx, this_val, argc, argv);
};
static JSValue physics_point_query_parameters2d_class_set_canvas_instance_id(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&PhysicsPointQueryParameters2D::set_canvas_instance_id, ctx, this_val, argc, argv);
};
static JSValue physics_point_query_parameters2d_class_get_canvas_instance_id(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&PhysicsPointQueryParameters2D::get_canvas_instance_id, ctx, this_val, argc, argv);
};
static JSValue physics_point_query_parameters2d_class_set_collision_mask(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&PhysicsPointQueryParameters2D::set_collision_mask, ctx, this_val, argc, argv);
};
static JSValue physics_point_query_parameters2d_class_get_collision_mask(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&PhysicsPointQueryParameters2D::get_collision_mask, ctx, this_val, argc, argv);
};
static JSValue physics_point_query_parameters2d_class_set_exclude(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&PhysicsPointQueryParameters2D::set_exclude, ctx, this_val, argc, argv);
};
static JSValue physics_point_query_parameters2d_class_get_exclude(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&PhysicsPointQueryParameters2D::get_exclude, ctx, this_val, argc, argv);
};
static JSValue physics_point_query_parameters2d_class_set_collide_with_bodies(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&PhysicsPointQueryParameters2D::set_collide_with_bodies, ctx, this_val, argc, argv);
};
static JSValue physics_point_query_parameters2d_class_is_collide_with_bodies_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&PhysicsPointQueryParameters2D::is_collide_with_bodies_enabled, ctx, this_val, argc, argv);
};
static JSValue physics_point_query_parameters2d_class_set_collide_with_areas(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&PhysicsPointQueryParameters2D::set_collide_with_areas, ctx, this_val, argc, argv);
};
static JSValue physics_point_query_parameters2d_class_is_collide_with_areas_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&PhysicsPointQueryParameters2D::is_collide_with_areas_enabled, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry physics_point_query_parameters2d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_position", 1, &physics_point_query_parameters2d_class_set_position),
	JS_CFUNC_DEF("get_position", 0, &physics_point_query_parameters2d_class_get_position),
	JS_CFUNC_DEF("set_canvas_instance_id", 1, &physics_point_query_parameters2d_class_set_canvas_instance_id),
	JS_CFUNC_DEF("get_canvas_instance_id", 0, &physics_point_query_parameters2d_class_get_canvas_instance_id),
	JS_CFUNC_DEF("set_collision_mask", 1, &physics_point_query_parameters2d_class_set_collision_mask),
	JS_CFUNC_DEF("get_collision_mask", 0, &physics_point_query_parameters2d_class_get_collision_mask),
	JS_CFUNC_DEF("set_exclude", 1, &physics_point_query_parameters2d_class_set_exclude),
	JS_CFUNC_DEF("get_exclude", 0, &physics_point_query_parameters2d_class_get_exclude),
	JS_CFUNC_DEF("set_collide_with_bodies", 1, &physics_point_query_parameters2d_class_set_collide_with_bodies),
	JS_CFUNC_DEF("is_collide_with_bodies_enabled", 0, &physics_point_query_parameters2d_class_is_collide_with_bodies_enabled),
	JS_CFUNC_DEF("set_collide_with_areas", 1, &physics_point_query_parameters2d_class_set_collide_with_areas),
	JS_CFUNC_DEF("is_collide_with_areas_enabled", 0, &physics_point_query_parameters2d_class_is_collide_with_areas_enabled),
};

static void define_physics_point_query_parameters2d_property(JSContext *ctx, JSValue proto) {
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "position"),
        JS_NewCFunction(ctx, physics_point_query_parameters2d_class_get_position, "get_position", 0),
        JS_NewCFunction(ctx, physics_point_query_parameters2d_class_set_position, "set_position", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "canvas_instance_id"),
        JS_NewCFunction(ctx, physics_point_query_parameters2d_class_get_canvas_instance_id, "get_canvas_instance_id", 0),
        JS_NewCFunction(ctx, physics_point_query_parameters2d_class_set_canvas_instance_id, "set_canvas_instance_id", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "collision_mask"),
        JS_NewCFunction(ctx, physics_point_query_parameters2d_class_get_collision_mask, "get_collision_mask", 0),
        JS_NewCFunction(ctx, physics_point_query_parameters2d_class_set_collision_mask, "set_collision_mask", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "exclude"),
        JS_NewCFunction(ctx, physics_point_query_parameters2d_class_get_exclude, "get_exclude", 0),
        JS_NewCFunction(ctx, physics_point_query_parameters2d_class_set_exclude, "set_exclude", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "collide_with_bodies"),
        JS_NewCFunction(ctx, physics_point_query_parameters2d_class_is_collide_with_bodies_enabled, "is_collide_with_bodies_enabled", 0),
        JS_NewCFunction(ctx, physics_point_query_parameters2d_class_set_collide_with_bodies, "set_collide_with_bodies", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "collide_with_areas"),
        JS_NewCFunction(ctx, physics_point_query_parameters2d_class_is_collide_with_areas_enabled, "is_collide_with_areas_enabled", 0),
        JS_NewCFunction(ctx, physics_point_query_parameters2d_class_set_collide_with_areas, "set_collide_with_areas", 1),
        JS_PROP_GETSET
    );
	
}

static void define_physics_point_query_parameters2d_enum(JSContext *ctx, JSValue proto) {
}

static int js_physics_point_query_parameters2d_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["PhysicsPointQueryParameters2D"] = PhysicsPointQueryParameters2D::__class_id;
	class_id_list.insert(PhysicsPointQueryParameters2D::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), PhysicsPointQueryParameters2D::__class_id, &physics_point_query_parameters2d_class_def);

	JSValue proto = JS_NewObjectClass(ctx, PhysicsPointQueryParameters2D::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, RefCounted::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, PhysicsPointQueryParameters2D::__class_id, proto);

	define_physics_point_query_parameters2d_property(ctx, proto);
	define_physics_point_query_parameters2d_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, physics_point_query_parameters2d_class_proto_funcs, _countof(physics_point_query_parameters2d_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, physics_point_query_parameters2d_class_constructor, "PhysicsPointQueryParameters2D", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);
	JS_SetModuleExport(ctx, m, "PhysicsPointQueryParameters2D", ctor);
	constructors[PhysicsPointQueryParameters2D::__class_id] = ctor;

	return 0;
}

JSModuleDef *_js_init_physics_point_query_parameters2d_module(JSContext *ctx, const char *module_name) {
	// 需要提前完成import依赖
	const char *code = "import * as _ from '@godot/classes/ref_counted';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_physics_point_query_parameters2d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "PhysicsPointQueryParameters2D");
	return m;
}

JSModuleDef *js_init_physics_point_query_parameters2d_module(JSContext *ctx) {
	return _js_init_physics_point_query_parameters2d_module(ctx, "@godot/classes/physics_point_query_parameters2d");
}

void register_physics_point_query_parameters2d() {
	PhysicsPointQueryParameters2D::__init_js_class_id();
	js_init_physics_point_query_parameters2d_module(ctx);
}