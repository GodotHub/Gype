#include <godot_cpp/classes/skeleton_ik3d.hpp>
#include <godot_cpp/variant/transform3d.hpp>
#include <godot_cpp/variant/vector3.hpp>
#include <godot_cpp/classes/skeleton3d.hpp>
#include <godot_cpp/classes/skeleton_modifier3d.hpp>
#include <godot_cpp/variant/node_path.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <stdint.h>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_SkeletonIK3D() {
    qjs::Context::Module &_module = get_Node3D_module();
    _module.class_<SkeletonIK3D>("SkeletonIK3D")
            .constructor<>()
            .base<SkeletonModifier3D>()
            .property<static_cast<StringName(SkeletonIK3D::*)()const>(&SkeletonIK3D::get_root_bone),static_cast<void(SkeletonIK3D::*)(const StringName &)>(&SkeletonIK3D::set_root_bone)>("root_bone")
            .property<static_cast<StringName(SkeletonIK3D::*)()const>(&SkeletonIK3D::get_tip_bone),static_cast<void(SkeletonIK3D::*)(const StringName &)>(&SkeletonIK3D::set_tip_bone)>("tip_bone")
            .property<static_cast<Transform3D(SkeletonIK3D::*)()const>(&SkeletonIK3D::get_target_transform),static_cast<void(SkeletonIK3D::*)(const Transform3D &)>(&SkeletonIK3D::set_target_transform)>("target")
            .property<static_cast<bool(SkeletonIK3D::*)()const>(&SkeletonIK3D::is_override_tip_basis),static_cast<void(SkeletonIK3D::*)(bool)>(&SkeletonIK3D::set_override_tip_basis)>("override_tip_basis")
            .property<static_cast<bool(SkeletonIK3D::*)()const>(&SkeletonIK3D::is_using_magnet),static_cast<void(SkeletonIK3D::*)(bool)>(&SkeletonIK3D::set_use_magnet)>("use_magnet")
            .property<static_cast<Vector3(SkeletonIK3D::*)()const>(&SkeletonIK3D::get_magnet_position),static_cast<void(SkeletonIK3D::*)(const Vector3 &)>(&SkeletonIK3D::set_magnet_position)>("magnet")
            .property<static_cast<NodePath(SkeletonIK3D::*)()>(&SkeletonIK3D::get_target_node),static_cast<void(SkeletonIK3D::*)(const NodePath &)>(&SkeletonIK3D::set_target_node)>("target_node")
            .property<static_cast<double(SkeletonIK3D::*)()const>(&SkeletonIK3D::get_min_distance),static_cast<void(SkeletonIK3D::*)(double)>(&SkeletonIK3D::set_min_distance)>("min_distance")
            .property<static_cast<int32_t(SkeletonIK3D::*)()const>(&SkeletonIK3D::get_max_iterations),static_cast<void(SkeletonIK3D::*)(int32_t)>(&SkeletonIK3D::set_max_iterations)>("max_iterations")
            .property<static_cast<double(SkeletonIK3D::*)()const>(&SkeletonIK3D::get_interpolation),static_cast<void(SkeletonIK3D::*)(double)>(&SkeletonIK3D::set_interpolation)>("interpolation")
            .fun<static_cast<Skeleton3D *(SkeletonIK3D::*)()const>(&SkeletonIK3D::get_parent_skeleton)>("get_parent_skeleton")
            .fun<static_cast<bool(SkeletonIK3D::*)()>(&SkeletonIK3D::is_running)>("is_running")
            .fun<static_cast<void(SkeletonIK3D::*)(bool)>(&SkeletonIK3D::start)>("start")
            .fun<static_cast<void(SkeletonIK3D::*)()>(&SkeletonIK3D::stop)>("stop")
;}