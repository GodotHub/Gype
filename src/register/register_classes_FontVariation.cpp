#include <godot_cpp/classes/font_variation.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/transform2d.hpp>
#include <godot_cpp/classes/font.hpp>
#include <godot_cpp/classes/text_server.hpp>
#include <godot_cpp/variant/dictionary.hpp>
#include <stdint.h>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_FontVariation() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<FontVariation>("FontVariation")
            .constructor<>()
            .base<Font>()
            .property<static_cast<Ref<Font>(FontVariation::*)()const>(&FontVariation::get_base_font),static_cast<void(FontVariation::*)(const Ref<Font> &)>(&FontVariation::set_base_font)>("base_font")
            .property<static_cast<Dictionary(FontVariation::*)()const>(&FontVariation::get_variation_opentype),static_cast<void(FontVariation::*)(const Dictionary &)>(&FontVariation::set_variation_opentype)>("variation_opentype")
            .property<static_cast<int32_t(FontVariation::*)()const>(&FontVariation::get_variation_face_index),static_cast<void(FontVariation::*)(int32_t)>(&FontVariation::set_variation_face_index)>("variation_face_index")
            .property<static_cast<double(FontVariation::*)()const>(&FontVariation::get_variation_embolden),static_cast<void(FontVariation::*)(double)>(&FontVariation::set_variation_embolden)>("variation_embolden")
            .property<static_cast<Transform2D(FontVariation::*)()const>(&FontVariation::get_variation_transform),static_cast<void(FontVariation::*)(const Transform2D &)>(&FontVariation::set_variation_transform)>("variation_transform")
            .property<static_cast<void(FontVariation::*)(const Dictionary &)>(&FontVariation::set_opentype_features)>("{'name': 'set_opentype_features', 'is_const': False, 'is_vararg': False, 'is_static': False, 'is_virtual': False, 'hash': 4155329257, 'arguments': [{'name': 'features', 'type': 'Dictionary'}]}")
            .property<static_cast<void(FontVariation::*)(TextServer::SpacingType,int32_t)>(&FontVariation::set_spacing)>("{'name': 'set_spacing', 'is_const': False, 'is_vararg': False, 'is_static': False, 'is_virtual': False, 'hash': 3122339690, 'arguments': [{'name': 'spacing', 'type': 'enum::TextServer.SpacingType'}, {'name': 'value', 'type': 'int', 'meta': 'int32_t'}]}")
            .property<static_cast<void(FontVariation::*)(TextServer::SpacingType,int32_t)>(&FontVariation::set_spacing)>("{'name': 'set_spacing', 'is_const': False, 'is_vararg': False, 'is_static': False, 'is_virtual': False, 'hash': 3122339690, 'arguments': [{'name': 'spacing', 'type': 'enum::TextServer.SpacingType'}, {'name': 'value', 'type': 'int', 'meta': 'int32_t'}]}")
            .property<static_cast<void(FontVariation::*)(TextServer::SpacingType,int32_t)>(&FontVariation::set_spacing)>("{'name': 'set_spacing', 'is_const': False, 'is_vararg': False, 'is_static': False, 'is_virtual': False, 'hash': 3122339690, 'arguments': [{'name': 'spacing', 'type': 'enum::TextServer.SpacingType'}, {'name': 'value', 'type': 'int', 'meta': 'int32_t'}]}")
            .property<static_cast<void(FontVariation::*)(TextServer::SpacingType,int32_t)>(&FontVariation::set_spacing)>("{'name': 'set_spacing', 'is_const': False, 'is_vararg': False, 'is_static': False, 'is_virtual': False, 'hash': 3122339690, 'arguments': [{'name': 'spacing', 'type': 'enum::TextServer.SpacingType'}, {'name': 'value', 'type': 'int', 'meta': 'int32_t'}]}")
            .property<static_cast<double(FontVariation::*)()const>(&FontVariation::get_baseline_offset),static_cast<void(FontVariation::*)(double)>(&FontVariation::set_baseline_offset)>("baseline_offset")
;}