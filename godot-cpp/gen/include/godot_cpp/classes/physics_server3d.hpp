/**************************************************************************/
/*  physics_server3d.hpp                                                  */
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

#ifndef GODOT_CPP_PHYSICS_SERVER3D_HPP
#define GODOT_CPP_PHYSICS_SERVER3D_HPP

#include <godot_cpp/classes/physics_test_motion_result3d.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/core/object.hpp>
#include <godot_cpp/variant/aabb.hpp>
#include <godot_cpp/variant/rid.hpp>
#include <godot_cpp/variant/transform3d.hpp>
#include <godot_cpp/variant/variant.hpp>
#include <godot_cpp/variant/vector3.hpp>


#include <godot_cpp/core/class_db.hpp>

#include <type_traits>

#include <godot_cpp/templates/vararg.hpp>
namespace godot {

class Callable;
class PhysicsDirectBodyState3D;
class PhysicsDirectSpaceState3D;
class PhysicsTestMotionParameters3D;

class PhysicsServer3D : public Object {
	GDEXTENSION_CLASS(PhysicsServer3D, Object)

public:
	enum JointType {
		JOINT_TYPE_PIN = 0,
		JOINT_TYPE_HINGE = 1,
		JOINT_TYPE_SLIDER = 2,
		JOINT_TYPE_CONE_TWIST = 3,
		JOINT_TYPE_6DOF = 4,
		JOINT_TYPE_MAX = 5,
	};

	enum PinJointParam {
		PIN_JOINT_BIAS = 0,
		PIN_JOINT_DAMPING = 1,
		PIN_JOINT_IMPULSE_CLAMP = 2,
	};

	enum HingeJointParam {
		HINGE_JOINT_BIAS = 0,
		HINGE_JOINT_LIMIT_UPPER = 1,
		HINGE_JOINT_LIMIT_LOWER = 2,
		HINGE_JOINT_LIMIT_BIAS = 3,
		HINGE_JOINT_LIMIT_SOFTNESS = 4,
		HINGE_JOINT_LIMIT_RELAXATION = 5,
		HINGE_JOINT_MOTOR_TARGET_VELOCITY = 6,
		HINGE_JOINT_MOTOR_MAX_IMPULSE = 7,
	};

	enum HingeJointFlag {
		HINGE_JOINT_FLAG_USE_LIMIT = 0,
		HINGE_JOINT_FLAG_ENABLE_MOTOR = 1,
	};

	enum SliderJointParam {
		SLIDER_JOINT_LINEAR_LIMIT_UPPER = 0,
		SLIDER_JOINT_LINEAR_LIMIT_LOWER = 1,
		SLIDER_JOINT_LINEAR_LIMIT_SOFTNESS = 2,
		SLIDER_JOINT_LINEAR_LIMIT_RESTITUTION = 3,
		SLIDER_JOINT_LINEAR_LIMIT_DAMPING = 4,
		SLIDER_JOINT_LINEAR_MOTION_SOFTNESS = 5,
		SLIDER_JOINT_LINEAR_MOTION_RESTITUTION = 6,
		SLIDER_JOINT_LINEAR_MOTION_DAMPING = 7,
		SLIDER_JOINT_LINEAR_ORTHOGONAL_SOFTNESS = 8,
		SLIDER_JOINT_LINEAR_ORTHOGONAL_RESTITUTION = 9,
		SLIDER_JOINT_LINEAR_ORTHOGONAL_DAMPING = 10,
		SLIDER_JOINT_ANGULAR_LIMIT_UPPER = 11,
		SLIDER_JOINT_ANGULAR_LIMIT_LOWER = 12,
		SLIDER_JOINT_ANGULAR_LIMIT_SOFTNESS = 13,
		SLIDER_JOINT_ANGULAR_LIMIT_RESTITUTION = 14,
		SLIDER_JOINT_ANGULAR_LIMIT_DAMPING = 15,
		SLIDER_JOINT_ANGULAR_MOTION_SOFTNESS = 16,
		SLIDER_JOINT_ANGULAR_MOTION_RESTITUTION = 17,
		SLIDER_JOINT_ANGULAR_MOTION_DAMPING = 18,
		SLIDER_JOINT_ANGULAR_ORTHOGONAL_SOFTNESS = 19,
		SLIDER_JOINT_ANGULAR_ORTHOGONAL_RESTITUTION = 20,
		SLIDER_JOINT_ANGULAR_ORTHOGONAL_DAMPING = 21,
		SLIDER_JOINT_MAX = 22,
	};

