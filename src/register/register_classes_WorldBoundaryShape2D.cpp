#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/world_boundary_shape2d.hpp>

using namespace godot;

void register_classes_WorldBoundaryShape2D() {
    qjs::Context::Module &_module = _General;
    _module.class_<WorldBoundaryShape2D>("WorldBoundaryShape2D")
           .constructor<>()
           .property<WorldBoundaryShape2D::get_normal, WorldBoundaryShape2D::set_normal>("normal")
           .property<WorldBoundaryShape2D::get_distance, WorldBoundaryShape2D::set_distance>("distance")
;}