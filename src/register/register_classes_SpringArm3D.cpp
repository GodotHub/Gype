
#include <godot_cpp/classes/node3d.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/shape3d.hpp>
#include <godot_cpp/classes/spring_arm3d.hpp>
#include <godot_cpp/variant/rid.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_SpringArm3D() {
	qjs::Context::Module &_module = get_Node3D_module();
	_module.class_<SpringArm3D>("SpringArm3D")
			.constructor<>()
			.base<Node3D>()
			.property<static_cast<uint32_t (SpringArm3D::*)()>(&SpringArm3D::get_collision_mask), static_cast<void (SpringArm3D::*)(uint32_t)>(&SpringArm3D::set_collision_mask)>((new std::string("collision_mask"))->c_str())
			.property<static_cast<Ref<Shape3D> (SpringArm3D::*)() const>(&SpringArm3D::get_shape), static_cast<void (SpringArm3D::*)(const Ref<Shape3D> &)>(&SpringArm3D::set_shape)>((new std::string("shape"))->c_str())
			.property<static_cast<double (SpringArm3D::*)() const>(&SpringArm3D::get_length), static_cast<void (SpringArm3D::*)(double)>(&SpringArm3D::set_length)>((new std::string("spring_length"))->c_str())
			.property<static_cast<double (SpringArm3D::*)()>(&SpringArm3D::get_margin), static_cast<void (SpringArm3D::*)(double)>(&SpringArm3D::set_margin)>((new std::string("margin"))->c_str())
			.fun<static_cast<double (SpringArm3D::*)()>(&SpringArm3D::get_hit_length)>((new std::string("get_hit_length"))->c_str())
			.fun<static_cast<void (SpringArm3D::*)(const RID &)>(&SpringArm3D::add_excluded_object)>((new std::string("add_excluded_object"))->c_str())
			.fun<static_cast<bool (SpringArm3D::*)(const RID &)>(&SpringArm3D::remove_excluded_object)>((new std::string("remove_excluded_object"))->c_str())
			.fun<static_cast<void (SpringArm3D::*)()>(&SpringArm3D::clear_excluded_objects)>((new std::string("clear_excluded_objects"))->c_str());
}