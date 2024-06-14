
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/classes/physics_direct_space_state2d.hpp>
#include <godot_cpp/classes/physics_point_query_parameters2d.hpp>
#include <godot_cpp/classes/physics_ray_query_parameters2d.hpp>
#include <godot_cpp/classes/physics_shape_query_parameters2d.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/dictionary.hpp>
#include <godot_cpp/variant/packed_float32_array.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_PhysicsDirectSpaceState2D() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<PhysicsDirectSpaceState2D>("PhysicsDirectSpaceState2D")
			.constructor<>()
			.base<Object>()
			.fun<static_cast<TypedArray<Dictionary> (PhysicsDirectSpaceState2D::*)(const Ref<PhysicsPointQueryParameters2D> &, int32_t)>(&PhysicsDirectSpaceState2D::intersect_point)>((new std::string("intersect_point"))->c_str())
			.fun<static_cast<Dictionary (PhysicsDirectSpaceState2D::*)(const Ref<PhysicsRayQueryParameters2D> &)>(&PhysicsDirectSpaceState2D::intersect_ray)>((new std::string("intersect_ray"))->c_str())
			.fun<static_cast<TypedArray<Dictionary> (PhysicsDirectSpaceState2D::*)(const Ref<PhysicsShapeQueryParameters2D> &, int32_t)>(&PhysicsDirectSpaceState2D::intersect_shape)>((new std::string("intersect_shape"))->c_str())
			.fun<static_cast<PackedFloat32Array (PhysicsDirectSpaceState2D::*)(const Ref<PhysicsShapeQueryParameters2D> &)>(&PhysicsDirectSpaceState2D::cast_motion)>((new std::string("cast_motion"))->c_str())
			.fun<static_cast<TypedArray<Vector2> (PhysicsDirectSpaceState2D::*)(const Ref<PhysicsShapeQueryParameters2D> &, int32_t)>(&PhysicsDirectSpaceState2D::collide_shape)>((new std::string("collide_shape"))->c_str())
			.fun<static_cast<Dictionary (PhysicsDirectSpaceState2D::*)(const Ref<PhysicsShapeQueryParameters2D> &)>(&PhysicsDirectSpaceState2D::get_rest_info)>((new std::string("get_rest_info"))->c_str());
}