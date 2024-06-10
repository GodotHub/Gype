#include <godot_cpp/core/defs.hpp>
#include <godot_cpp/variant/basis.hpp>
#include <godot_cpp/variant/quaternion.hpp>
#include <godot_cpp/variant/vector3.hpp>

#include "register/register_builtin_classes.h"

using namespace godot;

void register_builtin_classes_Quaternion() {
	get_Variant_module().class_<Quaternion>("Quaternion").constructor<>().constructor<const Quaternion &>("Quaternion_1").constructor<const Basis &>("Quaternion_2").constructor<const Vector3 &, real_t>("Quaternion_3").constructor<const Vector3 &, const Vector3 &>("Quaternion_4").constructor<real_t, real_t, real_t, real_t>("Quaternion_5")

			.fun<static_cast<real_t (Quaternion::*)() const>(&Quaternion::length)>("length")
			.fun<static_cast<real_t (Quaternion::*)() const>(&Quaternion::length_squared)>("length_squared")
			.fun<static_cast<Quaternion (Quaternion::*)() const>(&Quaternion::normalized)>("normalized")
			.fun<static_cast<bool (Quaternion::*)() const>(&Quaternion::is_normalized)>("is_normalized")
			.fun<static_cast<bool (Quaternion::*)(const Quaternion &) const>(&Quaternion::is_equal_approx)>("is_equal_approx")
			.fun<static_cast<bool (Quaternion::*)() const>(&Quaternion::is_finite)>("is_finite")
			.fun<static_cast<Quaternion (Quaternion::*)() const>(&Quaternion::inverse)>("inverse")
			.fun<static_cast<Quaternion (Quaternion::*)() const>(&Quaternion::log)>("log")
			.fun<static_cast<Quaternion (Quaternion::*)() const>(&Quaternion::exp)>("exp")
			.fun<static_cast<real_t (Quaternion::*)(const Quaternion &) const>(&Quaternion::angle_to)>("angle_to")
			.fun<static_cast<real_t (Quaternion::*)(const Quaternion &) const>(&Quaternion::dot)>("dot")
			.fun<static_cast<Quaternion (Quaternion::*)(const Quaternion &, const real_t &) const>(&Quaternion::slerp)>("slerp")
			.fun<static_cast<Quaternion (Quaternion::*)(const Quaternion &, const real_t &) const>(&Quaternion::slerpni)>("slerpni")
			.fun<static_cast<Quaternion (Quaternion::*)(const Quaternion &, const Quaternion &, const Quaternion &, const real_t &) const>(&Quaternion::spherical_cubic_interpolate)>("spherical_cubic_interpolate")
			.fun<static_cast<Quaternion (Quaternion::*)(const Quaternion &, const Quaternion &, const Quaternion &, const real_t &, const real_t &, const real_t &, const real_t &) const>(&Quaternion::spherical_cubic_interpolate_in_time)>("spherical_cubic_interpolate_in_time")
			.fun<static_cast<Vector3 (Quaternion::*)() const>(&Quaternion::get_euler)>("get_euler")
			.static_fun<Quaternion::from_euler>("from_euler")
			.fun<static_cast<Vector3 (Quaternion::*)() const>(&Quaternion::get_axis)>("get_axis")
			.fun<static_cast<real_t (Quaternion::*)() const>(&Quaternion::get_angle)>("get_angle");
}