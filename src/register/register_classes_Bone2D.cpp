
#include <godot_cpp/classes/bone2d.hpp>
#include <godot_cpp/classes/node2d.hpp>
#include <godot_cpp/variant/transform2d.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_Bone2D() {
	qjs::Context::Module &_module = get_Node2D_module();
	_module.class_<Bone2D>("Bone2D")
			.constructor<>()
			.base<Node2D>()
			.property<static_cast<Transform2D (Bone2D::*)() const>(&Bone2D::get_rest), static_cast<void (Bone2D::*)(const Transform2D &)>(&Bone2D::set_rest)>((new std::string("rest"))->c_str())
			.fun<static_cast<void (Bone2D::*)()>(&Bone2D::apply_rest)>((new std::string("apply_rest"))->c_str())
			.fun<static_cast<Transform2D (Bone2D::*)() const>(&Bone2D::get_skeleton_rest)>((new std::string("get_skeleton_rest"))->c_str())
			.fun<static_cast<int32_t (Bone2D::*)() const>(&Bone2D::get_index_in_skeleton)>((new std::string("get_index_in_skeleton"))->c_str())
			.fun<static_cast<void (Bone2D::*)(bool)>(&Bone2D::set_autocalculate_length_and_angle)>((new std::string("set_autocalculate_length_and_angle"))->c_str())
			.fun<static_cast<bool (Bone2D::*)() const>(&Bone2D::get_autocalculate_length_and_angle)>((new std::string("get_autocalculate_length_and_angle"))->c_str())
			.fun<static_cast<void (Bone2D::*)(double)>(&Bone2D::set_length)>((new std::string("set_length"))->c_str())
			.fun<static_cast<double (Bone2D::*)() const>(&Bone2D::get_length)>((new std::string("get_length"))->c_str())
			.fun<static_cast<void (Bone2D::*)(double)>(&Bone2D::set_bone_angle)>((new std::string("set_bone_angle"))->c_str())
			.fun<static_cast<double (Bone2D::*)() const>(&Bone2D::get_bone_angle)>((new std::string("get_bone_angle"))->c_str());
}