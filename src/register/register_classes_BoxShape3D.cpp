#include <godot_cpp/classes/box_shape3d.hpp>
#include <godot_cpp/variant/vector3.hpp>
#include <godot_cpp/classes/shape3d.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_BoxShape3D() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<BoxShape3D>("BoxShape3D")
            .constructor<>()
            .base<Shape3D>()
            .property<static_cast<Vector3(BoxShape3D::*)()const>(&BoxShape3D::get_size),static_cast<void(BoxShape3D::*)(const Vector3 &)>(&BoxShape3D::set_size)>("size")
;}