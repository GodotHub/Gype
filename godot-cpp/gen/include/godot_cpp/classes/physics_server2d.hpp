/**************************************************************************/
/*  physics_server2d.hpp                                                  */
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

#ifndef GODOT_CPP_PHYSICS_SERVER2D_HPP
#define GODOT_CPP_PHYSICS_SERVER2D_HPP

#include <godot_cpp/core/object.hpp>
#include <godot_cpp/classes/physics_test_motion_result2d.hpp>
#include <godot_cpp/variant/rid.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/transform2d.hpp>
#include <godot_cpp/variant/variant.hpp>
#include <godot_cpp/variant/vector2.hpp>

#include <godot_cpp/core/class_db.hpp>

#include <type_traits>

#include <godot_cpp/templates/vararg.h>
namespace godot {

class Callable;
class PhysicsDirectBodyState2D;
class PhysicsDirectSpaceState2D;
class PhysicsTestMotionParameters2D;

class PhysicsServer2D : public Object {
	GDEXTENSION_CLASS(PhysicsServer2D, Object)

public:

	enum SpaceParameter {
		SPACE_PARAM_CONTACT_RECYCLE_RADIUS = 0,
		SPACE_PARAM_CONTACT_MAX_SEPARATION = 1,
		SPACE_PARAM_CONTACT_MAX_ALLOWED_PENETRATION = 2,
		SPACE_PARAM_CONTACT_DEFAULT_BIAS = 3,
		SPACE_PARAM_BODY_LINEAR_VELOCITY_SLEEP_THRESHOLD = 4,
		SPACE_PARAM_BODY_ANGULAR_VELOCITY_SLEEP_THRESHOLD = 5,
		SPACE_PARAM_BODY_TIME_TO_SLEEP = 6,
		SPACE_PARAM_CONSTRAINT_DEFAULT_BIAS = 7,
		SPACE_PARAM_SOLVER_ITERATIONS = 8,
	};

	enum ShapeType {
		SHAPE_WORLD_BOUNDARY = 0,
		SHAPE_SEPARATION_RAY = 1,
		SHAPE_SEGMENT = 2,
		SHAPE_CIRCLE = 3,
		SHAPE_RECTANGLE = 4,
		SHAPE_CAPSULE = 5,
		SHAPE_CONVEX_POLYGON = 6,
		SHAPE_CONCAVE_POLYGON = 7,
		SHAPE_CUSTOM = 8,
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

	enum JointType {
		JOINT_TYPE_PIN = 0,
		JOINT_TYPE_GROOVE = 1,
		JOINT_TYPE_DAMPED_SPRING = 2,
		JOINT_TYPE_MAX = 3,
	};

	enum JointParam {
		JOINT_PARAM_BIAS = 0,
		JOINT_PARAM_MAX_BIAS = 1,
		JOINT_PARAM_MAX_FORCE = 2,
	};

	enum PinJointParam {
		PIN_JOINT_SOFTNESS = 0,
		PIN_JOINT_LIMIT_UPPER = 1,
		PIN_JOINT_LIMIT_LOWER = 2,
		PIN_JOINT_MOTOR_TARGET_VELOCITY = 3,
	};

	enum PinJointFlag {
		PIN_JOINT_FLAG_ANGULAR_LIMIT_ENABLED = 0,
		PIN_JOINT_FLAG_MOTOR_ENABLED = 1,
	};

	enum DampedSpringParam {
		DAMPED_SPRING_REST_LENGTH = 0,
		DAMPED_SPRING_STIFFNESS = 1,
		DAMPED_SPRING_DAMPING = 2,
	};

	enum CCDMode {
		CCD_MODE_DISABLED = 0,
		CCD_MODE_CAST_RAY = 1,
		CCD_MODE_CAST_SHAPE = 2,
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

	static PhysicsServer2D *get_singleton();

