#include <godot_cpp/classes/placeholder_texture2d.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <godot_cpp/classes/texture2d.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_PlaceholderTexture2D() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<PlaceholderTexture2D>("PlaceholderTexture2D")
            .constructor<>()
            .base<Texture2D>()
            .property<static_cast<void(PlaceholderTexture2D::*)(const Vector2 &)>(&PlaceholderTexture2D::set_size)>("{'name': 'set_size', 'is_const': False, 'is_vararg': False, 'is_static': False, 'is_virtual': False, 'hash': 743155724, 'arguments': [{'name': 'size', 'type': 'Vector2'}]}")
;}