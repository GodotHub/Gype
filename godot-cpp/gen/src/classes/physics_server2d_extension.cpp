/**************************************************************************/
/*  physics_server2d_extension.cpp                                        */
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

#include <godot_cpp/classes/physics_server2d_extension.hpp>

#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

#include <godot_cpp/variant/callable.hpp>
#include <godot_cpp/classes/physics_direct_body_state2d.hpp>
#include <godot_cpp/classes/physics_direct_space_state2d.hpp>

namespace godot {

bool PhysicsServer2DExtension::body_test_motion_is_excluding_body(const RID &body) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer2DExtension::get_class_static()._native_ptr(), StringName("body_test_motion_is_excluding_body")._native_ptr(), 4155700596);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &body);
}

bool PhysicsServer2DExtension::body_test_motion_is_excluding_object(uint64_t object) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsServer2DExtension::get_class_static()._native_ptr(), StringName("body_test_motion_is_excluding_object")._native_ptr(), 1116898809);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	int64_t object_encoded;
	PtrToArg<int64_t>::encode(object, &object_encoded);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &object_encoded);
}

RID PhysicsServer2DExtension::_world_boundary_shape_create() {
	return RID();
}

RID PhysicsServer2DExtension::_separation_ray_shape_create() {
	return RID();
}

RID PhysicsServer2DExtension::_segment_shape_create() {
	return RID();
}

RID PhysicsServer2DExtension::_circle_shape_create() {
	return RID();
}

RID PhysicsServer2DExtension::_rectangle_shape_create() {
	return RID();
}

RID PhysicsServer2DExtension::_capsule_shape_create() {
	return RID();
}

RID PhysicsServer2DExtension::_convex_polygon_shape_create() {
	return RID();
}

RID PhysicsServer2DExtension::_concave_polygon_shape_create() {
	return RID();
}

void PhysicsServer2DExtension::_shape_set_data(const RID &shape, const Variant &data) {}

void PhysicsServer2DExtension::_shape_set_custom_solver_bias(const RID &shape, double bias) {}

PhysicsServer2D::ShapeType PhysicsServer2DExtension::_shape_get_type(const RID &shape) const {
	return PhysicsServer2D::ShapeType(0);
}

Variant PhysicsServer2DExtension::_shape_get_data(const RID &shape) const {
	return Variant();
}

double PhysicsServer2DExtension::_shape_get_custom_solver_bias(const RID &shape) const {
	return 0.0;
}

bool PhysicsServer2DExtension::_shape_collide(const RID &shape_A, const Transform2D &xform_A, const Vector2 &motion_A, const RID &shape_B, const Transform2D &xform_B, const Vector2 &motion_B, void *results, int32_t result_max, int32_t *result_count) {
	return false;
}

RID PhysicsServer2DExtension::_space_create() {
	return RID();
}

void PhysicsServer2DExtension::_space_set_active(const RID &space, bool active) {}

bool PhysicsServer2DExtension::_space_is_active(const RID &space) const {
	return false;
}

void PhysicsServer2DExtension::_space_set_param(const RID &space, PhysicsServer2D::SpaceParameter param, double value) {}

double PhysicsServer2DExtension::_space_get_param(const RID &space, PhysicsServer2D::SpaceParameter param) const {
	return 0.0;
}

PhysicsDirectSpaceState2D *PhysicsServer2DExtension::_space_get_direct_state(const RID &space) {
	return nullptr;
}

void PhysicsServer2DExtension::_space_set_debug_contacts(const RID &space, int32_t max_contacts) {}

PackedVector2Array PhysicsServer2DExtension::_space_get_contacts(const RID &space) const {
	return PackedVector2Array();
}

int32_t PhysicsServer2DExtension::_space_get_contact_count(const RID &space) const {
	return 0;
}

RID PhysicsServer2DExtension::_area_create() {
	return RID();
}

void PhysicsServer2DExtension::_area_set_space(const RID &area, const RID &space) {}

RID PhysicsServer2DExtension::_area_get_space(const RID &area) const {
	return RID();
}

void PhysicsServer2DExtension::_area_add_shape(const RID &area, const RID &shape, const Transform2D &transform, bool disabled) {}

void PhysicsServer2DExtension::_area_set_shape(const RID &area, int32_t shape_idx, const RID &shape) {}

void PhysicsServer2DExtension::_area_set_shape_transform(const RID &area, int32_t shape_idx, const Transform2D &transform) {}

