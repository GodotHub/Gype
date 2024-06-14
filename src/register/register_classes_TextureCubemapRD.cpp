#include <godot_cpp/classes/texture_cubemap_rd.hpp>
#include <godot_cpp/classes/texture_layered_rd.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_TextureCubemapRD() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<TextureCubemapRD>("TextureCubemapRD")
            .constructor<>()
            .base<TextureLayeredRD>()
;}