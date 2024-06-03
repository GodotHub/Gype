#include "register/register_classes.h"
#include "register/utils.h"

using namespace godot;

void register_classes_SkeletonIK3D() {
    qjs::Context::Module &_module = _Node;
    _module.class_<SkeletonIK3D>("SkeletonIK3D")
           .constructor<>()
           .property<SkeletonIK3D::get_root_bone, SkeletonIK3D::set_root_bone>("root_bone")
           .property<SkeletonIK3D::get_tip_bone, SkeletonIK3D::set_tip_bone>("tip_bone")
           .property<SkeletonIK3D::get_interpolation, SkeletonIK3D::set_interpolation>("interpolation")
           .property<SkeletonIK3D::get_target_transform, SkeletonIK3D::set_target_transform>("target")
           .property<SkeletonIK3D::is_override_tip_basis, SkeletonIK3D::set_override_tip_basis>("override_tip_basis")
           .property<SkeletonIK3D::is_using_magnet, SkeletonIK3D::set_use_magnet>("use_magnet")
           .property<SkeletonIK3D::get_magnet_position, SkeletonIK3D::set_magnet_position>("magnet")
           .property<SkeletonIK3D::get_target_node, SkeletonIK3D::set_target_node>("target_node")
           .property<SkeletonIK3D::get_min_distance, SkeletonIK3D::set_min_distance>("min_distance")
           .property<SkeletonIK3D::get_max_iterations, SkeletonIK3D::set_max_iterations>("max_iterations")
		   .fun<static_cast<Skeleton3D *(SkeletonIK3D::*)()const>(&SkeletonIK3D::get_parent_skeleton)>("get_parent_skeleton")
		   .fun<static_cast<bool(SkeletonIK3D::*)()>(&SkeletonIK3D::is_running)>("is_running")
		   .fun<static_cast<void(SkeletonIK3D::*)(bool)>(&SkeletonIK3D::start)>("start")
		   .fun<static_cast<void(SkeletonIK3D::*)()>(&SkeletonIK3D::stop)>("stop")
;}