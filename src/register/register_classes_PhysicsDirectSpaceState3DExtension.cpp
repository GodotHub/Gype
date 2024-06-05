#include <godot_cpp/classes/physics_direct_space_state3d_extension.hpp>
#include <godot_cpp/classes/physics_server3d_extension_ray_result.hpp>
#include <godot_cpp/classes/physics_server3d_extension_shape_rest_info.hpp>
#include <godot_cpp/classes/physics_server3d_extension_shape_result.hpp>
#include <godot_cpp/variant/rid.hpp>
#include <godot_cpp/variant/transform3d.hpp>
#include <godot_cpp/variant/vector3.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_PhysicsDirectSpaceState3DExtension() {
	qjs::Context::Module &_module = _General;
	_module.class_<PhysicsDirectSpaceState3DExtension>("PhysicsDirectSpaceState3DExtension")
			.constructor<>()
			.fun<static_cast<bool (PhysicsDirectSpaceState3DExtension::*)(const Vector3 &, const Vector3 &, uint32_t, bool, bool, bool, bool, bool, PhysicsServer3DExtensionRayResult *)>(&PhysicsDirectSpaceState3DExtension::_intersect_ray)>("_intersect_ray")
			.fun<static_cast<int32_t (PhysicsDirectSpaceState3DExtension::*)(const Vector3 &, uint32_t, bool, bool, PhysicsServer3DExtensionShapeResult *, int32_t)>(&PhysicsDirectSpaceState3DExtension::_intersect_point)>("_intersect_point")
			.fun<static_cast<int32_t (PhysicsDirectSpaceState3DExtension::*)(const RID &, const Transform3D &, const Vector3 &, double, uint32_t, bool, bool, PhysicsServer3DExtensionShapeResult *, int32_t)>(&PhysicsDirectSpaceState3DExtension::_intersect_shape)>("_intersect_shape")
			.fun<static_cast<bool (PhysicsDirectSpaceState3DExtension::*)(const RID &, const Transform3D &, const Vector3 &, double, uint32_t, bool, bool, float *, float *, PhysicsServer3DExtensionShapeRestInfo *)>(&PhysicsDirectSpaceState3DExtension::_cast_motion)>("_cast_motion")
			.fun<static_cast<bool (PhysicsDirectSpaceState3DExtension::*)(const RID &, const Transform3D &, const Vector3 &, double, uint32_t, bool, bool, void *, int32_t, int32_t *)>(&PhysicsDirectSpaceState3DExtension::_collide_shape)>("_collide_shape")
			.fun<static_cast<bool (PhysicsDirectSpaceState3DExtension::*)(const RID &, const Transform3D &, const Vector3 &, double, uint32_t, bool, bool, PhysicsServer3DExtensionShapeRestInfo *)>(&PhysicsDirectSpaceState3DExtension::_rest_info)>("_rest_info")
			.fun<static_cast<Vector3 (PhysicsDirectSpaceState3DExtension::*)(const RID &, const Vector3 &) const>(&PhysicsDirectSpaceState3DExtension::_get_closest_point_to_object_volume)>("_get_closest_point_to_object_volume")
			.fun<static_cast<bool (PhysicsDirectSpaceState3DExtension::*)(const RID &) const>(&PhysicsDirectSpaceState3DExtension::is_body_excluded_from_query)>("is_body_excluded_from_query");
}