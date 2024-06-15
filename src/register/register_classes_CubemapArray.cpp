#include <godot_cpp/classes/cubemap_array.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/image_texture_layered.hpp>
#include <godot_cpp/classes/resource.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_CubemapArray() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<CubemapArray>("CubemapArray")
            .constructor<>()
            .base<ImageTextureLayered>()
            .fun<static_cast<Ref<Resource>(CubemapArray::*)()const>(&CubemapArray::create_placeholder)>("create_placeholder")
;}