
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/mesh_instance3d.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/physics_body3d.hpp>
#include <godot_cpp/classes/soft_body3d.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void soft_body3d_class_finalizer(JSRuntime *rt, JSValue val) {
	SoftBody3D *soft_body3d = static_cast<SoftBody3D *>(JS_GetOpaque(val, SoftBody3D::__class_id));
	if (soft_body3d)
		SoftBody3D::free(nullptr, soft_body3d);
}

static JSClassDef soft_body3d_class_def = {
	"SoftBody3D",
	.finalizer = soft_body3d_class_finalizer
};

static JSValue soft_body3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	SoftBody3D *soft_body3d_class;
	JSValue obj = JS_NewObjectClass(ctx, SoftBody3D::__class_id);
	if (JS_IsException(obj))
		return obj;
	soft_body3d_class = memnew(SoftBody3D);
	if (!soft_body3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, soft_body3d_class);
	return obj;
}
static JSValue soft_body3d_class_get_physics_rid(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SoftBody3D::get_physics_rid, SoftBody3D::__class_id, ctx, this_val, argv);
};
static JSValue soft_body3d_class_set_collision_mask(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&SoftBody3D::set_collision_mask, SoftBody3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue soft_body3d_class_get_collision_mask(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SoftBody3D::get_collision_mask, SoftBody3D::__class_id, ctx, this_val, argv);
};
static JSValue soft_body3d_class_set_collision_layer(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&SoftBody3D::set_collision_layer, SoftBody3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue soft_body3d_class_get_collision_layer(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SoftBody3D::get_collision_layer, SoftBody3D::__class_id, ctx, this_val, argv);
};
static JSValue soft_body3d_class_set_collision_mask_value(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&SoftBody3D::set_collision_mask_value, SoftBody3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue soft_body3d_class_get_collision_mask_value(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SoftBody3D::get_collision_mask_value, SoftBody3D::__class_id, ctx, this_val, argv);
};
static JSValue soft_body3d_class_set_collision_layer_value(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&SoftBody3D::set_collision_layer_value, SoftBody3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue soft_body3d_class_get_collision_layer_value(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SoftBody3D::get_collision_layer_value, SoftBody3D::__class_id, ctx, this_val, argv);
};
static JSValue soft_body3d_class_set_parent_collision_ignore(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&SoftBody3D::set_parent_collision_ignore, SoftBody3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue soft_body3d_class_get_parent_collision_ignore(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SoftBody3D::get_parent_collision_ignore, SoftBody3D::__class_id, ctx, this_val, argv);
};
static JSValue soft_body3d_class_set_disable_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&SoftBody3D::set_disable_mode, SoftBody3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue soft_body3d_class_get_disable_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SoftBody3D::get_disable_mode, SoftBody3D::__class_id, ctx, this_val, argv);
};
static JSValue soft_body3d_class_get_collision_exceptions(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&SoftBody3D::get_collision_exceptions, SoftBody3D::__class_id, ctx, this_val, argv);
};
static JSValue soft_body3d_class_add_collision_exception_with(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&SoftBody3D::add_collision_exception_with, SoftBody3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue soft_body3d_class_remove_collision_exception_with(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&SoftBody3D::remove_collision_exception_with, SoftBody3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue soft_body3d_class_set_simulation_precision(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&SoftBody3D::set_simulation_precision, SoftBody3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue soft_body3d_class_get_simulation_precision(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&SoftBody3D::get_simulation_precision, SoftBody3D::__class_id, ctx, this_val, argv);
};
static JSValue soft_body3d_class_set_total_mass(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&SoftBody3D::set_total_mass, SoftBody3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue soft_body3d_class_get_total_mass(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&SoftBody3D::get_total_mass, SoftBody3D::__class_id, ctx, this_val, argv);
};
static JSValue soft_body3d_class_set_linear_stiffness(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&SoftBody3D::set_linear_stiffness, SoftBody3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue soft_body3d_class_get_linear_stiffness(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&SoftBody3D::get_linear_stiffness, SoftBody3D::__class_id, ctx, this_val, argv);
};
static JSValue soft_body3d_class_set_pressure_coefficient(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&SoftBody3D::set_pressure_coefficient, SoftBody3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue soft_body3d_class_get_pressure_coefficient(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&SoftBody3D::get_pressure_coefficient, SoftBody3D::__class_id, ctx, this_val, argv);
};
static JSValue soft_body3d_class_set_damping_coefficient(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&SoftBody3D::set_damping_coefficient, SoftBody3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue soft_body3d_class_get_damping_coefficient(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&SoftBody3D::get_damping_coefficient, SoftBody3D::__class_id, ctx, this_val, argv);
};
static JSValue soft_body3d_class_set_drag_coefficient(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&SoftBody3D::set_drag_coefficient, SoftBody3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue soft_body3d_class_get_drag_coefficient(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&SoftBody3D::get_drag_coefficient, SoftBody3D::__class_id, ctx, this_val, argv);
};
static JSValue soft_body3d_class_get_point_transform(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&SoftBody3D::get_point_transform, SoftBody3D::__class_id, ctx, this_val, argv);
};
static JSValue soft_body3d_class_set_point_pinned(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&SoftBody3D::set_point_pinned, SoftBody3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue soft_body3d_class_is_point_pinned(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SoftBody3D::is_point_pinned, SoftBody3D::__class_id, ctx, this_val, argv);
};
static JSValue soft_body3d_class_set_ray_pickable(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&SoftBody3D::set_ray_pickable, SoftBody3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue soft_body3d_class_is_ray_pickable(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SoftBody3D::is_ray_pickable, SoftBody3D::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry soft_body3d_class_proto_funcs[] = {
	JS_CFUNC_DEF("get_physics_rid", 0, &soft_body3d_class_get_physics_rid),
	JS_CFUNC_DEF("set_collision_mask", 1, &soft_body3d_class_set_collision_mask),
	JS_CFUNC_DEF("get_collision_mask", 0, &soft_body3d_class_get_collision_mask),
	JS_CFUNC_DEF("set_collision_layer", 1, &soft_body3d_class_set_collision_layer),
	JS_CFUNC_DEF("get_collision_layer", 0, &soft_body3d_class_get_collision_layer),
	JS_CFUNC_DEF("set_collision_mask_value", 2, &soft_body3d_class_set_collision_mask_value),
	JS_CFUNC_DEF("get_collision_mask_value", 1, &soft_body3d_class_get_collision_mask_value),
	JS_CFUNC_DEF("set_collision_layer_value", 2, &soft_body3d_class_set_collision_layer_value),
	JS_CFUNC_DEF("get_collision_layer_value", 1, &soft_body3d_class_get_collision_layer_value),
	JS_CFUNC_DEF("set_parent_collision_ignore", 1, &soft_body3d_class_set_parent_collision_ignore),
	JS_CFUNC_DEF("get_parent_collision_ignore", 0, &soft_body3d_class_get_parent_collision_ignore),
	JS_CFUNC_DEF("set_disable_mode", 1, &soft_body3d_class_set_disable_mode),
	JS_CFUNC_DEF("get_disable_mode", 0, &soft_body3d_class_get_disable_mode),
	JS_CFUNC_DEF("get_collision_exceptions", 0, &soft_body3d_class_get_collision_exceptions),
	JS_CFUNC_DEF("add_collision_exception_with", 1, &soft_body3d_class_add_collision_exception_with),
	JS_CFUNC_DEF("remove_collision_exception_with", 1, &soft_body3d_class_remove_collision_exception_with),
	JS_CFUNC_DEF("set_simulation_precision", 1, &soft_body3d_class_set_simulation_precision),
	JS_CFUNC_DEF("get_simulation_precision", 0, &soft_body3d_class_get_simulation_precision),
	JS_CFUNC_DEF("set_total_mass", 1, &soft_body3d_class_set_total_mass),
	JS_CFUNC_DEF("get_total_mass", 0, &soft_body3d_class_get_total_mass),
	JS_CFUNC_DEF("set_linear_stiffness", 1, &soft_body3d_class_set_linear_stiffness),
	JS_CFUNC_DEF("get_linear_stiffness", 0, &soft_body3d_class_get_linear_stiffness),
	JS_CFUNC_DEF("set_pressure_coefficient", 1, &soft_body3d_class_set_pressure_coefficient),
	JS_CFUNC_DEF("get_pressure_coefficient", 0, &soft_body3d_class_get_pressure_coefficient),
	JS_CFUNC_DEF("set_damping_coefficient", 1, &soft_body3d_class_set_damping_coefficient),
	JS_CFUNC_DEF("get_damping_coefficient", 0, &soft_body3d_class_get_damping_coefficient),
	JS_CFUNC_DEF("set_drag_coefficient", 1, &soft_body3d_class_set_drag_coefficient),
	JS_CFUNC_DEF("get_drag_coefficient", 0, &soft_body3d_class_get_drag_coefficient),
	JS_CFUNC_DEF("get_point_transform", 1, &soft_body3d_class_get_point_transform),
	JS_CFUNC_DEF("set_point_pinned", 3, &soft_body3d_class_set_point_pinned),
	JS_CFUNC_DEF("is_point_pinned", 1, &soft_body3d_class_is_point_pinned),
	JS_CFUNC_DEF("set_ray_pickable", 1, &soft_body3d_class_set_ray_pickable),
	JS_CFUNC_DEF("is_ray_pickable", 0, &soft_body3d_class_is_ray_pickable),
};

static int js_soft_body3d_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&SoftBody3D::__class_id);
	classes["SoftBody3D"] = SoftBody3D::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), SoftBody3D::__class_id, &soft_body3d_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, MeshInstance3D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, SoftBody3D::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, soft_body3d_class_proto_funcs, _countof(soft_body3d_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, soft_body3d_class_constructor, "SoftBody3D", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "SoftBody3D", ctor);

	return 0;
}

JSModuleDef *_js_init_soft_body3d_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_soft_body3d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "SoftBody3D");
	return m;
}

JSModuleDef *js_init_soft_body3d_module(JSContext *ctx) {
	return _js_init_soft_body3d_module(ctx, "godot/classes/soft_body3d");
}

void register_soft_body3d() {
	js_init_soft_body3d_module(ctx);
}