#include <godot_cpp/classes/texture2d_array_rd.hpp>
#include <godot_cpp/classes/texture_layered_rd.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_Texture2DArrayRD() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<Texture2DArrayRD>("Texture2DArrayRD")
            .constructor<>()
            .base<TextureLayeredRD>()
;}