void PhysicsServer2DExtension::_area_set_shape_disabled(const RID &area, int32_t shape_idx, bool disabled) {}

int32_t PhysicsServer2DExtension::_area_get_shape_count(const RID &area) const {
	return 0;
}

RID PhysicsServer2DExtension::_area_get_shape(const RID &area, int32_t shape_idx) const {
	return RID();
}

Transform2D PhysicsServer2DExtension::_area_get_shape_transform(const RID &area, int32_t shape_idx) const {
	return Transform2D();
}

void PhysicsServer2DExtension::_area_remove_shape(const RID &area, int32_t shape_idx) {}

void PhysicsServer2DExtension::_area_clear_shapes(const RID &area) {}

void PhysicsServer2DExtension::_area_attach_object_instance_id(const RID &area, uint64_t id) {}

uint64_t PhysicsServer2DExtension::_area_get_object_instance_id(const RID &area) const {
	return 0;
}

void PhysicsServer2DExtension::_area_attach_canvas_instance_id(const RID &area, uint64_t id) {}

uint64_t PhysicsServer2DExtension::_area_get_canvas_instance_id(const RID &area) const {
	return 0;
}

void PhysicsServer2DExtension::_area_set_param(const RID &area, PhysicsServer2D::AreaParameter param, const Variant &value) {}

void PhysicsServer2DExtension::_area_set_transform(const RID &area, const Transform2D &transform) {}

Variant PhysicsServer2DExtension::_area_get_param(const RID &area, PhysicsServer2D::AreaParameter param) const {
	return Variant();
}

Transform2D PhysicsServer2DExtension::_area_get_transform(const RID &area) const {
	return Transform2D();
}

void PhysicsServer2DExtension::_area_set_collision_layer(const RID &area, uint32_t layer) {}

uint32_t PhysicsServer2DExtension::_area_get_collision_layer(const RID &area) const {
	return 0;
}

void PhysicsServer2DExtension::_area_set_collision_mask(const RID &area, uint32_t mask) {}

uint32_t PhysicsServer2DExtension::_area_get_collision_mask(const RID &area) const {
	return 0;
}

void PhysicsServer2DExtension::_area_set_monitorable(const RID &area, bool monitorable) {}

void PhysicsServer2DExtension::_area_set_pickable(const RID &area, bool pickable) {}

void PhysicsServer2DExtension::_area_set_monitor_callback(const RID &area, const Callable &callback) {}

void PhysicsServer2DExtension::_area_set_area_monitor_callback(const RID &area, const Callable &callback) {}

RID PhysicsServer2DExtension::_body_create() {
	return RID();
}

void PhysicsServer2DExtension::_body_set_space(const RID &body, const RID &space) {}

RID PhysicsServer2DExtension::_body_get_space(const RID &body) const {
	return RID();
}

void PhysicsServer2DExtension::_body_set_mode(const RID &body, PhysicsServer2D::BodyMode mode) {}

PhysicsServer2D::BodyMode PhysicsServer2DExtension::_body_get_mode(const RID &body) const {
	return PhysicsServer2D::BodyMode(0);
}

void PhysicsServer2DExtension::_body_add_shape(const RID &body, const RID &shape, const Transform2D &transform, bool disabled) {}

void PhysicsServer2DExtension::_body_set_shape(const RID &body, int32_t shape_idx, const RID &shape) {}

void PhysicsServer2DExtension::_body_set_shape_transform(const RID &body, int32_t shape_idx, const Transform2D &transform) {}

int32_t PhysicsServer2DExtension::_body_get_shape_count(const RID &body) const {
	return 0;
}

RID PhysicsServer2DExtension::_body_get_shape(const RID &body, int32_t shape_idx) const {
	return RID();
}

Transform2D PhysicsServer2DExtension::_body_get_shape_transform(const RID &body, int32_t shape_idx) const {
	return Transform2D();
}

void PhysicsServer2DExtension::_body_set_shape_disabled(const RID &body, int32_t shape_idx, bool disabled) {}

void PhysicsServer2DExtension::_body_set_shape_as_one_way_collision(const RID &body, int32_t shape_idx, bool enable, double margin) {}

void PhysicsServer2DExtension::_body_remove_shape(const RID &body, int32_t shape_idx) {}

void PhysicsServer2DExtension::_body_clear_shapes(const RID &body) {}

