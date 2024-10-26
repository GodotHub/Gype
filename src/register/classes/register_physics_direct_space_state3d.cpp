
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/classes/physics_point_query_parameters3d.hpp>
#include <godot_cpp/classes/physics_shape_query_parameters3d.hpp>
#include <godot_cpp/classes/physics_direct_space_state3d.hpp>
#include <godot_cpp/classes/physics_ray_query_parameters3d.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void physics_direct_space_state3d_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef physics_direct_space_state3d_class_def = {
	"PhysicsDirectSpaceState3D",
	.finalizer = physics_direct_space_state3d_class_finalizer
};

static JSValue physics_direct_space_state3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, PhysicsDirectSpaceState3D::__class_id);
	if (JS_IsException(obj))
		return obj;
	PhysicsDirectSpaceState3D *physics_direct_space_state3d_class = memnew(PhysicsDirectSpaceState3D);
	if (!physics_direct_space_state3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, physics_direct_space_state3d_class);	
	return obj;
}
static JSValue physics_direct_space_state3d_class_intersect_point(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&PhysicsDirectSpaceState3D::intersect_point, ctx, this_val, argc, argv);
};
static JSValue physics_direct_space_state3d_class_intersect_ray(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&PhysicsDirectSpaceState3D::intersect_ray, ctx, this_val, argc, argv);
};
static JSValue physics_direct_space_state3d_class_intersect_shape(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&PhysicsDirectSpaceState3D::intersect_shape, ctx, this_val, argc, argv);
};
static JSValue physics_direct_space_state3d_class_cast_motion(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&PhysicsDirectSpaceState3D::cast_motion, ctx, this_val, argc, argv);
};
static JSValue physics_direct_space_state3d_class_collide_shape(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&PhysicsDirectSpaceState3D::collide_shape, ctx, this_val, argc, argv);
};
static JSValue physics_direct_space_state3d_class_get_rest_info(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&PhysicsDirectSpaceState3D::get_rest_info, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry physics_direct_space_state3d_class_proto_funcs[] = {
	JS_CFUNC_DEF("intersect_point", 2, &physics_direct_space_state3d_class_intersect_point),
	JS_CFUNC_DEF("intersect_ray", 1, &physics_direct_space_state3d_class_intersect_ray),
	JS_CFUNC_DEF("intersect_shape", 2, &physics_direct_space_state3d_class_intersect_shape),
	JS_CFUNC_DEF("cast_motion", 1, &physics_direct_space_state3d_class_cast_motion),
	JS_CFUNC_DEF("collide_shape", 2, &physics_direct_space_state3d_class_collide_shape),
	JS_CFUNC_DEF("get_rest_info", 1, &physics_direct_space_state3d_class_get_rest_info),
};

void define_physics_direct_space_state3d_property(JSContext *ctx, JSValue obj) {
}

static void define_node_enum(JSContext *ctx, JSValue proto) {
}

static int js_physics_direct_space_state3d_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&PhysicsDirectSpaceState3D::__class_id);
	classes["PhysicsDirectSpaceState3D"] = PhysicsDirectSpaceState3D::__class_id;
	class_id_list.insert(PhysicsDirectSpaceState3D::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), PhysicsDirectSpaceState3D::__class_id, &physics_direct_space_state3d_class_def);

	JSValue proto = JS_NewObjectClass(ctx, PhysicsDirectSpaceState3D::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Object::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, PhysicsDirectSpaceState3D::__class_id, proto);

	define_physics_direct_space_state3d_property(ctx, proto);
	define_node_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, physics_direct_space_state3d_class_proto_funcs, _countof(physics_direct_space_state3d_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, physics_direct_space_state3d_class_constructor, "PhysicsDirectSpaceState3D", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "PhysicsDirectSpaceState3D", ctor);

	return 0;
}

JSModuleDef *_js_init_physics_direct_space_state3d_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/object';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_physics_direct_space_state3d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "PhysicsDirectSpaceState3D");
	return m;
}

JSModuleDef *js_init_physics_direct_space_state3d_module(JSContext *ctx) {
	return _js_init_physics_direct_space_state3d_module(ctx, "godot/classes/physics_direct_space_state3d");
}

void register_physics_direct_space_state3d() {
	PhysicsDirectSpaceState3D::__init_js_class_id();
	js_init_physics_direct_space_state3d_module(ctx);
}