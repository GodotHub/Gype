#include <godot_cpp/classes/texture2d_array.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/image_texture_layered.hpp>
#include <godot_cpp/classes/resource.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_Texture2DArray() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<Texture2DArray>("Texture2DArray")
            .constructor<>()
            .base<ImageTextureLayered>()
            .fun<static_cast<Ref<Resource>(Texture2DArray::*)()const>(&Texture2DArray::create_placeholder)>("create_placeholder")
;}