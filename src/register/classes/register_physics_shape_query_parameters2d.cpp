
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/physics_shape_query_parameters2d.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void physics_shape_query_parameters2d_class_finalizer(JSRuntime *rt, JSValue val) {
	PhysicsShapeQueryParameters2D *physics_shape_query_parameters2d = static_cast<PhysicsShapeQueryParameters2D *>(JS_GetOpaque(val, PhysicsShapeQueryParameters2D::__class_id));
	if (physics_shape_query_parameters2d)
		PhysicsShapeQueryParameters2D::free(nullptr, physics_shape_query_parameters2d);
}

static JSClassDef physics_shape_query_parameters2d_class_def = {
	"PhysicsShapeQueryParameters2D",
	.finalizer = physics_shape_query_parameters2d_class_finalizer
};

static JSValue physics_shape_query_parameters2d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	PhysicsShapeQueryParameters2D *physics_shape_query_parameters2d_class;
	JSValue obj = JS_NewObjectClass(ctx, PhysicsShapeQueryParameters2D::__class_id);
	if (JS_IsException(obj))
		return obj;
	physics_shape_query_parameters2d_class = memnew(PhysicsShapeQueryParameters2D);
	if (!physics_shape_query_parameters2d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, physics_shape_query_parameters2d_class);
	return obj;
}
static JSValue physics_shape_query_parameters2d_class_set_shape(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&PhysicsShapeQueryParameters2D::set_shape, PhysicsShapeQueryParameters2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue physics_shape_query_parameters2d_class_get_shape(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PhysicsShapeQueryParameters2D::get_shape, PhysicsShapeQueryParameters2D::__class_id, ctx, this_val, argv);
};
static JSValue physics_shape_query_parameters2d_class_set_shape_rid(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&PhysicsShapeQueryParameters2D::set_shape_rid, PhysicsShapeQueryParameters2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue physics_shape_query_parameters2d_class_get_shape_rid(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PhysicsShapeQueryParameters2D::get_shape_rid, PhysicsShapeQueryParameters2D::__class_id, ctx, this_val, argv);
};
static JSValue physics_shape_query_parameters2d_class_set_transform(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&PhysicsShapeQueryParameters2D::set_transform, PhysicsShapeQueryParameters2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue physics_shape_query_parameters2d_class_get_transform(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PhysicsShapeQueryParameters2D::get_transform, PhysicsShapeQueryParameters2D::__class_id, ctx, this_val, argv);
};
static JSValue physics_shape_query_parameters2d_class_set_motion(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&PhysicsShapeQueryParameters2D::set_motion, PhysicsShapeQueryParameters2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue physics_shape_query_parameters2d_class_get_motion(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PhysicsShapeQueryParameters2D::get_motion, PhysicsShapeQueryParameters2D::__class_id, ctx, this_val, argv);
};
static JSValue physics_shape_query_parameters2d_class_set_margin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&PhysicsShapeQueryParameters2D::set_margin, PhysicsShapeQueryParameters2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue physics_shape_query_parameters2d_class_get_margin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PhysicsShapeQueryParameters2D::get_margin, PhysicsShapeQueryParameters2D::__class_id, ctx, this_val, argv);
};
static JSValue physics_shape_query_parameters2d_class_set_collision_mask(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&PhysicsShapeQueryParameters2D::set_collision_mask, PhysicsShapeQueryParameters2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue physics_shape_query_parameters2d_class_get_collision_mask(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PhysicsShapeQueryParameters2D::get_collision_mask, PhysicsShapeQueryParameters2D::__class_id, ctx, this_val, argv);
};
static JSValue physics_shape_query_parameters2d_class_set_exclude(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&PhysicsShapeQueryParameters2D::set_exclude, PhysicsShapeQueryParameters2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue physics_shape_query_parameters2d_class_get_exclude(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PhysicsShapeQueryParameters2D::get_exclude, PhysicsShapeQueryParameters2D::__class_id, ctx, this_val, argv);
};
static JSValue physics_shape_query_parameters2d_class_set_collide_with_bodies(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&PhysicsShapeQueryParameters2D::set_collide_with_bodies, PhysicsShapeQueryParameters2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue physics_shape_query_parameters2d_class_is_collide_with_bodies_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PhysicsShapeQueryParameters2D::is_collide_with_bodies_enabled, PhysicsShapeQueryParameters2D::__class_id, ctx, this_val, argv);
};
static JSValue physics_shape_query_parameters2d_class_set_collide_with_areas(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&PhysicsShapeQueryParameters2D::set_collide_with_areas, PhysicsShapeQueryParameters2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue physics_shape_query_parameters2d_class_is_collide_with_areas_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PhysicsShapeQueryParameters2D::is_collide_with_areas_enabled, PhysicsShapeQueryParameters2D::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry physics_shape_query_parameters2d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_shape", 1, &physics_shape_query_parameters2d_class_set_shape),
	JS_CFUNC_DEF("get_shape", 0, &physics_shape_query_parameters2d_class_get_shape),
	JS_CFUNC_DEF("set_shape_rid", 1, &physics_shape_query_parameters2d_class_set_shape_rid),
	JS_CFUNC_DEF("get_shape_rid", 0, &physics_shape_query_parameters2d_class_get_shape_rid),
	JS_CFUNC_DEF("set_transform", 1, &physics_shape_query_parameters2d_class_set_transform),
	JS_CFUNC_DEF("get_transform", 0, &physics_shape_query_parameters2d_class_get_transform),
	JS_CFUNC_DEF("set_motion", 1, &physics_shape_query_parameters2d_class_set_motion),
	JS_CFUNC_DEF("get_motion", 0, &physics_shape_query_parameters2d_class_get_motion),
	JS_CFUNC_DEF("set_margin", 1, &physics_shape_query_parameters2d_class_set_margin),
	JS_CFUNC_DEF("get_margin", 0, &physics_shape_query_parameters2d_class_get_margin),
	JS_CFUNC_DEF("set_collision_mask", 1, &physics_shape_query_parameters2d_class_set_collision_mask),
	JS_CFUNC_DEF("get_collision_mask", 0, &physics_shape_query_parameters2d_class_get_collision_mask),
	JS_CFUNC_DEF("set_exclude", 1, &physics_shape_query_parameters2d_class_set_exclude),
	JS_CFUNC_DEF("get_exclude", 0, &physics_shape_query_parameters2d_class_get_exclude),
	JS_CFUNC_DEF("set_collide_with_bodies", 1, &physics_shape_query_parameters2d_class_set_collide_with_bodies),
	JS_CFUNC_DEF("is_collide_with_bodies_enabled", 0, &physics_shape_query_parameters2d_class_is_collide_with_bodies_enabled),
	JS_CFUNC_DEF("set_collide_with_areas", 1, &physics_shape_query_parameters2d_class_set_collide_with_areas),
	JS_CFUNC_DEF("is_collide_with_areas_enabled", 0, &physics_shape_query_parameters2d_class_is_collide_with_areas_enabled),
};

static int js_physics_shape_query_parameters2d_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&PhysicsShapeQueryParameters2D::__class_id);
	classes["PhysicsShapeQueryParameters2D"] = PhysicsShapeQueryParameters2D::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), PhysicsShapeQueryParameters2D::__class_id, &physics_shape_query_parameters2d_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, RefCounted::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, PhysicsShapeQueryParameters2D::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, physics_shape_query_parameters2d_class_proto_funcs, _countof(physics_shape_query_parameters2d_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, physics_shape_query_parameters2d_class_constructor, "PhysicsShapeQueryParameters2D", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "PhysicsShapeQueryParameters2D", ctor);

	return 0;
}

JSModuleDef *_js_init_physics_shape_query_parameters2d_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_physics_shape_query_parameters2d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "PhysicsShapeQueryParameters2D");
	return m;
}

JSModuleDef *js_init_physics_shape_query_parameters2d_module(JSContext *ctx) {
	return _js_init_physics_shape_query_parameters2d_module(ctx, "godot/classes/physics_shape_query_parameters2d");
}

void register_physics_shape_query_parameters2d() {
	js_init_physics_shape_query_parameters2d_module(ctx);
}