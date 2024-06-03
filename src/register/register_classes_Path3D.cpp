#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/path3d.hpp>

using namespace godot;

void register_classes_Path3D() {
    qjs::Context::Module &_module = _Node3D;
    _module.class_<Path3D>("Path3D")
           .constructor<>()
           .property<Path3D::get_curve, Path3D::set_curve>("curve")
;}