void PhysicsServer2DExtension::_body_attach_object_instance_id(const RID &body, uint64_t id) {}

uint64_t PhysicsServer2DExtension::_body_get_object_instance_id(const RID &body) const {
	return 0;
}

void PhysicsServer2DExtension::_body_attach_canvas_instance_id(const RID &body, uint64_t id) {}

uint64_t PhysicsServer2DExtension::_body_get_canvas_instance_id(const RID &body) const {
	return 0;
}

void PhysicsServer2DExtension::_body_set_continuous_collision_detection_mode(const RID &body, PhysicsServer2D::CCDMode mode) {}

PhysicsServer2D::CCDMode PhysicsServer2DExtension::_body_get_continuous_collision_detection_mode(const RID &body) const {
	return PhysicsServer2D::CCDMode(0);
}

void PhysicsServer2DExtension::_body_set_collision_layer(const RID &body, uint32_t layer) {}

uint32_t PhysicsServer2DExtension::_body_get_collision_layer(const RID &body) const {
	return 0;
}

void PhysicsServer2DExtension::_body_set_collision_mask(const RID &body, uint32_t mask) {}

uint32_t PhysicsServer2DExtension::_body_get_collision_mask(const RID &body) const {
	return 0;
}

void PhysicsServer2DExtension::_body_set_collision_priority(const RID &body, double priority) {}

double PhysicsServer2DExtension::_body_get_collision_priority(const RID &body) const {
	return 0.0;
}

void PhysicsServer2DExtension::_body_set_param(const RID &body, PhysicsServer2D::BodyParameter param, const Variant &value) {}

Variant PhysicsServer2DExtension::_body_get_param(const RID &body, PhysicsServer2D::BodyParameter param) const {
	return Variant();
}

void PhysicsServer2DExtension::_body_reset_mass_properties(const RID &body) {}

void PhysicsServer2DExtension::_body_set_state(const RID &body, PhysicsServer2D::BodyState state, const Variant &value) {}

Variant PhysicsServer2DExtension::_body_get_state(const RID &body, PhysicsServer2D::BodyState state) const {
	return Variant();
}

void PhysicsServer2DExtension::_body_apply_central_impulse(const RID &body, const Vector2 &impulse) {}

void PhysicsServer2DExtension::_body_apply_torque_impulse(const RID &body, double impulse) {}

void PhysicsServer2DExtension::_body_apply_impulse(const RID &body, const Vector2 &impulse, const Vector2 &position) {}

void PhysicsServer2DExtension::_body_apply_central_force(const RID &body, const Vector2 &force) {}

void PhysicsServer2DExtension::_body_apply_force(const RID &body, const Vector2 &force, const Vector2 &position) {}

void PhysicsServer2DExtension::_body_apply_torque(const RID &body, double torque) {}

void PhysicsServer2DExtension::_body_add_constant_central_force(const RID &body, const Vector2 &force) {}

void PhysicsServer2DExtension::_body_add_constant_force(const RID &body, const Vector2 &force, const Vector2 &position) {}

void PhysicsServer2DExtension::_body_add_constant_torque(const RID &body, double torque) {}

void PhysicsServer2DExtension::_body_set_constant_force(const RID &body, const Vector2 &force) {}

Vector2 PhysicsServer2DExtension::_body_get_constant_force(const RID &body) const {
	return Vector2();
}

void PhysicsServer2DExtension::_body_set_constant_torque(const RID &body, double torque) {}

double PhysicsServer2DExtension::_body_get_constant_torque(const RID &body) const {
	return 0.0;
}

void PhysicsServer2DExtension::_body_set_axis_velocity(const RID &body, const Vector2 &axis_velocity) {}

void PhysicsServer2DExtension::_body_add_collision_exception(const RID &body, const RID &excepted_body) {}

void PhysicsServer2DExtension::_body_remove_collision_exception(const RID &body, const RID &excepted_body) {}

TypedArray<RID> PhysicsServer2DExtension::_body_get_collision_exceptions(const RID &body) const {
	return TypedArray<RID>();
}

void PhysicsServer2DExtension::_body_set_max_contacts_reported(const RID &body, int32_t amount) {}

int32_t PhysicsServer2DExtension::_body_get_max_contacts_reported(const RID &body) const {
	return 0;
}

void PhysicsServer2DExtension::_body_set_contacts_reported_depth_threshold(const RID &body, double threshold) {}

