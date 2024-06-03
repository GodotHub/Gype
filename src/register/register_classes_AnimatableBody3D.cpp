#include "register/register_classes.h"
#include "register/utils.h"

using namespace godot;

void register_classes_AnimatableBody3D() {
    qjs::Context::Module &_module = _Node3D;
    _module.class_<AnimatableBody3D>("AnimatableBody3D")
           .constructor<>()
           .property<AnimatableBody3D::is_sync_to_physics_enabled, AnimatableBody3D::set_sync_to_physics>("sync_to_physics")
;}