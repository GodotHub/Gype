
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/physics_direct_body_state2d.hpp>
#include <godot_cpp/classes/rigid_body2d.hpp>
#include <godot_cpp/classes/physics_material.hpp>
#include <godot_cpp/classes/node2d.hpp>
#include <godot_cpp/classes/physics_body2d.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void rigid_body2d_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef rigid_body2d_class_def = {
	"RigidBody2D",
	.finalizer = rigid_body2d_class_finalizer
};

static JSValue rigid_body2d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, RigidBody2D::__class_id);
	if (JS_IsException(obj))
		return obj;
	RigidBody2D *rigid_body2d_class = memnew(RigidBody2D);
	if (!rigid_body2d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, rigid_body2d_class);	
	return obj;
}
static JSValue rigid_body2d_class_set_mass(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&RigidBody2D::set_mass, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue rigid_body2d_class_get_mass(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&RigidBody2D::get_mass, ctx, this_val, argc, argv);
};
static JSValue rigid_body2d_class_get_inertia(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&RigidBody2D::get_inertia, ctx, this_val, argc, argv);
};
static JSValue rigid_body2d_class_set_inertia(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&RigidBody2D::set_inertia, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue rigid_body2d_class_set_center_of_mass_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&RigidBody2D::set_center_of_mass_mode, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue rigid_body2d_class_get_center_of_mass_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&RigidBody2D::get_center_of_mass_mode, ctx, this_val, argc, argv);
};
static JSValue rigid_body2d_class_set_center_of_mass(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&RigidBody2D::set_center_of_mass, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue rigid_body2d_class_get_center_of_mass(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&RigidBody2D::get_center_of_mass, ctx, this_val, argc, argv);
};
static JSValue rigid_body2d_class_set_physics_material_override(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&RigidBody2D::set_physics_material_override, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue rigid_body2d_class_get_physics_material_override(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&RigidBody2D::get_physics_material_override, ctx, this_val, argc, argv);
};
static JSValue rigid_body2d_class_set_gravity_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&RigidBody2D::set_gravity_scale, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue rigid_body2d_class_get_gravity_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&RigidBody2D::get_gravity_scale, ctx, this_val, argc, argv);
};
static JSValue rigid_body2d_class_set_linear_damp_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&RigidBody2D::set_linear_damp_mode, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue rigid_body2d_class_get_linear_damp_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&RigidBody2D::get_linear_damp_mode, ctx, this_val, argc, argv);
};
static JSValue rigid_body2d_class_set_angular_damp_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&RigidBody2D::set_angular_damp_mode, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue rigid_body2d_class_get_angular_damp_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&RigidBody2D::get_angular_damp_mode, ctx, this_val, argc, argv);
};
static JSValue rigid_body2d_class_set_linear_damp(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&RigidBody2D::set_linear_damp, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue rigid_body2d_class_get_linear_damp(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&RigidBody2D::get_linear_damp, ctx, this_val, argc, argv);
};
static JSValue rigid_body2d_class_set_angular_damp(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&RigidBody2D::set_angular_damp, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue rigid_body2d_class_get_angular_damp(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&RigidBody2D::get_angular_damp, ctx, this_val, argc, argv);
};
static JSValue rigid_body2d_class_set_linear_velocity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&RigidBody2D::set_linear_velocity, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue rigid_body2d_class_get_linear_velocity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&RigidBody2D::get_linear_velocity, ctx, this_val, argc, argv);
};
static JSValue rigid_body2d_class_set_angular_velocity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&RigidBody2D::set_angular_velocity, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue rigid_body2d_class_get_angular_velocity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&RigidBody2D::get_angular_velocity, ctx, this_val, argc, argv);
};
static JSValue rigid_body2d_class_set_max_contacts_reported(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&RigidBody2D::set_max_contacts_reported, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue rigid_body2d_class_get_max_contacts_reported(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&RigidBody2D::get_max_contacts_reported, ctx, this_val, argc, argv);
};
static JSValue rigid_body2d_class_get_contact_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&RigidBody2D::get_contact_count, ctx, this_val, argc, argv);
};
static JSValue rigid_body2d_class_set_use_custom_integrator(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&RigidBody2D::set_use_custom_integrator, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue rigid_body2d_class_is_using_custom_integrator(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&RigidBody2D::is_using_custom_integrator, ctx, this_val, argc, argv);
};
static JSValue rigid_body2d_class_set_contact_monitor(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&RigidBody2D::set_contact_monitor, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue rigid_body2d_class_is_contact_monitor_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&RigidBody2D::is_contact_monitor_enabled, ctx, this_val, argc, argv);
};
static JSValue rigid_body2d_class_set_continuous_collision_detection_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&RigidBody2D::set_continuous_collision_detection_mode, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue rigid_body2d_class_get_continuous_collision_detection_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&RigidBody2D::get_continuous_collision_detection_mode, ctx, this_val, argc, argv);
};
static JSValue rigid_body2d_class_set_axis_velocity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&RigidBody2D::set_axis_velocity, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue rigid_body2d_class_apply_central_impulse(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&RigidBody2D::apply_central_impulse, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue rigid_body2d_class_apply_impulse(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&RigidBody2D::apply_impulse, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue rigid_body2d_class_apply_torque_impulse(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&RigidBody2D::apply_torque_impulse, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue rigid_body2d_class_apply_central_force(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&RigidBody2D::apply_central_force, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue rigid_body2d_class_apply_force(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&RigidBody2D::apply_force, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue rigid_body2d_class_apply_torque(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&RigidBody2D::apply_torque, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue rigid_body2d_class_add_constant_central_force(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&RigidBody2D::add_constant_central_force, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue rigid_body2d_class_add_constant_force(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&RigidBody2D::add_constant_force, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue rigid_body2d_class_add_constant_torque(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&RigidBody2D::add_constant_torque, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue rigid_body2d_class_set_constant_force(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&RigidBody2D::set_constant_force, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue rigid_body2d_class_get_constant_force(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&RigidBody2D::get_constant_force, ctx, this_val, argc, argv);
};
static JSValue rigid_body2d_class_set_constant_torque(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&RigidBody2D::set_constant_torque, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue rigid_body2d_class_get_constant_torque(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&RigidBody2D::get_constant_torque, ctx, this_val, argc, argv);
};
static JSValue rigid_body2d_class_set_sleeping(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&RigidBody2D::set_sleeping, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue rigid_body2d_class_is_sleeping(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&RigidBody2D::is_sleeping, ctx, this_val, argc, argv);
};
static JSValue rigid_body2d_class_set_can_sleep(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&RigidBody2D::set_can_sleep, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue rigid_body2d_class_is_able_to_sleep(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&RigidBody2D::is_able_to_sleep, ctx, this_val, argc, argv);
};
static JSValue rigid_body2d_class_set_lock_rotation_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&RigidBody2D::set_lock_rotation_enabled, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue rigid_body2d_class_is_lock_rotation_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&RigidBody2D::is_lock_rotation_enabled, ctx, this_val, argc, argv);
};
static JSValue rigid_body2d_class_set_freeze_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&RigidBody2D::set_freeze_enabled, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue rigid_body2d_class_is_freeze_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&RigidBody2D::is_freeze_enabled, ctx, this_val, argc, argv);
};
static JSValue rigid_body2d_class_set_freeze_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&RigidBody2D::set_freeze_mode, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue rigid_body2d_class_get_freeze_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&RigidBody2D::get_freeze_mode, ctx, this_val, argc, argv);
};
static JSValue rigid_body2d_class_get_colliding_bodies(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&RigidBody2D::get_colliding_bodies, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry rigid_body2d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_mass", 1, &rigid_body2d_class_set_mass),
	JS_CFUNC_DEF("get_mass", 0, &rigid_body2d_class_get_mass),
	JS_CFUNC_DEF("get_inertia", 0, &rigid_body2d_class_get_inertia),
	JS_CFUNC_DEF("set_inertia", 1, &rigid_body2d_class_set_inertia),
	JS_CFUNC_DEF("set_center_of_mass_mode", 1, &rigid_body2d_class_set_center_of_mass_mode),
	JS_CFUNC_DEF("get_center_of_mass_mode", 0, &rigid_body2d_class_get_center_of_mass_mode),
	JS_CFUNC_DEF("set_center_of_mass", 1, &rigid_body2d_class_set_center_of_mass),
	JS_CFUNC_DEF("get_center_of_mass", 0, &rigid_body2d_class_get_center_of_mass),
	JS_CFUNC_DEF("set_physics_material_override", 1, &rigid_body2d_class_set_physics_material_override),
	JS_CFUNC_DEF("get_physics_material_override", 0, &rigid_body2d_class_get_physics_material_override),
	JS_CFUNC_DEF("set_gravity_scale", 1, &rigid_body2d_class_set_gravity_scale),
	JS_CFUNC_DEF("get_gravity_scale", 0, &rigid_body2d_class_get_gravity_scale),
	JS_CFUNC_DEF("set_linear_damp_mode", 1, &rigid_body2d_class_set_linear_damp_mode),
	JS_CFUNC_DEF("get_linear_damp_mode", 0, &rigid_body2d_class_get_linear_damp_mode),
	JS_CFUNC_DEF("set_angular_damp_mode", 1, &rigid_body2d_class_set_angular_damp_mode),
	JS_CFUNC_DEF("get_angular_damp_mode", 0, &rigid_body2d_class_get_angular_damp_mode),
	JS_CFUNC_DEF("set_linear_damp", 1, &rigid_body2d_class_set_linear_damp),
	JS_CFUNC_DEF("get_linear_damp", 0, &rigid_body2d_class_get_linear_damp),
	JS_CFUNC_DEF("set_angular_damp", 1, &rigid_body2d_class_set_angular_damp),
	JS_CFUNC_DEF("get_angular_damp", 0, &rigid_body2d_class_get_angular_damp),
	JS_CFUNC_DEF("set_linear_velocity", 1, &rigid_body2d_class_set_linear_velocity),
	JS_CFUNC_DEF("get_linear_velocity", 0, &rigid_body2d_class_get_linear_velocity),
	JS_CFUNC_DEF("set_angular_velocity", 1, &rigid_body2d_class_set_angular_velocity),
	JS_CFUNC_DEF("get_angular_velocity", 0, &rigid_body2d_class_get_angular_velocity),
	JS_CFUNC_DEF("set_max_contacts_reported", 1, &rigid_body2d_class_set_max_contacts_reported),
	JS_CFUNC_DEF("get_max_contacts_reported", 0, &rigid_body2d_class_get_max_contacts_reported),
	JS_CFUNC_DEF("get_contact_count", 0, &rigid_body2d_class_get_contact_count),
	JS_CFUNC_DEF("set_use_custom_integrator", 1, &rigid_body2d_class_set_use_custom_integrator),
	JS_CFUNC_DEF("is_using_custom_integrator", 0, &rigid_body2d_class_is_using_custom_integrator),
	JS_CFUNC_DEF("set_contact_monitor", 1, &rigid_body2d_class_set_contact_monitor),
	JS_CFUNC_DEF("is_contact_monitor_enabled", 0, &rigid_body2d_class_is_contact_monitor_enabled),
	JS_CFUNC_DEF("set_continuous_collision_detection_mode", 1, &rigid_body2d_class_set_continuous_collision_detection_mode),
	JS_CFUNC_DEF("get_continuous_collision_detection_mode", 0, &rigid_body2d_class_get_continuous_collision_detection_mode),
	JS_CFUNC_DEF("set_axis_velocity", 1, &rigid_body2d_class_set_axis_velocity),
	JS_CFUNC_DEF("apply_central_impulse", 1, &rigid_body2d_class_apply_central_impulse),
	JS_CFUNC_DEF("apply_impulse", 2, &rigid_body2d_class_apply_impulse),
	JS_CFUNC_DEF("apply_torque_impulse", 1, &rigid_body2d_class_apply_torque_impulse),
	JS_CFUNC_DEF("apply_central_force", 1, &rigid_body2d_class_apply_central_force),
	JS_CFUNC_DEF("apply_force", 2, &rigid_body2d_class_apply_force),
	JS_CFUNC_DEF("apply_torque", 1, &rigid_body2d_class_apply_torque),
	JS_CFUNC_DEF("add_constant_central_force", 1, &rigid_body2d_class_add_constant_central_force),
	JS_CFUNC_DEF("add_constant_force", 2, &rigid_body2d_class_add_constant_force),
	JS_CFUNC_DEF("add_constant_torque", 1, &rigid_body2d_class_add_constant_torque),
	JS_CFUNC_DEF("set_constant_force", 1, &rigid_body2d_class_set_constant_force),
	JS_CFUNC_DEF("get_constant_force", 0, &rigid_body2d_class_get_constant_force),
	JS_CFUNC_DEF("set_constant_torque", 1, &rigid_body2d_class_set_constant_torque),
	JS_CFUNC_DEF("get_constant_torque", 0, &rigid_body2d_class_get_constant_torque),
	JS_CFUNC_DEF("set_sleeping", 1, &rigid_body2d_class_set_sleeping),
	JS_CFUNC_DEF("is_sleeping", 0, &rigid_body2d_class_is_sleeping),
	JS_CFUNC_DEF("set_can_sleep", 1, &rigid_body2d_class_set_can_sleep),
	JS_CFUNC_DEF("is_able_to_sleep", 0, &rigid_body2d_class_is_able_to_sleep),
	JS_CFUNC_DEF("set_lock_rotation_enabled", 1, &rigid_body2d_class_set_lock_rotation_enabled),
	JS_CFUNC_DEF("is_lock_rotation_enabled", 0, &rigid_body2d_class_is_lock_rotation_enabled),
	JS_CFUNC_DEF("set_freeze_enabled", 1, &rigid_body2d_class_set_freeze_enabled),
	JS_CFUNC_DEF("is_freeze_enabled", 0, &rigid_body2d_class_is_freeze_enabled),
	JS_CFUNC_DEF("set_freeze_mode", 1, &rigid_body2d_class_set_freeze_mode),
	JS_CFUNC_DEF("get_freeze_mode", 0, &rigid_body2d_class_get_freeze_mode),
	JS_CFUNC_DEF("get_colliding_bodies", 0, &rigid_body2d_class_get_colliding_bodies),
};

void define_rigid_body2d_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "mass"),
        JS_NewCFunction(ctx, rigid_body2d_class_get_mass, "get_mass", 0),
        JS_NewCFunction(ctx, rigid_body2d_class_set_mass, "set_mass", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "physics_material_override"),
        JS_NewCFunction(ctx, rigid_body2d_class_get_physics_material_override, "get_physics_material_override", 0),
        JS_NewCFunction(ctx, rigid_body2d_class_set_physics_material_override, "set_physics_material_override", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "gravity_scale"),
        JS_NewCFunction(ctx, rigid_body2d_class_get_gravity_scale, "get_gravity_scale", 0),
        JS_NewCFunction(ctx, rigid_body2d_class_set_gravity_scale, "set_gravity_scale", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "center_of_mass_mode"),
        JS_NewCFunction(ctx, rigid_body2d_class_get_center_of_mass_mode, "get_center_of_mass_mode", 0),
        JS_NewCFunction(ctx, rigid_body2d_class_set_center_of_mass_mode, "set_center_of_mass_mode", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "center_of_mass"),
        JS_NewCFunction(ctx, rigid_body2d_class_get_center_of_mass, "get_center_of_mass", 0),
        JS_NewCFunction(ctx, rigid_body2d_class_set_center_of_mass, "set_center_of_mass", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "inertia"),
        JS_NewCFunction(ctx, rigid_body2d_class_get_inertia, "get_inertia", 0),
        JS_NewCFunction(ctx, rigid_body2d_class_set_inertia, "set_inertia", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "sleeping"),
        JS_NewCFunction(ctx, rigid_body2d_class_is_sleeping, "is_sleeping", 0),
        JS_NewCFunction(ctx, rigid_body2d_class_set_sleeping, "set_sleeping", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "can_sleep"),
        JS_NewCFunction(ctx, rigid_body2d_class_is_able_to_sleep, "is_able_to_sleep", 0),
        JS_NewCFunction(ctx, rigid_body2d_class_set_can_sleep, "set_can_sleep", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "lock_rotation"),
        JS_NewCFunction(ctx, rigid_body2d_class_is_lock_rotation_enabled, "is_lock_rotation_enabled", 0),
        JS_NewCFunction(ctx, rigid_body2d_class_set_lock_rotation_enabled, "set_lock_rotation_enabled", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "freeze"),
        JS_NewCFunction(ctx, rigid_body2d_class_is_freeze_enabled, "is_freeze_enabled", 0),
        JS_NewCFunction(ctx, rigid_body2d_class_set_freeze_enabled, "set_freeze_enabled", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "freeze_mode"),
        JS_NewCFunction(ctx, rigid_body2d_class_get_freeze_mode, "get_freeze_mode", 0),
        JS_NewCFunction(ctx, rigid_body2d_class_set_freeze_mode, "set_freeze_mode", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "custom_integrator"),
        JS_NewCFunction(ctx, rigid_body2d_class_is_using_custom_integrator, "is_using_custom_integrator", 0),
        JS_NewCFunction(ctx, rigid_body2d_class_set_use_custom_integrator, "set_use_custom_integrator", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "continuous_cd"),
        JS_NewCFunction(ctx, rigid_body2d_class_get_continuous_collision_detection_mode, "get_continuous_collision_detection_mode", 0),
        JS_NewCFunction(ctx, rigid_body2d_class_set_continuous_collision_detection_mode, "set_continuous_collision_detection_mode", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "contact_monitor"),
        JS_NewCFunction(ctx, rigid_body2d_class_is_contact_monitor_enabled, "is_contact_monitor_enabled", 0),
        JS_NewCFunction(ctx, rigid_body2d_class_set_contact_monitor, "set_contact_monitor", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "max_contacts_reported"),
        JS_NewCFunction(ctx, rigid_body2d_class_get_max_contacts_reported, "get_max_contacts_reported", 0),
        JS_NewCFunction(ctx, rigid_body2d_class_set_max_contacts_reported, "set_max_contacts_reported", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "linear_velocity"),
        JS_NewCFunction(ctx, rigid_body2d_class_get_linear_velocity, "get_linear_velocity", 0),
        JS_NewCFunction(ctx, rigid_body2d_class_set_linear_velocity, "set_linear_velocity", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "linear_damp_mode"),
        JS_NewCFunction(ctx, rigid_body2d_class_get_linear_damp_mode, "get_linear_damp_mode", 0),
        JS_NewCFunction(ctx, rigid_body2d_class_set_linear_damp_mode, "set_linear_damp_mode", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "linear_damp"),
        JS_NewCFunction(ctx, rigid_body2d_class_get_linear_damp, "get_linear_damp", 0),
        JS_NewCFunction(ctx, rigid_body2d_class_set_linear_damp, "set_linear_damp", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "angular_velocity"),
        JS_NewCFunction(ctx, rigid_body2d_class_get_angular_velocity, "get_angular_velocity", 0),
        JS_NewCFunction(ctx, rigid_body2d_class_set_angular_velocity, "set_angular_velocity", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "angular_damp_mode"),
        JS_NewCFunction(ctx, rigid_body2d_class_get_angular_damp_mode, "get_angular_damp_mode", 0),
        JS_NewCFunction(ctx, rigid_body2d_class_set_angular_damp_mode, "set_angular_damp_mode", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "angular_damp"),
        JS_NewCFunction(ctx, rigid_body2d_class_get_angular_damp, "get_angular_damp", 0),
        JS_NewCFunction(ctx, rigid_body2d_class_set_angular_damp, "set_angular_damp", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "constant_force"),
        JS_NewCFunction(ctx, rigid_body2d_class_get_constant_force, "get_constant_force", 0),
        JS_NewCFunction(ctx, rigid_body2d_class_set_constant_force, "set_constant_force", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "constant_torque"),
        JS_NewCFunction(ctx, rigid_body2d_class_get_constant_torque, "get_constant_torque", 0),
        JS_NewCFunction(ctx, rigid_body2d_class_set_constant_torque, "set_constant_torque", 1),
        JS_PROP_GETSET
    );
}

