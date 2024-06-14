#include <godot_cpp/classes/placeholder_texture2d_array.hpp>
#include <godot_cpp/classes/placeholder_texture_layered.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_PlaceholderTexture2DArray() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<PlaceholderTexture2DArray>("PlaceholderTexture2DArray")
            .constructor<>()
            .base<PlaceholderTextureLayered>()
;}