#include <godot_cpp/classes/compressed_texture_layered.hpp>
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/texture_layered.hpp>
#include <godot_cpp/variant/string.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_CompressedTextureLayered() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<CompressedTextureLayered>("CompressedTextureLayered")
            .constructor<>()
            .base<TextureLayered>()
            .property<static_cast<String(CompressedTextureLayered::*)()const>(&CompressedTextureLayered::get_load_path),static_cast<Error(CompressedTextureLayered::*)(const String &)>(&CompressedTextureLayered::load)>("load_path")
;}