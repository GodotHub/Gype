#include <godot_cpp/classes/atlas_texture.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/variant/rect2.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_AtlasTexture() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<AtlasTexture>("AtlasTexture")
			.constructor<>()
			.base<Texture2D>()
			.property<static_cast<Ref<Texture2D> (AtlasTexture::*)() const>(&AtlasTexture::get_atlas), static_cast<void (AtlasTexture::*)(const Ref<Texture2D> &)>(&AtlasTexture::set_atlas)>((new std::string("atlas"))->c_str())
			.property<static_cast<Rect2 (AtlasTexture::*)() const>(&AtlasTexture::get_region), static_cast<void (AtlasTexture::*)(const Rect2 &)>(&AtlasTexture::set_region)>((new std::string("region"))->c_str())
			.property<static_cast<Rect2 (AtlasTexture::*)() const>(&AtlasTexture::get_margin), static_cast<void (AtlasTexture::*)(const Rect2 &)>(&AtlasTexture::set_margin)>((new std::string("margin"))->c_str())
			.property<static_cast<bool (AtlasTexture::*)() const>(&AtlasTexture::has_filter_clip), static_cast<void (AtlasTexture::*)(bool)>(&AtlasTexture::set_filter_clip)>((new std::string("filter_clip"))->c_str());
}