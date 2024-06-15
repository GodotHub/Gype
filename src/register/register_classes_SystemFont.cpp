#include <godot_cpp/classes/system_font.hpp>
#include <godot_cpp/classes/font.hpp>
#include <godot_cpp/classes/text_server.hpp>
#include <godot_cpp/variant/packed_string_array.hpp>
#include <stdint.h>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_SystemFont() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<SystemFont>("SystemFont")
            .constructor<>()
            .base<Font>()
            .property<static_cast<PackedStringArray(SystemFont::*)()const>(&SystemFont::get_font_names),static_cast<void(SystemFont::*)(const PackedStringArray &)>(&SystemFont::set_font_names)>("font_names")
            .property<static_cast<bool(SystemFont::*)()const>(&SystemFont::get_font_italic),static_cast<void(SystemFont::*)(bool)>(&SystemFont::set_font_italic)>("font_italic")
            .property<static_cast<void(SystemFont::*)(int32_t)>(&SystemFont::set_font_weight)>("{'name': 'set_font_weight', 'is_const': False, 'is_vararg': False, 'is_static': False, 'is_virtual': False, 'hash': 1286410249, 'arguments': [{'name': 'weight', 'type': 'int', 'meta': 'int32_t'}]}")
            .property<static_cast<void(SystemFont::*)(int32_t)>(&SystemFont::set_font_stretch)>("{'name': 'set_font_stretch', 'is_const': False, 'is_vararg': False, 'is_static': False, 'is_virtual': False, 'hash': 1286410249, 'arguments': [{'name': 'stretch', 'type': 'int', 'meta': 'int32_t'}]}")
            .property<static_cast<TextServer::FontAntialiasing(SystemFont::*)()const>(&SystemFont::get_antialiasing),static_cast<void(SystemFont::*)(TextServer::FontAntialiasing)>(&SystemFont::set_antialiasing)>("antialiasing")
            .property<static_cast<bool(SystemFont::*)()const>(&SystemFont::get_generate_mipmaps),static_cast<void(SystemFont::*)(bool)>(&SystemFont::set_generate_mipmaps)>("generate_mipmaps")
            .property<static_cast<bool(SystemFont::*)()const>(&SystemFont::get_disable_embedded_bitmaps),static_cast<void(SystemFont::*)(bool)>(&SystemFont::set_disable_embedded_bitmaps)>("disable_embedded_bitmaps")
            .property<static_cast<bool(SystemFont::*)()const>(&SystemFont::is_allow_system_fallback),static_cast<void(SystemFont::*)(bool)>(&SystemFont::set_allow_system_fallback)>("allow_system_fallback")
            .property<static_cast<bool(SystemFont::*)()const>(&SystemFont::is_force_autohinter),static_cast<void(SystemFont::*)(bool)>(&SystemFont::set_force_autohinter)>("force_autohinter")
            .property<static_cast<TextServer::Hinting(SystemFont::*)()const>(&SystemFont::get_hinting),static_cast<void(SystemFont::*)(TextServer::Hinting)>(&SystemFont::set_hinting)>("hinting")
            .property<static_cast<TextServer::SubpixelPositioning(SystemFont::*)()const>(&SystemFont::get_subpixel_positioning),static_cast<void(SystemFont::*)(TextServer::SubpixelPositioning)>(&SystemFont::set_subpixel_positioning)>("subpixel_positioning")
            .property<static_cast<bool(SystemFont::*)()const>(&SystemFont::is_multichannel_signed_distance_field),static_cast<void(SystemFont::*)(bool)>(&SystemFont::set_multichannel_signed_distance_field)>("multichannel_signed_distance_field")
            .property<static_cast<int32_t(SystemFont::*)()const>(&SystemFont::get_msdf_pixel_range),static_cast<void(SystemFont::*)(int32_t)>(&SystemFont::set_msdf_pixel_range)>("msdf_pixel_range")
            .property<static_cast<int32_t(SystemFont::*)()const>(&SystemFont::get_msdf_size),static_cast<void(SystemFont::*)(int32_t)>(&SystemFont::set_msdf_size)>("msdf_size")
            .property<static_cast<double(SystemFont::*)()const>(&SystemFont::get_oversampling),static_cast<void(SystemFont::*)(double)>(&SystemFont::set_oversampling)>("oversampling")
;}