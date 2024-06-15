#include <godot_cpp/classes/physics_direct_space_state3d.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <godot_cpp/variant/vector3.hpp>
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/classes/physics_point_query_parameters3d.hpp>
#include <godot_cpp/classes/physics_ray_query_parameters3d.hpp>
#include <godot_cpp/classes/physics_shape_query_parameters3d.hpp>
#include <godot_cpp/variant/dictionary.hpp>
#include <godot_cpp/variant/packed_float32_array.hpp>
#include <stdint.h>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_PhysicsDirectSpaceState3D() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<PhysicsDirectSpaceState3D>("PhysicsDirectSpaceState3D")
            .constructor<>()
            .base<Object>()
            .fun<static_cast<TypedArray<Dictionary>(PhysicsDirectSpaceState3D::*)(const Ref<PhysicsPointQueryParameters3D> &,int32_t)>(&PhysicsDirectSpaceState3D::intersect_point)>("intersect_point")
            .fun<static_cast<Dictionary(PhysicsDirectSpaceState3D::*)(const Ref<PhysicsRayQueryParameters3D> &)>(&PhysicsDirectSpaceState3D::intersect_ray)>("intersect_ray")
            .fun<static_cast<TypedArray<Dictionary>(PhysicsDirectSpaceState3D::*)(const Ref<PhysicsShapeQueryParameters3D> &,int32_t)>(&PhysicsDirectSpaceState3D::intersect_shape)>("intersect_shape")
            .fun<static_cast<PackedFloat32Array(PhysicsDirectSpaceState3D::*)(const Ref<PhysicsShapeQueryParameters3D> &)>(&PhysicsDirectSpaceState3D::cast_motion)>("cast_motion")
            .fun<static_cast<TypedArray<Vector3>(PhysicsDirectSpaceState3D::*)(const Ref<PhysicsShapeQueryParameters3D> &,int32_t)>(&PhysicsDirectSpaceState3D::collide_shape)>("collide_shape")
            .fun<static_cast<Dictionary(PhysicsDirectSpaceState3D::*)(const Ref<PhysicsShapeQueryParameters3D> &)>(&PhysicsDirectSpaceState3D::get_rest_info)>("get_rest_info")
;}