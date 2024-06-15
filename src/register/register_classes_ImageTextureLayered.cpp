#include <godot_cpp/classes/image_texture_layered.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/image.hpp>
#include <godot_cpp/classes/texture_layered.hpp>
#include <stdint.h>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_ImageTextureLayered() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<ImageTextureLayered>("ImageTextureLayered")
            .constructor<>()
            .base<TextureLayered>()
            .fun<static_cast<Error(ImageTextureLayered::*)(const TypedArray<Image> &)>(&ImageTextureLayered::create_from_images)>("create_from_images")
            .fun<static_cast<void(ImageTextureLayered::*)(const Ref<Image> &,int32_t)>(&ImageTextureLayered::update_layer)>("update_layer")
;}