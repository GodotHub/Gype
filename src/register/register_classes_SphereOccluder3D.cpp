#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/sphere_occluder3d.hpp>

using namespace godot;

void register_classes_SphereOccluder3D() {
    qjs::Context::Module &_module = _General;
    _module.class_<SphereOccluder3D>("SphereOccluder3D")
           .constructor<>()
           .property<SphereOccluder3D::get_radius, SphereOccluder3D::set_radius>("radius")
;}