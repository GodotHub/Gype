#include "register/register_classes.h"
#include <godot_cpp/classes/a_star2d.hpp>
#include <godot_cpp/variant/packed_int64_array.hpp>
#include <godot_cpp/variant/packed_vector2_array.hpp>
#include <godot_cpp/variant/vector2.hpp>

using namespace godot;

void register_classes_AStar2D() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<AStar2D>("AStar2D")
			.constructor<>()
			.fun<static_cast<double (AStar2D::*)(int64_t, int64_t) const>(&AStar2D::_estimate_cost)>("_estimate_cost")
			.fun<static_cast<double (AStar2D::*)(int64_t, int64_t) const>(&AStar2D::_compute_cost)>("_compute_cost")
			.fun<static_cast<int64_t (AStar2D::*)() const>(&AStar2D::get_available_point_id)>("get_available_point_id")
			.fun<static_cast<void (AStar2D::*)(int64_t, const Vector2 &, double)>(&AStar2D::add_point)>("add_point")
			.fun<static_cast<Vector2 (AStar2D::*)(int64_t) const>(&AStar2D::get_point_position)>("get_point_position")
			.fun<static_cast<void (AStar2D::*)(int64_t, const Vector2 &)>(&AStar2D::set_point_position)>("set_point_position")
			.fun<static_cast<double (AStar2D::*)(int64_t) const>(&AStar2D::get_point_weight_scale)>("get_point_weight_scale")
			.fun<static_cast<void (AStar2D::*)(int64_t, double)>(&AStar2D::set_point_weight_scale)>("set_point_weight_scale")
			.fun<static_cast<void (AStar2D::*)(int64_t)>(&AStar2D::remove_point)>("remove_point")
			.fun<static_cast<bool (AStar2D::*)(int64_t) const>(&AStar2D::has_point)>("has_point")
			.fun<static_cast<PackedInt64Array (AStar2D::*)(int64_t)>(&AStar2D::get_point_connections)>("get_point_connections")
			.fun<static_cast<PackedInt64Array (AStar2D::*)()>(&AStar2D::get_point_ids)>("get_point_ids")
			.fun<static_cast<void (AStar2D::*)(int64_t, bool)>(&AStar2D::set_point_disabled)>("set_point_disabled")
			.fun<static_cast<bool (AStar2D::*)(int64_t) const>(&AStar2D::is_point_disabled)>("is_point_disabled")
			.fun<static_cast<void (AStar2D::*)(int64_t, int64_t, bool)>(&AStar2D::connect_points)>("connect_points")
			.fun<static_cast<void (AStar2D::*)(int64_t, int64_t, bool)>(&AStar2D::disconnect_points)>("disconnect_points")
			.fun<static_cast<bool (AStar2D::*)(int64_t, int64_t, bool) const>(&AStar2D::are_points_connected)>("are_points_connected")
			.fun<static_cast<int64_t (AStar2D::*)() const>(&AStar2D::get_point_count)>("get_point_count")
			.fun<static_cast<int64_t (AStar2D::*)() const>(&AStar2D::get_point_capacity)>("get_point_capacity")
			.fun<static_cast<void (AStar2D::*)(int64_t)>(&AStar2D::reserve_space)>("reserve_space")
			.fun<static_cast<void (AStar2D::*)()>(&AStar2D::clear)>("clear")
			.fun<static_cast<int64_t (AStar2D::*)(const Vector2 &, bool) const>(&AStar2D::get_closest_point)>("get_closest_point")
			.fun<static_cast<Vector2 (AStar2D::*)(const Vector2 &) const>(&AStar2D::get_closest_position_in_segment)>("get_closest_position_in_segment")
			.fun<static_cast<PackedVector2Array (AStar2D::*)(int64_t, int64_t, bool)>(&AStar2D::get_point_path)>("get_point_path")
			.fun<static_cast<PackedInt64Array (AStar2D::*)(int64_t, int64_t, bool)>(&AStar2D::get_id_path)>("get_id_path");
}