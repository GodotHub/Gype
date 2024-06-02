#include "register/register_builtin_classes.h"
#include "register/utils.h"

using namespace godot;

void register_builtin_classes_Transform3D() {
	_Variant.class_<Transform3D>("Transform3D")
            .constructor<>()
            .constructor<const Transform3D &>("Transform3D_1")
            .constructor<const Basis &,const Vector3 &>("Transform3D_2")
            .constructor<const Vector3 &,const Vector3 &,const Vector3 &,const Vector3 &>("Transform3D_3")
            .constructor<const Projection &>("Transform3D_4")

			.fun<static_cast<Transform3D(Transform3D::*)()const>(&Transform3D::inverse)>("inverse")
			.fun<static_cast<Transform3D(Transform3D::*)()const>(&Transform3D::affine_inverse)>("affine_inverse")
			.fun<static_cast<Transform3D(Transform3D::*)()const>(&Transform3D::orthonormalized)>("orthonormalized")
			.fun<static_cast<Transform3D(Transform3D::*)(const Vector3 &,real_t)const>(&Transform3D::rotated)>("rotated")
			.fun<static_cast<Transform3D(Transform3D::*)(const Vector3 &,real_t)const>(&Transform3D::rotated_local)>("rotated_local")
			.fun<static_cast<Transform3D(Transform3D::*)(const Vector3 &)const>(&Transform3D::scaled)>("scaled")
			.fun<static_cast<Transform3D(Transform3D::*)(const Vector3 &)const>(&Transform3D::scaled_local)>("scaled_local")
			.fun<static_cast<Transform3D(Transform3D::*)(const Vector3 &)const>(&Transform3D::translated)>("translated")
			.fun<static_cast<Transform3D(Transform3D::*)(const Vector3 &)const>(&Transform3D::translated_local)>("translated_local")
			.fun<static_cast<Transform3D(Transform3D::*)(const Vector3 &,const Vector3 &,bool)const>(&Transform3D::looking_at)>("looking_at")
			.fun<static_cast<Transform3D(Transform3D::*)(const Transform3D &,real_t)const>(&Transform3D::interpolate_with)>("interpolate_with")
			.fun<static_cast<bool(Transform3D::*)(const Transform3D &)const>(&Transform3D::is_equal_approx)>("is_equal_approx")
			.fun<static_cast<bool(Transform3D::*)()const>(&Transform3D::is_finite)>("is_finite");
}