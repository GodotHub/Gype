#include <godot_cpp/classes/compressed_texture2d_array.hpp>
#include <godot_cpp/classes/compressed_texture_layered.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_CompressedTexture2DArray() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<CompressedTexture2DArray>("CompressedTexture2DArray")
            .constructor<>()
            .base<CompressedTextureLayered>()
;}