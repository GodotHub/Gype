
#include <godot_cpp/classes/image.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/texture.hpp>
#include <godot_cpp/classes/texture_layered.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_TextureLayered() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<TextureLayered>("TextureLayered")
			.constructor<>()
			.base<Texture>()
			.fun<static_cast<Image::Format (TextureLayered::*)() const>(&TextureLayered::_get_format)>((new std::string("_get_format"))->c_str())
			.fun<static_cast<uint32_t (TextureLayered::*)() const>(&TextureLayered::_get_layered_type)>((new std::string("_get_layered_type"))->c_str())
			.fun<static_cast<int32_t (TextureLayered::*)() const>(&TextureLayered::_get_width)>((new std::string("_get_width"))->c_str())
			.fun<static_cast<int32_t (TextureLayered::*)() const>(&TextureLayered::_get_height)>((new std::string("_get_height"))->c_str())
			.fun<static_cast<int32_t (TextureLayered::*)() const>(&TextureLayered::_get_layers)>((new std::string("_get_layers"))->c_str())
			.fun<static_cast<bool (TextureLayered::*)() const>(&TextureLayered::_has_mipmaps)>((new std::string("_has_mipmaps"))->c_str())
			.fun<static_cast<Ref<Image> (TextureLayered::*)(int32_t) const>(&TextureLayered::_get_layer_data)>((new std::string("_get_layer_data"))->c_str())
			.fun<static_cast<Image::Format (TextureLayered::*)() const>(&TextureLayered::get_format)>((new std::string("get_format"))->c_str())
			.fun<static_cast<TextureLayered::LayeredType (TextureLayered::*)() const>(&TextureLayered::get_layered_type)>((new std::string("get_layered_type"))->c_str())
			.fun<static_cast<int32_t (TextureLayered::*)() const>(&TextureLayered::get_width)>((new std::string("get_width"))->c_str())
			.fun<static_cast<int32_t (TextureLayered::*)() const>(&TextureLayered::get_height)>((new std::string("get_height"))->c_str())
			.fun<static_cast<int32_t (TextureLayered::*)() const>(&TextureLayered::get_layers)>((new std::string("get_layers"))->c_str())
			.fun<static_cast<bool (TextureLayered::*)() const>(&TextureLayered::has_mipmaps)>((new std::string("has_mipmaps"))->c_str())
			.fun<static_cast<Ref<Image> (TextureLayered::*)(int32_t) const>(&TextureLayered::get_layer_data)>((new std::string("get_layer_data"))->c_str());
	qjs::Value _LayeredType = context->newObject();
	_LayeredType[(new std::string("LAYERED_TYPE_2D_ARRAY"))->c_str()] = TextureLayered::LayeredType::LAYERED_TYPE_2D_ARRAY;
	_LayeredType[(new std::string("LAYERED_TYPE_CUBEMAP"))->c_str()] = TextureLayered::LayeredType::LAYERED_TYPE_CUBEMAP;
	_LayeredType[(new std::string("LAYERED_TYPE_CUBEMAP_ARRAY"))->c_str()] = TextureLayered::LayeredType::LAYERED_TYPE_CUBEMAP_ARRAY;
	_module.add("LayeredType", std::move(_LayeredType));
}