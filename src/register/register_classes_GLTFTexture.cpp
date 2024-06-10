#include <godot_cpp/classes/gltf_texture.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_GLTFTexture() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<GLTFTexture>("GLTFTexture")
			.constructor<>()
			.property<&GLTFTexture::get_src_image, &GLTFTexture::set_src_image>("src_image")
			.property<&GLTFTexture::get_sampler, &GLTFTexture::set_sampler>("sampler");
}