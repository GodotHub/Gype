#include <godot_cpp/classes/world_boundary_shape3d.hpp>
#include <godot_cpp/variant/plane.hpp>
#include <godot_cpp/classes/shape3d.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_WorldBoundaryShape3D() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<WorldBoundaryShape3D>("WorldBoundaryShape3D")
            .constructor<>()
            .base<Shape3D>()
            .property<static_cast<Plane(WorldBoundaryShape3D::*)()const>(&WorldBoundaryShape3D::get_plane),static_cast<void(WorldBoundaryShape3D::*)(const Plane &)>(&WorldBoundaryShape3D::set_plane)>("plane")
;}