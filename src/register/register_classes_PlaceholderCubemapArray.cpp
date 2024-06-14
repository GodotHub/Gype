#include <godot_cpp/classes/placeholder_cubemap_array.hpp>
#include <godot_cpp/classes/placeholder_texture_layered.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_PlaceholderCubemapArray() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<PlaceholderCubemapArray>("PlaceholderCubemapArray")
            .constructor<>()
            .base<PlaceholderTextureLayered>()
;}