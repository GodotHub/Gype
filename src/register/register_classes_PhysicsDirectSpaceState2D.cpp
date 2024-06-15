#include <godot_cpp/classes/physics_direct_space_state2d.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/classes/physics_point_query_parameters2d.hpp>
#include <godot_cpp/classes/physics_ray_query_parameters2d.hpp>
#include <godot_cpp/classes/physics_shape_query_parameters2d.hpp>
#include <godot_cpp/variant/dictionary.hpp>
#include <godot_cpp/variant/packed_float32_array.hpp>
#include <stdint.h>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_PhysicsDirectSpaceState2D() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<PhysicsDirectSpaceState2D>("PhysicsDirectSpaceState2D")
            .constructor<>()
            .base<Object>()
            .fun<static_cast<TypedArray<Dictionary>(PhysicsDirectSpaceState2D::*)(const Ref<PhysicsPointQueryParameters2D> &,int32_t)>(&PhysicsDirectSpaceState2D::intersect_point)>("intersect_point")
            .fun<static_cast<Dictionary(PhysicsDirectSpaceState2D::*)(const Ref<PhysicsRayQueryParameters2D> &)>(&PhysicsDirectSpaceState2D::intersect_ray)>("intersect_ray")
            .fun<static_cast<TypedArray<Dictionary>(PhysicsDirectSpaceState2D::*)(const Ref<PhysicsShapeQueryParameters2D> &,int32_t)>(&PhysicsDirectSpaceState2D::intersect_shape)>("intersect_shape")
            .fun<static_cast<PackedFloat32Array(PhysicsDirectSpaceState2D::*)(const Ref<PhysicsShapeQueryParameters2D> &)>(&PhysicsDirectSpaceState2D::cast_motion)>("cast_motion")
            .fun<static_cast<TypedArray<Vector2>(PhysicsDirectSpaceState2D::*)(const Ref<PhysicsShapeQueryParameters2D> &,int32_t)>(&PhysicsDirectSpaceState2D::collide_shape)>("collide_shape")
            .fun<static_cast<Dictionary(PhysicsDirectSpaceState2D::*)(const Ref<PhysicsShapeQueryParameters2D> &)>(&PhysicsDirectSpaceState2D::get_rest_info)>("get_rest_info")
;}