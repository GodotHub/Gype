#include <godot_cpp/classes/texture_layered.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/image.hpp>
#include <godot_cpp/classes/texture.hpp>
#include <stdint.h>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_TextureLayered() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<TextureLayered>("TextureLayered")
            .constructor<>()
            .base<Texture>()
            .fun<static_cast<Image::Format(TextureLayered::*)()const>(&TextureLayered::_get_format)>("_get_format")
            .fun<static_cast<uint32_t(TextureLayered::*)()const>(&TextureLayered::_get_layered_type)>("_get_layered_type")
            .fun<static_cast<int32_t(TextureLayered::*)()const>(&TextureLayered::_get_width)>("_get_width")
            .fun<static_cast<int32_t(TextureLayered::*)()const>(&TextureLayered::_get_height)>("_get_height")
            .fun<static_cast<int32_t(TextureLayered::*)()const>(&TextureLayered::_get_layers)>("_get_layers")
            .fun<static_cast<bool(TextureLayered::*)()const>(&TextureLayered::_has_mipmaps)>("_has_mipmaps")
            .fun<static_cast<Ref<Image>(TextureLayered::*)(int32_t)const>(&TextureLayered::_get_layer_data)>("_get_layer_data")
            .fun<static_cast<Image::Format(TextureLayered::*)()const>(&TextureLayered::get_format)>("get_format")
            .fun<static_cast<TextureLayered::LayeredType(TextureLayered::*)()const>(&TextureLayered::get_layered_type)>("get_layered_type")
            .fun<static_cast<int32_t(TextureLayered::*)()const>(&TextureLayered::get_width)>("get_width")
            .fun<static_cast<int32_t(TextureLayered::*)()const>(&TextureLayered::get_height)>("get_height")
            .fun<static_cast<int32_t(TextureLayered::*)()const>(&TextureLayered::get_layers)>("get_layers")
            .fun<static_cast<bool(TextureLayered::*)()const>(&TextureLayered::has_mipmaps)>("has_mipmaps")
            .fun<static_cast<Ref<Image>(TextureLayered::*)(int32_t)const>(&TextureLayered::get_layer_data)>("get_layer_data")
;    qjs::Value _LayeredType = context->newObject();
    _LayeredType["LAYERED_TYPE_2D_ARRAY"] = TextureLayered::LayeredType::LAYERED_TYPE_2D_ARRAY;
    _LayeredType["LAYERED_TYPE_CUBEMAP"] = TextureLayered::LayeredType::LAYERED_TYPE_CUBEMAP;
    _LayeredType["LAYERED_TYPE_CUBEMAP_ARRAY"] = TextureLayered::LayeredType::LAYERED_TYPE_CUBEMAP_ARRAY;
    _module.add("LayeredType", std::move(_LayeredType));
}