	enum ConeTwistJointParam {
		CONE_TWIST_JOINT_SWING_SPAN = 0,
		CONE_TWIST_JOINT_TWIST_SPAN = 1,
		CONE_TWIST_JOINT_BIAS = 2,
		CONE_TWIST_JOINT_SOFTNESS = 3,
		CONE_TWIST_JOINT_RELAXATION = 4,
	};

	enum G6DOFJointAxisParam {
		G6DOF_JOINT_LINEAR_LOWER_LIMIT = 0,
		G6DOF_JOINT_LINEAR_UPPER_LIMIT = 1,
		G6DOF_JOINT_LINEAR_LIMIT_SOFTNESS = 2,
		G6DOF_JOINT_LINEAR_RESTITUTION = 3,
		G6DOF_JOINT_LINEAR_DAMPING = 4,
		G6DOF_JOINT_LINEAR_MOTOR_TARGET_VELOCITY = 5,
		G6DOF_JOINT_LINEAR_MOTOR_FORCE_LIMIT = 6,
		G6DOF_JOINT_ANGULAR_LOWER_LIMIT = 10,
		G6DOF_JOINT_ANGULAR_UPPER_LIMIT = 11,
		G6DOF_JOINT_ANGULAR_LIMIT_SOFTNESS = 12,
		G6DOF_JOINT_ANGULAR_DAMPING = 13,
		G6DOF_JOINT_ANGULAR_RESTITUTION = 14,
		G6DOF_JOINT_ANGULAR_FORCE_LIMIT = 15,
		G6DOF_JOINT_ANGULAR_ERP = 16,
		G6DOF_JOINT_ANGULAR_MOTOR_TARGET_VELOCITY = 17,
		G6DOF_JOINT_ANGULAR_MOTOR_FORCE_LIMIT = 18,
	};

	enum G6DOFJointAxisFlag {
		G6DOF_JOINT_FLAG_ENABLE_LINEAR_LIMIT = 0,
		G6DOF_JOINT_FLAG_ENABLE_ANGULAR_LIMIT = 1,
		G6DOF_JOINT_FLAG_ENABLE_MOTOR = 4,
		G6DOF_JOINT_FLAG_ENABLE_LINEAR_MOTOR = 5,
	};

	enum ShapeType {
		SHAPE_WORLD_BOUNDARY = 0,
		SHAPE_SEPARATION_RAY = 1,
		SHAPE_SPHERE = 2,
		SHAPE_BOX = 3,
		SHAPE_CAPSULE = 4,
		SHAPE_CYLINDER = 5,
		SHAPE_CONVEX_POLYGON = 6,
		SHAPE_CONCAVE_POLYGON = 7,
		SHAPE_HEIGHTMAP = 8,
		SHAPE_SOFT_BODY = 9,
		SHAPE_CUSTOM = 10,
	};

	enum AreaParameter {
		AREA_PARAM_GRAVITY_OVERRIDE_MODE = 0,
		AREA_PARAM_GRAVITY = 1,
		AREA_PARAM_GRAVITY_VECTOR = 2,
		AREA_PARAM_GRAVITY_IS_POINT = 3,
		AREA_PARAM_GRAVITY_POINT_UNIT_DISTANCE = 4,
		AREA_PARAM_LINEAR_DAMP_OVERRIDE_MODE = 5,
		AREA_PARAM_LINEAR_DAMP = 6,
		AREA_PARAM_ANGULAR_DAMP_OVERRIDE_MODE = 7,
		AREA_PARAM_ANGULAR_DAMP = 8,
		AREA_PARAM_PRIORITY = 9,
		AREA_PARAM_WIND_FORCE_MAGNITUDE = 10,
		AREA_PARAM_WIND_SOURCE = 11,
		AREA_PARAM_WIND_DIRECTION = 12,
		AREA_PARAM_WIND_ATTENUATION_FACTOR = 13,
	};

