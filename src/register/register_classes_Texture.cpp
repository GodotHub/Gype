#include <godot_cpp/classes/texture.hpp>
#include <godot_cpp/classes/resource.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_Texture() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<Texture>("Texture")
            .constructor<>()
            .base<Resource>()
;}