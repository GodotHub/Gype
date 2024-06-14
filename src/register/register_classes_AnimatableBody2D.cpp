#include <godot_cpp/classes/animatable_body2d.hpp>
#include <godot_cpp/classes/static_body2d.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_AnimatableBody2D() {
	qjs::Context::Module &_module = get_Node2D_module();
	_module.class_<AnimatableBody2D>("AnimatableBody2D")
			.constructor<>()
			.base<StaticBody2D>()
			.property<static_cast<bool (AnimatableBody2D::*)() const>(&AnimatableBody2D::is_sync_to_physics_enabled), static_cast<void (AnimatableBody2D::*)(bool)>(&AnimatableBody2D::set_sync_to_physics)>((new std::string("sync_to_physics"))->c_str());
}