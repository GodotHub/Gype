#include "register/register_classes.h"
#include "register/utils.h"

using namespace godot;

void register_classes_Bone2D() {
    qjs::Context::Module &_module = _Node2D;
    _module.class_<Bone2D>("Bone2D")
           .constructor<>()
           .property<Bone2D::get_rest, Bone2D::set_rest>("rest")
		   .fun<static_cast<void(Bone2D::*)()>(&Bone2D::apply_rest)>("apply_rest")
		   .fun<static_cast<Transform2D(Bone2D::*)()const>(&Bone2D::get_skeleton_rest)>("get_skeleton_rest")
		   .fun<static_cast<int32_t(Bone2D::*)()const>(&Bone2D::get_index_in_skeleton)>("get_index_in_skeleton")
		   .fun<static_cast<void(Bone2D::*)(bool)>(&Bone2D::set_autocalculate_length_and_angle)>("set_autocalculate_length_and_angle")
		   .fun<static_cast<bool(Bone2D::*)()const>(&Bone2D::get_autocalculate_length_and_angle)>("get_autocalculate_length_and_angle")
		   .fun<static_cast<void(Bone2D::*)(double)>(&Bone2D::set_length)>("set_length")
		   .fun<static_cast<double(Bone2D::*)()const>(&Bone2D::get_length)>("get_length")
		   .fun<static_cast<void(Bone2D::*)(double)>(&Bone2D::set_bone_angle)>("set_bone_angle")
		   .fun<static_cast<double(Bone2D::*)()const>(&Bone2D::get_bone_angle)>("get_bone_angle")
;}