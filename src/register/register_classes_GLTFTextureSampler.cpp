#include <godot_cpp/classes/gltf_texture_sampler.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <stdint.h>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_GLTFTextureSampler() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<GLTFTextureSampler>("GLTFTextureSampler")
            .constructor<>()
            .base<Resource>()
            .property<static_cast<int32_t(GLTFTextureSampler::*)()const>(&GLTFTextureSampler::get_mag_filter),static_cast<void(GLTFTextureSampler::*)(int32_t)>(&GLTFTextureSampler::set_mag_filter)>("mag_filter")
            .property<static_cast<int32_t(GLTFTextureSampler::*)()const>(&GLTFTextureSampler::get_min_filter),static_cast<void(GLTFTextureSampler::*)(int32_t)>(&GLTFTextureSampler::set_min_filter)>("min_filter")
            .property<static_cast<int32_t(GLTFTextureSampler::*)()const>(&GLTFTextureSampler::get_wrap_s),static_cast<void(GLTFTextureSampler::*)(int32_t)>(&GLTFTextureSampler::set_wrap_s)>("wrap_s")
            .property<static_cast<int32_t(GLTFTextureSampler::*)()const>(&GLTFTextureSampler::get_wrap_t),static_cast<void(GLTFTextureSampler::*)(int32_t)>(&GLTFTextureSampler::set_wrap_t)>("wrap_t")
;}