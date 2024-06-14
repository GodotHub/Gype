#include <godot_cpp/classes/xr_camera3d.hpp>
#include <godot_cpp/classes/camera3d.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_XRCamera3D() {
    qjs::Context::Module &_module = get_Node3D_module();
    _module.class_<XRCamera3D>("XRCamera3D")
            .constructor<>()
            .base<Camera3D>()
;}