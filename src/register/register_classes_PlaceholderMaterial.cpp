#include <godot_cpp/classes/placeholder_material.hpp>
#include <godot_cpp/classes/material.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_PlaceholderMaterial() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<PlaceholderMaterial>("PlaceholderMaterial")
            .constructor<>()
            .base<Material>()
;}