#include <godot_cpp/classes/capsule_shape2d.hpp>
#include <godot_cpp/classes/shape2d.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_CapsuleShape2D() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<CapsuleShape2D>("CapsuleShape2D")
            .constructor<>()
            .base<Shape2D>()
            .property<static_cast<double(CapsuleShape2D::*)()const>(&CapsuleShape2D::get_radius),static_cast<void(CapsuleShape2D::*)(double)>(&CapsuleShape2D::set_radius)>("radius")
            .property<static_cast<double(CapsuleShape2D::*)()const>(&CapsuleShape2D::get_height),static_cast<void(CapsuleShape2D::*)(double)>(&CapsuleShape2D::set_height)>("height")
;}