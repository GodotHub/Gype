
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/classes/physics_direct_space_state3d.hpp>
#include <godot_cpp/classes/physics_point_query_parameters3d.hpp>
#include <godot_cpp/classes/physics_ray_query_parameters3d.hpp>
#include <godot_cpp/classes/physics_shape_query_parameters3d.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/dictionary.hpp>
#include <godot_cpp/variant/packed_float32_array.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <godot_cpp/variant/vector3.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_PhysicsDirectSpaceState3D() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<PhysicsDirectSpaceState3D>("PhysicsDirectSpaceState3D")
			.constructor<>()
			.base<Object>()
			.fun<static_cast<TypedArray<Dictionary> (PhysicsDirectSpaceState3D::*)(const Ref<PhysicsPointQueryParameters3D> &, int32_t)>(&PhysicsDirectSpaceState3D::intersect_point)>((new std::string("intersect_point"))->c_str())
			.fun<static_cast<Dictionary (PhysicsDirectSpaceState3D::*)(const Ref<PhysicsRayQueryParameters3D> &)>(&PhysicsDirectSpaceState3D::intersect_ray)>((new std::string("intersect_ray"))->c_str())
			.fun<static_cast<TypedArray<Dictionary> (PhysicsDirectSpaceState3D::*)(const Ref<PhysicsShapeQueryParameters3D> &, int32_t)>(&PhysicsDirectSpaceState3D::intersect_shape)>((new std::string("intersect_shape"))->c_str())
			.fun<static_cast<PackedFloat32Array (PhysicsDirectSpaceState3D::*)(const Ref<PhysicsShapeQueryParameters3D> &)>(&PhysicsDirectSpaceState3D::cast_motion)>((new std::string("cast_motion"))->c_str())
			.fun<static_cast<TypedArray<Vector3> (PhysicsDirectSpaceState3D::*)(const Ref<PhysicsShapeQueryParameters3D> &, int32_t)>(&PhysicsDirectSpaceState3D::collide_shape)>((new std::string("collide_shape"))->c_str())
			.fun<static_cast<Dictionary (PhysicsDirectSpaceState3D::*)(const Ref<PhysicsShapeQueryParameters3D> &)>(&PhysicsDirectSpaceState3D::get_rest_info)>((new std::string("get_rest_info"))->c_str());
}