#include <godot_cpp/core/defs.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <godot_cpp/variant/vector2i.hpp>

#include "register/register_builtin_classes.h"

using namespace godot;

void register_builtin_classes_Vector2() {
	get_Variant_module().class_<Vector2>("Vector2").constructor<>().constructor<const Vector2 &>("Vector2_1").constructor<const Vector2i &>("Vector2_2").constructor<real_t, real_t>("Vector2_3")

			.fun<static_cast<real_t (Vector2::*)() const>(&Vector2::angle)>("angle")
			.fun<static_cast<real_t (Vector2::*)(const Vector2 &) const>(&Vector2::angle_to)>("angle_to")
			.fun<static_cast<real_t (Vector2::*)(const Vector2 &) const>(&Vector2::angle_to_point)>("angle_to_point")
			.fun<static_cast<Vector2 (Vector2::*)(const Vector2 &) const>(&Vector2::direction_to)>("direction_to")
			.fun<static_cast<real_t (Vector2::*)(const Vector2 &) const>(&Vector2::distance_to)>("distance_to")
			.fun<static_cast<real_t (Vector2::*)(const Vector2 &) const>(&Vector2::distance_squared_to)>("distance_squared_to")
			.fun<static_cast<real_t (Vector2::*)() const>(&Vector2::length)>("length")
			.fun<static_cast<real_t (Vector2::*)() const>(&Vector2::length_squared)>("length_squared")
			.fun<static_cast<Vector2 (Vector2::*)(real_t) const>(&Vector2::limit_length)>("limit_length")
			.fun<static_cast<Vector2 (Vector2::*)() const>(&Vector2::normalized)>("normalized")
			.fun<static_cast<bool (Vector2::*)() const>(&Vector2::is_normalized)>("is_normalized")
			.fun<static_cast<bool (Vector2::*)(const Vector2 &) const>(&Vector2::is_equal_approx)>("is_equal_approx")
			.fun<static_cast<bool (Vector2::*)() const>(&Vector2::is_zero_approx)>("is_zero_approx")
			.fun<static_cast<bool (Vector2::*)() const>(&Vector2::is_finite)>("is_finite")
			.fun<static_cast<Vector2 (Vector2::*)(real_t) const>(&Vector2::posmod)>("posmod")
			.fun<static_cast<Vector2 (Vector2::*)(const Vector2 &) const>(&Vector2::posmodv)>("posmodv")
			.fun<static_cast<Vector2 (Vector2::*)(const Vector2 &) const>(&Vector2::project)>("project")
			.fun<static_cast<Vector2 (Vector2::*)(const Vector2 &, real_t) const>(&Vector2::lerp)>("lerp")
			.fun<static_cast<Vector2 (Vector2::*)(const Vector2 &, real_t) const>(&Vector2::slerp)>("slerp")
			.fun<static_cast<Vector2 (Vector2::*)(const Vector2 &, const Vector2 &, const Vector2 &, real_t) const>(&Vector2::cubic_interpolate)>("cubic_interpolate")
			.fun<static_cast<Vector2 (Vector2::*)(const Vector2 &, const Vector2 &, const Vector2 &, real_t, const real_t &, const real_t &, const real_t &) const>(&Vector2::cubic_interpolate_in_time)>("cubic_interpolate_in_time")
			.fun<static_cast<Vector2 (Vector2::*)(const Vector2 &, const Vector2 &, const Vector2 &, real_t) const>(&Vector2::bezier_interpolate)>("bezier_interpolate")
			.fun<static_cast<Vector2 (Vector2::*)(const Vector2 &, const Vector2 &, const Vector2 &, real_t) const>(&Vector2::bezier_derivative)>("bezier_derivative")
			.fun<static_cast<Vector2::Axis (Vector2::*)() const>(&Vector2::max_axis_index)>("max_axis_index")
			.fun<static_cast<Vector2::Axis (Vector2::*)() const>(&Vector2::min_axis_index)>("min_axis_index")
			.fun<static_cast<Vector2 (Vector2::*)(const Vector2 &, real_t) const>(&Vector2::move_toward)>("move_toward")
			.fun<static_cast<Vector2 (Vector2::*)(real_t) const>(&Vector2::rotated)>("rotated")
			.fun<static_cast<Vector2 (Vector2::*)() const>(&Vector2::orthogonal)>("orthogonal")
			.fun<static_cast<Vector2 (Vector2::*)() const>(&Vector2::floor)>("floor")
			.fun<static_cast<Vector2 (Vector2::*)() const>(&Vector2::ceil)>("ceil")
			.fun<static_cast<Vector2 (Vector2::*)() const>(&Vector2::round)>("round")
			.fun<static_cast<real_t (Vector2::*)() const>(&Vector2::aspect)>("aspect")
			.fun<static_cast<real_t (Vector2::*)(const Vector2 &) const>(&Vector2::dot)>("dot")
			.fun<static_cast<Vector2 (Vector2::*)(const Vector2 &) const>(&Vector2::slide)>("slide")
			.fun<static_cast<Vector2 (Vector2::*)(const Vector2 &) const>(&Vector2::bounce)>("bounce")
			.fun<static_cast<Vector2 (Vector2::*)(const Vector2 &) const>(&Vector2::reflect)>("reflect")
			.fun<static_cast<real_t (Vector2::*)(const Vector2 &) const>(&Vector2::cross)>("cross")
			.fun<static_cast<Vector2 (Vector2::*)() const>(&Vector2::abs)>("abs")
			.fun<static_cast<Vector2 (Vector2::*)() const>(&Vector2::sign)>("sign")
			.fun<static_cast<Vector2 (Vector2::*)(const Vector2 &, const Vector2 &) const>(&Vector2::clamp)>("clamp")
			.fun<static_cast<Vector2 (Vector2::*)(const Vector2 &) const>(&Vector2::snapped)>("snapped")
			.static_fun<Vector2::from_angle>("from_angle");
}