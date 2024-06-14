#include <godot_cpp/classes/spot_light3d.hpp>
#include <godot_cpp/classes/light3d.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_SpotLight3D() {
    qjs::Context::Module &_module = get_Node3D_module();
    _module.class_<SpotLight3D>("SpotLight3D")
            .constructor<>()
            .base<Light3D>()
;}