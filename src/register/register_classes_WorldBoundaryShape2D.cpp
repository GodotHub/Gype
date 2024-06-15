#include <godot_cpp/classes/world_boundary_shape2d.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <godot_cpp/classes/shape2d.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_WorldBoundaryShape2D() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<WorldBoundaryShape2D>("WorldBoundaryShape2D")
            .constructor<>()
            .base<Shape2D>()
            .property<static_cast<Vector2(WorldBoundaryShape2D::*)()const>(&WorldBoundaryShape2D::get_normal),static_cast<void(WorldBoundaryShape2D::*)(const Vector2 &)>(&WorldBoundaryShape2D::set_normal)>("normal")
            .property<static_cast<double(WorldBoundaryShape2D::*)()const>(&WorldBoundaryShape2D::get_distance),static_cast<void(WorldBoundaryShape2D::*)(double)>(&WorldBoundaryShape2D::set_distance)>("distance")
;}