#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/world_boundary_shape3d.hpp>

using namespace godot;

void register_classes_WorldBoundaryShape3D() {
    qjs::Context::Module &_module = _General;
    _module.class_<WorldBoundaryShape3D>("WorldBoundaryShape3D")
           .constructor<>()
           .property<WorldBoundaryShape3D::get_plane, WorldBoundaryShape3D::set_plane>("plane")
;}