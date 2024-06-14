
#include <godot_cpp/classes/gltf_texture_sampler.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_GLTFTextureSampler() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<GLTFTextureSampler>("GLTFTextureSampler")
			.constructor<>()
			.base<Resource>()
			.property<static_cast<int32_t (GLTFTextureSampler::*)() const>(&GLTFTextureSampler::get_mag_filter), static_cast<void (GLTFTextureSampler::*)(int32_t)>(&GLTFTextureSampler::set_mag_filter)>((new std::string("mag_filter"))->c_str())
			.property<static_cast<int32_t (GLTFTextureSampler::*)() const>(&GLTFTextureSampler::get_min_filter), static_cast<void (GLTFTextureSampler::*)(int32_t)>(&GLTFTextureSampler::set_min_filter)>((new std::string("min_filter"))->c_str())
			.property<static_cast<int32_t (GLTFTextureSampler::*)() const>(&GLTFTextureSampler::get_wrap_s), static_cast<void (GLTFTextureSampler::*)(int32_t)>(&GLTFTextureSampler::set_wrap_s)>((new std::string("wrap_s"))->c_str())
			.property<static_cast<int32_t (GLTFTextureSampler::*)() const>(&GLTFTextureSampler::get_wrap_t), static_cast<void (GLTFTextureSampler::*)(int32_t)>(&GLTFTextureSampler::set_wrap_t)>((new std::string("wrap_t"))->c_str());
}