#include <godot_cpp/classes/compressed_texture3d.hpp>
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/texture3d.hpp>
#include <godot_cpp/variant/string.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_CompressedTexture3D() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<CompressedTexture3D>("CompressedTexture3D")
            .constructor<>()
            .base<Texture3D>()
            .property<static_cast<String(CompressedTexture3D::*)()const>(&CompressedTexture3D::get_load_path),static_cast<Error(CompressedTexture3D::*)(const String &)>(&CompressedTexture3D::load)>("load_path")
;}