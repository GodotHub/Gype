#include <godot_cpp/core/defs.hpp>
#include <godot_cpp/variant/basis.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <godot_cpp/variant/vector3.hpp>
#include <godot_cpp/variant/vector3i.hpp>

#include "register/register_builtin_classes.h"

using namespace godot;

void register_builtin_classes_Vector3() {
	get_Variant_module().class_<Vector3>("Vector3").constructor<>().constructor<const Vector3 &>("Vector3_1").constructor<const Vector3i &>("Vector3_2").constructor<real_t, real_t, real_t>("Vector3_3")

			.fun<static_cast<Vector3::Axis (Vector3::*)() const>(&Vector3::min_axis_index)>("min_axis_index")
			.fun<static_cast<Vector3::Axis (Vector3::*)() const>(&Vector3::max_axis_index)>("max_axis_index")
			.fun<static_cast<real_t (Vector3::*)(const Vector3 &) const>(&Vector3::angle_to)>("angle_to")
			.fun<static_cast<real_t (Vector3::*)(const Vector3 &, const Vector3 &) const>(&Vector3::signed_angle_to)>("signed_angle_to")
			.fun<static_cast<Vector3 (Vector3::*)(const Vector3 &) const>(&Vector3::direction_to)>("direction_to")
			.fun<static_cast<real_t (Vector3::*)(const Vector3 &) const>(&Vector3::distance_to)>("distance_to")
			.fun<static_cast<real_t (Vector3::*)(const Vector3 &) const>(&Vector3::distance_squared_to)>("distance_squared_to")
			.fun<static_cast<real_t (Vector3::*)() const>(&Vector3::length)>("length")
			.fun<static_cast<real_t (Vector3::*)() const>(&Vector3::length_squared)>("length_squared")
			.fun<static_cast<Vector3 (Vector3::*)(real_t) const>(&Vector3::limit_length)>("limit_length")
			.fun<static_cast<Vector3 (Vector3::*)() const>(&Vector3::normalized)>("normalized")
			.fun<static_cast<bool (Vector3::*)() const>(&Vector3::is_normalized)>("is_normalized")
			.fun<static_cast<bool (Vector3::*)(const Vector3 &) const>(&Vector3::is_equal_approx)>("is_equal_approx")
			.fun<static_cast<bool (Vector3::*)() const>(&Vector3::is_zero_approx)>("is_zero_approx")
			.fun<static_cast<bool (Vector3::*)() const>(&Vector3::is_finite)>("is_finite")
			.fun<static_cast<Vector3 (Vector3::*)() const>(&Vector3::inverse)>("inverse")
			.fun<static_cast<Vector3 (Vector3::*)(const Vector3 &, const Vector3 &) const>(&Vector3::clamp)>("clamp")
			.fun<static_cast<Vector3 (Vector3::*)(const Vector3 &) const>(&Vector3::snapped)>("snapped")
			.fun<static_cast<Vector3 (Vector3::*)(const Vector3 &, real_t) const>(&Vector3::rotated)>("rotated")
			.fun<static_cast<Vector3 (Vector3::*)(const Vector3 &, real_t) const>(&Vector3::lerp)>("lerp")
			.fun<static_cast<Vector3 (Vector3::*)(const Vector3 &, real_t) const>(&Vector3::slerp)>("slerp")
			.fun<static_cast<Vector3 (Vector3::*)(const Vector3 &, const Vector3 &, const Vector3 &, real_t) const>(&Vector3::cubic_interpolate)>("cubic_interpolate")
			.fun<static_cast<Vector3 (Vector3::*)(const Vector3 &, const Vector3 &, const Vector3 &, real_t, const real_t &, const real_t &, const real_t &) const>(&Vector3::cubic_interpolate_in_time)>("cubic_interpolate_in_time")
			.fun<static_cast<Vector3 (Vector3::*)(const Vector3 &, const Vector3 &, const Vector3 &, real_t) const>(&Vector3::bezier_interpolate)>("bezier_interpolate")
			.fun<static_cast<Vector3 (Vector3::*)(const Vector3 &, const Vector3 &, const Vector3 &, real_t) const>(&Vector3::bezier_derivative)>("bezier_derivative")
			.fun<static_cast<Vector3 (Vector3::*)(const Vector3 &, real_t) const>(&Vector3::move_toward)>("move_toward")
			.fun<static_cast<real_t (Vector3::*)(const Vector3 &) const>(&Vector3::dot)>("dot")
			.fun<static_cast<Vector3 (Vector3::*)(const Vector3 &) const>(&Vector3::cross)>("cross")
			.fun<static_cast<Basis (Vector3::*)(const Vector3 &) const>(&Vector3::outer)>("outer")
			.fun<static_cast<Vector3 (Vector3::*)() const>(&Vector3::abs)>("abs")
			.fun<static_cast<Vector3 (Vector3::*)() const>(&Vector3::floor)>("floor")
			.fun<static_cast<Vector3 (Vector3::*)() const>(&Vector3::ceil)>("ceil")
			.fun<static_cast<Vector3 (Vector3::*)() const>(&Vector3::round)>("round")
			.fun<static_cast<Vector3 (Vector3::*)(real_t) const>(&Vector3::posmod)>("posmod")
			.fun<static_cast<Vector3 (Vector3::*)(const Vector3 &) const>(&Vector3::posmodv)>("posmodv")
			.fun<static_cast<Vector3 (Vector3::*)(const Vector3 &) const>(&Vector3::project)>("project")
			.fun<static_cast<Vector3 (Vector3::*)(const Vector3 &) const>(&Vector3::slide)>("slide")
			.fun<static_cast<Vector3 (Vector3::*)(const Vector3 &) const>(&Vector3::bounce)>("bounce")
			.fun<static_cast<Vector3 (Vector3::*)(const Vector3 &) const>(&Vector3::reflect)>("reflect")
			.fun<static_cast<Vector3 (Vector3::*)() const>(&Vector3::sign)>("sign")
			.fun<static_cast<Vector2 (Vector3::*)() const>(&Vector3::octahedron_encode)>("octahedron_encode")
			.static_fun<Vector3::octahedron_decode>("octahedron_decode");
}