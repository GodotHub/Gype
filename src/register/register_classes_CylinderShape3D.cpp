#include <godot_cpp/classes/cylinder_shape3d.hpp>
#include <godot_cpp/classes/shape3d.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_CylinderShape3D() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<CylinderShape3D>("CylinderShape3D")
            .constructor<>()
            .base<Shape3D>()
            .property<static_cast<double(CylinderShape3D::*)()const>(&CylinderShape3D::get_height),static_cast<void(CylinderShape3D::*)(double)>(&CylinderShape3D::set_height)>("height")
            .property<static_cast<double(CylinderShape3D::*)()const>(&CylinderShape3D::get_radius),static_cast<void(CylinderShape3D::*)(double)>(&CylinderShape3D::set_radius)>("radius")
;}