static void define_node_enum(JSContext *ctx, JSValue proto) {
	JSValue FreezeMode_obj = JS_NewObject(ctx);
	JS_SetPropertyStr(ctx, FreezeMode_obj, "FREEZE_MODE_STATIC", JS_NewInt64(ctx, 0));
	JS_SetPropertyStr(ctx, FreezeMode_obj, "FREEZE_MODE_KINEMATIC", JS_NewInt64(ctx, 1));
	JS_SetPropertyStr(ctx, proto, "FreezeMode", FreezeMode_obj);
	JSValue CenterOfMassMode_obj = JS_NewObject(ctx);
	JS_SetPropertyStr(ctx, CenterOfMassMode_obj, "CENTER_OF_MASS_MODE_AUTO", JS_NewInt64(ctx, 0));
	JS_SetPropertyStr(ctx, CenterOfMassMode_obj, "CENTER_OF_MASS_MODE_CUSTOM", JS_NewInt64(ctx, 1));
	JS_SetPropertyStr(ctx, proto, "CenterOfMassMode", CenterOfMassMode_obj);
	JSValue DampMode_obj = JS_NewObject(ctx);
	JS_SetPropertyStr(ctx, DampMode_obj, "DAMP_MODE_COMBINE", JS_NewInt64(ctx, 0));
	JS_SetPropertyStr(ctx, DampMode_obj, "DAMP_MODE_REPLACE", JS_NewInt64(ctx, 1));
	JS_SetPropertyStr(ctx, proto, "DampMode", DampMode_obj);
	JSValue CCDMode_obj = JS_NewObject(ctx);
	JS_SetPropertyStr(ctx, CCDMode_obj, "CCD_MODE_DISABLED", JS_NewInt64(ctx, 0));
	JS_SetPropertyStr(ctx, CCDMode_obj, "CCD_MODE_CAST_RAY", JS_NewInt64(ctx, 1));
	JS_SetPropertyStr(ctx, CCDMode_obj, "CCD_MODE_CAST_SHAPE", JS_NewInt64(ctx, 2));
	JS_SetPropertyStr(ctx, proto, "CCDMode", CCDMode_obj);
}

static int js_rigid_body2d_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&RigidBody2D::__class_id);
	classes["RigidBody2D"] = RigidBody2D::__class_id;
	class_id_list.insert(RigidBody2D::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), RigidBody2D::__class_id, &rigid_body2d_class_def);

	JSValue proto = JS_NewObjectClass(ctx, RigidBody2D::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, PhysicsBody2D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, RigidBody2D::__class_id, proto);

	define_rigid_body2d_property(ctx, proto);
	define_node_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, rigid_body2d_class_proto_funcs, _countof(rigid_body2d_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, rigid_body2d_class_constructor, "RigidBody2D", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "RigidBody2D", ctor);

	return 0;
}

JSModuleDef *_js_init_rigid_body2d_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/physics_body2d';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_rigid_body2d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "RigidBody2D");
	return m;
}

JSModuleDef *js_init_rigid_body2d_module(JSContext *ctx) {
	return _js_init_rigid_body2d_module(ctx, "godot/classes/rigid_body2d");
}

void register_rigid_body2d() {
	RigidBody2D::__init_js_class_id();
	js_init_rigid_body2d_module(ctx);
}