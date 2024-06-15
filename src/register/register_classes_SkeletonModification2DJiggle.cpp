#include <godot_cpp/classes/skeleton_modification2d_jiggle.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <godot_cpp/classes/skeleton_modification2d.hpp>
#include <godot_cpp/variant/node_path.hpp>
#include <stdint.h>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_SkeletonModification2DJiggle() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<SkeletonModification2DJiggle>("SkeletonModification2DJiggle")
            .constructor<>()
            .base<SkeletonModification2D>()
            .property<static_cast<NodePath(SkeletonModification2DJiggle::*)()const>(&SkeletonModification2DJiggle::get_target_node),static_cast<void(SkeletonModification2DJiggle::*)(const NodePath &)>(&SkeletonModification2DJiggle::set_target_node)>("target_nodepath")
            .property<static_cast<int32_t(SkeletonModification2DJiggle::*)()>(&SkeletonModification2DJiggle::get_jiggle_data_chain_length),static_cast<void(SkeletonModification2DJiggle::*)(int32_t)>(&SkeletonModification2DJiggle::set_jiggle_data_chain_length)>("jiggle_data_chain_length")
            .property<static_cast<double(SkeletonModification2DJiggle::*)()const>(&SkeletonModification2DJiggle::get_stiffness),static_cast<void(SkeletonModification2DJiggle::*)(double)>(&SkeletonModification2DJiggle::set_stiffness)>("stiffness")
            .property<static_cast<double(SkeletonModification2DJiggle::*)()const>(&SkeletonModification2DJiggle::get_mass),static_cast<void(SkeletonModification2DJiggle::*)(double)>(&SkeletonModification2DJiggle::set_mass)>("mass")
            .property<static_cast<double(SkeletonModification2DJiggle::*)()const>(&SkeletonModification2DJiggle::get_damping),static_cast<void(SkeletonModification2DJiggle::*)(double)>(&SkeletonModification2DJiggle::set_damping)>("damping")
            .property<static_cast<bool(SkeletonModification2DJiggle::*)()const>(&SkeletonModification2DJiggle::get_use_gravity),static_cast<void(SkeletonModification2DJiggle::*)(bool)>(&SkeletonModification2DJiggle::set_use_gravity)>("use_gravity")
            .property<static_cast<Vector2(SkeletonModification2DJiggle::*)()const>(&SkeletonModification2DJiggle::get_gravity),static_cast<void(SkeletonModification2DJiggle::*)(const Vector2 &)>(&SkeletonModification2DJiggle::set_gravity)>("gravity")
            .fun<static_cast<void(SkeletonModification2DJiggle::*)(bool)>(&SkeletonModification2DJiggle::set_use_colliders)>("set_use_colliders")
            .fun<static_cast<bool(SkeletonModification2DJiggle::*)()const>(&SkeletonModification2DJiggle::get_use_colliders)>("get_use_colliders")
            .fun<static_cast<void(SkeletonModification2DJiggle::*)(int32_t)>(&SkeletonModification2DJiggle::set_collision_mask)>("set_collision_mask")
            .fun<static_cast<int32_t(SkeletonModification2DJiggle::*)()const>(&SkeletonModification2DJiggle::get_collision_mask)>("get_collision_mask")
            .fun<static_cast<void(SkeletonModification2DJiggle::*)(int32_t,const NodePath &)>(&SkeletonModification2DJiggle::set_jiggle_joint_bone2d_node)>("set_jiggle_joint_bone2d_node")
            .fun<static_cast<NodePath(SkeletonModification2DJiggle::*)(int32_t)const>(&SkeletonModification2DJiggle::get_jiggle_joint_bone2d_node)>("get_jiggle_joint_bone2d_node")
            .fun<static_cast<void(SkeletonModification2DJiggle::*)(int32_t,int32_t)>(&SkeletonModification2DJiggle::set_jiggle_joint_bone_index)>("set_jiggle_joint_bone_index")
            .fun<static_cast<int32_t(SkeletonModification2DJiggle::*)(int32_t)const>(&SkeletonModification2DJiggle::get_jiggle_joint_bone_index)>("get_jiggle_joint_bone_index")
            .fun<static_cast<void(SkeletonModification2DJiggle::*)(int32_t,bool)>(&SkeletonModification2DJiggle::set_jiggle_joint_override)>("set_jiggle_joint_override")
            .fun<static_cast<bool(SkeletonModification2DJiggle::*)(int32_t)const>(&SkeletonModification2DJiggle::get_jiggle_joint_override)>("get_jiggle_joint_override")
            .fun<static_cast<void(SkeletonModification2DJiggle::*)(int32_t,double)>(&SkeletonModification2DJiggle::set_jiggle_joint_stiffness)>("set_jiggle_joint_stiffness")
            .fun<static_cast<double(SkeletonModification2DJiggle::*)(int32_t)const>(&SkeletonModification2DJiggle::get_jiggle_joint_stiffness)>("get_jiggle_joint_stiffness")
            .fun<static_cast<void(SkeletonModification2DJiggle::*)(int32_t,double)>(&SkeletonModification2DJiggle::set_jiggle_joint_mass)>("set_jiggle_joint_mass")
            .fun<static_cast<double(SkeletonModification2DJiggle::*)(int32_t)const>(&SkeletonModification2DJiggle::get_jiggle_joint_mass)>("get_jiggle_joint_mass")
            .fun<static_cast<void(SkeletonModification2DJiggle::*)(int32_t,double)>(&SkeletonModification2DJiggle::set_jiggle_joint_damping)>("set_jiggle_joint_damping")
            .fun<static_cast<double(SkeletonModification2DJiggle::*)(int32_t)const>(&SkeletonModification2DJiggle::get_jiggle_joint_damping)>("get_jiggle_joint_damping")
            .fun<static_cast<void(SkeletonModification2DJiggle::*)(int32_t,bool)>(&SkeletonModification2DJiggle::set_jiggle_joint_use_gravity)>("set_jiggle_joint_use_gravity")
            .fun<static_cast<bool(SkeletonModification2DJiggle::*)(int32_t)const>(&SkeletonModification2DJiggle::get_jiggle_joint_use_gravity)>("get_jiggle_joint_use_gravity")
            .fun<static_cast<void(SkeletonModification2DJiggle::*)(int32_t,const Vector2 &)>(&SkeletonModification2DJiggle::set_jiggle_joint_gravity)>("set_jiggle_joint_gravity")
            .fun<static_cast<Vector2(SkeletonModification2DJiggle::*)(int32_t)const>(&SkeletonModification2DJiggle::get_jiggle_joint_gravity)>("get_jiggle_joint_gravity")
;}