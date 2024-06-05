#include <godot_cpp/classes/gltf_texture_sampler.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"


using namespace godot;

void register_classes_GLTFTextureSampler() {
	qjs::Context::Module &_module = _General;
	_module.class_<GLTFTextureSampler>("GLTFTextureSampler")
			.constructor<>()
			.property<&GLTFTextureSampler::get_mag_filter, &GLTFTextureSampler::set_mag_filter>("mag_filter")
			.property<&GLTFTextureSampler::get_min_filter, &GLTFTextureSampler::set_min_filter>("min_filter")
			.property<&GLTFTextureSampler::get_wrap_s, &GLTFTextureSampler::set_wrap_s>("wrap_s")
			.property<&GLTFTextureSampler::get_wrap_t, &GLTFTextureSampler::set_wrap_t>("wrap_t");
}