#include <godot_cpp/classes/animatable_body2d.hpp>
#include <godot_cpp/classes/static_body2d.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_AnimatableBody2D() {
    qjs::Context::Module &_module = get_Node2D_module();
    _module.class_<AnimatableBody2D>("AnimatableBody2D")
            .constructor<>()
            .base<StaticBody2D>()
            .property<static_cast<bool(AnimatableBody2D::*)()const>(&AnimatableBody2D::is_sync_to_physics_enabled),static_cast<void(AnimatableBody2D::*)(bool)>(&AnimatableBody2D::set_sync_to_physics)>("sync_to_physics")
;}