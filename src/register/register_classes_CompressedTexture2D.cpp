#include <godot_cpp/classes/compressed_texture2d.hpp>
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/variant/string.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_CompressedTexture2D() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<CompressedTexture2D>("CompressedTexture2D")
            .constructor<>()
            .base<Texture2D>()
            .property<static_cast<String(CompressedTexture2D::*)()const>(&CompressedTexture2D::get_load_path),static_cast<Error(CompressedTexture2D::*)(const String &)>(&CompressedTexture2D::load)>("load_path")
;}