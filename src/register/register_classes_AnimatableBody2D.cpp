#include <godot_cpp/classes/animatable_body2d.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"


using namespace godot;

void register_classes_AnimatableBody2D() {
	qjs::Context::Module &_module = _Node2D;
	_module.class_<AnimatableBody2D>("AnimatableBody2D")
			.constructor<>()
			.property<&AnimatableBody2D::is_sync_to_physics_enabled, &AnimatableBody2D::set_sync_to_physics>("sync_to_physics");
}