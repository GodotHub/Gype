
#include <godot_cpp/classes/font.hpp>
#include <godot_cpp/classes/system_font.hpp>
#include <godot_cpp/classes/text_server.hpp>
#include <godot_cpp/variant/packed_string_array.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_SystemFont() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<SystemFont>("SystemFont")
			.constructor<>()
			.base<Font>()
			.property<static_cast<PackedStringArray (SystemFont::*)() const>(&SystemFont::get_font_names), static_cast<void (SystemFont::*)(const PackedStringArray &)>(&SystemFont::set_font_names)>((new std::string("font_names"))->c_str())
			.property<static_cast<bool (SystemFont::*)() const>(&SystemFont::get_font_italic), static_cast<void (SystemFont::*)(bool)>(&SystemFont::set_font_italic)>((new std::string("font_italic"))->c_str())
			.property<static_cast<void (SystemFont::*)(int32_t)>(&SystemFont::set_font_weight)>((new std::string("{'name': 'set_font_weight', 'is_const': False, 'is_vararg': False, 'is_static': False, 'is_virtual': False, 'hash': 1286410249, 'arguments': [{'name': 'weight', 'type': 'int', 'meta': 'int32_t'}]}"))->c_str())
			.property<static_cast<void (SystemFont::*)(int32_t)>(&SystemFont::set_font_stretch)>((new std::string("{'name': 'set_font_stretch', 'is_const': False, 'is_vararg': False, 'is_static': False, 'is_virtual': False, 'hash': 1286410249, 'arguments': [{'name': 'stretch', 'type': 'int', 'meta': 'int32_t'}]}"))->c_str())
			.property<static_cast<TextServer::FontAntialiasing (SystemFont::*)() const>(&SystemFont::get_antialiasing), static_cast<void (SystemFont::*)(TextServer::FontAntialiasing)>(&SystemFont::set_antialiasing)>((new std::string("antialiasing"))->c_str())
			.property<static_cast<bool (SystemFont::*)() const>(&SystemFont::get_generate_mipmaps), static_cast<void (SystemFont::*)(bool)>(&SystemFont::set_generate_mipmaps)>((new std::string("generate_mipmaps"))->c_str())
			.property<static_cast<bool (SystemFont::*)() const>(&SystemFont::get_disable_embedded_bitmaps), static_cast<void (SystemFont::*)(bool)>(&SystemFont::set_disable_embedded_bitmaps)>((new std::string("disable_embedded_bitmaps"))->c_str())
			.property<static_cast<bool (SystemFont::*)() const>(&SystemFont::is_allow_system_fallback), static_cast<void (SystemFont::*)(bool)>(&SystemFont::set_allow_system_fallback)>((new std::string("allow_system_fallback"))->c_str())
			.property<static_cast<bool (SystemFont::*)() const>(&SystemFont::is_force_autohinter), static_cast<void (SystemFont::*)(bool)>(&SystemFont::set_force_autohinter)>((new std::string("force_autohinter"))->c_str())
			.property<static_cast<TextServer::Hinting (SystemFont::*)() const>(&SystemFont::get_hinting), static_cast<void (SystemFont::*)(TextServer::Hinting)>(&SystemFont::set_hinting)>((new std::string("hinting"))->c_str())
			.property<static_cast<TextServer::SubpixelPositioning (SystemFont::*)() const>(&SystemFont::get_subpixel_positioning), static_cast<void (SystemFont::*)(TextServer::SubpixelPositioning)>(&SystemFont::set_subpixel_positioning)>((new std::string("subpixel_positioning"))->c_str())
			.property<static_cast<bool (SystemFont::*)() const>(&SystemFont::is_multichannel_signed_distance_field), static_cast<void (SystemFont::*)(bool)>(&SystemFont::set_multichannel_signed_distance_field)>((new std::string("multichannel_signed_distance_field"))->c_str())
			.property<static_cast<int32_t (SystemFont::*)() const>(&SystemFont::get_msdf_pixel_range), static_cast<void (SystemFont::*)(int32_t)>(&SystemFont::set_msdf_pixel_range)>((new std::string("msdf_pixel_range"))->c_str())
			.property<static_cast<int32_t (SystemFont::*)() const>(&SystemFont::get_msdf_size), static_cast<void (SystemFont::*)(int32_t)>(&SystemFont::set_msdf_size)>((new std::string("msdf_size"))->c_str())
			.property<static_cast<double (SystemFont::*)() const>(&SystemFont::get_oversampling), static_cast<void (SystemFont::*)(double)>(&SystemFont::set_oversampling)>((new std::string("oversampling"))->c_str());
}