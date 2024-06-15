#include <godot_cpp/classes/csg_primitive3d.hpp>
#include <godot_cpp/classes/csg_shape3d.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_CSGPrimitive3D() {
    qjs::Context::Module &_module = get_Node3D_module();
    _module.class_<CSGPrimitive3D>("CSGPrimitive3D")
            .constructor<>()
            .base<CSGShape3D>()
            .property<static_cast<bool(CSGPrimitive3D::*)()>(&CSGPrimitive3D::get_flip_faces),static_cast<void(CSGPrimitive3D::*)(bool)>(&CSGPrimitive3D::set_flip_faces)>("flip_faces")
;}