#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/sphere_shape3d.hpp>

using namespace godot;

void register_classes_SphereShape3D() {
    qjs::Context::Module &_module = _General;
    _module.class_<SphereShape3D>("SphereShape3D")
           .constructor<>()
           .property<SphereShape3D::get_radius, SphereShape3D::set_radius>("radius")
;}