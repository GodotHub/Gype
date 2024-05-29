/**************************************************************************/
/*  physics_server3d_extension.cpp                                        */
/**************************************************************************/
/*                         This file is part of:                          */
/*                             GODOT ENGINE                               */
/*                        https://godotengine.org                         */
/**************************************************************************/
/* Copyright (c) 2014-present Godot Engine contributors (see AUTHORS.md). */
/* Copyright (c) 2007-2014 Juan Linietsky, Ariel Manzur.                  */
/*                                                                        */
/* Permission is hereby granted, free of charge, to any person obtaining  */
/* a copy of this software and associated documentation files (the        */
/* "Software"), to deal in the Software without restriction, including    */
/* without limitation the rights to use, copy, modify, merge, publish,    */
/* distribute, sublicense, and/or sell copies of the Software, and to     */
/* permit persons to whom the Software is furnished to do so, subject to  */
/* the following conditions:                                              */
/*                                                                        */
/* The above copyright notice and this permission notice shall be         */
/* included in all copies or substantial portions of the Software.        */
/*                                                                        */
/* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,        */
/* EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF     */
/* MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. */
/* IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY   */
/* CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,   */
/* TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE      */
/* SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.                 */
/**************************************************************************/

// THIS FILE IS GENERATED. EDITS WILL BE LOST.

#include <godot_cpp/classes/physics_server3d_extension.hpp>

#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

#include <godot_cpp/variant/callable.hpp>
#include <godot_cpp/classes/physics_direct_body_state3d.hpp>
#include <godot_cpp/classes/physics_direct_space_state3d.hpp>
#include <godot_cpp/classes/physics_server3d_rendering_server_handler.hpp>

namespace godot {

bool PhysicsServer3DExtension::body_test_motion_is_excluding_body(const RID &body) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3DExtension::get_class_static()._native_ptr(), StringName("body_test_motion_is_excluding_body")._native_ptr(), 4155700596);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &body);
}

bool PhysicsServer3DExtension::body_test_motion_is_excluding_object(uint64_t object) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer3DExtension::get_class_static()._native_ptr(), StringName("body_test_motion_is_excluding_object")._native_ptr(), 1116898809);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	int64_t object_encoded;
	PtrToArg<int64_t>::encode(object, &object_encoded);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &object_encoded);
}

RID PhysicsServer3DExtension::_world_boundary_shape_create() {
	return RID();
}

RID PhysicsServer3DExtension::_separation_ray_shape_create() {
	return RID();
}

RID PhysicsServer3DExtension::_sphere_shape_create() {
	return RID();
}

RID PhysicsServer3DExtension::_box_shape_create() {
	return RID();
}

RID PhysicsServer3DExtension::_capsule_shape_create() {
	return RID();
}

RID PhysicsServer3DExtension::_cylinder_shape_create() {
	return RID();
}

RID PhysicsServer3DExtension::_convex_polygon_shape_create() {
	return RID();
}

RID PhysicsServer3DExtension::_concave_polygon_shape_create() {
	return RID();
}

RID PhysicsServer3DExtension::_heightmap_shape_create() {
	return RID();
}

RID PhysicsServer3DExtension::_custom_shape_create() {
	return RID();
}

void PhysicsServer3DExtension::_shape_set_data(const RID &shape, const Variant &data) {}

void PhysicsServer3DExtension::_shape_set_custom_solver_bias(const RID &shape, double bias) {}

void PhysicsServer3DExtension::_shape_set_margin(const RID &shape, double margin) {}

double PhysicsServer3DExtension::_shape_get_margin(const RID &shape) const {
	return 0.0;
}

PhysicsServer3D::ShapeType PhysicsServer3DExtension::_shape_get_type(const RID &shape) const {
	return PhysicsServer3D::ShapeType(0);
}

Variant PhysicsServer3DExtension::_shape_get_data(const RID &shape) const {
	return Variant();
}

double PhysicsServer3DExtension::_shape_get_custom_solver_bias(const RID &shape) const {
	return 0.0;
}

RID PhysicsServer3DExtension::_space_create() {
	return RID();
}

void PhysicsServer3DExtension::_space_set_active(const RID &space, bool active) {}

