#include <godot_cpp/classes/animatable_body3d.hpp>
#include <godot_cpp/classes/static_body3d.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_AnimatableBody3D() {
    qjs::Context::Module &_module = get_Node3D_module();
    _module.class_<AnimatableBody3D>("AnimatableBody3D")
            .constructor<>()
            .base<StaticBody3D>()
            .property<static_cast<bool(AnimatableBody3D::*)()const>(&AnimatableBody3D::is_sync_to_physics_enabled),static_cast<void(AnimatableBody3D::*)(bool)>(&AnimatableBody3D::set_sync_to_physics)>("sync_to_physics")
;}