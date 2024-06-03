#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/separation_ray_shape3d.hpp>

using namespace godot;

void register_classes_SeparationRayShape3D() {
    qjs::Context::Module &_module = _General;
    _module.class_<SeparationRayShape3D>("SeparationRayShape3D")
           .constructor<>()
           .property<SeparationRayShape3D::get_length, SeparationRayShape3D::set_length>("length")
           .property<SeparationRayShape3D::get_slide_on_slope, SeparationRayShape3D::set_slide_on_slope>("slide_on_slope")
;}