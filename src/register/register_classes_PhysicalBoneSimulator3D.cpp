#include <godot_cpp/classes/physical_bone_simulator3d.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <godot_cpp/classes/skeleton_modifier3d.hpp>
#include <godot_cpp/variant/rid.hpp>
#include <godot_cpp/variant/string_name.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_PhysicalBoneSimulator3D() {
    qjs::Context::Module &_module = get_Node3D_module();
    _module.class_<PhysicalBoneSimulator3D>("PhysicalBoneSimulator3D")
            .constructor<>()
            .base<SkeletonModifier3D>()
            .fun<static_cast<bool(PhysicalBoneSimulator3D::*)()const>(&PhysicalBoneSimulator3D::is_simulating_physics)>("is_simulating_physics")
            .fun<static_cast<void(PhysicalBoneSimulator3D::*)()>(&PhysicalBoneSimulator3D::physical_bones_stop_simulation)>("physical_bones_stop_simulation")
            .fun<static_cast<void(PhysicalBoneSimulator3D::*)(const TypedArray<StringName> &)>(&PhysicalBoneSimulator3D::physical_bones_start_simulation)>("physical_bones_start_simulation")
            .fun<static_cast<void(PhysicalBoneSimulator3D::*)(const RID &)>(&PhysicalBoneSimulator3D::physical_bones_add_collision_exception)>("physical_bones_add_collision_exception")
            .fun<static_cast<void(PhysicalBoneSimulator3D::*)(const RID &)>(&PhysicalBoneSimulator3D::physical_bones_remove_collision_exception)>("physical_bones_remove_collision_exception")
;}