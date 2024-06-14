#include <godot_cpp/classes/compressed_cubemap.hpp>
#include <godot_cpp/classes/compressed_texture_layered.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_CompressedCubemap() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<CompressedCubemap>("CompressedCubemap")
            .constructor<>()
            .base<CompressedTextureLayered>()
;}