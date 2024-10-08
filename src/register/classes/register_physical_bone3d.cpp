
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/physics_direct_body_state3d.hpp>
#include <godot_cpp/classes/physics_body3d.hpp>
#include <godot_cpp/classes/physical_bone3d.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void physical_bone3d_class_finalizer(JSRuntime *rt, JSValue val) {
	PhysicalBone3D *physical_bone3d = static_cast<PhysicalBone3D *>(JS_GetOpaque(val, PhysicalBone3D::__class_id));
	if (physical_bone3d)
		PhysicalBone3D::free(nullptr, physical_bone3d);
}

static JSClassDef physical_bone3d_class_def = {
	"PhysicalBone3D",
	.finalizer = physical_bone3d_class_finalizer
};

static JSValue physical_bone3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	PhysicalBone3D *physical_bone3d_class;
	JSValue obj = JS_NewObjectClass(ctx, PhysicalBone3D::__class_id);
	if (JS_IsException(obj))
		return obj;
	physical_bone3d_class = memnew(PhysicalBone3D);
	if (!physical_bone3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, physical_bone3d_class);
	return obj;
}
static JSValue physical_bone3d_class_apply_central_impulse(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&PhysicalBone3D::apply_central_impulse, PhysicalBone3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue physical_bone3d_class_apply_impulse(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&PhysicalBone3D::apply_impulse, PhysicalBone3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue physical_bone3d_class_set_joint_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&PhysicalBone3D::set_joint_type, PhysicalBone3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue physical_bone3d_class_get_joint_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PhysicalBone3D::get_joint_type, PhysicalBone3D::__class_id, ctx, this_val, argv);
};
static JSValue physical_bone3d_class_set_joint_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&PhysicalBone3D::set_joint_offset, PhysicalBone3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue physical_bone3d_class_get_joint_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PhysicalBone3D::get_joint_offset, PhysicalBone3D::__class_id, ctx, this_val, argv);
};
static JSValue physical_bone3d_class_set_joint_rotation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&PhysicalBone3D::set_joint_rotation, PhysicalBone3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue physical_bone3d_class_get_joint_rotation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PhysicalBone3D::get_joint_rotation, PhysicalBone3D::__class_id, ctx, this_val, argv);
};
static JSValue physical_bone3d_class_set_body_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&PhysicalBone3D::set_body_offset, PhysicalBone3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue physical_bone3d_class_get_body_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PhysicalBone3D::get_body_offset, PhysicalBone3D::__class_id, ctx, this_val, argv);
};
static JSValue physical_bone3d_class_get_simulate_physics(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&PhysicalBone3D::get_simulate_physics, PhysicalBone3D::__class_id, ctx, this_val, argv);
};
static JSValue physical_bone3d_class_is_simulating_physics(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&PhysicalBone3D::is_simulating_physics, PhysicalBone3D::__class_id, ctx, this_val, argv);
};
static JSValue physical_bone3d_class_get_bone_id(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PhysicalBone3D::get_bone_id, PhysicalBone3D::__class_id, ctx, this_val, argv);
};
static JSValue physical_bone3d_class_set_mass(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&PhysicalBone3D::set_mass, PhysicalBone3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue physical_bone3d_class_get_mass(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PhysicalBone3D::get_mass, PhysicalBone3D::__class_id, ctx, this_val, argv);
};
static JSValue physical_bone3d_class_set_friction(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&PhysicalBone3D::set_friction, PhysicalBone3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue physical_bone3d_class_get_friction(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PhysicalBone3D::get_friction, PhysicalBone3D::__class_id, ctx, this_val, argv);
};
static JSValue physical_bone3d_class_set_bounce(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&PhysicalBone3D::set_bounce, PhysicalBone3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue physical_bone3d_class_get_bounce(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PhysicalBone3D::get_bounce, PhysicalBone3D::__class_id, ctx, this_val, argv);
};
static JSValue physical_bone3d_class_set_gravity_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&PhysicalBone3D::set_gravity_scale, PhysicalBone3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue physical_bone3d_class_get_gravity_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PhysicalBone3D::get_gravity_scale, PhysicalBone3D::__class_id, ctx, this_val, argv);
};
static JSValue physical_bone3d_class_set_linear_damp_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&PhysicalBone3D::set_linear_damp_mode, PhysicalBone3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue physical_bone3d_class_get_linear_damp_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PhysicalBone3D::get_linear_damp_mode, PhysicalBone3D::__class_id, ctx, this_val, argv);
};
static JSValue physical_bone3d_class_set_angular_damp_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&PhysicalBone3D::set_angular_damp_mode, PhysicalBone3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue physical_bone3d_class_get_angular_damp_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PhysicalBone3D::get_angular_damp_mode, PhysicalBone3D::__class_id, ctx, this_val, argv);
};
static JSValue physical_bone3d_class_set_linear_damp(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&PhysicalBone3D::set_linear_damp, PhysicalBone3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue physical_bone3d_class_get_linear_damp(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PhysicalBone3D::get_linear_damp, PhysicalBone3D::__class_id, ctx, this_val, argv);
};
static JSValue physical_bone3d_class_set_angular_damp(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&PhysicalBone3D::set_angular_damp, PhysicalBone3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue physical_bone3d_class_get_angular_damp(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PhysicalBone3D::get_angular_damp, PhysicalBone3D::__class_id, ctx, this_val, argv);
};
static JSValue physical_bone3d_class_set_linear_velocity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&PhysicalBone3D::set_linear_velocity, PhysicalBone3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue physical_bone3d_class_get_linear_velocity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PhysicalBone3D::get_linear_velocity, PhysicalBone3D::__class_id, ctx, this_val, argv);
};
static JSValue physical_bone3d_class_set_angular_velocity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&PhysicalBone3D::set_angular_velocity, PhysicalBone3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue physical_bone3d_class_get_angular_velocity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PhysicalBone3D::get_angular_velocity, PhysicalBone3D::__class_id, ctx, this_val, argv);
};
static JSValue physical_bone3d_class_set_use_custom_integrator(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&PhysicalBone3D::set_use_custom_integrator, PhysicalBone3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue physical_bone3d_class_is_using_custom_integrator(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&PhysicalBone3D::is_using_custom_integrator, PhysicalBone3D::__class_id, ctx, this_val, argv);
};
static JSValue physical_bone3d_class_set_can_sleep(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&PhysicalBone3D::set_can_sleep, PhysicalBone3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue physical_bone3d_class_is_able_to_sleep(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PhysicalBone3D::is_able_to_sleep, PhysicalBone3D::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry physical_bone3d_class_proto_funcs[] = {
	JS_CFUNC_DEF("apply_central_impulse", 1, &physical_bone3d_class_apply_central_impulse),
	JS_CFUNC_DEF("apply_impulse", 2, &physical_bone3d_class_apply_impulse),
	JS_CFUNC_DEF("set_joint_type", 1, &physical_bone3d_class_set_joint_type),
	JS_CFUNC_DEF("get_joint_type", 0, &physical_bone3d_class_get_joint_type),
	JS_CFUNC_DEF("set_joint_offset", 1, &physical_bone3d_class_set_joint_offset),
	JS_CFUNC_DEF("get_joint_offset", 0, &physical_bone3d_class_get_joint_offset),
	JS_CFUNC_DEF("set_joint_rotation", 1, &physical_bone3d_class_set_joint_rotation),
	JS_CFUNC_DEF("get_joint_rotation", 0, &physical_bone3d_class_get_joint_rotation),
	JS_CFUNC_DEF("set_body_offset", 1, &physical_bone3d_class_set_body_offset),
	JS_CFUNC_DEF("get_body_offset", 0, &physical_bone3d_class_get_body_offset),
	JS_CFUNC_DEF("get_simulate_physics", 0, &physical_bone3d_class_get_simulate_physics),
	JS_CFUNC_DEF("is_simulating_physics", 0, &physical_bone3d_class_is_simulating_physics),
	JS_CFUNC_DEF("get_bone_id", 0, &physical_bone3d_class_get_bone_id),
	JS_CFUNC_DEF("set_mass", 1, &physical_bone3d_class_set_mass),
	JS_CFUNC_DEF("get_mass", 0, &physical_bone3d_class_get_mass),
	JS_CFUNC_DEF("set_friction", 1, &physical_bone3d_class_set_friction),
	JS_CFUNC_DEF("get_friction", 0, &physical_bone3d_class_get_friction),
	JS_CFUNC_DEF("set_bounce", 1, &physical_bone3d_class_set_bounce),
	JS_CFUNC_DEF("get_bounce", 0, &physical_bone3d_class_get_bounce),
	JS_CFUNC_DEF("set_gravity_scale", 1, &physical_bone3d_class_set_gravity_scale),
	JS_CFUNC_DEF("get_gravity_scale", 0, &physical_bone3d_class_get_gravity_scale),
	JS_CFUNC_DEF("set_linear_damp_mode", 1, &physical_bone3d_class_set_linear_damp_mode),
	JS_CFUNC_DEF("get_linear_damp_mode", 0, &physical_bone3d_class_get_linear_damp_mode),
	JS_CFUNC_DEF("set_angular_damp_mode", 1, &physical_bone3d_class_set_angular_damp_mode),
	JS_CFUNC_DEF("get_angular_damp_mode", 0, &physical_bone3d_class_get_angular_damp_mode),
	JS_CFUNC_DEF("set_linear_damp", 1, &physical_bone3d_class_set_linear_damp),
	JS_CFUNC_DEF("get_linear_damp", 0, &physical_bone3d_class_get_linear_damp),
	JS_CFUNC_DEF("set_angular_damp", 1, &physical_bone3d_class_set_angular_damp),
	JS_CFUNC_DEF("get_angular_damp", 0, &physical_bone3d_class_get_angular_damp),
	JS_CFUNC_DEF("set_linear_velocity", 1, &physical_bone3d_class_set_linear_velocity),
	JS_CFUNC_DEF("get_linear_velocity", 0, &physical_bone3d_class_get_linear_velocity),
	JS_CFUNC_DEF("set_angular_velocity", 1, &physical_bone3d_class_set_angular_velocity),
	JS_CFUNC_DEF("get_angular_velocity", 0, &physical_bone3d_class_get_angular_velocity),
	JS_CFUNC_DEF("set_use_custom_integrator", 1, &physical_bone3d_class_set_use_custom_integrator),
	JS_CFUNC_DEF("is_using_custom_integrator", 0, &physical_bone3d_class_is_using_custom_integrator),
	JS_CFUNC_DEF("set_can_sleep", 1, &physical_bone3d_class_set_can_sleep),
	JS_CFUNC_DEF("is_able_to_sleep", 0, &physical_bone3d_class_is_able_to_sleep),
};

static int js_physical_bone3d_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&PhysicalBone3D::__class_id);
	classes["PhysicalBone3D"] = PhysicalBone3D::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), PhysicalBone3D::__class_id, &physical_bone3d_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, PhysicsBody3D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, PhysicalBone3D::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, physical_bone3d_class_proto_funcs, _countof(physical_bone3d_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, physical_bone3d_class_constructor, "PhysicalBone3D", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "PhysicalBone3D", ctor);

	return 0;
}

JSModuleDef *_js_init_physical_bone3d_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_physical_bone3d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "PhysicalBone3D");
	return m;
}

JSModuleDef *js_init_physical_bone3d_module(JSContext *ctx) {
	return _js_init_physical_bone3d_module(ctx, "godot/classes/physical_bone3d");
}

void register_physical_bone3d() {
	js_init_physical_bone3d_module(ctx);
}