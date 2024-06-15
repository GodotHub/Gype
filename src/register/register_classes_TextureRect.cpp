#include <godot_cpp/classes/texture_rect.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/control.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_TextureRect() {
    qjs::Context::Module &_module = get_Control_module();
    _module.class_<TextureRect>("TextureRect")
            .constructor<>()
            .base<Control>()
            .property<static_cast<Ref<Texture2D>(TextureRect::*)()const>(&TextureRect::get_texture),static_cast<void(TextureRect::*)(const Ref<Texture2D> &)>(&TextureRect::set_texture)>("texture")
            .property<static_cast<TextureRect::ExpandMode(TextureRect::*)()const>(&TextureRect::get_expand_mode),static_cast<void(TextureRect::*)(TextureRect::ExpandMode)>(&TextureRect::set_expand_mode)>("expand_mode")
            .property<static_cast<TextureRect::StretchMode(TextureRect::*)()const>(&TextureRect::get_stretch_mode),static_cast<void(TextureRect::*)(TextureRect::StretchMode)>(&TextureRect::set_stretch_mode)>("stretch_mode")
            .property<static_cast<bool(TextureRect::*)()const>(&TextureRect::is_flipped_h),static_cast<void(TextureRect::*)(bool)>(&TextureRect::set_flip_h)>("flip_h")
            .property<static_cast<bool(TextureRect::*)()const>(&TextureRect::is_flipped_v),static_cast<void(TextureRect::*)(bool)>(&TextureRect::set_flip_v)>("flip_v")
;    qjs::Value _ExpandMode = context->newObject();
    _ExpandMode["EXPAND_KEEP_SIZE"] = TextureRect::ExpandMode::EXPAND_KEEP_SIZE;
    _ExpandMode["EXPAND_IGNORE_SIZE"] = TextureRect::ExpandMode::EXPAND_IGNORE_SIZE;
    _ExpandMode["EXPAND_FIT_WIDTH"] = TextureRect::ExpandMode::EXPAND_FIT_WIDTH;
    _ExpandMode["EXPAND_FIT_WIDTH_PROPORTIONAL"] = TextureRect::ExpandMode::EXPAND_FIT_WIDTH_PROPORTIONAL;
    _ExpandMode["EXPAND_FIT_HEIGHT"] = TextureRect::ExpandMode::EXPAND_FIT_HEIGHT;
    _ExpandMode["EXPAND_FIT_HEIGHT_PROPORTIONAL"] = TextureRect::ExpandMode::EXPAND_FIT_HEIGHT_PROPORTIONAL;
    _module.add("ExpandMode", std::move(_ExpandMode));
    qjs::Value _StretchMode = context->newObject();
    _StretchMode["STRETCH_SCALE"] = TextureRect::StretchMode::STRETCH_SCALE;
    _StretchMode["STRETCH_TILE"] = TextureRect::StretchMode::STRETCH_TILE;
    _StretchMode["STRETCH_KEEP"] = TextureRect::StretchMode::STRETCH_KEEP;
    _StretchMode["STRETCH_KEEP_CENTERED"] = TextureRect::StretchMode::STRETCH_KEEP_CENTERED;
    _StretchMode["STRETCH_KEEP_ASPECT"] = TextureRect::StretchMode::STRETCH_KEEP_ASPECT;
    _StretchMode["STRETCH_KEEP_ASPECT_CENTERED"] = TextureRect::StretchMode::STRETCH_KEEP_ASPECT_CENTERED;
    _StretchMode["STRETCH_KEEP_ASPECT_COVERED"] = TextureRect::StretchMode::STRETCH_KEEP_ASPECT_COVERED;
    _module.add("StretchMode", std::move(_StretchMode));
}