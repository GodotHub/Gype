#include <godot_cpp/classes/shape3d.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/array_mesh.hpp>
#include <godot_cpp/classes/resource.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_Shape3D() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<Shape3D>("Shape3D")
            .constructor<>()
            .base<Resource>()
            .property<static_cast<double(Shape3D::*)()const>(&Shape3D::get_custom_solver_bias),static_cast<void(Shape3D::*)(double)>(&Shape3D::set_custom_solver_bias)>("custom_solver_bias")
            .property<static_cast<double(Shape3D::*)()const>(&Shape3D::get_margin),static_cast<void(Shape3D::*)(double)>(&Shape3D::set_margin)>("margin")
            .fun<static_cast<Ref<ArrayMesh>(Shape3D::*)()>(&Shape3D::get_debug_mesh)>("get_debug_mesh")
;}