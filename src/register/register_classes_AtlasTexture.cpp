#include <godot_cpp/classes/atlas_texture.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_AtlasTexture() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<AtlasTexture>("AtlasTexture")
			.constructor<>()
			.property<&AtlasTexture::get_atlas, &AtlasTexture::set_atlas>("atlas")
			.property<&AtlasTexture::get_region, &AtlasTexture::set_region>("region")
			.property<&AtlasTexture::get_margin, &AtlasTexture::set_margin>("margin")
			.property<&AtlasTexture::has_filter_clip, &AtlasTexture::set_filter_clip>("filter_clip");
}