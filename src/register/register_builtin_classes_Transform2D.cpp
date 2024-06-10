#include <godot_cpp/core/defs.hpp>
#include <godot_cpp/variant/transform2d.hpp>
#include <godot_cpp/variant/vector2.hpp>

#include "register/register_builtin_classes.h"

using namespace godot;

void register_builtin_classes_Transform2D() {
	get_Variant_module().class_<Transform2D>("Transform2D").constructor<>().constructor<const Transform2D &>("Transform2D_1").constructor<real_t, const Vector2 &>("Transform2D_2").constructor<real_t, const Vector2 &, real_t, const Vector2 &>("Transform2D_3").constructor<const Vector2 &, const Vector2 &, const Vector2 &>("Transform2D_4")

			.fun<static_cast<Transform2D (Transform2D::*)() const>(&Transform2D::inverse)>("inverse")
			.fun<static_cast<Transform2D (Transform2D::*)() const>(&Transform2D::affine_inverse)>("affine_inverse")
			.fun<static_cast<real_t (Transform2D::*)() const>(&Transform2D::get_rotation)>("get_rotation")
			.fun<static_cast<const Vector2 &(Transform2D::*)() const>(&Transform2D::get_origin)>("get_origin")
			.fun<static_cast<Vector2 (Transform2D::*)() const>(&Transform2D::get_scale)>("get_scale")
			.fun<static_cast<real_t (Transform2D::*)() const>(&Transform2D::get_skew)>("get_skew")
			.fun<static_cast<Transform2D (Transform2D::*)() const>(&Transform2D::orthonormalized)>("orthonormalized")
			.fun<static_cast<Transform2D (Transform2D::*)(real_t) const>(&Transform2D::rotated)>("rotated")
			.fun<static_cast<Transform2D (Transform2D::*)(real_t) const>(&Transform2D::rotated_local)>("rotated_local")
			.fun<static_cast<Transform2D (Transform2D::*)(const Vector2 &) const>(&Transform2D::scaled)>("scaled")
			.fun<static_cast<Transform2D (Transform2D::*)(const Vector2 &) const>(&Transform2D::scaled_local)>("scaled_local")
			.fun<static_cast<Transform2D (Transform2D::*)(const Vector2 &) const>(&Transform2D::translated)>("translated")
			.fun<static_cast<Transform2D (Transform2D::*)(const Vector2 &) const>(&Transform2D::translated_local)>("translated_local")
			.fun<static_cast<real_t (Transform2D::*)() const>(&Transform2D::determinant)>("determinant")
			.fun<static_cast<Vector2 (Transform2D::*)(const Vector2 &) const>(&Transform2D::basis_xform)>("basis_xform")
			.fun<static_cast<Vector2 (Transform2D::*)(const Vector2 &) const>(&Transform2D::basis_xform_inv)>("basis_xform_inv")
			.fun<static_cast<Transform2D (Transform2D::*)(const Transform2D &, real_t) const>(&Transform2D::interpolate_with)>("interpolate_with")
			.fun<static_cast<bool (Transform2D::*)() const>(&Transform2D::is_conformal)>("is_conformal")
			.fun<static_cast<bool (Transform2D::*)(const Transform2D &) const>(&Transform2D::is_equal_approx)>("is_equal_approx")
			.fun<static_cast<bool (Transform2D::*)() const>(&Transform2D::is_finite)>("is_finite")
			.fun<static_cast<Transform2D (Transform2D::*)(const Vector2 &) const>(&Transform2D::looking_at)>("looking_at");
}