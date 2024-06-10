#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/core/defs.hpp>
#include <godot_cpp/variant/basis.hpp>
#include <godot_cpp/variant/quaternion.hpp>
#include <godot_cpp/variant/vector3.hpp>

#include "register/register_builtin_classes.h"

using namespace godot;

void register_builtin_classes_Basis() {
	get_Variant_module().class_<Basis>("Basis").constructor<>().constructor<const Basis &>("Basis_1").constructor<const Quaternion &>("Basis_2").constructor<const Vector3 &, real_t>("Basis_3").constructor<const Vector3 &, const Vector3 &, const Vector3 &>("Basis_4")

			.fun<static_cast<Basis (Basis::*)() const>(&Basis::inverse)>("inverse")
			.fun<static_cast<Basis (Basis::*)() const>(&Basis::transposed)>("transposed")
			.fun<static_cast<Basis (Basis::*)() const>(&Basis::orthonormalized)>("orthonormalized")
			.fun<static_cast<real_t (Basis::*)() const>(&Basis::determinant)>("determinant")
			.fun<static_cast<Basis (Basis::*)(const Vector3 &, real_t) const>(&Basis::rotated)>("rotated")
			.fun<static_cast<Basis (Basis::*)(const Vector3 &) const>(&Basis::scaled)>("scaled")
			.fun<static_cast<Vector3 (Basis::*)() const>(&Basis::get_scale)>("get_scale")
			.fun<static_cast<Vector3 (Basis::*)(EulerOrder) const>(&Basis::get_euler)>("get_euler")
			.fun<static_cast<real_t (Basis::*)(const Vector3 &) const>(&Basis::tdotx)>("tdotx")
			.fun<static_cast<real_t (Basis::*)(const Vector3 &) const>(&Basis::tdoty)>("tdoty")
			.fun<static_cast<real_t (Basis::*)(const Vector3 &) const>(&Basis::tdotz)>("tdotz")
			.fun<static_cast<Basis (Basis::*)(const Basis &, const real_t &) const>(&Basis::slerp)>("slerp")
			.fun<static_cast<bool (Basis::*)() const>(&Basis::is_conformal)>("is_conformal")
			.fun<static_cast<bool (Basis::*)(const Basis &) const>(&Basis::is_equal_approx)>("is_equal_approx")
			.fun<static_cast<bool (Basis::*)() const>(&Basis::is_finite)>("is_finite")
			.fun<static_cast<Quaternion (Basis::*)() const>(&Basis::get_rotation_quaternion)>("get_rotation_quaternion")
			.static_fun<Basis::looking_at>("looking_at")
			.static_fun<Basis::from_scale>("from_scale")
			.static_fun<Basis::from_euler>("from_euler");
}