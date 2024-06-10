#include <godot_cpp/classes/texture_rect.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_TextureRect() {
	qjs::Context::Module &_module = get_Control_module();
	_module.class_<TextureRect>("TextureRect")
			.constructor<>()
			.property<&TextureRect::get_texture, &TextureRect::set_texture>("texture")
			.property<&TextureRect::get_expand_mode, &TextureRect::set_expand_mode>("expand_mode")
			.property<&TextureRect::get_stretch_mode, &TextureRect::set_stretch_mode>("stretch_mode")
			.property<&TextureRect::is_flipped_h, &TextureRect::set_flip_h>("flip_h")
			.property<&TextureRect::is_flipped_v, &TextureRect::set_flip_v>("flip_v");
}