	RID world_boundary_shape_create();
	RID separation_ray_shape_create();
	RID segment_shape_create();
	RID circle_shape_create();
	RID rectangle_shape_create();
	RID capsule_shape_create();
	RID convex_polygon_shape_create();
	RID concave_polygon_shape_create();
	void shape_set_data(const RID &shape, const Variant &data);
	PhysicsServer2D::ShapeType shape_get_type(const RID &shape) const;
	Variant shape_get_data(const RID &shape) const;
	RID space_create();
	void space_set_active(const RID &space, bool active);
	bool space_is_active(const RID &space) const;
	void space_set_param(const RID &space, PhysicsServer2D::SpaceParameter param, double value);
	double space_get_param(const RID &space, PhysicsServer2D::SpaceParameter param) const;
	PhysicsDirectSpaceState2D *space_get_direct_state(const RID &space);
	RID area_create();
	void area_set_space(const RID &area, const RID &space);
	RID area_get_space(const RID &area) const;
	void area_add_shape(const RID &area, const RID &shape, const Transform2D &transform = Transform2D(), bool disabled = false);
	void area_set_shape(const RID &area, int32_t shape_idx, const RID &shape);
	void area_set_shape_transform(const RID &area, int32_t shape_idx, const Transform2D &transform);
	void area_set_shape_disabled(const RID &area, int32_t shape_idx, bool disabled);
	int32_t area_get_shape_count(const RID &area) const;
	RID area_get_shape(const RID &area, int32_t shape_idx) const;
	Transform2D area_get_shape_transform(const RID &area, int32_t shape_idx) const;
	void area_remove_shape(const RID &area, int32_t shape_idx);
	void area_clear_shapes(const RID &area);
	void area_set_collision_layer(const RID &area, uint32_t layer);
	uint32_t area_get_collision_layer(const RID &area) const;
	void area_set_collision_mask(const RID &area, uint32_t mask);
	uint32_t area_get_collision_mask(const RID &area) const;
	void area_set_param(const RID &area, PhysicsServer2D::AreaParameter param, const Variant &value);
	void area_set_transform(const RID &area, const Transform2D &transform);
	Variant area_get_param(const RID &area, PhysicsServer2D::AreaParameter param) const;
	Transform2D area_get_transform(const RID &area) const;
	void area_attach_object_instance_id(const RID &area, uint64_t id);
	uint64_t area_get_object_instance_id(const RID &area) const;
	void area_attach_canvas_instance_id(const RID &area, uint64_t id);
	uint64_t area_get_canvas_instance_id(const RID &area) const;
	void area_set_monitor_callback(const RID &area, const Callable &callback);
	void area_set_area_monitor_callback(const RID &area, const Callable &callback);
	void area_set_monitorable(const RID &area, bool monitorable);
	RID body_create();
	void body_set_space(const RID &body, const RID &space);
	RID body_get_space(const RID &body) const;
	void body_set_mode(const RID &body, PhysicsServer2D::BodyMode mode);
	PhysicsServer2D::BodyMode body_get_mode(const RID &body) const;
	void body_add_shape(const RID &body, const RID &shape, const Transform2D &transform = Transform2D(), bool disabled = false);
	void body_set_shape(const RID &body, int32_t shape_idx, const RID &shape);
	void body_set_shape_transform(const RID &body, int32_t shape_idx, const Transform2D &transform);
	int32_t body_get_shape_count(const RID &body) const;
	RID body_get_shape(const RID &body, int32_t shape_idx) const;
	Transform2D body_get_shape_transform(const RID &body, int32_t shape_idx) const;
	void body_remove_shape(const RID &body, int32_t shape_idx);
	void body_clear_shapes(const RID &body);
	void body_set_shape_disabled(const RID &body, int32_t shape_idx, bool disabled);
	void body_set_shape_as_one_way_collision(const RID &body, int32_t shape_idx, bool enable, double margin);
	void body_attach_object_instance_id(const RID &body, uint64_t id);
	uint64_t body_get_object_instance_id(const RID &body) const;
	void body_attach_canvas_instance_id(const RID &body, uint64_t id);
	uint64_t body_get_canvas_instance_id(const RID &body) const;
	void body_set_continuous_collision_detection_mode(const RID &body, PhysicsServer2D::CCDMode mode);
	PhysicsServer2D::CCDMode body_get_continuous_collision_detection_mode(const RID &body) const;
	void body_set_collision_layer(const RID &body, uint32_t layer);
	uint32_t body_get_collision_layer(const RID &body) const;
	void body_set_collision_mask(const RID &body, uint32_t mask);
	uint32_t body_get_collision_mask(const RID &body) const;
	void body_set_collision_priority(const RID &body, double priority);
	double body_get_collision_priority(const RID &body) const;
	void body_set_param(const RID &body, PhysicsServer2D::BodyParameter param, const Variant &value);
	Variant body_get_param(const RID &body, PhysicsServer2D::BodyParameter param) const;
	void body_reset_mass_properties(const RID &body);
	void body_set_state(const RID &body, PhysicsServer2D::BodyState state, const Variant &value);
	Variant body_get_state(const RID &body, PhysicsServer2D::BodyState state) const;
	void body_apply_central_impulse(const RID &body, const Vector2 &impulse);
	void body_apply_torque_impulse(const RID &body, double impulse);
	void body_apply_impulse(const RID &body, const Vector2 &impulse, const Vector2 &position = Vector2(0, 0));
	void body_apply_central_force(const RID &body, const Vector2 &force);
	void body_apply_force(const RID &body, const Vector2 &force, const Vector2 &position = Vector2(0, 0));
	void body_apply_torque(const RID &body, double torque);
	void body_add_constant_central_force(const RID &body, const Vector2 &force);
	void body_add_constant_force(const RID &body, const Vector2 &force, const Vector2 &position = Vector2(0, 0));
	void body_add_constant_torque(const RID &body, double torque);
	void body_set_constant_force(const RID &body, const Vector2 &force);
	Vector2 body_get_constant_force(const RID &body) const;
	void body_set_constant_torque(const RID &body, double torque);
	double body_get_constant_torque(const RID &body) const;
	void body_set_axis_velocity(const RID &body, const Vector2 &axis_velocity);
	void body_add_collision_exception(const RID &body, const RID &excepted_body);
	void body_remove_collision_exception(const RID &body, const RID &excepted_body);
	void body_set_max_contacts_reported(const RID &body, int32_t amount);
	int32_t body_get_max_contacts_reported(const RID &body) const;
	void body_set_omit_force_integration(const RID &body, bool enable);
	bool body_is_omitting_force_integration(const RID &body) const;
	void body_set_force_integration_callback(const RID &body, const Callable &callable, const Variant &userdata = nullptr);
	bool body_test_motion(const RID &body, const Ref<PhysicsTestMotionParameters2D> &parameters, const Ref<PhysicsTestMotionResult2D> &result = nullptr);
	PhysicsDirectBodyState2D *body_get_direct_state(const RID &body);
	RID joint_create();
	void joint_clear(const RID &joint);
	void joint_set_param(const RID &joint, PhysicsServer2D::JointParam param, double value);
	double joint_get_param(const RID &joint, PhysicsServer2D::JointParam param) const;
	void joint_disable_collisions_between_bodies(const RID &joint, bool disable);
	bool joint_is_disabled_collisions_between_bodies(const RID &joint) const;
	void joint_make_pin(const RID &joint, const Vector2 &anchor, const RID &body_a, const RID &body_b = RID());
	void joint_make_groove(const RID &joint, const Vector2 &groove1_a, const Vector2 &groove2_a, const Vector2 &anchor_b, const RID &body_a = RID(), const RID &body_b = RID());
	void joint_make_damped_spring(const RID &joint, const Vector2 &anchor_a, const Vector2 &anchor_b, const RID &body_a, const RID &body_b = RID());
	void pin_joint_set_flag(const RID &joint, PhysicsServer2D::PinJointFlag flag, bool enabled);
	bool pin_joint_get_flag(const RID &joint, PhysicsServer2D::PinJointFlag flag) const;
	void pin_joint_set_param(const RID &joint, PhysicsServer2D::PinJointParam param, double value);
	double pin_joint_get_param(const RID &joint, PhysicsServer2D::PinJointParam param) const;
	void damped_spring_joint_set_param(const RID &joint, PhysicsServer2D::DampedSpringParam param, double value);
	double damped_spring_joint_get_param(const RID &joint, PhysicsServer2D::DampedSpringParam param) const;
	PhysicsServer2D::JointType joint_get_type(const RID &joint) const;
	void free_rid(const RID &rid);
	void set_active(bool active);
	int32_t get_process_info(PhysicsServer2D::ProcessInfo process_info);
protected:
	template <typename T, typename B>
	static void register_virtuals() {
		Object::register_virtuals<T, B>();
	}

public:

};

} // namespace godot

VARIANT_ENUM_CAST(PhysicsServer2D::SpaceParameter);
VARIANT_ENUM_CAST(PhysicsServer2D::ShapeType);
VARIANT_ENUM_CAST(PhysicsServer2D::AreaParameter);
VARIANT_ENUM_CAST(PhysicsServer2D::AreaSpaceOverrideMode);
VARIANT_ENUM_CAST(PhysicsServer2D::BodyMode);
VARIANT_ENUM_CAST(PhysicsServer2D::BodyParameter);
VARIANT_ENUM_CAST(PhysicsServer2D::BodyDampMode);
VARIANT_ENUM_CAST(PhysicsServer2D::BodyState);
VARIANT_ENUM_CAST(PhysicsServer2D::JointType);
VARIANT_ENUM_CAST(PhysicsServer2D::JointParam);
VARIANT_ENUM_CAST(PhysicsServer2D::PinJointParam);
VARIANT_ENUM_CAST(PhysicsServer2D::PinJointFlag);
VARIANT_ENUM_CAST(PhysicsServer2D::DampedSpringParam);
VARIANT_ENUM_CAST(PhysicsServer2D::CCDMode);
VARIANT_ENUM_CAST(PhysicsServer2D::AreaBodyStatus);
VARIANT_ENUM_CAST(PhysicsServer2D::ProcessInfo);

#endif // ! GODOT_CPP_PHYSICS_SERVER2D_HPP