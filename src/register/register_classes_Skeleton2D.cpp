#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/skeleton2d.hpp>

using namespace godot;

void register_classes_Skeleton2D() {
    qjs::Context::Module &_module = _Node2D;
    _module.class_<Skeleton2D>("Skeleton2D")
           .constructor<>()
		    .fun<static_cast<int32_t(Skeleton2D::*)()const>(&Skeleton2D::get_bone_count)>("get_bone_count")
		    .fun<static_cast<Bone2D *(Skeleton2D::*)(int32_t)>(&Skeleton2D::get_bone)>("get_bone")
		    .fun<static_cast<RID(Skeleton2D::*)()const>(&Skeleton2D::get_skeleton)>("get_skeleton")
		    .fun<static_cast<void(Skeleton2D::*)(const Ref<SkeletonModificationStack2D> &)>(&Skeleton2D::set_modification_stack)>("set_modification_stack")
		    .fun<static_cast<Ref<SkeletonModificationStack2D>(Skeleton2D::*)()const>(&Skeleton2D::get_modification_stack)>("get_modification_stack")
		    .fun<static_cast<void(Skeleton2D::*)(double,int32_t)>(&Skeleton2D::execute_modifications)>("execute_modifications")
		    .fun<static_cast<void(Skeleton2D::*)(int32_t,const Transform2D &,double,bool)>(&Skeleton2D::set_bone_local_pose_override)>("set_bone_local_pose_override")
		    .fun<static_cast<Transform2D(Skeleton2D::*)(int32_t)>(&Skeleton2D::get_bone_local_pose_override)>("get_bone_local_pose_override")
;}