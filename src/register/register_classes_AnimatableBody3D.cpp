#include <godot_cpp/classes/animatable_body3d.hpp>
#include <godot_cpp/classes/static_body3d.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_AnimatableBody3D() {
	qjs::Context::Module &_module = get_Node3D_module();
	_module.class_<AnimatableBody3D>("AnimatableBody3D")
			.constructor<>()
			.base<StaticBody3D>()
			.property<static_cast<bool (AnimatableBody3D::*)() const>(&AnimatableBody3D::is_sync_to_physics_enabled), static_cast<void (AnimatableBody3D::*)(bool)>(&AnimatableBody3D::set_sync_to_physics)>((new std::string("sync_to_physics"))->c_str());
}