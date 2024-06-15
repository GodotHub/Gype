#include <godot_cpp/classes/skeleton_modifier3d.hpp>
#include <godot_cpp/classes/node3d.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_SkeletonModifier3D() {
    qjs::Context::Module &_module = get_Node3D_module();
    _module.class_<SkeletonModifier3D>("SkeletonModifier3D")
            .constructor<>()
            .base<Node3D>()
            .property<static_cast<bool(SkeletonModifier3D::*)()const>(&SkeletonModifier3D::is_active),static_cast<void(SkeletonModifier3D::*)(bool)>(&SkeletonModifier3D::set_active)>("active")
            .property<static_cast<double(SkeletonModifier3D::*)()const>(&SkeletonModifier3D::get_influence),static_cast<void(SkeletonModifier3D::*)(double)>(&SkeletonModifier3D::set_influence)>("influence")
            .fun<static_cast<void(SkeletonModifier3D::*)()>(&SkeletonModifier3D::_process_modification)>("_process_modification")
;}