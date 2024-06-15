#include <godot_cpp/classes/font.hpp>
#include <godot_cpp/core/type_info.hpp>
#include <godot_cpp/variant/color.hpp>
#include <godot_cpp/variant/transform2d.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/text_server.hpp>
#include <godot_cpp/variant/dictionary.hpp>
#include <godot_cpp/variant/rid.hpp>
#include <godot_cpp/variant/string.hpp>
#include <stdint.h>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_Font() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<Font>("Font")
            .constructor<>()
            .base<Resource>()
            .property<static_cast<TypedArray<Font>(Font::*)()const>(&Font::get_fallbacks),static_cast<void(Font::*)(const TypedArray<Font> &)>(&Font::set_fallbacks)>("fallbacks")
            .fun<static_cast<RID(Font::*)(const Dictionary &,int32_t,double,const Transform2D &,int32_t,int32_t,int32_t,int32_t,double)const>(&Font::find_variation)>("find_variation")
            .fun<static_cast<TypedArray<RID>(Font::*)()const>(&Font::get_rids)>("get_rids")
            .fun<static_cast<double(Font::*)(int32_t)const>(&Font::get_height)>("get_height")
            .fun<static_cast<double(Font::*)(int32_t)const>(&Font::get_ascent)>("get_ascent")
            .fun<static_cast<double(Font::*)(int32_t)const>(&Font::get_descent)>("get_descent")
            .fun<static_cast<double(Font::*)(int32_t)const>(&Font::get_underline_position)>("get_underline_position")
            .fun<static_cast<double(Font::*)(int32_t)const>(&Font::get_underline_thickness)>("get_underline_thickness")
            .fun<static_cast<String(Font::*)()const>(&Font::get_font_name)>("get_font_name")
            .fun<static_cast<String(Font::*)()const>(&Font::get_font_style_name)>("get_font_style_name")
            .fun<static_cast<Dictionary(Font::*)()const>(&Font::get_ot_name_strings)>("get_ot_name_strings")
            .fun<static_cast<BitField<TextServer::FontStyle>(Font::*)()const>(&Font::get_font_style)>("get_font_style")
            .fun<static_cast<int32_t(Font::*)()const>(&Font::get_font_weight)>("get_font_weight")
            .fun<static_cast<int32_t(Font::*)()const>(&Font::get_font_stretch)>("get_font_stretch")
            .fun<static_cast<int32_t(Font::*)(TextServer::SpacingType)const>(&Font::get_spacing)>("get_spacing")
            .fun<static_cast<Dictionary(Font::*)()const>(&Font::get_opentype_features)>("get_opentype_features")
            .fun<static_cast<void(Font::*)(int32_t,int32_t)>(&Font::set_cache_capacity)>("set_cache_capacity")
            .fun<static_cast<Vector2(Font::*)(const String &,HorizontalAlignment,double,int32_t,BitField<TextServer::JustificationFlag>,TextServer::Direction,TextServer::Orientation)const>(&Font::get_string_size)>("get_string_size")
            .fun<static_cast<Vector2(Font::*)(const String &,HorizontalAlignment,double,int32_t,int32_t,BitField<TextServer::LineBreakFlag>,BitField<TextServer::JustificationFlag>,TextServer::Direction,TextServer::Orientation)const>(&Font::get_multiline_string_size)>("get_multiline_string_size")
            .fun<static_cast<void(Font::*)(const RID &,const Vector2 &,const String &,HorizontalAlignment,double,int32_t,const Color &,BitField<TextServer::JustificationFlag>,TextServer::Direction,TextServer::Orientation)const>(&Font::draw_string)>("draw_string")
            .fun<static_cast<void(Font::*)(const RID &,const Vector2 &,const String &,HorizontalAlignment,double,int32_t,int32_t,const Color &,BitField<TextServer::LineBreakFlag>,BitField<TextServer::JustificationFlag>,TextServer::Direction,TextServer::Orientation)const>(&Font::draw_multiline_string)>("draw_multiline_string")
            .fun<static_cast<void(Font::*)(const RID &,const Vector2 &,const String &,HorizontalAlignment,double,int32_t,int32_t,const Color &,BitField<TextServer::JustificationFlag>,TextServer::Direction,TextServer::Orientation)const>(&Font::draw_string_outline)>("draw_string_outline")
            .fun<static_cast<void(Font::*)(const RID &,const Vector2 &,const String &,HorizontalAlignment,double,int32_t,int32_t,int32_t,const Color &,BitField<TextServer::LineBreakFlag>,BitField<TextServer::JustificationFlag>,TextServer::Direction,TextServer::Orientation)const>(&Font::draw_multiline_string_outline)>("draw_multiline_string_outline")
            .fun<static_cast<Vector2(Font::*)(int64_t,int32_t)const>(&Font::get_char_size)>("get_char_size")
            .fun<static_cast<double(Font::*)(const RID &,const Vector2 &,int64_t,int32_t,const Color &)const>(&Font::draw_char)>("draw_char")
            .fun<static_cast<double(Font::*)(const RID &,const Vector2 &,int64_t,int32_t,int32_t,const Color &)const>(&Font::draw_char_outline)>("draw_char_outline")
            .fun<static_cast<bool(Font::*)(int64_t)const>(&Font::has_char)>("has_char")
            .fun<static_cast<String(Font::*)()const>(&Font::get_supported_chars)>("get_supported_chars")
            .fun<static_cast<bool(Font::*)(const String &)const>(&Font::is_language_supported)>("is_language_supported")
            .fun<static_cast<bool(Font::*)(const String &)const>(&Font::is_script_supported)>("is_script_supported")
            .fun<static_cast<Dictionary(Font::*)()const>(&Font::get_supported_feature_list)>("get_supported_feature_list")
            .fun<static_cast<Dictionary(Font::*)()const>(&Font::get_supported_variation_list)>("get_supported_variation_list")
            .fun<static_cast<int64_t(Font::*)()const>(&Font::get_face_count)>("get_face_count")
;}