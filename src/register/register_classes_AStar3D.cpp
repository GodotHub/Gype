
#include <godot_cpp/classes/a_star3d.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/variant/packed_int64_array.hpp>
#include <godot_cpp/variant/packed_vector3_array.hpp>
#include <godot_cpp/variant/vector3.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_AStar3D() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<AStar3D>("AStar3D")
			.constructor<>()
			.base<RefCounted>()
			.fun<static_cast<double (AStar3D::*)(int64_t, int64_t) const>(&AStar3D::_estimate_cost)>((new std::string("_estimate_cost"))->c_str())
			.fun<static_cast<double (AStar3D::*)(int64_t, int64_t) const>(&AStar3D::_compute_cost)>((new std::string("_compute_cost"))->c_str())
			.fun<static_cast<int64_t (AStar3D::*)() const>(&AStar3D::get_available_point_id)>((new std::string("get_available_point_id"))->c_str())
			.fun<static_cast<void (AStar3D::*)(int64_t, const Vector3 &, double)>(&AStar3D::add_point)>((new std::string("add_point"))->c_str())
			.fun<static_cast<Vector3 (AStar3D::*)(int64_t) const>(&AStar3D::get_point_position)>((new std::string("get_point_position"))->c_str())
			.fun<static_cast<void (AStar3D::*)(int64_t, const Vector3 &)>(&AStar3D::set_point_position)>((new std::string("set_point_position"))->c_str())
			.fun<static_cast<double (AStar3D::*)(int64_t) const>(&AStar3D::get_point_weight_scale)>((new std::string("get_point_weight_scale"))->c_str())
			.fun<static_cast<void (AStar3D::*)(int64_t, double)>(&AStar3D::set_point_weight_scale)>((new std::string("set_point_weight_scale"))->c_str())
			.fun<static_cast<void (AStar3D::*)(int64_t)>(&AStar3D::remove_point)>((new std::string("remove_point"))->c_str())
			.fun<static_cast<bool (AStar3D::*)(int64_t) const>(&AStar3D::has_point)>((new std::string("has_point"))->c_str())
			.fun<static_cast<PackedInt64Array (AStar3D::*)(int64_t)>(&AStar3D::get_point_connections)>((new std::string("get_point_connections"))->c_str())
			.fun<static_cast<PackedInt64Array (AStar3D::*)()>(&AStar3D::get_point_ids)>((new std::string("get_point_ids"))->c_str())
			.fun<static_cast<void (AStar3D::*)(int64_t, bool)>(&AStar3D::set_point_disabled)>((new std::string("set_point_disabled"))->c_str())
			.fun<static_cast<bool (AStar3D::*)(int64_t) const>(&AStar3D::is_point_disabled)>((new std::string("is_point_disabled"))->c_str())
			.fun<static_cast<void (AStar3D::*)(int64_t, int64_t, bool)>(&AStar3D::connect_points)>((new std::string("connect_points"))->c_str())
			.fun<static_cast<void (AStar3D::*)(int64_t, int64_t, bool)>(&AStar3D::disconnect_points)>((new std::string("disconnect_points"))->c_str())
			.fun<static_cast<bool (AStar3D::*)(int64_t, int64_t, bool) const>(&AStar3D::are_points_connected)>((new std::string("are_points_connected"))->c_str())
			.fun<static_cast<int64_t (AStar3D::*)() const>(&AStar3D::get_point_count)>((new std::string("get_point_count"))->c_str())
			.fun<static_cast<int64_t (AStar3D::*)() const>(&AStar3D::get_point_capacity)>((new std::string("get_point_capacity"))->c_str())
			.fun<static_cast<void (AStar3D::*)(int64_t)>(&AStar3D::reserve_space)>((new std::string("reserve_space"))->c_str())
			.fun<static_cast<void (AStar3D::*)()>(&AStar3D::clear)>((new std::string("clear"))->c_str())
			.fun<static_cast<int64_t (AStar3D::*)(const Vector3 &, bool) const>(&AStar3D::get_closest_point)>((new std::string("get_closest_point"))->c_str())
			.fun<static_cast<Vector3 (AStar3D::*)(const Vector3 &) const>(&AStar3D::get_closest_position_in_segment)>((new std::string("get_closest_position_in_segment"))->c_str())
			.fun<static_cast<PackedVector3Array (AStar3D::*)(int64_t, int64_t, bool)>(&AStar3D::get_point_path)>((new std::string("get_point_path"))->c_str())
			.fun<static_cast<PackedInt64Array (AStar3D::*)(int64_t, int64_t, bool)>(&AStar3D::get_id_path)>((new std::string("get_id_path"))->c_str());
}