bool PhysicsServer3DExtension::_space_is_active(const RID &space) const {
	return false;
}

void PhysicsServer3DExtension::_space_set_param(const RID &space, PhysicsServer3D::SpaceParameter param, double value) {}

double PhysicsServer3DExtension::_space_get_param(const RID &space, PhysicsServer3D::SpaceParameter param) const {
	return 0.0;
}

PhysicsDirectSpaceState3D *PhysicsServer3DExtension::_space_get_direct_state(const RID &space) {
	return nullptr;
}

void PhysicsServer3DExtension::_space_set_debug_contacts(const RID &space, int32_t max_contacts) {}

PackedVector3Array PhysicsServer3DExtension::_space_get_contacts(const RID &space) const {
	return PackedVector3Array();
}

int32_t PhysicsServer3DExtension::_space_get_contact_count(const RID &space) const {
	return 0;
}

RID PhysicsServer3DExtension::_area_create() {
	return RID();
}

void PhysicsServer3DExtension::_area_set_space(const RID &area, const RID &space) {}

RID PhysicsServer3DExtension::_area_get_space(const RID &area) const {
	return RID();
}

void PhysicsServer3DExtension::_area_add_shape(const RID &area, const RID &shape, const Transform3D &transform, bool disabled) {}

void PhysicsServer3DExtension::_area_set_shape(const RID &area, int32_t shape_idx, const RID &shape) {}

void PhysicsServer3DExtension::_area_set_shape_transform(const RID &area, int32_t shape_idx, const Transform3D &transform) {}

void PhysicsServer3DExtension::_area_set_shape_disabled(const RID &area, int32_t shape_idx, bool disabled) {}

int32_t PhysicsServer3DExtension::_area_get_shape_count(const RID &area) const {
	return 0;
}

RID PhysicsServer3DExtension::_area_get_shape(const RID &area, int32_t shape_idx) const {
	return RID();
}

Transform3D PhysicsServer3DExtension::_area_get_shape_transform(const RID &area, int32_t shape_idx) const {
	return Transform3D();
}

void PhysicsServer3DExtension::_area_remove_shape(const RID &area, int32_t shape_idx) {}

void PhysicsServer3DExtension::_area_clear_shapes(const RID &area) {}

void PhysicsServer3DExtension::_area_attach_object_instance_id(const RID &area, uint64_t id) {}

uint64_t PhysicsServer3DExtension::_area_get_object_instance_id(const RID &area) const {
	return 0;
}

void PhysicsServer3DExtension::_area_set_param(const RID &area, PhysicsServer3D::AreaParameter param, const Variant &value) {}

void PhysicsServer3DExtension::_area_set_transform(const RID &area, const Transform3D &transform) {}

Variant PhysicsServer3DExtension::_area_get_param(const RID &area, PhysicsServer3D::AreaParameter param) const {
	return Variant();
}

Transform3D PhysicsServer3DExtension::_area_get_transform(const RID &area) const {
	return Transform3D();
}

void PhysicsServer3DExtension::_area_set_collision_layer(const RID &area, uint32_t layer) {}

uint32_t PhysicsServer3DExtension::_area_get_collision_layer(const RID &area) const {
	return 0;
}

void PhysicsServer3DExtension::_area_set_collision_mask(const RID &area, uint32_t mask) {}

uint32_t PhysicsServer3DExtension::_area_get_collision_mask(const RID &area) const {
	return 0;
}

void PhysicsServer3DExtension::_area_set_monitorable(const RID &area, bool monitorable) {}

void PhysicsServer3DExtension::_area_set_ray_pickable(const RID &area, bool enable) {}

void PhysicsServer3DExtension::_area_set_monitor_callback(const RID &area, const Callable &callback) {}

void PhysicsServer3DExtension::_area_set_area_monitor_callback(const RID &area, const Callable &callback) {}

RID PhysicsServer3DExtension::_body_create() {
	return RID();
}

void PhysicsServer3DExtension::_body_set_space(const RID &body, const RID &space) {}

RID PhysicsServer3DExtension::_body_get_space(const RID &body) const {
	return RID();
}

void PhysicsServer3DExtension::_body_set_mode(const RID &body, PhysicsServer3D::BodyMode mode) {}

