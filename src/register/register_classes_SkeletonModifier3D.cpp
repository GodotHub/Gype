#include <godot_cpp/classes/node3d.hpp>
#include <godot_cpp/classes/skeleton_modifier3d.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_SkeletonModifier3D() {
	qjs::Context::Module &_module = get_Node3D_module();
	_module.class_<SkeletonModifier3D>("SkeletonModifier3D")
			.constructor<>()
			.base<Node3D>()
			.property<static_cast<bool (SkeletonModifier3D::*)() const>(&SkeletonModifier3D::is_active), static_cast<void (SkeletonModifier3D::*)(bool)>(&SkeletonModifier3D::set_active)>((new std::string("active"))->c_str())
			.property<static_cast<double (SkeletonModifier3D::*)() const>(&SkeletonModifier3D::get_influence), static_cast<void (SkeletonModifier3D::*)(double)>(&SkeletonModifier3D::set_influence)>((new std::string("influence"))->c_str())
			.fun<static_cast<void (SkeletonModifier3D::*)()>(&SkeletonModifier3D::_process_modification)>((new std::string("_process_modification"))->c_str());
}