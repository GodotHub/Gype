#include <godot_cpp/classes/capsule_shape3d.hpp>
#include <godot_cpp/classes/shape3d.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_CapsuleShape3D() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<CapsuleShape3D>("CapsuleShape3D")
            .constructor<>()
            .base<Shape3D>()
            .property<static_cast<double(CapsuleShape3D::*)()const>(&CapsuleShape3D::get_radius),static_cast<void(CapsuleShape3D::*)(double)>(&CapsuleShape3D::set_radius)>("radius")
            .property<static_cast<double(CapsuleShape3D::*)()const>(&CapsuleShape3D::get_height),static_cast<void(CapsuleShape3D::*)(double)>(&CapsuleShape3D::set_height)>("height")
;}