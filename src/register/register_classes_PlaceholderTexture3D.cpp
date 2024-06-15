#include <godot_cpp/classes/placeholder_texture3d.hpp>
#include <godot_cpp/variant/vector3i.hpp>
#include <godot_cpp/classes/texture3d.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_PlaceholderTexture3D() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<PlaceholderTexture3D>("PlaceholderTexture3D")
            .constructor<>()
            .base<Texture3D>()
            .property<static_cast<Vector3i(PlaceholderTexture3D::*)()const>(&PlaceholderTexture3D::get_size),static_cast<void(PlaceholderTexture3D::*)(const Vector3i &)>(&PlaceholderTexture3D::set_size)>("size")
;}