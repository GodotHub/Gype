#include "register/register_builtin_classes.h"
#include "register/utils.h"

using namespace godot;

void register_builtin_classes_Plane() {
	_Variant.class_<Plane>("Plane")
			.constructor<>()
			.constructor<const Plane &>("Plane_1")
			.constructor<const Vector3 &>("Plane_2")
			.constructor<const Vector3 &, real_t>("Plane_3")
			.constructor<const Vector3 &, const Vector3 &>("Plane_4")
			.constructor<const Vector3 &, const Vector3 &, const Vector3 &>("Plane_5")
			.constructor<real_t, real_t, real_t, real_t>("Plane_6")

			.fun<static_cast<Plane (Plane::*)() const>(&Plane::normalized)>("normalized")
			.fun<static_cast<bool (Plane::*)(const Plane &) const>(&Plane::is_equal_approx)>("is_equal_approx")
			.fun<static_cast<bool (Plane::*)() const>(&Plane::is_finite)>("is_finite")
			.fun<static_cast<bool (Plane::*)(const Vector3 &) const>(&Plane::is_point_over)>("is_point_over")
			.fun<static_cast<real_t (Plane::*)(const Vector3 &) const>(&Plane::distance_to)>("distance_to")
			.fun<static_cast<bool (Plane::*)(const Vector3 &, real_t) const>(&Plane::has_point)>("has_point")
			.fun<static_cast<Vector3 (Plane::*)(const Vector3 &) const>(&Plane::project)>("project")
			.fun<static_cast<bool (Plane::*)(const Plane &, const Plane &) const>(&Plane::intersect_3)>("intersect_3")
			.fun<static_cast<bool (Plane::*)(const Vector3 &, const Vector3 &) const>(&Plane::intersects_ray)>("intersects_ray")
			.fun<static_cast<bool (Plane::*)(const Vector3 &, const Vector3 &) const>(&Plane::intersects_segment)>("intersects_segment");
}