
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/image.hpp>
#include <godot_cpp/classes/image_texture_layered.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/texture_layered.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_ImageTextureLayered() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<ImageTextureLayered>("ImageTextureLayered")
			.constructor<>()
			.base<TextureLayered>()
			.fun<static_cast<Error (ImageTextureLayered::*)(const TypedArray<Image> &)>(&ImageTextureLayered::create_from_images)>((new std::string("create_from_images"))->c_str())
			.fun<static_cast<void (ImageTextureLayered::*)(const Ref<Image> &, int32_t)>(&ImageTextureLayered::update_layer)>((new std::string("update_layer"))->c_str());
}