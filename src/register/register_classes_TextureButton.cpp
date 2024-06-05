#include <godot_cpp/classes/bit_map.hpp>
#include <godot_cpp/classes/texture_button.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_TextureButton() {
	qjs::Context::Module &_module = _Control;
	_module.class_<TextureButton>("TextureButton")
			.constructor<>()
			.property<&TextureButton::get_texture_normal, &TextureButton::set_texture_normal>("texture_normal")
			.property<&TextureButton::get_texture_pressed, &TextureButton::set_texture_pressed>("texture_pressed")
			.property<&TextureButton::get_texture_hover, &TextureButton::set_texture_hover>("texture_hover")
			.property<&TextureButton::get_texture_disabled, &TextureButton::set_texture_disabled>("texture_disabled")
			.property<&TextureButton::get_texture_focused, &TextureButton::set_texture_focused>("texture_focused")
			.property<&TextureButton::get_click_mask, &TextureButton::set_click_mask>("texture_click_mask")
			.property<&TextureButton::get_ignore_texture_size, &TextureButton::set_ignore_texture_size>("ignore_texture_size")
			.property<&TextureButton::get_stretch_mode, &TextureButton::set_stretch_mode>("stretch_mode")
			.property<&TextureButton::is_flipped_h, &TextureButton::set_flip_h>("flip_h")
			.property<&TextureButton::is_flipped_v, &TextureButton::set_flip_v>("flip_v");
}