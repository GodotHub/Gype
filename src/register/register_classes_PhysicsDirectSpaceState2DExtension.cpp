
#include <godot_cpp/classes/physics_direct_space_state2d.hpp>
#include <godot_cpp/classes/physics_direct_space_state2d_extension.hpp>
#include <godot_cpp/classes/physics_server2d_extension_ray_result.hpp>
#include <godot_cpp/classes/physics_server2d_extension_shape_rest_info.hpp>
#include <godot_cpp/classes/physics_server2d_extension_shape_result.hpp>
#include <godot_cpp/variant/rid.hpp>
#include <godot_cpp/variant/transform2d.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_PhysicsDirectSpaceState2DExtension() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<PhysicsDirectSpaceState2DExtension>("PhysicsDirectSpaceState2DExtension")
			.constructor<>()
			.base<PhysicsDirectSpaceState2D>()
			.fun<static_cast<bool (PhysicsDirectSpaceState2DExtension::*)(const Vector2 &, const Vector2 &, uint32_t, bool, bool, bool, PhysicsServer2DExtensionRayResult *)>(&PhysicsDirectSpaceState2DExtension::_intersect_ray)>((new std::string("_intersect_ray"))->c_str())
			.fun<static_cast<int32_t (PhysicsDirectSpaceState2DExtension::*)(const Vector2 &, uint64_t, uint32_t, bool, bool, PhysicsServer2DExtensionShapeResult *, int32_t)>(&PhysicsDirectSpaceState2DExtension::_intersect_point)>((new std::string("_intersect_point"))->c_str())
			.fun<static_cast<int32_t (PhysicsDirectSpaceState2DExtension::*)(const RID &, const Transform2D &, const Vector2 &, double, uint32_t, bool, bool, PhysicsServer2DExtensionShapeResult *, int32_t)>(&PhysicsDirectSpaceState2DExtension::_intersect_shape)>((new std::string("_intersect_shape"))->c_str())
			.fun<static_cast<bool (PhysicsDirectSpaceState2DExtension::*)(const RID &, const Transform2D &, const Vector2 &, double, uint32_t, bool, bool, float *, float *)>(&PhysicsDirectSpaceState2DExtension::_cast_motion)>((new std::string("_cast_motion"))->c_str())
			.fun<static_cast<bool (PhysicsDirectSpaceState2DExtension::*)(const RID &, const Transform2D &, const Vector2 &, double, uint32_t, bool, bool, void *, int32_t, int32_t *)>(&PhysicsDirectSpaceState2DExtension::_collide_shape)>((new std::string("_collide_shape"))->c_str())
			.fun<static_cast<bool (PhysicsDirectSpaceState2DExtension::*)(const RID &, const Transform2D &, const Vector2 &, double, uint32_t, bool, bool, PhysicsServer2DExtensionShapeRestInfo *)>(&PhysicsDirectSpaceState2DExtension::_rest_info)>((new std::string("_rest_info"))->c_str())
			.fun<static_cast<bool (PhysicsDirectSpaceState2DExtension::*)(const RID &) const>(&PhysicsDirectSpaceState2DExtension::is_body_excluded_from_query)>((new std::string("is_body_excluded_from_query"))->c_str());
}