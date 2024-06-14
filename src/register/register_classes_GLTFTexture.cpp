
#include <godot_cpp/classes/gltf_texture.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_GLTFTexture() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<GLTFTexture>("GLTFTexture")
			.constructor<>()
			.base<Resource>()
			.property<static_cast<int32_t (GLTFTexture::*)() const>(&GLTFTexture::get_src_image), static_cast<void (GLTFTexture::*)(int32_t)>(&GLTFTexture::set_src_image)>((new std::string("src_image"))->c_str())
			.property<static_cast<int32_t (GLTFTexture::*)() const>(&GLTFTexture::get_sampler), static_cast<void (GLTFTexture::*)(int32_t)>(&GLTFTexture::set_sampler)>((new std::string("sampler"))->c_str());
}