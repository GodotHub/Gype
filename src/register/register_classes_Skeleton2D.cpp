
#include <godot_cpp/classes/bone2d.hpp>
#include <godot_cpp/classes/node2d.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/skeleton2d.hpp>
#include <godot_cpp/classes/skeleton_modification_stack2d.hpp>
#include <godot_cpp/variant/rid.hpp>
#include <godot_cpp/variant/transform2d.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_Skeleton2D() {
	qjs::Context::Module &_module = get_Node2D_module();
	_module.class_<Skeleton2D>("Skeleton2D")
			.constructor<>()
			.base<Node2D>()
			.fun<static_cast<int32_t (Skeleton2D::*)() const>(&Skeleton2D::get_bone_count)>((new std::string("get_bone_count"))->c_str())
			.fun<static_cast<Bone2D *(Skeleton2D::*)(int32_t)>(&Skeleton2D::get_bone)>((new std::string("get_bone"))->c_str())
			.fun<static_cast<RID (Skeleton2D::*)() const>(&Skeleton2D::get_skeleton)>((new std::string("get_skeleton"))->c_str())
			.fun<static_cast<void (Skeleton2D::*)(const Ref<SkeletonModificationStack2D> &)>(&Skeleton2D::set_modification_stack)>((new std::string("set_modification_stack"))->c_str())
			.fun<static_cast<Ref<SkeletonModificationStack2D> (Skeleton2D::*)() const>(&Skeleton2D::get_modification_stack)>((new std::string("get_modification_stack"))->c_str())
			.fun<static_cast<void (Skeleton2D::*)(double, int32_t)>(&Skeleton2D::execute_modifications)>((new std::string("execute_modifications"))->c_str())
			.fun<static_cast<void (Skeleton2D::*)(int32_t, const Transform2D &, double, bool)>(&Skeleton2D::set_bone_local_pose_override)>((new std::string("set_bone_local_pose_override"))->c_str())
			.fun<static_cast<Transform2D (Skeleton2D::*)(int32_t)>(&Skeleton2D::get_bone_local_pose_override)>((new std::string("get_bone_local_pose_override"))->c_str());
}