double PhysicsServer2DExtension::_body_get_contacts_reported_depth_threshold(const RID &body) const {
	return 0.0;
}

void PhysicsServer2DExtension::_body_set_omit_force_integration(const RID &body, bool enable) {}

bool PhysicsServer2DExtension::_body_is_omitting_force_integration(const RID &body) const {
	return false;
}

void PhysicsServer2DExtension::_body_set_state_sync_callback(const RID &body, const Callable &callable) {}

void PhysicsServer2DExtension::_body_set_force_integration_callback(const RID &body, const Callable &callable, const Variant &userdata) {}

bool PhysicsServer2DExtension::_body_collide_shape(const RID &body, int32_t body_shape, const RID &shape, const Transform2D &shape_xform, const Vector2 &motion, void *results, int32_t result_max, int32_t *result_count) {
	return false;
}

void PhysicsServer2DExtension::_body_set_pickable(const RID &body, bool pickable) {}

PhysicsDirectBodyState2D *PhysicsServer2DExtension::_body_get_direct_state(const RID &body) {
	return nullptr;
}

bool PhysicsServer2DExtension::_body_test_motion(const RID &body, const Transform2D &from, const Vector2 &motion, double margin, bool collide_separation_ray, bool recovery_as_collision, PhysicsServer2DExtensionMotionResult *result) const {
	return false;
}

RID PhysicsServer2DExtension::_joint_create() {
	return RID();
}

void PhysicsServer2DExtension::_joint_clear(const RID &joint) {}

void PhysicsServer2DExtension::_joint_set_param(const RID &joint, PhysicsServer2D::JointParam param, double value) {}

double PhysicsServer2DExtension::_joint_get_param(const RID &joint, PhysicsServer2D::JointParam param) const {
	return 0.0;
}

void PhysicsServer2DExtension::_joint_disable_collisions_between_bodies(const RID &joint, bool disable) {}

bool PhysicsServer2DExtension::_joint_is_disabled_collisions_between_bodies(const RID &joint) const {
	return false;
}

void PhysicsServer2DExtension::_joint_make_pin(const RID &joint, const Vector2 &anchor, const RID &body_a, const RID &body_b) {}

void PhysicsServer2DExtension::_joint_make_groove(const RID &joint, const Vector2 &a_groove1, const Vector2 &a_groove2, const Vector2 &b_anchor, const RID &body_a, const RID &body_b) {}

void PhysicsServer2DExtension::_joint_make_damped_spring(const RID &joint, const Vector2 &anchor_a, const Vector2 &anchor_b, const RID &body_a, const RID &body_b) {}

void PhysicsServer2DExtension::_pin_joint_set_flag(const RID &joint, PhysicsServer2D::PinJointFlag flag, bool enabled) {}

bool PhysicsServer2DExtension::_pin_joint_get_flag(const RID &joint, PhysicsServer2D::PinJointFlag flag) const {
	return false;
}

void PhysicsServer2DExtension::_pin_joint_set_param(const RID &joint, PhysicsServer2D::PinJointParam param, double value) {}

double PhysicsServer2DExtension::_pin_joint_get_param(const RID &joint, PhysicsServer2D::PinJointParam param) const {
	return 0.0;
}

void PhysicsServer2DExtension::_damped_spring_joint_set_param(const RID &joint, PhysicsServer2D::DampedSpringParam param, double value) {}

double PhysicsServer2DExtension::_damped_spring_joint_get_param(const RID &joint, PhysicsServer2D::DampedSpringParam param) const {
	return 0.0;
}

PhysicsServer2D::JointType PhysicsServer2DExtension::_joint_get_type(const RID &joint) const {
	return PhysicsServer2D::JointType(0);
}

void PhysicsServer2DExtension::_free_rid(const RID &rid) {}

void PhysicsServer2DExtension::_set_active(bool active) {}

void PhysicsServer2DExtension::_init() {}

void PhysicsServer2DExtension::_step(double step) {}

void PhysicsServer2DExtension::_sync() {}

void PhysicsServer2DExtension::_flush_queries() {}

void PhysicsServer2DExtension::_end_sync() {}

void PhysicsServer2DExtension::_finish() {}

bool PhysicsServer2DExtension::_is_flushing_queries() const {
	return false;
}

int32_t PhysicsServer2DExtension::_get_process_info(PhysicsServer2D::ProcessInfo process_info) {
	return 0;
}


} // namespace godot 