#include <godot_cpp/classes/a_star3d.hpp>
#include <godot_cpp/variant/packed_int64_array.hpp>
#include <godot_cpp/variant/packed_vector3_array.hpp>
#include <godot_cpp/variant/vector3.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_AStar3D() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<AStar3D>("AStar3D")
			.constructor<>()
			.fun<static_cast<double (AStar3D::*)(int64_t, int64_t) const>(&AStar3D::_estimate_cost)>("_estimate_cost")
			.fun<static_cast<double (AStar3D::*)(int64_t, int64_t) const>(&AStar3D::_compute_cost)>("_compute_cost")
			.fun<static_cast<int64_t (AStar3D::*)() const>(&AStar3D::get_available_point_id)>("get_available_point_id")
			.fun<static_cast<void (AStar3D::*)(int64_t, const Vector3 &, double)>(&AStar3D::add_point)>("add_point")
			.fun<static_cast<Vector3 (AStar3D::*)(int64_t) const>(&AStar3D::get_point_position)>("get_point_position")
			.fun<static_cast<void (AStar3D::*)(int64_t, const Vector3 &)>(&AStar3D::set_point_position)>("set_point_position")
			.fun<static_cast<double (AStar3D::*)(int64_t) const>(&AStar3D::get_point_weight_scale)>("get_point_weight_scale")
			.fun<static_cast<void (AStar3D::*)(int64_t, double)>(&AStar3D::set_point_weight_scale)>("set_point_weight_scale")
			.fun<static_cast<void (AStar3D::*)(int64_t)>(&AStar3D::remove_point)>("remove_point")
			.fun<static_cast<bool (AStar3D::*)(int64_t) const>(&AStar3D::has_point)>("has_point")
			.fun<static_cast<PackedInt64Array (AStar3D::*)(int64_t)>(&AStar3D::get_point_connections)>("get_point_connections")
			.fun<static_cast<PackedInt64Array (AStar3D::*)()>(&AStar3D::get_point_ids)>("get_point_ids")
			.fun<static_cast<void (AStar3D::*)(int64_t, bool)>(&AStar3D::set_point_disabled)>("set_point_disabled")
			.fun<static_cast<bool (AStar3D::*)(int64_t) const>(&AStar3D::is_point_disabled)>("is_point_disabled")
			.fun<static_cast<void (AStar3D::*)(int64_t, int64_t, bool)>(&AStar3D::connect_points)>("connect_points")
			.fun<static_cast<void (AStar3D::*)(int64_t, int64_t, bool)>(&AStar3D::disconnect_points)>("disconnect_points")
			.fun<static_cast<bool (AStar3D::*)(int64_t, int64_t, bool) const>(&AStar3D::are_points_connected)>("are_points_connected")
			.fun<static_cast<int64_t (AStar3D::*)() const>(&AStar3D::get_point_count)>("get_point_count")
			.fun<static_cast<int64_t (AStar3D::*)() const>(&AStar3D::get_point_capacity)>("get_point_capacity")
			.fun<static_cast<void (AStar3D::*)(int64_t)>(&AStar3D::reserve_space)>("reserve_space")
			.fun<static_cast<void (AStar3D::*)()>(&AStar3D::clear)>("clear")
			.fun<static_cast<int64_t (AStar3D::*)(const Vector3 &, bool) const>(&AStar3D::get_closest_point)>("get_closest_point")
			.fun<static_cast<Vector3 (AStar3D::*)(const Vector3 &) const>(&AStar3D::get_closest_position_in_segment)>("get_closest_position_in_segment")
			.fun<static_cast<PackedVector3Array (AStar3D::*)(int64_t, int64_t, bool)>(&AStar3D::get_point_path)>("get_point_path")
			.fun<static_cast<PackedInt64Array (AStar3D::*)(int64_t, int64_t, bool)>(&AStar3D::get_id_path)>("get_id_path");
}