#include <godot_cpp/classes/placeholder_texture_layered.hpp>
#include <godot_cpp/variant/vector2i.hpp>
#include <godot_cpp/classes/texture_layered.hpp>
#include <stdint.h>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_PlaceholderTextureLayered() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<PlaceholderTextureLayered>("PlaceholderTextureLayered")
            .constructor<>()
            .base<TextureLayered>()
            .property<static_cast<Vector2i(PlaceholderTextureLayered::*)()const>(&PlaceholderTextureLayered::get_size),static_cast<void(PlaceholderTextureLayered::*)(const Vector2i &)>(&PlaceholderTextureLayered::set_size)>("size")
            .property<static_cast<void(PlaceholderTextureLayered::*)(int32_t)>(&PlaceholderTextureLayered::set_layers)>("{'name': 'set_layers', 'is_const': False, 'is_vararg': False, 'is_static': False, 'is_virtual': False, 'hash': 1286410249, 'arguments': [{'name': 'layers', 'type': 'int', 'meta': 'int32_t'}]}")
;}