PhysicsServer3D::BodyMode PhysicsServer3DExtension::_body_get_mode(const RID &body) const {
	return PhysicsServer3D::BodyMode(0);
}

void PhysicsServer3DExtension::_body_add_shape(const RID &body, const RID &shape, const Transform3D &transform, bool disabled) {}

void PhysicsServer3DExtension::_body_set_shape(const RID &body, int32_t shape_idx, const RID &shape) {}

void PhysicsServer3DExtension::_body_set_shape_transform(const RID &body, int32_t shape_idx, const Transform3D &transform) {}

void PhysicsServer3DExtension::_body_set_shape_disabled(const RID &body, int32_t shape_idx, bool disabled) {}

int32_t PhysicsServer3DExtension::_body_get_shape_count(const RID &body) const {
	return 0;
}

RID PhysicsServer3DExtension::_body_get_shape(const RID &body, int32_t shape_idx) const {
	return RID();
}

Transform3D PhysicsServer3DExtension::_body_get_shape_transform(const RID &body, int32_t shape_idx) const {
	return Transform3D();
}

void PhysicsServer3DExtension::_body_remove_shape(const RID &body, int32_t shape_idx) {}

void PhysicsServer3DExtension::_body_clear_shapes(const RID &body) {}

void PhysicsServer3DExtension::_body_attach_object_instance_id(const RID &body, uint64_t id) {}

uint64_t PhysicsServer3DExtension::_body_get_object_instance_id(const RID &body) const {
	return 0;
}

void PhysicsServer3DExtension::_body_set_enable_continuous_collision_detection(const RID &body, bool enable) {}

bool PhysicsServer3DExtension::_body_is_continuous_collision_detection_enabled(const RID &body) const {
	return false;
}

void PhysicsServer3DExtension::_body_set_collision_layer(const RID &body, uint32_t layer) {}

uint32_t PhysicsServer3DExtension::_body_get_collision_layer(const RID &body) const {
	return 0;
}

void PhysicsServer3DExtension::_body_set_collision_mask(const RID &body, uint32_t mask) {}

uint32_t PhysicsServer3DExtension::_body_get_collision_mask(const RID &body) const {
	return 0;
}

void PhysicsServer3DExtension::_body_set_collision_priority(const RID &body, double priority) {}

double PhysicsServer3DExtension::_body_get_collision_priority(const RID &body) const {
	return 0.0;
}

void PhysicsServer3DExtension::_body_set_user_flags(const RID &body, uint32_t flags) {}

uint32_t PhysicsServer3DExtension::_body_get_user_flags(const RID &body) const {
	return 0;
}

void PhysicsServer3DExtension::_body_set_param(const RID &body, PhysicsServer3D::BodyParameter param, const Variant &value) {}

Variant PhysicsServer3DExtension::_body_get_param(const RID &body, PhysicsServer3D::BodyParameter param) const {
	return Variant();
}

void PhysicsServer3DExtension::_body_reset_mass_properties(const RID &body) {}

void PhysicsServer3DExtension::_body_set_state(const RID &body, PhysicsServer3D::BodyState state, const Variant &value) {}

Variant PhysicsServer3DExtension::_body_get_state(const RID &body, PhysicsServer3D::BodyState state) const {
	return Variant();
}

void PhysicsServer3DExtension::_body_apply_central_impulse(const RID &body, const Vector3 &impulse) {}

void PhysicsServer3DExtension::_body_apply_impulse(const RID &body, const Vector3 &impulse, const Vector3 &position) {}

void PhysicsServer3DExtension::_body_apply_torque_impulse(const RID &body, const Vector3 &impulse) {}

void PhysicsServer3DExtension::_body_apply_central_force(const RID &body, const Vector3 &force) {}

void PhysicsServer3DExtension::_body_apply_force(const RID &body, const Vector3 &force, const Vector3 &position) {}

void PhysicsServer3DExtension::_body_apply_torque(const RID &body, const Vector3 &torque) {}

void PhysicsServer3DExtension::_body_add_constant_central_force(const RID &body, const Vector3 &force) {}

void PhysicsServer3DExtension::_body_add_constant_force(const RID &body, const Vector3 &force, const Vector3 &position) {}