	enum AreaSpaceOverrideMode {
		AREA_SPACE_OVERRIDE_DISABLED = 0,
		AREA_SPACE_OVERRIDE_COMBINE = 1,
		AREA_SPACE_OVERRIDE_COMBINE_REPLACE = 2,
		AREA_SPACE_OVERRIDE_REPLACE = 3,
		AREA_SPACE_OVERRIDE_REPLACE_COMBINE = 4,
	};

	enum BodyMode {
		BODY_MODE_STATIC = 0,
		BODY_MODE_KINEMATIC = 1,
		BODY_MODE_RIGID = 2,
		BODY_MODE_RIGID_LINEAR = 3,
	};

	enum BodyParameter {
		BODY_PARAM_BOUNCE = 0,
		BODY_PARAM_FRICTION = 1,
		BODY_PARAM_MASS = 2,
		BODY_PARAM_INERTIA = 3,
		BODY_PARAM_CENTER_OF_MASS = 4,
		BODY_PARAM_GRAVITY_SCALE = 5,
		BODY_PARAM_LINEAR_DAMP_MODE = 6,
		BODY_PARAM_ANGULAR_DAMP_MODE = 7,
		BODY_PARAM_LINEAR_DAMP = 8,
		BODY_PARAM_ANGULAR_DAMP = 9,
		BODY_PARAM_MAX = 10,
	};

	enum BodyDampMode {
		BODY_DAMP_MODE_COMBINE = 0,
		BODY_DAMP_MODE_REPLACE = 1,
	};

	enum BodyState {
		BODY_STATE_TRANSFORM = 0,
		BODY_STATE_LINEAR_VELOCITY = 1,
		BODY_STATE_ANGULAR_VELOCITY = 2,
		BODY_STATE_SLEEPING = 3,
		BODY_STATE_CAN_SLEEP = 4,
	};

	enum AreaBodyStatus {
		AREA_BODY_ADDED = 0,
		AREA_BODY_REMOVED = 1,
	};

	enum ProcessInfo {
		INFO_ACTIVE_OBJECTS = 0,
		INFO_COLLISION_PAIRS = 1,
		INFO_ISLAND_COUNT = 2,
	};

	enum SpaceParameter {
		SPACE_PARAM_CONTACT_RECYCLE_RADIUS = 0,
		SPACE_PARAM_CONTACT_MAX_SEPARATION = 1,
		SPACE_PARAM_CONTACT_MAX_ALLOWED_PENETRATION = 2,
		SPACE_PARAM_CONTACT_DEFAULT_BIAS = 3,
		SPACE_PARAM_BODY_LINEAR_VELOCITY_SLEEP_THRESHOLD = 4,
		SPACE_PARAM_BODY_ANGULAR_VELOCITY_SLEEP_THRESHOLD = 5,
		SPACE_PARAM_BODY_TIME_TO_SLEEP = 6,
		SPACE_PARAM_SOLVER_ITERATIONS = 7,
	};

	enum BodyAxis {
		BODY_AXIS_LINEAR_X = 1,
		BODY_AXIS_LINEAR_Y = 2,
		BODY_AXIS_LINEAR_Z = 4,
		BODY_AXIS_ANGULAR_X = 8,
		BODY_AXIS_ANGULAR_Y = 16,
		BODY_AXIS_ANGULAR_Z = 32,
	};

	static PhysicsServer3D *get_singleton();

