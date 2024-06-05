/**************************************************************************/
/*  physics_server3d_extension.hpp                                        */
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

#ifndef GODOT_CPP_PHYSICS_SERVER3D_EXTENSION_HPP
#define GODOT_CPP_PHYSICS_SERVER3D_EXTENSION_HPP

#include <godot_cpp/variant/aabb.hpp>
#include <godot_cpp/variant/packed_vector3_array.hpp>
#include <godot_cpp/classes/physics_server3d.hpp>
#include <godot_cpp/classes/physics_server3d_extension_motion_result.hpp>
#include <godot_cpp/variant/rid.hpp>
#include <godot_cpp/variant/transform3d.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <godot_cpp/variant/variant.hpp>
#include <godot_cpp/variant/vector3.hpp>

#include <godot_cpp/core/class_db.hpp>

#include <type_traits>

#include <godot_cpp/templates/vararg.hpp>
namespace godot {

class Callable;
class PhysicsDirectBodyState3D;
class PhysicsDirectSpaceState3D;
class PhysicsServer3DRenderingServerHandler;

class PhysicsServer3DExtension : public PhysicsServer3D {
	GDEXTENSION_CLASS(PhysicsServer3DExtension, PhysicsServer3D)

public:

	bool body_test_motion_is_excluding_body(const RID &body) const;
	bool body_test_motion_is_excluding_object(uint64_t object) const;
	virtual RID _world_boundary_shape_create();
	virtual RID _separation_ray_shape_create();
	virtual RID _sphere_shape_create();
	virtual RID _box_shape_create();
	virtual RID _capsule_shape_create();
	virtual RID _cylinder_shape_create();
	virtual RID _convex_polygon_shape_create();
	virtual RID _concave_polygon_shape_create();
	virtual RID _heightmap_shape_create();
	virtual RID _custom_shape_create();
	virtual void _shape_set_data(const RID &shape, const Variant &data);
	virtual void _shape_set_custom_solver_bias(const RID &shape, double bias);
	virtual void _shape_set_margin(const RID &shape, double margin);
	virtual double _shape_get_margin(const RID &shape) const;
	virtual PhysicsServer3D::ShapeType _shape_get_type(const RID &shape) const;
	virtual Variant _shape_get_data(const RID &shape) const;
	virtual double _shape_get_custom_solver_bias(const RID &shape) const;
	virtual RID _space_create();
	virtual void _space_set_active(const RID &space, bool active);
	virtual bool _space_is_active(const RID &space) const;
	virtual void _space_set_param(const RID &space, PhysicsServer3D::SpaceParameter param, double value);
	virtual double _space_get_param(const RID &space, PhysicsServer3D::SpaceParameter param) const;
	virtual PhysicsDirectSpaceState3D *_space_get_direct_state(const RID &space);
	virtual void _space_set_debug_contacts(const RID &space, int32_t max_contacts);
	virtual PackedVector3Array _space_get_contacts(const RID &space) const;
	virtual int32_t _space_get_contact_count(const RID &space) const;
	virtual RID _area_create();
	virtual void _area_set_space(const RID &area, const RID &space);
	virtual RID _area_get_space(const RID &area) const;
	virtual void _area_add_shape(const RID &area, const RID &shape, const Transform3D &transform, bool disabled);
	virtual void _area_set_shape(const RID &area, int32_t shape_idx, const RID &shape);
	virtual void _area_set_shape_transform(const RID &area, int32_t shape_idx, const Transform3D &transform);
	virtual void _area_set_shape_disabled(const RID &area, int32_t shape_idx, bool disabled);
	virtual int32_t _area_get_shape_count(const RID &area) const;
	virtual RID _area_get_shape(const RID &area, int32_t shape_idx) const;
	virtual Transform3D _area_get_shape_transform(const RID &area, int32_t shape_idx) const;
	virtual void _area_remove_shape(const RID &area, int32_t shape_idx);
	virtual void _area_clear_shapes(const RID &area);
	virtual void _area_attach_object_instance_id(const RID &area, uint64_t id);
	virtual uint64_t _area_get_object_instance_id(const RID &area) const;
	virtual void _area_set_param(const RID &area, PhysicsServer3D::AreaParameter param, const Variant &value);
	virtual void _area_set_transform(const RID &area, const Transform3D &transform);
	virtual Variant _area_get_param(const RID &area, PhysicsServer3D::AreaParameter param) const;
	virtual Transform3D _area_get_transform(const RID &area) const;
	virtual void _area_set_collision_layer(const RID &area, uint32_t layer);
	virtual uint32_t _area_get_collision_layer(const RID &area) const;
	virtual void _area_set_collision_mask(const RID &area, uint32_t mask);
	virtual uint32_t _area_get_collision_mask(const RID &area) const;
	virtual void _area_set_monitorable(const RID &area, bool monitorable);
	virtual void _area_set_ray_pickable(const RID &area, bool enable);
	virtual void _area_set_monitor_callback(const RID &area, const Callable &callback);
	virtual void _area_set_area_monitor_callback(const RID &area, const Callable &callback);
	virtual RID _body_create();
	virtual void _body_set_space(const RID &body, const RID &space);
	virtual RID _body_get_space(const RID &body) const;
	virtual void _body_set_mode(const RID &body, PhysicsServer3D::BodyMode mode);
	virtual PhysicsServer3D::BodyMode _body_get_mode(const RID &body) const;
	virtual void _body_add_shape(const RID &body, const RID &shape, const Transform3D &transform, bool disabled);
	virtual void _body_set_shape(const RID &body, int32_t shape_idx, const RID &shape);
	virtual void _body_set_shape_transform(const RID &body, int32_t shape_idx, const Transform3D &transform);
	virtual void _body_set_shape_disabled(const RID &body, int32_t shape_idx, bool disabled);
	virtual int32_t _body_get_shape_count(const RID &body) const;
	virtual RID _body_get_shape(const RID &body, int32_t shape_idx) const;
	virtual Transform3D _body_get_shape_transform(const RID &body, int32_t shape_idx) const;
	virtual void _body_remove_shape(const RID &body, int32_t shape_idx);
	virtual void _body_clear_shapes(const RID &body);
	virtual void _body_attach_object_instance_id(const RID &body, uint64_t id);
	virtual uint64_t _body_get_object_instance_id(const RID &body) const;
	virtual void _body_set_enable_continuous_collision_detection(const RID &body, bool enable);
	virtual bool _body_is_continuous_collision_detection_enabled(const RID &body) const;
	virtual void _body_set_collision_layer(const RID &body, uint32_t layer);
	virtual uint32_t _body_get_collision_layer(const RID &body) const;
	virtual void _body_set_collision_mask(const RID &body, uint32_t mask);
	virtual uint32_t _body_get_collision_mask(const RID &body) const;
	virtual void _body_set_collision_priority(const RID &body, double priority);
	virtual double _body_get_collision_priority(const RID &body) const;
	virtual void _body_set_user_flags(const RID &body, uint32_t flags);
	virtual uint32_t _body_get_user_flags(const RID &body) const;
	virtual void _body_set_param(const RID &body, PhysicsServer3D::BodyParameter param, const Variant &value);
	virtual Variant _body_get_param(const RID &body, PhysicsServer3D::BodyParameter param) const;
	virtual void _body_reset_mass_properties(const RID &body);
	virtual void _body_set_state(const RID &body, PhysicsServer3D::BodyState state, const Variant &value);
	virtual Variant _body_get_state(const RID &body, PhysicsServer3D::BodyState state) const;
	virtual void _body_apply_central_impulse(const RID &body, const Vector3 &impulse);
	virtual void _body_apply_impulse(const RID &body, const Vector3 &impulse, const Vector3 &position);
	virtual void _body_apply_torque_impulse(const RID &body, const Vector3 &impulse);
	virtual void _body_apply_central_force(const RID &body, const Vector3 &force);
	virtual void _body_apply_force(const RID &body, const Vector3 &force, const Vector3 &position);
	virtual void _body_apply_torque(const RID &body, const Vector3 &torque);
	virtual void _body_add_constant_central_force(const RID &body, const Vector3 &force);
	virtual void _body_add_constant_force(const RID &body, const Vector3 &force, const Vector3 &position);
	virtual void _body_add_constant_torque(const RID &body, const Vector3 &torque);
	virtual void _body_set_constant_force(const RID &body, const Vector3 &force);
	virtual Vector3 _body_get_constant_force(const RID &body) const;
	virtual void _body_set_constant_torque(const RID &body, const Vector3 &torque);
	virtual Vector3 _body_get_constant_torque(const RID &body) const;
	virtual void _body_set_axis_velocity(const RID &body, const Vector3 &axis_velocity);
	virtual void _body_set_axis_lock(const RID &body, PhysicsServer3D::BodyAxis axis, bool lock);
	virtual bool _body_is_axis_locked(const RID &body, PhysicsServer3D::BodyAxis axis) const;
	virtual void _body_add_collision_exception(const RID &body, const RID &excepted_body);
	virtual void _body_remove_collision_exception(const RID &body, const RID &excepted_body);
	virtual TypedArray<RID> _body_get_collision_exceptions(const RID &body) const;
	virtual void _body_set_max_contacts_reported(const RID &body, int32_t amount);
	virtual int32_t _body_get_max_contacts_reported(const RID &body) const;
	virtual void _body_set_contacts_reported_depth_threshold(const RID &body, double threshold);
	virtual double _body_get_contacts_reported_depth_threshold(const RID &body) const;
	virtual void _body_set_omit_force_integration(const RID &body, bool enable);
	virtual bool _body_is_omitting_force_integration(const RID &body) const;
	virtual void _body_set_state_sync_callback(const RID &body, const Callable &callable);
	virtual void _body_set_force_integration_callback(const RID &body, const Callable &callable, const Variant &userdata);
	virtual void _body_set_ray_pickable(const RID &body, bool enable);
	virtual bool _body_test_motion(const RID &body, const Transform3D &from, const Vector3 &motion, double margin, int32_t max_collisions, bool collide_separation_ray, bool recovery_as_collision, PhysicsServer3DExtensionMotionResult *result) const;
	virtual PhysicsDirectBodyState3D *_body_get_direct_state(const RID &body);
	virtual RID _soft_body_create();
	virtual void _soft_body_update_rendering_server(const RID &body, PhysicsServer3DRenderingServerHandler *rendering_server_handler);
	virtual void _soft_body_set_space(const RID &body, const RID &space);
	virtual RID _soft_body_get_space(const RID &body) const;
	virtual void _soft_body_set_ray_pickable(const RID &body, bool enable);
	virtual void _soft_body_set_collision_layer(const RID &body, uint32_t layer);
	virtual uint32_t _soft_body_get_collision_layer(const RID &body) const;
	virtual void _soft_body_set_collision_mask(const RID &body, uint32_t mask);
	virtual uint32_t _soft_body_get_collision_mask(const RID &body) const;
	virtual void _soft_body_add_collision_exception(const RID &body, const RID &body_b);
	virtual void _soft_body_remove_collision_exception(const RID &body, const RID &body_b);
	virtual TypedArray<RID> _soft_body_get_collision_exceptions(const RID &body) const;
	virtual void _soft_body_set_state(const RID &body, PhysicsServer3D::BodyState state, const Variant &variant);
	virtual Variant _soft_body_get_state(const RID &body, PhysicsServer3D::BodyState state) const;
	virtual void _soft_body_set_transform(const RID &body, const Transform3D &transform);
	virtual void _soft_body_set_simulation_precision(const RID &body, int32_t simulation_precision);
	virtual int32_t _soft_body_get_simulation_precision(const RID &body) const;
	virtual void _soft_body_set_total_mass(const RID &body, double total_mass);
	virtual double _soft_body_get_total_mass(const RID &body) const;
	virtual void _soft_body_set_linear_stiffness(const RID &body, double linear_stiffness);
	virtual double _soft_body_get_linear_stiffness(const RID &body) const;
	virtual void _soft_body_set_pressure_coefficient(const RID &body, double pressure_coefficient);
	virtual double _soft_body_get_pressure_coefficient(const RID &body) const;
	virtual void _soft_body_set_damping_coefficient(const RID &body, double damping_coefficient);
	virtual double _soft_body_get_damping_coefficient(const RID &body) const;
	virtual void _soft_body_set_drag_coefficient(const RID &body, double drag_coefficient);
	virtual double _soft_body_get_drag_coefficient(const RID &body) const;
	virtual void _soft_body_set_mesh(const RID &body, const RID &mesh);
	virtual AABB _soft_body_get_bounds(const RID &body) const;
	virtual void _soft_body_move_point(const RID &body, int32_t point_index, const Vector3 &global_position);
	virtual Vector3 _soft_body_get_point_global_position(const RID &body, int32_t point_index) const;
	virtual void _soft_body_remove_all_pinned_points(const RID &body);
	virtual void _soft_body_pin_point(const RID &body, int32_t point_index, bool pin);
	virtual bool _soft_body_is_point_pinned(const RID &body, int32_t point_index) const;
	virtual RID _joint_create();
	virtual void _joint_clear(const RID &joint);
	virtual void _joint_make_pin(const RID &joint, const RID &body_A, const Vector3 &local_A, const RID &body_B, const Vector3 &local_B);
	virtual void _pin_joint_set_param(const RID &joint, PhysicsServer3D::PinJointParam param, double value);
	virtual double _pin_joint_get_param(const RID &joint, PhysicsServer3D::PinJointParam param) const;
	virtual void _pin_joint_set_local_a(const RID &joint, const Vector3 &local_A);
	virtual Vector3 _pin_joint_get_local_a(const RID &joint) const;
	virtual void _pin_joint_set_local_b(const RID &joint, const Vector3 &local_B);
	virtual Vector3 _pin_joint_get_local_b(const RID &joint) const;
	virtual void _joint_make_hinge(const RID &joint, const RID &body_A, const Transform3D &hinge_A, const RID &body_B, const Transform3D &hinge_B);
	virtual void _joint_make_hinge_simple(const RID &joint, const RID &body_A, const Vector3 &pivot_A, const Vector3 &axis_A, const RID &body_B, const Vector3 &pivot_B, const Vector3 &axis_B);
	virtual void _hinge_joint_set_param(const RID &joint, PhysicsServer3D::HingeJointParam param, double value);
	virtual double _hinge_joint_get_param(const RID &joint, PhysicsServer3D::HingeJointParam param) const;
	virtual void _hinge_joint_set_flag(const RID &joint, PhysicsServer3D::HingeJointFlag flag, bool enabled);
	virtual bool _hinge_joint_get_flag(const RID &joint, PhysicsServer3D::HingeJointFlag flag) const;
	virtual void _joint_make_slider(const RID &joint, const RID &body_A, const Transform3D &local_ref_A, const RID &body_B, const Transform3D &local_ref_B);
	virtual void _slider_joint_set_param(const RID &joint, PhysicsServer3D::SliderJointParam param, double value);
	virtual double _slider_joint_get_param(const RID &joint, PhysicsServer3D::SliderJointParam param) const;
	virtual void _joint_make_cone_twist(const RID &joint, const RID &body_A, const Transform3D &local_ref_A, const RID &body_B, const Transform3D &local_ref_B);
	virtual void _cone_twist_joint_set_param(const RID &joint, PhysicsServer3D::ConeTwistJointParam param, double value);
	virtual double _cone_twist_joint_get_param(const RID &joint, PhysicsServer3D::ConeTwistJointParam param) const;
	virtual void _joint_make_generic_6dof(const RID &joint, const RID &body_A, const Transform3D &local_ref_A, const RID &body_B, const Transform3D &local_ref_B);
	virtual void _generic_6dof_joint_set_param(const RID &joint, Vector3::Axis axis, PhysicsServer3D::G6DOFJointAxisParam param, double value);
	virtual double _generic_6dof_joint_get_param(const RID &joint, Vector3::Axis axis, PhysicsServer3D::G6DOFJointAxisParam param) const;
	virtual void _generic_6dof_joint_set_flag(const RID &joint, Vector3::Axis axis, PhysicsServer3D::G6DOFJointAxisFlag flag, bool enable);
	virtual bool _generic_6dof_joint_get_flag(const RID &joint, Vector3::Axis axis, PhysicsServer3D::G6DOFJointAxisFlag flag) const;
	virtual PhysicsServer3D::JointType _joint_get_type(const RID &joint) const;
	virtual void _joint_set_solver_priority(const RID &joint, int32_t priority);
	virtual int32_t _joint_get_solver_priority(const RID &joint) const;
	virtual void _joint_disable_collisions_between_bodies(const RID &joint, bool disable);
	virtual bool _joint_is_disabled_collisions_between_bodies(const RID &joint) const;
	virtual void _free_rid(const RID &rid);
	virtual void _set_active(bool active);
	virtual void _init();
	virtual void _step(double step);
	virtual void _sync();
	virtual void _flush_queries();
	virtual void _end_sync();
	virtual void _finish();
	virtual bool _is_flushing_queries() const;
	virtual int32_t _get_process_info(PhysicsServer3D::ProcessInfo process_info);
protected:
	template <typename T, typename B>
	static void register_virtuals() {
		PhysicsServer3D::register_virtuals<T, B>();
		if constexpr (!std::is_same_v<decltype(&B::_world_boundary_shape_create),decltype(&T::_world_boundary_shape_create)>) {
			BIND_VIRTUAL_METHOD(T, _world_boundary_shape_create);
		}
		if constexpr (!std::is_same_v<decltype(&B::_separation_ray_shape_create),decltype(&T::_separation_ray_shape_create)>) {
			BIND_VIRTUAL_METHOD(T, _separation_ray_shape_create);
		}
		if constexpr (!std::is_same_v<decltype(&B::_sphere_shape_create),decltype(&T::_sphere_shape_create)>) {
			BIND_VIRTUAL_METHOD(T, _sphere_shape_create);
		}
		if constexpr (!std::is_same_v<decltype(&B::_box_shape_create),decltype(&T::_box_shape_create)>) {
			BIND_VIRTUAL_METHOD(T, _box_shape_create);
		}
		if constexpr (!std::is_same_v<decltype(&B::_capsule_shape_create),decltype(&T::_capsule_shape_create)>) {
			BIND_VIRTUAL_METHOD(T, _capsule_shape_create);
		}
		if constexpr (!std::is_same_v<decltype(&B::_cylinder_shape_create),decltype(&T::_cylinder_shape_create)>) {
			BIND_VIRTUAL_METHOD(T, _cylinder_shape_create);
		}
		if constexpr (!std::is_same_v<decltype(&B::_convex_polygon_shape_create),decltype(&T::_convex_polygon_shape_create)>) {
			BIND_VIRTUAL_METHOD(T, _convex_polygon_shape_create);
		}
		if constexpr (!std::is_same_v<decltype(&B::_concave_polygon_shape_create),decltype(&T::_concave_polygon_shape_create)>) {
			BIND_VIRTUAL_METHOD(T, _concave_polygon_shape_create);
		}
		if constexpr (!std::is_same_v<decltype(&B::_heightmap_shape_create),decltype(&T::_heightmap_shape_create)>) {
			BIND_VIRTUAL_METHOD(T, _heightmap_shape_create);
		}
		if constexpr (!std::is_same_v<decltype(&B::_custom_shape_create),decltype(&T::_custom_shape_create)>) {
			BIND_VIRTUAL_METHOD(T, _custom_shape_create);
		}
		if constexpr (!std::is_same_v<decltype(&B::_shape_set_data),decltype(&T::_shape_set_data)>) {
			BIND_VIRTUAL_METHOD(T, _shape_set_data);
		}
		if constexpr (!std::is_same_v<decltype(&B::_shape_set_custom_solver_bias),decltype(&T::_shape_set_custom_solver_bias)>) {
			BIND_VIRTUAL_METHOD(T, _shape_set_custom_solver_bias);
		}
		if constexpr (!std::is_same_v<decltype(&B::_shape_set_margin),decltype(&T::_shape_set_margin)>) {
			BIND_VIRTUAL_METHOD(T, _shape_set_margin);
		}
		if constexpr (!std::is_same_v<decltype(&B::_shape_get_margin),decltype(&T::_shape_get_margin)>) {
			BIND_VIRTUAL_METHOD(T, _shape_get_margin);
		}
		if constexpr (!std::is_same_v<decltype(&B::_shape_get_type),decltype(&T::_shape_get_type)>) {
			BIND_VIRTUAL_METHOD(T, _shape_get_type);
		}
		if constexpr (!std::is_same_v<decltype(&B::_shape_get_data),decltype(&T::_shape_get_data)>) {
			BIND_VIRTUAL_METHOD(T, _shape_get_data);
		}
		if constexpr (!std::is_same_v<decltype(&B::_shape_get_custom_solver_bias),decltype(&T::_shape_get_custom_solver_bias)>) {
			BIND_VIRTUAL_METHOD(T, _shape_get_custom_solver_bias);
		}
		if constexpr (!std::is_same_v<decltype(&B::_space_create),decltype(&T::_space_create)>) {
			BIND_VIRTUAL_METHOD(T, _space_create);
		}
		if constexpr (!std::is_same_v<decltype(&B::_space_set_active),decltype(&T::_space_set_active)>) {
			BIND_VIRTUAL_METHOD(T, _space_set_active);
		}
		if constexpr (!std::is_same_v<decltype(&B::_space_is_active),decltype(&T::_space_is_active)>) {
			BIND_VIRTUAL_METHOD(T, _space_is_active);
		}
		if constexpr (!std::is_same_v<decltype(&B::_space_set_param),decltype(&T::_space_set_param)>) {
			BIND_VIRTUAL_METHOD(T, _space_set_param);
		}
		if constexpr (!std::is_same_v<decltype(&B::_space_get_param),decltype(&T::_space_get_param)>) {
			BIND_VIRTUAL_METHOD(T, _space_get_param);
		}
		if constexpr (!std::is_same_v<decltype(&B::_space_get_direct_state),decltype(&T::_space_get_direct_state)>) {
			BIND_VIRTUAL_METHOD(T, _space_get_direct_state);
		}
		if constexpr (!std::is_same_v<decltype(&B::_space_set_debug_contacts),decltype(&T::_space_set_debug_contacts)>) {
			BIND_VIRTUAL_METHOD(T, _space_set_debug_contacts);
		}
		if constexpr (!std::is_same_v<decltype(&B::_space_get_contacts),decltype(&T::_space_get_contacts)>) {
			BIND_VIRTUAL_METHOD(T, _space_get_contacts);
		}
		if constexpr (!std::is_same_v<decltype(&B::_space_get_contact_count),decltype(&T::_space_get_contact_count)>) {
			BIND_VIRTUAL_METHOD(T, _space_get_contact_count);
		}
		if constexpr (!std::is_same_v<decltype(&B::_area_create),decltype(&T::_area_create)>) {
			BIND_VIRTUAL_METHOD(T, _area_create);
		}
		if constexpr (!std::is_same_v<decltype(&B::_area_set_space),decltype(&T::_area_set_space)>) {
			BIND_VIRTUAL_METHOD(T, _area_set_space);
		}
		if constexpr (!std::is_same_v<decltype(&B::_area_get_space),decltype(&T::_area_get_space)>) {
			BIND_VIRTUAL_METHOD(T, _area_get_space);
		}
		if constexpr (!std::is_same_v<decltype(&B::_area_add_shape),decltype(&T::_area_add_shape)>) {
			BIND_VIRTUAL_METHOD(T, _area_add_shape);
		}
		if constexpr (!std::is_same_v<decltype(&B::_area_set_shape),decltype(&T::_area_set_shape)>) {
			BIND_VIRTUAL_METHOD(T, _area_set_shape);
		}
		if constexpr (!std::is_same_v<decltype(&B::_area_set_shape_transform),decltype(&T::_area_set_shape_transform)>) {
			BIND_VIRTUAL_METHOD(T, _area_set_shape_transform);
		}
		if constexpr (!std::is_same_v<decltype(&B::_area_set_shape_disabled),decltype(&T::_area_set_shape_disabled)>) {
			BIND_VIRTUAL_METHOD(T, _area_set_shape_disabled);
		}
		if constexpr (!std::is_same_v<decltype(&B::_area_get_shape_count),decltype(&T::_area_get_shape_count)>) {
			BIND_VIRTUAL_METHOD(T, _area_get_shape_count);
		}
		if constexpr (!std::is_same_v<decltype(&B::_area_get_shape),decltype(&T::_area_get_shape)>) {
			BIND_VIRTUAL_METHOD(T, _area_get_shape);
		}
		if constexpr (!std::is_same_v<decltype(&B::_area_get_shape_transform),decltype(&T::_area_get_shape_transform)>) {
			BIND_VIRTUAL_METHOD(T, _area_get_shape_transform);
		}
		if constexpr (!std::is_same_v<decltype(&B::_area_remove_shape),decltype(&T::_area_remove_shape)>) {
			BIND_VIRTUAL_METHOD(T, _area_remove_shape);
		}
		if constexpr (!std::is_same_v<decltype(&B::_area_clear_shapes),decltype(&T::_area_clear_shapes)>) {
			BIND_VIRTUAL_METHOD(T, _area_clear_shapes);
		}
		if constexpr (!std::is_same_v<decltype(&B::_area_attach_object_instance_id),decltype(&T::_area_attach_object_instance_id)>) {
			BIND_VIRTUAL_METHOD(T, _area_attach_object_instance_id);
		}
		if constexpr (!std::is_same_v<decltype(&B::_area_get_object_instance_id),decltype(&T::_area_get_object_instance_id)>) {
			BIND_VIRTUAL_METHOD(T, _area_get_object_instance_id);
		}
		if constexpr (!std::is_same_v<decltype(&B::_area_set_param),decltype(&T::_area_set_param)>) {
			BIND_VIRTUAL_METHOD(T, _area_set_param);
		}
		if constexpr (!std::is_same_v<decltype(&B::_area_set_transform),decltype(&T::_area_set_transform)>) {
			BIND_VIRTUAL_METHOD(T, _area_set_transform);
		}
		if constexpr (!std::is_same_v<decltype(&B::_area_get_param),decltype(&T::_area_get_param)>) {
			BIND_VIRTUAL_METHOD(T, _area_get_param);
		}
		if constexpr (!std::is_same_v<decltype(&B::_area_get_transform),decltype(&T::_area_get_transform)>) {
			BIND_VIRTUAL_METHOD(T, _area_get_transform);
		}
		if constexpr (!std::is_same_v<decltype(&B::_area_set_collision_layer),decltype(&T::_area_set_collision_layer)>) {
			BIND_VIRTUAL_METHOD(T, _area_set_collision_layer);
		}
		if constexpr (!std::is_same_v<decltype(&B::_area_get_collision_layer),decltype(&T::_area_get_collision_layer)>) {
			BIND_VIRTUAL_METHOD(T, _area_get_collision_layer);
		}
		if constexpr (!std::is_same_v<decltype(&B::_area_set_collision_mask),decltype(&T::_area_set_collision_mask)>) {
			BIND_VIRTUAL_METHOD(T, _area_set_collision_mask);
		}
		if constexpr (!std::is_same_v<decltype(&B::_area_get_collision_mask),decltype(&T::_area_get_collision_mask)>) {
			BIND_VIRTUAL_METHOD(T, _area_get_collision_mask);
		}
		if constexpr (!std::is_same_v<decltype(&B::_area_set_monitorable),decltype(&T::_area_set_monitorable)>) {
			BIND_VIRTUAL_METHOD(T, _area_set_monitorable);
		}
		if constexpr (!std::is_same_v<decltype(&B::_area_set_ray_pickable),decltype(&T::_area_set_ray_pickable)>) {
			BIND_VIRTUAL_METHOD(T, _area_set_ray_pickable);
		}
		if constexpr (!std::is_same_v<decltype(&B::_area_set_monitor_callback),decltype(&T::_area_set_monitor_callback)>) {
			BIND_VIRTUAL_METHOD(T, _area_set_monitor_callback);
		}
		if constexpr (!std::is_same_v<decltype(&B::_area_set_area_monitor_callback),decltype(&T::_area_set_area_monitor_callback)>) {
			BIND_VIRTUAL_METHOD(T, _area_set_area_monitor_callback);
		}
		if constexpr (!std::is_same_v<decltype(&B::_body_create),decltype(&T::_body_create)>) {
			BIND_VIRTUAL_METHOD(T, _body_create);
		}
		if constexpr (!std::is_same_v<decltype(&B::_body_set_space),decltype(&T::_body_set_space)>) {
			BIND_VIRTUAL_METHOD(T, _body_set_space);
		}
		if constexpr (!std::is_same_v<decltype(&B::_body_get_space),decltype(&T::_body_get_space)>) {
			BIND_VIRTUAL_METHOD(T, _body_get_space);
		}
		if constexpr (!std::is_same_v<decltype(&B::_body_set_mode),decltype(&T::_body_set_mode)>) {
			BIND_VIRTUAL_METHOD(T, _body_set_mode);
		}
		if constexpr (!std::is_same_v<decltype(&B::_body_get_mode),decltype(&T::_body_get_mode)>) {
			BIND_VIRTUAL_METHOD(T, _body_get_mode);
		}
		if constexpr (!std::is_same_v<decltype(&B::_body_add_shape),decltype(&T::_body_add_shape)>) {
			BIND_VIRTUAL_METHOD(T, _body_add_shape);
		}
		if constexpr (!std::is_same_v<decltype(&B::_body_set_shape),decltype(&T::_body_set_shape)>) {
			BIND_VIRTUAL_METHOD(T, _body_set_shape);
		}
		if constexpr (!std::is_same_v<decltype(&B::_body_set_shape_transform),decltype(&T::_body_set_shape_transform)>) {
			BIND_VIRTUAL_METHOD(T, _body_set_shape_transform);
		}
		if constexpr (!std::is_same_v<decltype(&B::_body_set_shape_disabled),decltype(&T::_body_set_shape_disabled)>) {
			BIND_VIRTUAL_METHOD(T, _body_set_shape_disabled);
		}
		if constexpr (!std::is_same_v<decltype(&B::_body_get_shape_count),decltype(&T::_body_get_shape_count)>) {
			BIND_VIRTUAL_METHOD(T, _body_get_shape_count);
		}
		if constexpr (!std::is_same_v<decltype(&B::_body_get_shape),decltype(&T::_body_get_shape)>) {
			BIND_VIRTUAL_METHOD(T, _body_get_shape);
		}
		if constexpr (!std::is_same_v<decltype(&B::_body_get_shape_transform),decltype(&T::_body_get_shape_transform)>) {
			BIND_VIRTUAL_METHOD(T, _body_get_shape_transform);
		}
		if constexpr (!std::is_same_v<decltype(&B::_body_remove_shape),decltype(&T::_body_remove_shape)>) {
			BIND_VIRTUAL_METHOD(T, _body_remove_shape);
		}
		if constexpr (!std::is_same_v<decltype(&B::_body_clear_shapes),decltype(&T::_body_clear_shapes)>) {
			BIND_VIRTUAL_METHOD(T, _body_clear_shapes);
		}
		if constexpr (!std::is_same_v<decltype(&B::_body_attach_object_instance_id),decltype(&T::_body_attach_object_instance_id)>) {
			BIND_VIRTUAL_METHOD(T, _body_attach_object_instance_id);
		}
		if constexpr (!std::is_same_v<decltype(&B::_body_get_object_instance_id),decltype(&T::_body_get_object_instance_id)>) {
			BIND_VIRTUAL_METHOD(T, _body_get_object_instance_id);
		}
		if constexpr (!std::is_same_v<decltype(&B::_body_set_enable_continuous_collision_detection),decltype(&T::_body_set_enable_continuous_collision_detection)>) {
			BIND_VIRTUAL_METHOD(T, _body_set_enable_continuous_collision_detection);
		}
		if constexpr (!std::is_same_v<decltype(&B::_body_is_continuous_collision_detection_enabled),decltype(&T::_body_is_continuous_collision_detection_enabled)>) {
			BIND_VIRTUAL_METHOD(T, _body_is_continuous_collision_detection_enabled);
		}
		if constexpr (!std::is_same_v<decltype(&B::_body_set_collision_layer),decltype(&T::_body_set_collision_layer)>) {
			BIND_VIRTUAL_METHOD(T, _body_set_collision_layer);
		}
		if constexpr (!std::is_same_v<decltype(&B::_body_get_collision_layer),decltype(&T::_body_get_collision_layer)>) {
			BIND_VIRTUAL_METHOD(T, _body_get_collision_layer);
		}
		if constexpr (!std::is_same_v<decltype(&B::_body_set_collision_mask),decltype(&T::_body_set_collision_mask)>) {
			BIND_VIRTUAL_METHOD(T, _body_set_collision_mask);
		}
		if constexpr (!std::is_same_v<decltype(&B::_body_get_collision_mask),decltype(&T::_body_get_collision_mask)>) {
			BIND_VIRTUAL_METHOD(T, _body_get_collision_mask);
		}
		if constexpr (!std::is_same_v<decltype(&B::_body_set_collision_priority),decltype(&T::_body_set_collision_priority)>) {
			BIND_VIRTUAL_METHOD(T, _body_set_collision_priority);
		}
		if constexpr (!std::is_same_v<decltype(&B::_body_get_collision_priority),decltype(&T::_body_get_collision_priority)>) {
			BIND_VIRTUAL_METHOD(T, _body_get_collision_priority);
		}
		if constexpr (!std::is_same_v<decltype(&B::_body_set_user_flags),decltype(&T::_body_set_user_flags)>) {
			BIND_VIRTUAL_METHOD(T, _body_set_user_flags);
		}
		if constexpr (!std::is_same_v<decltype(&B::_body_get_user_flags),decltype(&T::_body_get_user_flags)>) {
			BIND_VIRTUAL_METHOD(T, _body_get_user_flags);
		}
		if constexpr (!std::is_same_v<decltype(&B::_body_set_param),decltype(&T::_body_set_param)>) {
			BIND_VIRTUAL_METHOD(T, _body_set_param);
		}
		if constexpr (!std::is_same_v<decltype(&B::_body_get_param),decltype(&T::_body_get_param)>) {
			BIND_VIRTUAL_METHOD(T, _body_get_param);
		}
		if constexpr (!std::is_same_v<decltype(&B::_body_reset_mass_properties),decltype(&T::_body_reset_mass_properties)>) {
			BIND_VIRTUAL_METHOD(T, _body_reset_mass_properties);
		}
		if constexpr (!std::is_same_v<decltype(&B::_body_set_state),decltype(&T::_body_set_state)>) {
			BIND_VIRTUAL_METHOD(T, _body_set_state);
		}
		if constexpr (!std::is_same_v<decltype(&B::_body_get_state),decltype(&T::_body_get_state)>) {
			BIND_VIRTUAL_METHOD(T, _body_get_state);
		}
		if constexpr (!std::is_same_v<decltype(&B::_body_apply_central_impulse),decltype(&T::_body_apply_central_impulse)>) {
			BIND_VIRTUAL_METHOD(T, _body_apply_central_impulse);
		}
		if constexpr (!std::is_same_v<decltype(&B::_body_apply_impulse),decltype(&T::_body_apply_impulse)>) {
			BIND_VIRTUAL_METHOD(T, _body_apply_impulse);
		}
		if constexpr (!std::is_same_v<decltype(&B::_body_apply_torque_impulse),decltype(&T::_body_apply_torque_impulse)>) {
			BIND_VIRTUAL_METHOD(T, _body_apply_torque_impulse);
		}
		if constexpr (!std::is_same_v<decltype(&B::_body_apply_central_force),decltype(&T::_body_apply_central_force)>) {
			BIND_VIRTUAL_METHOD(T, _body_apply_central_force);
		}
		if constexpr (!std::is_same_v<decltype(&B::_body_apply_force),decltype(&T::_body_apply_force)>) {
			BIND_VIRTUAL_METHOD(T, _body_apply_force);
		}
		if constexpr (!std::is_same_v<decltype(&B::_body_apply_torque),decltype(&T::_body_apply_torque)>) {
			BIND_VIRTUAL_METHOD(T, _body_apply_torque);
		}
		if constexpr (!std::is_same_v<decltype(&B::_body_add_constant_central_force),decltype(&T::_body_add_constant_central_force)>) {
			BIND_VIRTUAL_METHOD(T, _body_add_constant_central_force);
		}
		if constexpr (!std::is_same_v<decltype(&B::_body_add_constant_force),decltype(&T::_body_add_constant_force)>) {
			BIND_VIRTUAL_METHOD(T, _body_add_constant_force);
		}
		if constexpr (!std::is_same_v<decltype(&B::_body_add_constant_torque),decltype(&T::_body_add_constant_torque)>) {
			BIND_VIRTUAL_METHOD(T, _body_add_constant_torque);
		}
		if constexpr (!std::is_same_v<decltype(&B::_body_set_constant_force),decltype(&T::_body_set_constant_force)>) {
			BIND_VIRTUAL_METHOD(T, _body_set_constant_force);
		}
		if constexpr (!std::is_same_v<decltype(&B::_body_get_constant_force),decltype(&T::_body_get_constant_force)>) {
			BIND_VIRTUAL_METHOD(T, _body_get_constant_force);
		}
		if constexpr (!std::is_same_v<decltype(&B::_body_set_constant_torque),decltype(&T::_body_set_constant_torque)>) {
			BIND_VIRTUAL_METHOD(T, _body_set_constant_torque);
		}
		if constexpr (!std::is_same_v<decltype(&B::_body_get_constant_torque),decltype(&T::_body_get_constant_torque)>) {
			BIND_VIRTUAL_METHOD(T, _body_get_constant_torque);
		}
		if constexpr (!std::is_same_v<decltype(&B::_body_set_axis_velocity),decltype(&T::_body_set_axis_velocity)>) {
			BIND_VIRTUAL_METHOD(T, _body_set_axis_velocity);
		}
		if constexpr (!std::is_same_v<decltype(&B::_body_set_axis_lock),decltype(&T::_body_set_axis_lock)>) {
			BIND_VIRTUAL_METHOD(T, _body_set_axis_lock);
		}
		if constexpr (!std::is_same_v<decltype(&B::_body_is_axis_locked),decltype(&T::_body_is_axis_locked)>) {
			BIND_VIRTUAL_METHOD(T, _body_is_axis_locked);
		}
		if constexpr (!std::is_same_v<decltype(&B::_body_add_collision_exception),decltype(&T::_body_add_collision_exception)>) {
			BIND_VIRTUAL_METHOD(T, _body_add_collision_exception);
		}
		if constexpr (!std::is_same_v<decltype(&B::_body_remove_collision_exception),decltype(&T::_body_remove_collision_exception)>) {
			BIND_VIRTUAL_METHOD(T, _body_remove_collision_exception);
		}
		if constexpr (!std::is_same_v<decltype(&B::_body_get_collision_exceptions),decltype(&T::_body_get_collision_exceptions)>) {
			BIND_VIRTUAL_METHOD(T, _body_get_collision_exceptions);
		}
		if constexpr (!std::is_same_v<decltype(&B::_body_set_max_contacts_reported),decltype(&T::_body_set_max_contacts_reported)>) {
			BIND_VIRTUAL_METHOD(T, _body_set_max_contacts_reported);
		}
		if constexpr (!std::is_same_v<decltype(&B::_body_get_max_contacts_reported),decltype(&T::_body_get_max_contacts_reported)>) {
			BIND_VIRTUAL_METHOD(T, _body_get_max_contacts_reported);
		}
		if constexpr (!std::is_same_v<decltype(&B::_body_set_contacts_reported_depth_threshold),decltype(&T::_body_set_contacts_reported_depth_threshold)>) {
			BIND_VIRTUAL_METHOD(T, _body_set_contacts_reported_depth_threshold);
		}
		if constexpr (!std::is_same_v<decltype(&B::_body_get_contacts_reported_depth_threshold),decltype(&T::_body_get_contacts_reported_depth_threshold)>) {
			BIND_VIRTUAL_METHOD(T, _body_get_contacts_reported_depth_threshold);
		}
		if constexpr (!std::is_same_v<decltype(&B::_body_set_omit_force_integration),decltype(&T::_body_set_omit_force_integration)>) {
			BIND_VIRTUAL_METHOD(T, _body_set_omit_force_integration);
		}
		if constexpr (!std::is_same_v<decltype(&B::_body_is_omitting_force_integration),decltype(&T::_body_is_omitting_force_integration)>) {
			BIND_VIRTUAL_METHOD(T, _body_is_omitting_force_integration);
		}
		if constexpr (!std::is_same_v<decltype(&B::_body_set_state_sync_callback),decltype(&T::_body_set_state_sync_callback)>) {
			BIND_VIRTUAL_METHOD(T, _body_set_state_sync_callback);
		}
		if constexpr (!std::is_same_v<decltype(&B::_body_set_force_integration_callback),decltype(&T::_body_set_force_integration_callback)>) {
			BIND_VIRTUAL_METHOD(T, _body_set_force_integration_callback);
		}
		if constexpr (!std::is_same_v<decltype(&B::_body_set_ray_pickable),decltype(&T::_body_set_ray_pickable)>) {
			BIND_VIRTUAL_METHOD(T, _body_set_ray_pickable);
		}
		if constexpr (!std::is_same_v<decltype(&B::_body_test_motion),decltype(&T::_body_test_motion)>) {
			BIND_VIRTUAL_METHOD(T, _body_test_motion);
		}
		if constexpr (!std::is_same_v<decltype(&B::_body_get_direct_state),decltype(&T::_body_get_direct_state)>) {
			BIND_VIRTUAL_METHOD(T, _body_get_direct_state);
		}
		if constexpr (!std::is_same_v<decltype(&B::_soft_body_create),decltype(&T::_soft_body_create)>) {
			BIND_VIRTUAL_METHOD(T, _soft_body_create);
		}
		if constexpr (!std::is_same_v<decltype(&B::_soft_body_update_rendering_server),decltype(&T::_soft_body_update_rendering_server)>) {
			BIND_VIRTUAL_METHOD(T, _soft_body_update_rendering_server);
		}
		if constexpr (!std::is_same_v<decltype(&B::_soft_body_set_space),decltype(&T::_soft_body_set_space)>) {
			BIND_VIRTUAL_METHOD(T, _soft_body_set_space);
		}
		if constexpr (!std::is_same_v<decltype(&B::_soft_body_get_space),decltype(&T::_soft_body_get_space)>) {
			BIND_VIRTUAL_METHOD(T, _soft_body_get_space);
		}
		if constexpr (!std::is_same_v<decltype(&B::_soft_body_set_ray_pickable),decltype(&T::_soft_body_set_ray_pickable)>) {
			BIND_VIRTUAL_METHOD(T, _soft_body_set_ray_pickable);
		}
		if constexpr (!std::is_same_v<decltype(&B::_soft_body_set_collision_layer),decltype(&T::_soft_body_set_collision_layer)>) {
			BIND_VIRTUAL_METHOD(T, _soft_body_set_collision_layer);
		}
		if constexpr (!std::is_same_v<decltype(&B::_soft_body_get_collision_layer),decltype(&T::_soft_body_get_collision_layer)>) {
			BIND_VIRTUAL_METHOD(T, _soft_body_get_collision_layer);
		}
		if constexpr (!std::is_same_v<decltype(&B::_soft_body_set_collision_mask),decltype(&T::_soft_body_set_collision_mask)>) {
			BIND_VIRTUAL_METHOD(T, _soft_body_set_collision_mask);
		}
		if constexpr (!std::is_same_v<decltype(&B::_soft_body_get_collision_mask),decltype(&T::_soft_body_get_collision_mask)>) {
			BIND_VIRTUAL_METHOD(T, _soft_body_get_collision_mask);
		}
		if constexpr (!std::is_same_v<decltype(&B::_soft_body_add_collision_exception),decltype(&T::_soft_body_add_collision_exception)>) {
			BIND_VIRTUAL_METHOD(T, _soft_body_add_collision_exception);
		}
		if constexpr (!std::is_same_v<decltype(&B::_soft_body_remove_collision_exception),decltype(&T::_soft_body_remove_collision_exception)>) {
			BIND_VIRTUAL_METHOD(T, _soft_body_remove_collision_exception);
		}
		if constexpr (!std::is_same_v<decltype(&B::_soft_body_get_collision_exceptions),decltype(&T::_soft_body_get_collision_exceptions)>) {
			BIND_VIRTUAL_METHOD(T, _soft_body_get_collision_exceptions);
		}
		if constexpr (!std::is_same_v<decltype(&B::_soft_body_set_state),decltype(&T::_soft_body_set_state)>) {
			BIND_VIRTUAL_METHOD(T, _soft_body_set_state);
		}
		if constexpr (!std::is_same_v<decltype(&B::_soft_body_get_state),decltype(&T::_soft_body_get_state)>) {
			BIND_VIRTUAL_METHOD(T, _soft_body_get_state);
		}
		if constexpr (!std::is_same_v<decltype(&B::_soft_body_set_transform),decltype(&T::_soft_body_set_transform)>) {
			BIND_VIRTUAL_METHOD(T, _soft_body_set_transform);
		}
		if constexpr (!std::is_same_v<decltype(&B::_soft_body_set_simulation_precision),decltype(&T::_soft_body_set_simulation_precision)>) {
			BIND_VIRTUAL_METHOD(T, _soft_body_set_simulation_precision);
		}
		if constexpr (!std::is_same_v<decltype(&B::_soft_body_get_simulation_precision),decltype(&T::_soft_body_get_simulation_precision)>) {
			BIND_VIRTUAL_METHOD(T, _soft_body_get_simulation_precision);
		}
		if constexpr (!std::is_same_v<decltype(&B::_soft_body_set_total_mass),decltype(&T::_soft_body_set_total_mass)>) {
			BIND_VIRTUAL_METHOD(T, _soft_body_set_total_mass);
		}
		if constexpr (!std::is_same_v<decltype(&B::_soft_body_get_total_mass),decltype(&T::_soft_body_get_total_mass)>) {
			BIND_VIRTUAL_METHOD(T, _soft_body_get_total_mass);
		}
		if constexpr (!std::is_same_v<decltype(&B::_soft_body_set_linear_stiffness),decltype(&T::_soft_body_set_linear_stiffness)>) {
			BIND_VIRTUAL_METHOD(T, _soft_body_set_linear_stiffness);
		}
		if constexpr (!std::is_same_v<decltype(&B::_soft_body_get_linear_stiffness),decltype(&T::_soft_body_get_linear_stiffness)>) {
			BIND_VIRTUAL_METHOD(T, _soft_body_get_linear_stiffness);
		}
		if constexpr (!std::is_same_v<decltype(&B::_soft_body_set_pressure_coefficient),decltype(&T::_soft_body_set_pressure_coefficient)>) {
			BIND_VIRTUAL_METHOD(T, _soft_body_set_pressure_coefficient);
		}
		if constexpr (!std::is_same_v<decltype(&B::_soft_body_get_pressure_coefficient),decltype(&T::_soft_body_get_pressure_coefficient)>) {
			BIND_VIRTUAL_METHOD(T, _soft_body_get_pressure_coefficient);
		}
		if constexpr (!std::is_same_v<decltype(&B::_soft_body_set_damping_coefficient),decltype(&T::_soft_body_set_damping_coefficient)>) {
			BIND_VIRTUAL_METHOD(T, _soft_body_set_damping_coefficient);
		}
		if constexpr (!std::is_same_v<decltype(&B::_soft_body_get_damping_coefficient),decltype(&T::_soft_body_get_damping_coefficient)>) {
			BIND_VIRTUAL_METHOD(T, _soft_body_get_damping_coefficient);
		}
		if constexpr (!std::is_same_v<decltype(&B::_soft_body_set_drag_coefficient),decltype(&T::_soft_body_set_drag_coefficient)>) {
			BIND_VIRTUAL_METHOD(T, _soft_body_set_drag_coefficient);
		}
		if constexpr (!std::is_same_v<decltype(&B::_soft_body_get_drag_coefficient),decltype(&T::_soft_body_get_drag_coefficient)>) {
			BIND_VIRTUAL_METHOD(T, _soft_body_get_drag_coefficient);
		}
		if constexpr (!std::is_same_v<decltype(&B::_soft_body_set_mesh),decltype(&T::_soft_body_set_mesh)>) {
			BIND_VIRTUAL_METHOD(T, _soft_body_set_mesh);
		}
		if constexpr (!std::is_same_v<decltype(&B::_soft_body_get_bounds),decltype(&T::_soft_body_get_bounds)>) {
			BIND_VIRTUAL_METHOD(T, _soft_body_get_bounds);
		}
		if constexpr (!std::is_same_v<decltype(&B::_soft_body_move_point),decltype(&T::_soft_body_move_point)>) {
			BIND_VIRTUAL_METHOD(T, _soft_body_move_point);
		}
		if constexpr (!std::is_same_v<decltype(&B::_soft_body_get_point_global_position),decltype(&T::_soft_body_get_point_global_position)>) {
			BIND_VIRTUAL_METHOD(T, _soft_body_get_point_global_position);
		}
		if constexpr (!std::is_same_v<decltype(&B::_soft_body_remove_all_pinned_points),decltype(&T::_soft_body_remove_all_pinned_points)>) {
			BIND_VIRTUAL_METHOD(T, _soft_body_remove_all_pinned_points);
		}
		if constexpr (!std::is_same_v<decltype(&B::_soft_body_pin_point),decltype(&T::_soft_body_pin_point)>) {
			BIND_VIRTUAL_METHOD(T, _soft_body_pin_point);
		}
		if constexpr (!std::is_same_v<decltype(&B::_soft_body_is_point_pinned),decltype(&T::_soft_body_is_point_pinned)>) {
			BIND_VIRTUAL_METHOD(T, _soft_body_is_point_pinned);
		}
		if constexpr (!std::is_same_v<decltype(&B::_joint_create),decltype(&T::_joint_create)>) {
			BIND_VIRTUAL_METHOD(T, _joint_create);
		}
		if constexpr (!std::is_same_v<decltype(&B::_joint_clear),decltype(&T::_joint_clear)>) {
			BIND_VIRTUAL_METHOD(T, _joint_clear);
		}
		if constexpr (!std::is_same_v<decltype(&B::_joint_make_pin),decltype(&T::_joint_make_pin)>) {
			BIND_VIRTUAL_METHOD(T, _joint_make_pin);
		}
		if constexpr (!std::is_same_v<decltype(&B::_pin_joint_set_param),decltype(&T::_pin_joint_set_param)>) {
			BIND_VIRTUAL_METHOD(T, _pin_joint_set_param);
		}
		if constexpr (!std::is_same_v<decltype(&B::_pin_joint_get_param),decltype(&T::_pin_joint_get_param)>) {
			BIND_VIRTUAL_METHOD(T, _pin_joint_get_param);
		}
		if constexpr (!std::is_same_v<decltype(&B::_pin_joint_set_local_a),decltype(&T::_pin_joint_set_local_a)>) {
			BIND_VIRTUAL_METHOD(T, _pin_joint_set_local_a);
		}
		if constexpr (!std::is_same_v<decltype(&B::_pin_joint_get_local_a),decltype(&T::_pin_joint_get_local_a)>) {
			BIND_VIRTUAL_METHOD(T, _pin_joint_get_local_a);
		}
		if constexpr (!std::is_same_v<decltype(&B::_pin_joint_set_local_b),decltype(&T::_pin_joint_set_local_b)>) {
			BIND_VIRTUAL_METHOD(T, _pin_joint_set_local_b);
		}
		if constexpr (!std::is_same_v<decltype(&B::_pin_joint_get_local_b),decltype(&T::_pin_joint_get_local_b)>) {
			BIND_VIRTUAL_METHOD(T, _pin_joint_get_local_b);
		}
		if constexpr (!std::is_same_v<decltype(&B::_joint_make_hinge),decltype(&T::_joint_make_hinge)>) {
			BIND_VIRTUAL_METHOD(T, _joint_make_hinge);
		}
		if constexpr (!std::is_same_v<decltype(&B::_joint_make_hinge_simple),decltype(&T::_joint_make_hinge_simple)>) {
			BIND_VIRTUAL_METHOD(T, _joint_make_hinge_simple);
		}
		if constexpr (!std::is_same_v<decltype(&B::_hinge_joint_set_param),decltype(&T::_hinge_joint_set_param)>) {
			BIND_VIRTUAL_METHOD(T, _hinge_joint_set_param);
		}
		if constexpr (!std::is_same_v<decltype(&B::_hinge_joint_get_param),decltype(&T::_hinge_joint_get_param)>) {
			BIND_VIRTUAL_METHOD(T, _hinge_joint_get_param);
		}
		if constexpr (!std::is_same_v<decltype(&B::_hinge_joint_set_flag),decltype(&T::_hinge_joint_set_flag)>) {
			BIND_VIRTUAL_METHOD(T, _hinge_joint_set_flag);
		}
		if constexpr (!std::is_same_v<decltype(&B::_hinge_joint_get_flag),decltype(&T::_hinge_joint_get_flag)>) {
			BIND_VIRTUAL_METHOD(T, _hinge_joint_get_flag);
		}
		if constexpr (!std::is_same_v<decltype(&B::_joint_make_slider),decltype(&T::_joint_make_slider)>) {
			BIND_VIRTUAL_METHOD(T, _joint_make_slider);
		}
		if constexpr (!std::is_same_v<decltype(&B::_slider_joint_set_param),decltype(&T::_slider_joint_set_param)>) {
			BIND_VIRTUAL_METHOD(T, _slider_joint_set_param);
		}
		if constexpr (!std::is_same_v<decltype(&B::_slider_joint_get_param),decltype(&T::_slider_joint_get_param)>) {
			BIND_VIRTUAL_METHOD(T, _slider_joint_get_param);
		}
		if constexpr (!std::is_same_v<decltype(&B::_joint_make_cone_twist),decltype(&T::_joint_make_cone_twist)>) {
			BIND_VIRTUAL_METHOD(T, _joint_make_cone_twist);
		}
		if constexpr (!std::is_same_v<decltype(&B::_cone_twist_joint_set_param),decltype(&T::_cone_twist_joint_set_param)>) {
			BIND_VIRTUAL_METHOD(T, _cone_twist_joint_set_param);
		}
		if constexpr (!std::is_same_v<decltype(&B::_cone_twist_joint_get_param),decltype(&T::_cone_twist_joint_get_param)>) {
			BIND_VIRTUAL_METHOD(T, _cone_twist_joint_get_param);
		}
		if constexpr (!std::is_same_v<decltype(&B::_joint_make_generic_6dof),decltype(&T::_joint_make_generic_6dof)>) {
			BIND_VIRTUAL_METHOD(T, _joint_make_generic_6dof);
		}
		if constexpr (!std::is_same_v<decltype(&B::_generic_6dof_joint_set_param),decltype(&T::_generic_6dof_joint_set_param)>) {
			BIND_VIRTUAL_METHOD(T, _generic_6dof_joint_set_param);
		}
		if constexpr (!std::is_same_v<decltype(&B::_generic_6dof_joint_get_param),decltype(&T::_generic_6dof_joint_get_param)>) {
			BIND_VIRTUAL_METHOD(T, _generic_6dof_joint_get_param);
		}
		if constexpr (!std::is_same_v<decltype(&B::_generic_6dof_joint_set_flag),decltype(&T::_generic_6dof_joint_set_flag)>) {
			BIND_VIRTUAL_METHOD(T, _generic_6dof_joint_set_flag);
		}
		if constexpr (!std::is_same_v<decltype(&B::_generic_6dof_joint_get_flag),decltype(&T::_generic_6dof_joint_get_flag)>) {
			BIND_VIRTUAL_METHOD(T, _generic_6dof_joint_get_flag);
		}
		if constexpr (!std::is_same_v<decltype(&B::_joint_get_type),decltype(&T::_joint_get_type)>) {
			BIND_VIRTUAL_METHOD(T, _joint_get_type);
		}
		if constexpr (!std::is_same_v<decltype(&B::_joint_set_solver_priority),decltype(&T::_joint_set_solver_priority)>) {
			BIND_VIRTUAL_METHOD(T, _joint_set_solver_priority);
		}
		if constexpr (!std::is_same_v<decltype(&B::_joint_get_solver_priority),decltype(&T::_joint_get_solver_priority)>) {
			BIND_VIRTUAL_METHOD(T, _joint_get_solver_priority);
		}
		if constexpr (!std::is_same_v<decltype(&B::_joint_disable_collisions_between_bodies),decltype(&T::_joint_disable_collisions_between_bodies)>) {
			BIND_VIRTUAL_METHOD(T, _joint_disable_collisions_between_bodies);
		}
		if constexpr (!std::is_same_v<decltype(&B::_joint_is_disabled_collisions_between_bodies),decltype(&T::_joint_is_disabled_collisions_between_bodies)>) {
			BIND_VIRTUAL_METHOD(T, _joint_is_disabled_collisions_between_bodies);
		}
		if constexpr (!std::is_same_v<decltype(&B::_free_rid),decltype(&T::_free_rid)>) {
			BIND_VIRTUAL_METHOD(T, _free_rid);
		}
		if constexpr (!std::is_same_v<decltype(&B::_set_active),decltype(&T::_set_active)>) {
			BIND_VIRTUAL_METHOD(T, _set_active);
		}
		if constexpr (!std::is_same_v<decltype(&B::_init),decltype(&T::_init)>) {
			BIND_VIRTUAL_METHOD(T, _init);
		}
		if constexpr (!std::is_same_v<decltype(&B::_step),decltype(&T::_step)>) {
			BIND_VIRTUAL_METHOD(T, _step);
		}
		if constexpr (!std::is_same_v<decltype(&B::_sync),decltype(&T::_sync)>) {
			BIND_VIRTUAL_METHOD(T, _sync);
		}
		if constexpr (!std::is_same_v<decltype(&B::_flush_queries),decltype(&T::_flush_queries)>) {
			BIND_VIRTUAL_METHOD(T, _flush_queries);
		}
		if constexpr (!std::is_same_v<decltype(&B::_end_sync),decltype(&T::_end_sync)>) {
			BIND_VIRTUAL_METHOD(T, _end_sync);
		}
		if constexpr (!std::is_same_v<decltype(&B::_finish),decltype(&T::_finish)>) {
			BIND_VIRTUAL_METHOD(T, _finish);
		}
		if constexpr (!std::is_same_v<decltype(&B::_is_flushing_queries),decltype(&T::_is_flushing_queries)>) {
			BIND_VIRTUAL_METHOD(T, _is_flushing_queries);
		}
		if constexpr (!std::is_same_v<decltype(&B::_get_process_info),decltype(&T::_get_process_info)>) {
			BIND_VIRTUAL_METHOD(T, _get_process_info);
		}
	}

public:

};

} // namespace godot

#endif // ! GODOT_CPP_PHYSICS_SERVER3D_EXTENSION_HPP