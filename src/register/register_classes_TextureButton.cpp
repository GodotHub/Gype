#include <godot_cpp/classes/texture_button.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/base_button.hpp>
#include <godot_cpp/classes/bit_map.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_TextureButton() {
    qjs::Context::Module &_module = get_Control_module();
    _module.class_<TextureButton>("TextureButton")
            .constructor<>()
            .base<BaseButton>()
            .property<static_cast<Ref<Texture2D>(TextureButton::*)()const>(&TextureButton::get_texture_normal),static_cast<void(TextureButton::*)(const Ref<Texture2D> &)>(&TextureButton::set_texture_normal)>("texture_normal")
            .property<static_cast<Ref<Texture2D>(TextureButton::*)()const>(&TextureButton::get_texture_pressed),static_cast<void(TextureButton::*)(const Ref<Texture2D> &)>(&TextureButton::set_texture_pressed)>("texture_pressed")
            .property<static_cast<Ref<Texture2D>(TextureButton::*)()const>(&TextureButton::get_texture_hover),static_cast<void(TextureButton::*)(const Ref<Texture2D> &)>(&TextureButton::set_texture_hover)>("texture_hover")
            .property<static_cast<Ref<Texture2D>(TextureButton::*)()const>(&TextureButton::get_texture_disabled),static_cast<void(TextureButton::*)(const Ref<Texture2D> &)>(&TextureButton::set_texture_disabled)>("texture_disabled")
            .property<static_cast<Ref<Texture2D>(TextureButton::*)()const>(&TextureButton::get_texture_focused),static_cast<void(TextureButton::*)(const Ref<Texture2D> &)>(&TextureButton::set_texture_focused)>("texture_focused")
            .property<static_cast<Ref<BitMap>(TextureButton::*)()const>(&TextureButton::get_click_mask),static_cast<void(TextureButton::*)(const Ref<BitMap> &)>(&TextureButton::set_click_mask)>("texture_click_mask")
            .property<static_cast<bool(TextureButton::*)()const>(&TextureButton::get_ignore_texture_size),static_cast<void(TextureButton::*)(bool)>(&TextureButton::set_ignore_texture_size)>("ignore_texture_size")
            .property<static_cast<TextureButton::StretchMode(TextureButton::*)()const>(&TextureButton::get_stretch_mode),static_cast<void(TextureButton::*)(TextureButton::StretchMode)>(&TextureButton::set_stretch_mode)>("stretch_mode")
            .property<static_cast<bool(TextureButton::*)()const>(&TextureButton::is_flipped_h),static_cast<void(TextureButton::*)(bool)>(&TextureButton::set_flip_h)>("flip_h")
            .property<static_cast<bool(TextureButton::*)()const>(&TextureButton::is_flipped_v),static_cast<void(TextureButton::*)(bool)>(&TextureButton::set_flip_v)>("flip_v")
;    qjs::Value _StretchMode = context->newObject();
    _StretchMode["STRETCH_SCALE"] = TextureButton::StretchMode::STRETCH_SCALE;
    _StretchMode["STRETCH_TILE"] = TextureButton::StretchMode::STRETCH_TILE;
    _StretchMode["STRETCH_KEEP"] = TextureButton::StretchMode::STRETCH_KEEP;
    _StretchMode["STRETCH_KEEP_CENTERED"] = TextureButton::StretchMode::STRETCH_KEEP_CENTERED;
    _StretchMode["STRETCH_KEEP_ASPECT"] = TextureButton::StretchMode::STRETCH_KEEP_ASPECT;
    _StretchMode["STRETCH_KEEP_ASPECT_CENTERED"] = TextureButton::StretchMode::STRETCH_KEEP_ASPECT_CENTERED;
    _StretchMode["STRETCH_KEEP_ASPECT_COVERED"] = TextureButton::StretchMode::STRETCH_KEEP_ASPECT_COVERED;
    _module.add("StretchMode", std::move(_StretchMode));
}