void PhysicsServer3DExtension::_body_add_constant_torque(const RID &body, const Vector3 &torque) {}

void PhysicsServer3DExtension::_body_set_constant_force(const RID &body, const Vector3 &force) {}

Vector3 PhysicsServer3DExtension::_body_get_constant_force(const RID &body) const {
	return Vector3();
}

void PhysicsServer3DExtension::_body_set_constant_torque(const RID &body, const Vector3 &torque) {}

Vector3 PhysicsServer3DExtension::_body_get_constant_torque(const RID &body) const {
	return Vector3();
}

void PhysicsServer3DExtension::_body_set_axis_velocity(const RID &body, const Vector3 &axis_velocity) {}

void PhysicsServer3DExtension::_body_set_axis_lock(const RID &body, PhysicsServer3D::BodyAxis axis, bool lock) {}

bool PhysicsServer3DExtension::_body_is_axis_locked(const RID &body, PhysicsServer3D::BodyAxis axis) const {
	return false;
}

void PhysicsServer3DExtension::_body_add_collision_exception(const RID &body, const RID &excepted_body) {}

void PhysicsServer3DExtension::_body_remove_collision_exception(const RID &body, const RID &excepted_body) {}

TypedArray<RID> PhysicsServer3DExtension::_body_get_collision_exceptions(const RID &body) const {
	return TypedArray<RID>();
}

void PhysicsServer3DExtension::_body_set_max_contacts_reported(const RID &body, int32_t amount) {}

int32_t PhysicsServer3DExtension::_body_get_max_contacts_reported(const RID &body) const {
	return 0;
}

void PhysicsServer3DExtension::_body_set_contacts_reported_depth_threshold(const RID &body, double threshold) {}

double PhysicsServer3DExtension::_body_get_contacts_reported_depth_threshold(const RID &body) const {
	return 0.0;
}

void PhysicsServer3DExtension::_body_set_omit_force_integration(const RID &body, bool enable) {}

bool PhysicsServer3DExtension::_body_is_omitting_force_integration(const RID &body) const {
	return false;
}

void PhysicsServer3DExtension::_body_set_state_sync_callback(const RID &body, const Callable &callable) {}

void PhysicsServer3DExtension::_body_set_force_integration_callback(const RID &body, const Callable &callable, const Variant &userdata) {}

void PhysicsServer3DExtension::_body_set_ray_pickable(const RID &body, bool enable) {}

bool PhysicsServer3DExtension::_body_test_motion(const RID &body, const Transform3D &from, const Vector3 &motion, double margin, int32_t max_collisions, bool collide_separation_ray, bool recovery_as_collision, PhysicsServer3DExtensionMotionResult *result) const {
	return false;
}

PhysicsDirectBodyState3D *PhysicsServer3DExtension::_body_get_direct_state(const RID &body) {
	return nullptr;
}

RID PhysicsServer3DExtension::_soft_body_create() {
	return RID();
}

void PhysicsServer3DExtension::_soft_body_update_rendering_server(const RID &body, PhysicsServer3DRenderingServerHandler *rendering_server_handler) {}

void PhysicsServer3DExtension::_soft_body_set_space(const RID &body, const RID &space) {}

RID PhysicsServer3DExtension::_soft_body_get_space(const RID &body) const {
	return RID();
}

void PhysicsServer3DExtension::_soft_body_set_ray_pickable(const RID &body, bool enable) {}

void PhysicsServer3DExtension::_soft_body_set_collision_layer(const RID &body, uint32_t layer) {}

uint32_t PhysicsServer3DExtension::_soft_body_get_collision_layer(const RID &body) const {
	return 0;
}

void PhysicsServer3DExtension::_soft_body_set_collision_mask(const RID &body, uint32_t mask) {}

uint32_t PhysicsServer3DExtension::_soft_body_get_collision_mask(const RID &body) const {
	return 0;
}

void PhysicsServer3DExtension::_soft_body_add_collision_exception(const RID &body, const RID &body_b) {}

void PhysicsServer3DExtension::_soft_body_remove_collision_exception(const RID &body, const RID &body_b) {}

TypedArray<RID> PhysicsServer3DExtension::_soft_body_get_collision_exceptions(const RID &body) const {
	return TypedArray<RID>();
}