	RID world_boundary_shape_create();
	RID separation_ray_shape_create();
	RID sphere_shape_create();
	RID box_shape_create();
	RID capsule_shape_create();
	RID cylinder_shape_create();
	RID convex_polygon_shape_create();
	RID concave_polygon_shape_create();
	RID heightmap_shape_create();
	RID custom_shape_create();
	void shape_set_data(const RID &shape, const Variant &data);
	PhysicsServer3D::ShapeType shape_get_type(const RID &shape) const;
	Variant shape_get_data(const RID &shape) const;
	RID space_create();
	void space_set_active(const RID &space, bool active);
	bool space_is_active(const RID &space) const;
	void space_set_param(const RID &space, PhysicsServer3D::SpaceParameter param, double value);
	double space_get_param(const RID &space, PhysicsServer3D::SpaceParameter param) const;
	PhysicsDirectSpaceState3D *space_get_direct_state(const RID &space);
	RID area_create();
	void area_set_space(const RID &area, const RID &space);
	RID area_get_space(const RID &area) const;
	void area_add_shape(const RID &area, const RID &shape, const Transform3D &transform = Transform3D(), bool disabled = false);
	void area_set_shape(const RID &area, int32_t shape_idx, const RID &shape);
	void area_set_shape_transform(const RID &area, int32_t shape_idx, const Transform3D &transform);
	void area_set_shape_disabled(const RID &area, int32_t shape_idx, bool disabled);
	int32_t area_get_shape_count(const RID &area) const;
	RID area_get_shape(const RID &area, int32_t shape_idx) const;
	Transform3D area_get_shape_transform(const RID &area, int32_t shape_idx) const;
	void area_remove_shape(const RID &area, int32_t shape_idx);
	void area_clear_shapes(const RID &area);
	void area_set_collision_layer(const RID &area, uint32_t layer);
	uint32_t area_get_collision_layer(const RID &area) const;
	void area_set_collision_mask(const RID &area, uint32_t mask);
	uint32_t area_get_collision_mask(const RID &area) const;
	void area_set_param(const RID &area, PhysicsServer3D::AreaParameter param, const Variant &value);
	void area_set_transform(const RID &area, const Transform3D &transform);
	Variant area_get_param(const RID &area, PhysicsServer3D::AreaParameter param) const;
	Transform3D area_get_transform(const RID &area) const;
	void area_attach_object_instance_id(const RID &area, uint64_t id);
	uint64_t area_get_object_instance_id(const RID &area) const;
	void area_set_monitor_callback(const RID &area, const Callable &callback);
	void area_set_area_monitor_callback(const RID &area, const Callable &callback);
	void area_set_monitorable(const RID &area, bool monitorable);
	void area_set_ray_pickable(const RID &area, bool enable);
	RID body_create();
	void body_set_space(const RID &body, const RID &space);
	RID body_get_space(const RID &body) const;
	void body_set_mode(const RID &body, PhysicsServer3D::BodyMode mode);
	PhysicsServer3D::BodyMode body_get_mode(const RID &body) const;
	void body_set_collision_layer(const RID &body, uint32_t layer);
	uint32_t body_get_collision_layer(const RID &body) const;
	void body_set_collision_mask(const RID &body, uint32_t mask);
	uint32_t body_get_collision_mask(const RID &body) const;
	void body_set_collision_priority(const RID &body, double priority);
	double body_get_collision_priority(const RID &body) const;
	void body_add_shape(const RID &body, const RID &shape, const Transform3D &transform = Transform3D(), bool disabled = false);
	void body_set_shape(const RID &body, int32_t shape_idx, const RID &shape);
	void body_set_shape_transform(const RID &body, int32_t shape_idx, const Transform3D &transform);
	void body_set_shape_disabled(const RID &body, int32_t shape_idx, bool disabled);
	int32_t body_get_shape_count(const RID &body) const;
	RID body_get_shape(const RID &body, int32_t shape_idx) const;
	Transform3D body_get_shape_transform(const RID &body, int32_t shape_idx) const;
	void body_remove_shape(const RID &body, int32_t shape_idx);
	void body_clear_shapes(const RID &body);
	void body_attach_object_instance_id(const RID &body, uint64_t id);
	uint64_t body_get_object_instance_id(const RID &body) const;
	void body_set_enable_continuous_collision_detection(const RID &body, bool enable);
	bool body_is_continuous_collision_detection_enabled(const RID &body) const;
	void body_set_param(const RID &body, PhysicsServer3D::BodyParameter param, const Variant &value);
	Variant body_get_param(const RID &body, PhysicsServer3D::BodyParameter param) const;
	void body_reset_mass_properties(const RID &body);
	void body_set_state(const RID &body, PhysicsServer3D::BodyState state, const Variant &value);
	Variant body_get_state(const RID &body, PhysicsServer3D::BodyState state) const;
	void body_apply_central_impulse(const RID &body, const Vector3 &impulse);
	void body_apply_impulse(const RID &body, const Vector3 &impulse, const Vector3 &position = Vector3(0, 0, 0));
	void body_apply_torque_impulse(const RID &body, const Vector3 &impulse);
	void body_apply_central_force(const RID &body, const Vector3 &force);
	void body_apply_force(const RID &body, const Vector3 &force, const Vector3 &position = Vector3(0, 0, 0));
	void body_apply_torque(const RID &body, const Vector3 &torque);
	void body_add_constant_central_force(const RID &body, const Vector3 &force);
	void body_add_constant_force(const RID &body, const Vector3 &force, const Vector3 &position = Vector3(0, 0, 0));
	void body_add_constant_torque(const RID &body, const Vector3 &torque);
	void body_set_constant_force(const RID &body, const Vector3 &force);
	Vector3 body_get_constant_force(const RID &body) const;
	void body_set_constant_torque(const RID &body, const Vector3 &torque);
	Vector3 body_get_constant_torque(const RID &body) const;
	void body_set_axis_velocity(const RID &body, const Vector3 &axis_velocity);
	void body_set_axis_lock(const RID &body, PhysicsServer3D::BodyAxis axis, bool lock);
	bool body_is_axis_locked(const RID &body, PhysicsServer3D::BodyAxis axis) const;
	void body_add_collision_exception(const RID &body, const RID &excepted_body);
	void body_remove_collision_exception(const RID &body, const RID &excepted_body);
	void body_set_max_contacts_reported(const RID &body, int32_t amount);
	int32_t body_get_max_contacts_reported(const RID &body) const;
	void body_set_omit_force_integration(const RID &body, bool enable);
	bool body_is_omitting_force_integration(const RID &body) const;
	void body_set_force_integration_callback(const RID &body, const Callable &callable, const Variant &userdata = nullptr);
	void body_set_ray_pickable(const RID &body, bool enable);
	bool body_test_motion(const RID &body, const Ref<PhysicsTestMotionParameters3D> &parameters, const Ref<PhysicsTestMotionResult3D> &result = nullptr);
	PhysicsDirectBodyState3D *body_get_direct_state(const RID &body);
	AABB soft_body_get_bounds(const RID &body) const;
	RID joint_create();
	void joint_clear(const RID &joint);
	void joint_make_pin(const RID &joint, const RID &body_A, const Vector3 &local_A, const RID &body_B, const Vector3 &local_B);
	void pin_joint_set_param(const RID &joint, PhysicsServer3D::PinJointParam param, double value);
	double pin_joint_get_param(const RID &joint, PhysicsServer3D::PinJointParam param) const;
	void pin_joint_set_local_a(const RID &joint, const Vector3 &local_A);
	Vector3 pin_joint_get_local_a(const RID &joint) const;
	void pin_joint_set_local_b(const RID &joint, const Vector3 &local_B);
	Vector3 pin_joint_get_local_b(const RID &joint) const;
	void joint_make_hinge(const RID &joint, const RID &body_A, const Transform3D &hinge_A, const RID &body_B, const Transform3D &hinge_B);
	void hinge_joint_set_param(const RID &joint, PhysicsServer3D::HingeJointParam param, double value);
	double hinge_joint_get_param(const RID &joint, PhysicsServer3D::HingeJointParam param) const;
	void hinge_joint_set_flag(const RID &joint, PhysicsServer3D::HingeJointFlag flag, bool enabled);
	bool hinge_joint_get_flag(const RID &joint, PhysicsServer3D::HingeJointFlag flag) const;
	void joint_make_slider(const RID &joint, const RID &body_A, const Transform3D &local_ref_A, const RID &body_B, const Transform3D &local_ref_B);
	void slider_joint_set_param(const RID &joint, PhysicsServer3D::SliderJointParam param, double value);
	double slider_joint_get_param(const RID &joint, PhysicsServer3D::SliderJointParam param) const;
	void joint_make_cone_twist(const RID &joint, const RID &body_A, const Transform3D &local_ref_A, const RID &body_B, const Transform3D &local_ref_B);
	void cone_twist_joint_set_param(const RID &joint, PhysicsServer3D::ConeTwistJointParam param, double value);
	double cone_twist_joint_get_param(const RID &joint, PhysicsServer3D::ConeTwistJointParam param) const;
	PhysicsServer3D::JointType joint_get_type(const RID &joint) const;
	void joint_set_solver_priority(const RID &joint, int32_t priority);
	int32_t joint_get_solver_priority(const RID &joint) const;
	void joint_disable_collisions_between_bodies(const RID &joint, bool disable);
	bool joint_is_disabled_collisions_between_bodies(const RID &joint) const;
	void joint_make_generic_6dof(const RID &joint, const RID &body_A, const Transform3D &local_ref_A, const RID &body_B, const Transform3D &local_ref_B);
	void generic_6dof_joint_set_param(const RID &joint, Vector3::Axis axis, PhysicsServer3D::G6DOFJointAxisParam param, double value);
	double generic_6dof_joint_get_param(const RID &joint, Vector3::Axis axis, PhysicsServer3D::G6DOFJointAxisParam param) const;
	void generic_6dof_joint_set_flag(const RID &joint, Vector3::Axis axis, PhysicsServer3D::G6DOFJointAxisFlag flag, bool enable);
	bool generic_6dof_joint_get_flag(const RID &joint, Vector3::Axis axis, PhysicsServer3D::G6DOFJointAxisFlag flag) const;
	void free_rid(const RID &rid);
	void set_active(bool active);
	int32_t get_process_info(PhysicsServer3D::ProcessInfo process_info);

protected:
	template <typename T, typename B>
	static void register_virtuals() {
		Object::register_virtuals<T, B>();
	}

public:
};

} // namespace godot

