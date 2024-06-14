#include <godot_cpp/classes/standard_material3d.hpp>
#include <godot_cpp/classes/base_material3d.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_StandardMaterial3D() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<StandardMaterial3D>("StandardMaterial3D")
            .constructor<>()
            .base<BaseMaterial3D>()
;}