void PhysicsServer3DExtension::_soft_body_set_state(const RID &body, PhysicsServer3D::BodyState state, const Variant &variant) {}

Variant PhysicsServer3DExtension::_soft_body_get_state(const RID &body, PhysicsServer3D::BodyState state) const {
	return Variant();
}

void PhysicsServer3DExtension::_soft_body_set_transform(const RID &body, const Transform3D &transform) {}

void PhysicsServer3DExtension::_soft_body_set_simulation_precision(const RID &body, int32_t simulation_precision) {}

int32_t PhysicsServer3DExtension::_soft_body_get_simulation_precision(const RID &body) const {
	return 0;
}

void PhysicsServer3DExtension::_soft_body_set_total_mass(const RID &body, double total_mass) {}

double PhysicsServer3DExtension::_soft_body_get_total_mass(const RID &body) const {
	return 0.0;
}

void PhysicsServer3DExtension::_soft_body_set_linear_stiffness(const RID &body, double linear_stiffness) {}

double PhysicsServer3DExtension::_soft_body_get_linear_stiffness(const RID &body) const {
	return 0.0;
}

void PhysicsServer3DExtension::_soft_body_set_pressure_coefficient(const RID &body, double pressure_coefficient) {}

double PhysicsServer3DExtension::_soft_body_get_pressure_coefficient(const RID &body) const {
	return 0.0;
}

void PhysicsServer3DExtension::_soft_body_set_damping_coefficient(const RID &body, double damping_coefficient) {}

double PhysicsServer3DExtension::_soft_body_get_damping_coefficient(const RID &body) const {
	return 0.0;
}

void PhysicsServer3DExtension::_soft_body_set_drag_coefficient(const RID &body, double drag_coefficient) {}

double PhysicsServer3DExtension::_soft_body_get_drag_coefficient(const RID &body) const {
	return 0.0;
}

void PhysicsServer3DExtension::_soft_body_set_mesh(const RID &body, const RID &mesh) {}

AABB PhysicsServer3DExtension::_soft_body_get_bounds(const RID &body) const {
	return AABB();
}

void PhysicsServer3DExtension::_soft_body_move_point(const RID &body, int32_t point_index, const Vector3 &global_position) {}

Vector3 PhysicsServer3DExtension::_soft_body_get_point_global_position(const RID &body, int32_t point_index) const {
	return Vector3();
}

void PhysicsServer3DExtension::_soft_body_remove_all_pinned_points(const RID &body) {}

void PhysicsServer3DExtension::_soft_body_pin_point(const RID &body, int32_t point_index, bool pin) {}

bool PhysicsServer3DExtension::_soft_body_is_point_pinned(const RID &body, int32_t point_index) const {
	return false;
}

RID PhysicsServer3DExtension::_joint_create() {
	return RID();
}

void PhysicsServer3DExtension::_joint_clear(const RID &joint) {}

void PhysicsServer3DExtension::_joint_make_pin(const RID &joint, const RID &body_A, const Vector3 &local_A, const RID &body_B, const Vector3 &local_B) {}

void PhysicsServer3DExtension::_pin_joint_set_param(const RID &joint, PhysicsServer3D::PinJointParam param, double value) {}

double PhysicsServer3DExtension::_pin_joint_get_param(const RID &joint, PhysicsServer3D::PinJointParam param) const {
	return 0.0;
}

void PhysicsServer3DExtension::_pin_joint_set_local_a(const RID &joint, const Vector3 &local_A) {}

Vector3 PhysicsServer3DExtension::_pin_joint_get_local_a(const RID &joint) const {
	return Vector3();
}

void PhysicsServer3DExtension::_pin_joint_set_local_b(const RID &joint, const Vector3 &local_B) {}

Vector3 PhysicsServer3DExtension::_pin_joint_get_local_b(const RID &joint) const {
	return Vector3();
}

void PhysicsServer3DExtension::_joint_make_hinge(const RID &joint, const RID &body_A, const Transform3D &hinge_A, const RID &body_B, const Transform3D &hinge_B) {}