VARIANT_ENUM_CAST(PhysicsServer3D::JointType);
VARIANT_ENUM_CAST(PhysicsServer3D::PinJointParam);
VARIANT_ENUM_CAST(PhysicsServer3D::HingeJointParam);
VARIANT_ENUM_CAST(PhysicsServer3D::HingeJointFlag);
VARIANT_ENUM_CAST(PhysicsServer3D::SliderJointParam);
VARIANT_ENUM_CAST(PhysicsServer3D::ConeTwistJointParam);
VARIANT_ENUM_CAST(PhysicsServer3D::G6DOFJointAxisParam);
VARIANT_ENUM_CAST(PhysicsServer3D::G6DOFJointAxisFlag);
VARIANT_ENUM_CAST(PhysicsServer3D::ShapeType);
VARIANT_ENUM_CAST(PhysicsServer3D::AreaParameter);
VARIANT_ENUM_CAST(PhysicsServer3D::AreaSpaceOverrideMode);
VARIANT_ENUM_CAST(PhysicsServer3D::BodyMode);
VARIANT_ENUM_CAST(PhysicsServer3D::BodyParameter);
VARIANT_ENUM_CAST(PhysicsServer3D::BodyDampMode);
VARIANT_ENUM_CAST(PhysicsServer3D::BodyState);
VARIANT_ENUM_CAST(PhysicsServer3D::AreaBodyStatus);
VARIANT_ENUM_CAST(PhysicsServer3D::ProcessInfo);
VARIANT_ENUM_CAST(PhysicsServer3D::SpaceParameter);
VARIANT_ENUM_CAST(PhysicsServer3D::BodyAxis);

#endif // ! GODOT_CPP_PHYSICS_SERVER3D_HPP