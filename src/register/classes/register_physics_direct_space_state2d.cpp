
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/classes/physics_direct_space_state2d.hpp>
#include <godot_cpp/classes/physics_point_query_parameters2d.hpp>
#include <godot_cpp/classes/physics_ray_query_parameters2d.hpp>
#include <godot_cpp/classes/physics_shape_query_parameters2d.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void physics_direct_space_state2d_class_finalizer(JSRuntime *rt, JSValue val) {
	PhysicsDirectSpaceState2D *physics_direct_space_state2d = static_cast<PhysicsDirectSpaceState2D *>(JS_GetOpaque(val, PhysicsDirectSpaceState2D::__class_id));
	if (physics_direct_space_state2d)
		PhysicsDirectSpaceState2D::free(nullptr, physics_direct_space_state2d);
}

static JSClassDef physics_direct_space_state2d_class_def = {
	"PhysicsDirectSpaceState2D",
	.finalizer = physics_direct_space_state2d_class_finalizer
};

static JSValue physics_direct_space_state2d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	PhysicsDirectSpaceState2D *physics_direct_space_state2d_class;
	JSValue obj = JS_NewObjectClass(ctx, PhysicsDirectSpaceState2D::__class_id);
	if (JS_IsException(obj))
		return obj;
	physics_direct_space_state2d_class = memnew(PhysicsDirectSpaceState2D);
	if (!physics_direct_space_state2d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, physics_direct_space_state2d_class);
	return obj;
}
static JSValue physics_direct_space_state2d_class_intersect_point(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&PhysicsDirectSpaceState2D::intersect_point, PhysicsDirectSpaceState2D::__class_id, ctx, this_val, argv);
};
static JSValue physics_direct_space_state2d_class_intersect_ray(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&PhysicsDirectSpaceState2D::intersect_ray, PhysicsDirectSpaceState2D::__class_id, ctx, this_val, argv);
};
static JSValue physics_direct_space_state2d_class_intersect_shape(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&PhysicsDirectSpaceState2D::intersect_shape, PhysicsDirectSpaceState2D::__class_id, ctx, this_val, argv);
};
static JSValue physics_direct_space_state2d_class_cast_motion(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&PhysicsDirectSpaceState2D::cast_motion, PhysicsDirectSpaceState2D::__class_id, ctx, this_val, argv);
};
static JSValue physics_direct_space_state2d_class_collide_shape(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&PhysicsDirectSpaceState2D::collide_shape, PhysicsDirectSpaceState2D::__class_id, ctx, this_val, argv);
};
static JSValue physics_direct_space_state2d_class_get_rest_info(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&PhysicsDirectSpaceState2D::get_rest_info, PhysicsDirectSpaceState2D::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry physics_direct_space_state2d_class_proto_funcs[] = {
	JS_CFUNC_DEF("intersect_point", 2, &physics_direct_space_state2d_class_intersect_point),
	JS_CFUNC_DEF("intersect_ray", 1, &physics_direct_space_state2d_class_intersect_ray),
	JS_CFUNC_DEF("intersect_shape", 2, &physics_direct_space_state2d_class_intersect_shape),
	JS_CFUNC_DEF("cast_motion", 1, &physics_direct_space_state2d_class_cast_motion),
	JS_CFUNC_DEF("collide_shape", 2, &physics_direct_space_state2d_class_collide_shape),
	JS_CFUNC_DEF("get_rest_info", 1, &physics_direct_space_state2d_class_get_rest_info),
};

static int js_physics_direct_space_state2d_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&PhysicsDirectSpaceState2D::__class_id);
	classes["PhysicsDirectSpaceState2D"] = PhysicsDirectSpaceState2D::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), PhysicsDirectSpaceState2D::__class_id, &physics_direct_space_state2d_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Object::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, PhysicsDirectSpaceState2D::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, physics_direct_space_state2d_class_proto_funcs, _countof(physics_direct_space_state2d_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, physics_direct_space_state2d_class_constructor, "PhysicsDirectSpaceState2D", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "PhysicsDirectSpaceState2D", ctor);

	return 0;
}

JSModuleDef *_js_init_physics_direct_space_state2d_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_physics_direct_space_state2d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "PhysicsDirectSpaceState2D");
	return m;
}

JSModuleDef *js_init_physics_direct_space_state2d_module(JSContext *ctx) {
	return _js_init_physics_direct_space_state2d_module(ctx, "godot/classes/physics_direct_space_state2d");
}

void register_physics_direct_space_state2d() {
	js_init_physics_direct_space_state2d_module(ctx);
}