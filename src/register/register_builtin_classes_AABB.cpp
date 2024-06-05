#include <godot_cpp/core/defs.hpp>
#include <godot_cpp/variant/aabb.hpp>
#include <godot_cpp/variant/plane.hpp>
#include <godot_cpp/variant/vector3.hpp>

#include "register/register_builtin_classes.h"

using namespace godot;

void register_builtin_classes_AABB() {
	_Variant.class_<AABB>("AABB")
            .constructor<>()
            .constructor<const AABB &>("AABB_1")
            .constructor<const Vector3 &,const Vector3 &>("AABB_2")

			.fun<static_cast<AABB(AABB::*)()const>(&AABB::abs)>("abs")
			.fun<static_cast<Vector3(AABB::*)()const>(&AABB::get_center)>("get_center")
			.fun<static_cast<real_t(AABB::*)()const>(&AABB::get_volume)>("get_volume")
			.fun<static_cast<bool(AABB::*)()const>(&AABB::has_volume)>("has_volume")
			.fun<static_cast<bool(AABB::*)()const>(&AABB::has_surface)>("has_surface")
			.fun<static_cast<bool(AABB::*)(const Vector3 &)const>(&AABB::has_point)>("has_point")
			.fun<static_cast<bool(AABB::*)(const AABB &)const>(&AABB::is_equal_approx)>("is_equal_approx")
			.fun<static_cast<bool(AABB::*)()const>(&AABB::is_finite)>("is_finite")
			.fun<static_cast<bool(AABB::*)(const AABB &)const>(&AABB::intersects)>("intersects")
			.fun<static_cast<bool(AABB::*)(const AABB &)const>(&AABB::encloses)>("encloses")
			.fun<static_cast<bool(AABB::*)(const Plane &)const>(&AABB::intersects_plane)>("intersects_plane")
			.fun<static_cast<AABB(AABB::*)(const AABB &)const>(&AABB::intersection)>("intersection")
			.fun<static_cast<AABB(AABB::*)(const AABB &)const>(&AABB::merge)>("merge")
			.fun<static_cast<AABB(AABB::*)(const Vector3 &)const>(&AABB::expand)>("expand")
			.fun<static_cast<AABB(AABB::*)(real_t)const>(&AABB::grow)>("grow")
			.fun<static_cast<Vector3(AABB::*)(const Vector3 &)const>(&AABB::get_support)>("get_support")
			.fun<static_cast<Vector3(AABB::*)()const>(&AABB::get_longest_axis)>("get_longest_axis")
			.fun<static_cast<int(AABB::*)()const>(&AABB::get_longest_axis_index)>("get_longest_axis_index")
			.fun<static_cast<real_t(AABB::*)()const>(&AABB::get_longest_axis_size)>("get_longest_axis_size")
			.fun<static_cast<Vector3(AABB::*)()const>(&AABB::get_shortest_axis)>("get_shortest_axis")
			.fun<static_cast<int(AABB::*)()const>(&AABB::get_shortest_axis_index)>("get_shortest_axis_index")
			.fun<static_cast<real_t(AABB::*)()const>(&AABB::get_shortest_axis_size)>("get_shortest_axis_size")
			.fun<static_cast<Vector3(AABB::*)(int)const>(&AABB::get_endpoint)>("get_endpoint")
			.fun<static_cast<bool(AABB::*)(const Vector3 &,const Vector3 &)const>(&AABB::intersects_segment)>("intersects_segment")
			.fun<static_cast<bool(AABB::*)(const Vector3 &,const Vector3 &)const>(&AABB::intersects_ray)>("intersects_ray");
}