void PhysicsServer3DExtension::_joint_make_hinge_simple(const RID &joint, const RID &body_A, const Vector3 &pivot_A, const Vector3 &axis_A, const RID &body_B, const Vector3 &pivot_B, const Vector3 &axis_B) {}

void PhysicsServer3DExtension::_hinge_joint_set_param(const RID &joint, PhysicsServer3D::HingeJointParam param, double value) {}

double PhysicsServer3DExtension::_hinge_joint_get_param(const RID &joint, PhysicsServer3D::HingeJointParam param) const {
	return 0.0;
}

void PhysicsServer3DExtension::_hinge_joint_set_flag(const RID &joint, PhysicsServer3D::HingeJointFlag flag, bool enabled) {}

bool PhysicsServer3DExtension::_hinge_joint_get_flag(const RID &joint, PhysicsServer3D::HingeJointFlag flag) const {
	return false;
}

void PhysicsServer3DExtension::_joint_make_slider(const RID &joint, const RID &body_A, const Transform3D &local_ref_A, const RID &body_B, const Transform3D &local_ref_B) {}

void PhysicsServer3DExtension::_slider_joint_set_param(const RID &joint, PhysicsServer3D::SliderJointParam param, double value) {}

double PhysicsServer3DExtension::_slider_joint_get_param(const RID &joint, PhysicsServer3D::SliderJointParam param) const {
	return 0.0;
}

void PhysicsServer3DExtension::_joint_make_cone_twist(const RID &joint, const RID &body_A, const Transform3D &local_ref_A, const RID &body_B, const Transform3D &local_ref_B) {}

void PhysicsServer3DExtension::_cone_twist_joint_set_param(const RID &joint, PhysicsServer3D::ConeTwistJointParam param, double value) {}

double PhysicsServer3DExtension::_cone_twist_joint_get_param(const RID &joint, PhysicsServer3D::ConeTwistJointParam param) const {
	return 0.0;
}

void PhysicsServer3DExtension::_joint_make_generic_6dof(const RID &joint, const RID &body_A, const Transform3D &local_ref_A, const RID &body_B, const Transform3D &local_ref_B) {}

void PhysicsServer3DExtension::_generic_6dof_joint_set_param(const RID &joint, Vector3::Axis axis, PhysicsServer3D::G6DOFJointAxisParam param, double value) {}

double PhysicsServer3DExtension::_generic_6dof_joint_get_param(const RID &joint, Vector3::Axis axis, PhysicsServer3D::G6DOFJointAxisParam param) const {
	return 0.0;
}

void PhysicsServer3DExtension::_generic_6dof_joint_set_flag(const RID &joint, Vector3::Axis axis, PhysicsServer3D::G6DOFJointAxisFlag flag, bool enable) {}

bool PhysicsServer3DExtension::_generic_6dof_joint_get_flag(const RID &joint, Vector3::Axis axis, PhysicsServer3D::G6DOFJointAxisFlag flag) const {
	return false;
}

PhysicsServer3D::JointType PhysicsServer3DExtension::_joint_get_type(const RID &joint) const {
	return PhysicsServer3D::JointType(0);
}

void PhysicsServer3DExtension::_joint_set_solver_priority(const RID &joint, int32_t priority) {}

int32_t PhysicsServer3DExtension::_joint_get_solver_priority(const RID &joint) const {
	return 0;
}

void PhysicsServer3DExtension::_joint_disable_collisions_between_bodies(const RID &joint, bool disable) {}

bool PhysicsServer3DExtension::_joint_is_disabled_collisions_between_bodies(const RID &joint) const {
	return false;
}

void PhysicsServer3DExtension::_free_rid(const RID &rid) {}

void PhysicsServer3DExtension::_set_active(bool active) {}

void PhysicsServer3DExtension::_init() {}

void PhysicsServer3DExtension::_step(double step) {}

void PhysicsServer3DExtension::_sync() {}

void PhysicsServer3DExtension::_flush_queries() {}

void PhysicsServer3DExtension::_end_sync() {}

void PhysicsServer3DExtension::_finish() {}

bool PhysicsServer3DExtension::_is_flushing_queries() const {
	return false;
}

int32_t PhysicsServer3DExtension::_get_process_info(PhysicsServer3D::ProcessInfo process_info) {
	return 0;
}


} // namespace godot 