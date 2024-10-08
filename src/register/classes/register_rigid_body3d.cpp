
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/node3d.hpp>
#include <godot_cpp/classes/physics_body3d.hpp>
#include <godot_cpp/classes/physics_direct_body_state3d.hpp>
#include <godot_cpp/classes/physics_material.hpp>
#include <godot_cpp/classes/rigid_body3d.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void rigid_body3d_class_finalizer(JSRuntime *rt, JSValue val) {
	RigidBody3D *rigid_body3d = static_cast<RigidBody3D *>(JS_GetOpaque(val, RigidBody3D::__class_id));
	if (rigid_body3d)
		RigidBody3D::free(nullptr, rigid_body3d);
}

static JSClassDef rigid_body3d_class_def = {
	"RigidBody3D",
	.finalizer = rigid_body3d_class_finalizer
};

static JSValue rigid_body3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	RigidBody3D *rigid_body3d_class;
	JSValue obj = JS_NewObjectClass(ctx, RigidBody3D::__class_id);
	if (JS_IsException(obj))
		return obj;
	rigid_body3d_class = memnew(RigidBody3D);
	if (!rigid_body3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, rigid_body3d_class);
	return obj;
}
static JSValue rigid_body3d_class_set_mass(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&RigidBody3D::set_mass, RigidBody3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rigid_body3d_class_get_mass(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RigidBody3D::get_mass, RigidBody3D::__class_id, ctx, this_val, argv);
};
static JSValue rigid_body3d_class_set_inertia(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&RigidBody3D::set_inertia, RigidBody3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rigid_body3d_class_get_inertia(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RigidBody3D::get_inertia, RigidBody3D::__class_id, ctx, this_val, argv);
};
static JSValue rigid_body3d_class_set_center_of_mass_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&RigidBody3D::set_center_of_mass_mode, RigidBody3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rigid_body3d_class_get_center_of_mass_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RigidBody3D::get_center_of_mass_mode, RigidBody3D::__class_id, ctx, this_val, argv);
};
static JSValue rigid_body3d_class_set_center_of_mass(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&RigidBody3D::set_center_of_mass, RigidBody3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rigid_body3d_class_get_center_of_mass(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RigidBody3D::get_center_of_mass, RigidBody3D::__class_id, ctx, this_val, argv);
};
static JSValue rigid_body3d_class_set_physics_material_override(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&RigidBody3D::set_physics_material_override, RigidBody3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rigid_body3d_class_get_physics_material_override(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RigidBody3D::get_physics_material_override, RigidBody3D::__class_id, ctx, this_val, argv);
};
static JSValue rigid_body3d_class_set_linear_velocity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&RigidBody3D::set_linear_velocity, RigidBody3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rigid_body3d_class_get_linear_velocity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RigidBody3D::get_linear_velocity, RigidBody3D::__class_id, ctx, this_val, argv);
};
static JSValue rigid_body3d_class_set_angular_velocity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&RigidBody3D::set_angular_velocity, RigidBody3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rigid_body3d_class_get_angular_velocity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RigidBody3D::get_angular_velocity, RigidBody3D::__class_id, ctx, this_val, argv);
};
static JSValue rigid_body3d_class_get_inverse_inertia_tensor(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RigidBody3D::get_inverse_inertia_tensor, RigidBody3D::__class_id, ctx, this_val, argv);
};
static JSValue rigid_body3d_class_set_gravity_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&RigidBody3D::set_gravity_scale, RigidBody3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rigid_body3d_class_get_gravity_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RigidBody3D::get_gravity_scale, RigidBody3D::__class_id, ctx, this_val, argv);
};
static JSValue rigid_body3d_class_set_linear_damp_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&RigidBody3D::set_linear_damp_mode, RigidBody3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rigid_body3d_class_get_linear_damp_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RigidBody3D::get_linear_damp_mode, RigidBody3D::__class_id, ctx, this_val, argv);
};
static JSValue rigid_body3d_class_set_angular_damp_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&RigidBody3D::set_angular_damp_mode, RigidBody3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rigid_body3d_class_get_angular_damp_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RigidBody3D::get_angular_damp_mode, RigidBody3D::__class_id, ctx, this_val, argv);
};
static JSValue rigid_body3d_class_set_linear_damp(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&RigidBody3D::set_linear_damp, RigidBody3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rigid_body3d_class_get_linear_damp(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RigidBody3D::get_linear_damp, RigidBody3D::__class_id, ctx, this_val, argv);
};
static JSValue rigid_body3d_class_set_angular_damp(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&RigidBody3D::set_angular_damp, RigidBody3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rigid_body3d_class_get_angular_damp(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RigidBody3D::get_angular_damp, RigidBody3D::__class_id, ctx, this_val, argv);
};
static JSValue rigid_body3d_class_set_max_contacts_reported(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&RigidBody3D::set_max_contacts_reported, RigidBody3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rigid_body3d_class_get_max_contacts_reported(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RigidBody3D::get_max_contacts_reported, RigidBody3D::__class_id, ctx, this_val, argv);
};
static JSValue rigid_body3d_class_get_contact_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RigidBody3D::get_contact_count, RigidBody3D::__class_id, ctx, this_val, argv);
};
static JSValue rigid_body3d_class_set_use_custom_integrator(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&RigidBody3D::set_use_custom_integrator, RigidBody3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rigid_body3d_class_is_using_custom_integrator(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&RigidBody3D::is_using_custom_integrator, RigidBody3D::__class_id, ctx, this_val, argv);
};
static JSValue rigid_body3d_class_set_contact_monitor(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&RigidBody3D::set_contact_monitor, RigidBody3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rigid_body3d_class_is_contact_monitor_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RigidBody3D::is_contact_monitor_enabled, RigidBody3D::__class_id, ctx, this_val, argv);
};
static JSValue rigid_body3d_class_set_use_continuous_collision_detection(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&RigidBody3D::set_use_continuous_collision_detection, RigidBody3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rigid_body3d_class_is_using_continuous_collision_detection(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RigidBody3D::is_using_continuous_collision_detection, RigidBody3D::__class_id, ctx, this_val, argv);
};
static JSValue rigid_body3d_class_set_axis_velocity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&RigidBody3D::set_axis_velocity, RigidBody3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rigid_body3d_class_apply_central_impulse(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&RigidBody3D::apply_central_impulse, RigidBody3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rigid_body3d_class_apply_impulse(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&RigidBody3D::apply_impulse, RigidBody3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rigid_body3d_class_apply_torque_impulse(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&RigidBody3D::apply_torque_impulse, RigidBody3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rigid_body3d_class_apply_central_force(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&RigidBody3D::apply_central_force, RigidBody3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rigid_body3d_class_apply_force(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&RigidBody3D::apply_force, RigidBody3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rigid_body3d_class_apply_torque(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&RigidBody3D::apply_torque, RigidBody3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rigid_body3d_class_add_constant_central_force(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&RigidBody3D::add_constant_central_force, RigidBody3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rigid_body3d_class_add_constant_force(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&RigidBody3D::add_constant_force, RigidBody3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rigid_body3d_class_add_constant_torque(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&RigidBody3D::add_constant_torque, RigidBody3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rigid_body3d_class_set_constant_force(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&RigidBody3D::set_constant_force, RigidBody3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rigid_body3d_class_get_constant_force(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RigidBody3D::get_constant_force, RigidBody3D::__class_id, ctx, this_val, argv);
};
static JSValue rigid_body3d_class_set_constant_torque(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&RigidBody3D::set_constant_torque, RigidBody3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rigid_body3d_class_get_constant_torque(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RigidBody3D::get_constant_torque, RigidBody3D::__class_id, ctx, this_val, argv);
};
static JSValue rigid_body3d_class_set_sleeping(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&RigidBody3D::set_sleeping, RigidBody3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rigid_body3d_class_is_sleeping(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RigidBody3D::is_sleeping, RigidBody3D::__class_id, ctx, this_val, argv);
};
static JSValue rigid_body3d_class_set_can_sleep(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&RigidBody3D::set_can_sleep, RigidBody3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rigid_body3d_class_is_able_to_sleep(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RigidBody3D::is_able_to_sleep, RigidBody3D::__class_id, ctx, this_val, argv);
};
static JSValue rigid_body3d_class_set_lock_rotation_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&RigidBody3D::set_lock_rotation_enabled, RigidBody3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rigid_body3d_class_is_lock_rotation_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RigidBody3D::is_lock_rotation_enabled, RigidBody3D::__class_id, ctx, this_val, argv);
};
static JSValue rigid_body3d_class_set_freeze_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&RigidBody3D::set_freeze_enabled, RigidBody3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rigid_body3d_class_is_freeze_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RigidBody3D::is_freeze_enabled, RigidBody3D::__class_id, ctx, this_val, argv);
};
static JSValue rigid_body3d_class_set_freeze_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&RigidBody3D::set_freeze_mode, RigidBody3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rigid_body3d_class_get_freeze_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RigidBody3D::get_freeze_mode, RigidBody3D::__class_id, ctx, this_val, argv);
};
static JSValue rigid_body3d_class_get_colliding_bodies(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RigidBody3D::get_colliding_bodies, RigidBody3D::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry rigid_body3d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_mass", 1, &rigid_body3d_class_set_mass),
	JS_CFUNC_DEF("get_mass", 0, &rigid_body3d_class_get_mass),
	JS_CFUNC_DEF("set_inertia", 1, &rigid_body3d_class_set_inertia),
	JS_CFUNC_DEF("get_inertia", 0, &rigid_body3d_class_get_inertia),
	JS_CFUNC_DEF("set_center_of_mass_mode", 1, &rigid_body3d_class_set_center_of_mass_mode),
	JS_CFUNC_DEF("get_center_of_mass_mode", 0, &rigid_body3d_class_get_center_of_mass_mode),
	JS_CFUNC_DEF("set_center_of_mass", 1, &rigid_body3d_class_set_center_of_mass),
	JS_CFUNC_DEF("get_center_of_mass", 0, &rigid_body3d_class_get_center_of_mass),
	JS_CFUNC_DEF("set_physics_material_override", 1, &rigid_body3d_class_set_physics_material_override),
	JS_CFUNC_DEF("get_physics_material_override", 0, &rigid_body3d_class_get_physics_material_override),
	JS_CFUNC_DEF("set_linear_velocity", 1, &rigid_body3d_class_set_linear_velocity),
	JS_CFUNC_DEF("get_linear_velocity", 0, &rigid_body3d_class_get_linear_velocity),
	JS_CFUNC_DEF("set_angular_velocity", 1, &rigid_body3d_class_set_angular_velocity),
	JS_CFUNC_DEF("get_angular_velocity", 0, &rigid_body3d_class_get_angular_velocity),
	JS_CFUNC_DEF("get_inverse_inertia_tensor", 0, &rigid_body3d_class_get_inverse_inertia_tensor),
	JS_CFUNC_DEF("set_gravity_scale", 1, &rigid_body3d_class_set_gravity_scale),
	JS_CFUNC_DEF("get_gravity_scale", 0, &rigid_body3d_class_get_gravity_scale),
	JS_CFUNC_DEF("set_linear_damp_mode", 1, &rigid_body3d_class_set_linear_damp_mode),
	JS_CFUNC_DEF("get_linear_damp_mode", 0, &rigid_body3d_class_get_linear_damp_mode),
	JS_CFUNC_DEF("set_angular_damp_mode", 1, &rigid_body3d_class_set_angular_damp_mode),
	JS_CFUNC_DEF("get_angular_damp_mode", 0, &rigid_body3d_class_get_angular_damp_mode),
	JS_CFUNC_DEF("set_linear_damp", 1, &rigid_body3d_class_set_linear_damp),
	JS_CFUNC_DEF("get_linear_damp", 0, &rigid_body3d_class_get_linear_damp),
	JS_CFUNC_DEF("set_angular_damp", 1, &rigid_body3d_class_set_angular_damp),
	JS_CFUNC_DEF("get_angular_damp", 0, &rigid_body3d_class_get_angular_damp),
	JS_CFUNC_DEF("set_max_contacts_reported", 1, &rigid_body3d_class_set_max_contacts_reported),
	JS_CFUNC_DEF("get_max_contacts_reported", 0, &rigid_body3d_class_get_max_contacts_reported),
	JS_CFUNC_DEF("get_contact_count", 0, &rigid_body3d_class_get_contact_count),
	JS_CFUNC_DEF("set_use_custom_integrator", 1, &rigid_body3d_class_set_use_custom_integrator),
	JS_CFUNC_DEF("is_using_custom_integrator", 0, &rigid_body3d_class_is_using_custom_integrator),
	JS_CFUNC_DEF("set_contact_monitor", 1, &rigid_body3d_class_set_contact_monitor),
	JS_CFUNC_DEF("is_contact_monitor_enabled", 0, &rigid_body3d_class_is_contact_monitor_enabled),
	JS_CFUNC_DEF("set_use_continuous_collision_detection", 1, &rigid_body3d_class_set_use_continuous_collision_detection),
	JS_CFUNC_DEF("is_using_continuous_collision_detection", 0, &rigid_body3d_class_is_using_continuous_collision_detection),
	JS_CFUNC_DEF("set_axis_velocity", 1, &rigid_body3d_class_set_axis_velocity),
	JS_CFUNC_DEF("apply_central_impulse", 1, &rigid_body3d_class_apply_central_impulse),
	JS_CFUNC_DEF("apply_impulse", 2, &rigid_body3d_class_apply_impulse),
	JS_CFUNC_DEF("apply_torque_impulse", 1, &rigid_body3d_class_apply_torque_impulse),
	JS_CFUNC_DEF("apply_central_force", 1, &rigid_body3d_class_apply_central_force),
	JS_CFUNC_DEF("apply_force", 2, &rigid_body3d_class_apply_force),
	JS_CFUNC_DEF("apply_torque", 1, &rigid_body3d_class_apply_torque),
	JS_CFUNC_DEF("add_constant_central_force", 1, &rigid_body3d_class_add_constant_central_force),
	JS_CFUNC_DEF("add_constant_force", 2, &rigid_body3d_class_add_constant_force),
	JS_CFUNC_DEF("add_constant_torque", 1, &rigid_body3d_class_add_constant_torque),
	JS_CFUNC_DEF("set_constant_force", 1, &rigid_body3d_class_set_constant_force),
	JS_CFUNC_DEF("get_constant_force", 0, &rigid_body3d_class_get_constant_force),
	JS_CFUNC_DEF("set_constant_torque", 1, &rigid_body3d_class_set_constant_torque),
	JS_CFUNC_DEF("get_constant_torque", 0, &rigid_body3d_class_get_constant_torque),
	JS_CFUNC_DEF("set_sleeping", 1, &rigid_body3d_class_set_sleeping),
	JS_CFUNC_DEF("is_sleeping", 0, &rigid_body3d_class_is_sleeping),
	JS_CFUNC_DEF("set_can_sleep", 1, &rigid_body3d_class_set_can_sleep),
	JS_CFUNC_DEF("is_able_to_sleep", 0, &rigid_body3d_class_is_able_to_sleep),
	JS_CFUNC_DEF("set_lock_rotation_enabled", 1, &rigid_body3d_class_set_lock_rotation_enabled),
	JS_CFUNC_DEF("is_lock_rotation_enabled", 0, &rigid_body3d_class_is_lock_rotation_enabled),
	JS_CFUNC_DEF("set_freeze_enabled", 1, &rigid_body3d_class_set_freeze_enabled),
	JS_CFUNC_DEF("is_freeze_enabled", 0, &rigid_body3d_class_is_freeze_enabled),
	JS_CFUNC_DEF("set_freeze_mode", 1, &rigid_body3d_class_set_freeze_mode),
	JS_CFUNC_DEF("get_freeze_mode", 0, &rigid_body3d_class_get_freeze_mode),
	JS_CFUNC_DEF("get_colliding_bodies", 0, &rigid_body3d_class_get_colliding_bodies),
};

static int js_rigid_body3d_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&RigidBody3D::__class_id);
	classes["RigidBody3D"] = RigidBody3D::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), RigidBody3D::__class_id, &rigid_body3d_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, PhysicsBody3D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, RigidBody3D::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, rigid_body3d_class_proto_funcs, _countof(rigid_body3d_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, rigid_body3d_class_constructor, "RigidBody3D", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "RigidBody3D", ctor);

	return 0;
}

JSModuleDef *_js_init_rigid_body3d_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_rigid_body3d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "RigidBody3D");
	return m;
}

JSModuleDef *js_init_rigid_body3d_module(JSContext *ctx) {
	return _js_init_rigid_body3d_module(ctx, "godot/classes/rigid_body3d");
}

void register_rigid_body3d() {
	js_init_rigid_body3d_module(ctx);
}