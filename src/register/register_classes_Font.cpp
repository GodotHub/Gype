
#include <godot_cpp/classes/font.hpp>
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/text_server.hpp>
#include <godot_cpp/core/type_info.hpp>
#include <godot_cpp/variant/color.hpp>
#include <godot_cpp/variant/dictionary.hpp>
#include <godot_cpp/variant/rid.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/transform2d.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_Font() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<Font>("Font")
			.constructor<>()
			.base<Resource>()
			.property<static_cast<TypedArray<Font> (Font::*)() const>(&Font::get_fallbacks), static_cast<void (Font::*)(const TypedArray<Font> &)>(&Font::set_fallbacks)>((new std::string("fallbacks"))->c_str())
			.fun<static_cast<RID (Font::*)(const Dictionary &, int32_t, double, const Transform2D &, int32_t, int32_t, int32_t, int32_t, double) const>(&Font::find_variation)>((new std::string("find_variation"))->c_str())
			.fun<static_cast<TypedArray<RID> (Font::*)() const>(&Font::get_rids)>((new std::string("get_rids"))->c_str())
			.fun<static_cast<double (Font::*)(int32_t) const>(&Font::get_height)>((new std::string("get_height"))->c_str())
			.fun<static_cast<double (Font::*)(int32_t) const>(&Font::get_ascent)>((new std::string("get_ascent"))->c_str())
			.fun<static_cast<double (Font::*)(int32_t) const>(&Font::get_descent)>((new std::string("get_descent"))->c_str())
			.fun<static_cast<double (Font::*)(int32_t) const>(&Font::get_underline_position)>((new std::string("get_underline_position"))->c_str())
			.fun<static_cast<double (Font::*)(int32_t) const>(&Font::get_underline_thickness)>((new std::string("get_underline_thickness"))->c_str())
			.fun<static_cast<String (Font::*)() const>(&Font::get_font_name)>((new std::string("get_font_name"))->c_str())
			.fun<static_cast<String (Font::*)() const>(&Font::get_font_style_name)>((new std::string("get_font_style_name"))->c_str())
			.fun<static_cast<Dictionary (Font::*)() const>(&Font::get_ot_name_strings)>((new std::string("get_ot_name_strings"))->c_str())
			.fun<static_cast<BitField<TextServer::FontStyle> (Font::*)() const>(&Font::get_font_style)>((new std::string("get_font_style"))->c_str())
			.fun<static_cast<int32_t (Font::*)() const>(&Font::get_font_weight)>((new std::string("get_font_weight"))->c_str())
			.fun<static_cast<int32_t (Font::*)() const>(&Font::get_font_stretch)>((new std::string("get_font_stretch"))->c_str())
			.fun<static_cast<int32_t (Font::*)(TextServer::SpacingType) const>(&Font::get_spacing)>((new std::string("get_spacing"))->c_str())
			.fun<static_cast<Dictionary (Font::*)() const>(&Font::get_opentype_features)>((new std::string("get_opentype_features"))->c_str())
			.fun<static_cast<void (Font::*)(int32_t, int32_t)>(&Font::set_cache_capacity)>((new std::string("set_cache_capacity"))->c_str())
			.fun<static_cast<Vector2 (Font::*)(const String &, HorizontalAlignment, double, int32_t, BitField<TextServer::JustificationFlag>, TextServer::Direction, TextServer::Orientation) const>(&Font::get_string_size)>((new std::string("get_string_size"))->c_str())
			.fun<static_cast<Vector2 (Font::*)(const String &, HorizontalAlignment, double, int32_t, int32_t, BitField<TextServer::LineBreakFlag>, BitField<TextServer::JustificationFlag>, TextServer::Direction, TextServer::Orientation) const>(&Font::get_multiline_string_size)>((new std::string("get_multiline_string_size"))->c_str())
			.fun<static_cast<void (Font::*)(const RID &, const Vector2 &, const String &, HorizontalAlignment, double, int32_t, const Color &, BitField<TextServer::JustificationFlag>, TextServer::Direction, TextServer::Orientation) const>(&Font::draw_string)>((new std::string("draw_string"))->c_str())
			.fun<static_cast<void (Font::*)(const RID &, const Vector2 &, const String &, HorizontalAlignment, double, int32_t, int32_t, const Color &, BitField<TextServer::LineBreakFlag>, BitField<TextServer::JustificationFlag>, TextServer::Direction, TextServer::Orientation) const>(&Font::draw_multiline_string)>((new std::string("draw_multiline_string"))->c_str())
			.fun<static_cast<void (Font::*)(const RID &, const Vector2 &, const String &, HorizontalAlignment, double, int32_t, int32_t, const Color &, BitField<TextServer::JustificationFlag>, TextServer::Direction, TextServer::Orientation) const>(&Font::draw_string_outline)>((new std::string("draw_string_outline"))->c_str())
			.fun<static_cast<void (Font::*)(const RID &, const Vector2 &, const String &, HorizontalAlignment, double, int32_t, int32_t, int32_t, const Color &, BitField<TextServer::LineBreakFlag>, BitField<TextServer::JustificationFlag>, TextServer::Direction, TextServer::Orientation) const>(&Font::draw_multiline_string_outline)>((new std::string("draw_multiline_string_outline"))->c_str())
			.fun<static_cast<Vector2 (Font::*)(int64_t, int32_t) const>(&Font::get_char_size)>((new std::string("get_char_size"))->c_str())
			.fun<static_cast<double (Font::*)(const RID &, const Vector2 &, int64_t, int32_t, const Color &) const>(&Font::draw_char)>((new std::string("draw_char"))->c_str())
			.fun<static_cast<double (Font::*)(const RID &, const Vector2 &, int64_t, int32_t, int32_t, const Color &) const>(&Font::draw_char_outline)>((new std::string("draw_char_outline"))->c_str())
			.fun<static_cast<bool (Font::*)(int64_t) const>(&Font::has_char)>((new std::string("has_char"))->c_str())
			.fun<static_cast<String (Font::*)() const>(&Font::get_supported_chars)>((new std::string("get_supported_chars"))->c_str())
			.fun<static_cast<bool (Font::*)(const String &) const>(&Font::is_language_supported)>((new std::string("is_language_supported"))->c_str())
			.fun<static_cast<bool (Font::*)(const String &) const>(&Font::is_script_supported)>((new std::string("is_script_supported"))->c_str())
			.fun<static_cast<Dictionary (Font::*)() const>(&Font::get_supported_feature_list)>((new std::string("get_supported_feature_list"))->c_str())
			.fun<static_cast<Dictionary (Font::*)() const>(&Font::get_supported_variation_list)>((new std::string("get_supported_variation_list"))->c_str())
			.fun<static_cast<int64_t (Font::*)() const>(&Font::get_face_count)>((new std::string("get_face_count"))->c_str());
}