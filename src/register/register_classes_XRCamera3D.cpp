#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/xr_camera3d.hpp>

using namespace godot;

void register_classes_XRCamera3D() {
    qjs::Context::Module &_module = _Node3D;
    _module.class_<XRCamera3D>("XRCamera3D")
           .constructor<>()
;}