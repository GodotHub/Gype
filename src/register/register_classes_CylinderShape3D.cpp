#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/cylinder_shape3d.hpp>

using namespace godot;

void register_classes_CylinderShape3D() {
    qjs::Context::Module &_module = _General;
    _module.class_<CylinderShape3D>("CylinderShape3D")
           .constructor<>()
           .property<CylinderShape3D::get_height, CylinderShape3D::set_height>("height")
           .property<CylinderShape3D::get_radius, CylinderShape3D::set_radius>("radius")
;}