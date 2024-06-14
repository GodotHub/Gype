
#include <godot_cpp/classes/font.hpp>
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/text_paragraph.hpp>
#include <godot_cpp/classes/text_server.hpp>
#include <godot_cpp/core/type_info.hpp>
#include <godot_cpp/variant/array.hpp>
#include <godot_cpp/variant/color.hpp>
#include <godot_cpp/variant/packed_float32_array.hpp>
#include <godot_cpp/variant/rect2.hpp>
#include <godot_cpp/variant/rid.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/variant.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <godot_cpp/variant/vector2i.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_TextParagraph() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<TextParagraph>("TextParagraph")
			.constructor<>()
			.base<RefCounted>()
			.property<static_cast<TextServer::Direction (TextParagraph::*)() const>(&TextParagraph::get_direction), static_cast<void (TextParagraph::*)(TextServer::Direction)>(&TextParagraph::set_direction)>((new std::string("direction"))->c_str())
			.property<static_cast<String (TextParagraph::*)() const>(&TextParagraph::get_custom_punctuation), static_cast<void (TextParagraph::*)(const String &)>(&TextParagraph::set_custom_punctuation)>((new std::string("custom_punctuation"))->c_str())
			.property<static_cast<TextServer::Orientation (TextParagraph::*)() const>(&TextParagraph::get_orientation), static_cast<void (TextParagraph::*)(TextServer::Orientation)>(&TextParagraph::set_orientation)>((new std::string("orientation"))->c_str())
			.property<static_cast<bool (TextParagraph::*)() const>(&TextParagraph::get_preserve_invalid), static_cast<void (TextParagraph::*)(bool)>(&TextParagraph::set_preserve_invalid)>((new std::string("preserve_invalid"))->c_str())
			.property<static_cast<bool (TextParagraph::*)() const>(&TextParagraph::get_preserve_control), static_cast<void (TextParagraph::*)(bool)>(&TextParagraph::set_preserve_control)>((new std::string("preserve_control"))->c_str())
			.property<static_cast<HorizontalAlignment (TextParagraph::*)() const>(&TextParagraph::get_alignment), static_cast<void (TextParagraph::*)(HorizontalAlignment)>(&TextParagraph::set_alignment)>((new std::string("alignment"))->c_str())
			.property<static_cast<BitField<TextServer::LineBreakFlag> (TextParagraph::*)() const>(&TextParagraph::get_break_flags), static_cast<void (TextParagraph::*)(BitField<TextServer::LineBreakFlag>)>(&TextParagraph::set_break_flags)>((new std::string("break_flags"))->c_str())
			.property<static_cast<BitField<TextServer::JustificationFlag> (TextParagraph::*)() const>(&TextParagraph::get_justification_flags), static_cast<void (TextParagraph::*)(BitField<TextServer::JustificationFlag>)>(&TextParagraph::set_justification_flags)>((new std::string("justification_flags"))->c_str())
			.property<static_cast<TextServer::OverrunBehavior (TextParagraph::*)() const>(&TextParagraph::get_text_overrun_behavior), static_cast<void (TextParagraph::*)(TextServer::OverrunBehavior)>(&TextParagraph::set_text_overrun_behavior)>((new std::string("text_overrun_behavior"))->c_str())
			.property<static_cast<String (TextParagraph::*)() const>(&TextParagraph::get_ellipsis_char), static_cast<void (TextParagraph::*)(const String &)>(&TextParagraph::set_ellipsis_char)>((new std::string("ellipsis_char"))->c_str())
			.property<static_cast<double (TextParagraph::*)() const>(&TextParagraph::get_width), static_cast<void (TextParagraph::*)(double)>(&TextParagraph::set_width)>((new std::string("width"))->c_str())
			.property<static_cast<int32_t (TextParagraph::*)() const>(&TextParagraph::get_max_lines_visible), static_cast<void (TextParagraph::*)(int32_t)>(&TextParagraph::set_max_lines_visible)>((new std::string("max_lines_visible"))->c_str())
			.fun<static_cast<void (TextParagraph::*)()>(&TextParagraph::clear)>((new std::string("clear"))->c_str())
			.fun<static_cast<void (TextParagraph::*)(const Array &)>(&TextParagraph::set_bidi_override)>((new std::string("set_bidi_override"))->c_str())
			.fun<static_cast<bool (TextParagraph::*)(const String &, const Ref<Font> &, int32_t, const Rect2 &, const String &)>(&TextParagraph::set_dropcap)>((new std::string("set_dropcap"))->c_str())
			.fun<static_cast<void (TextParagraph::*)()>(&TextParagraph::clear_dropcap)>((new std::string("clear_dropcap"))->c_str())
			.fun<static_cast<bool (TextParagraph::*)(const String &, const Ref<Font> &, int32_t, const String &, const Variant &)>(&TextParagraph::add_string)>((new std::string("add_string"))->c_str())
			.fun<static_cast<bool (TextParagraph::*)(const Variant &, const Vector2 &, InlineAlignment, int32_t, double)>(&TextParagraph::add_object)>((new std::string("add_object"))->c_str())
			.fun<static_cast<bool (TextParagraph::*)(const Variant &, const Vector2 &, InlineAlignment, double)>(&TextParagraph::resize_object)>((new std::string("resize_object"))->c_str())
			.fun<static_cast<void (TextParagraph::*)(const PackedFloat32Array &)>(&TextParagraph::tab_align)>((new std::string("tab_align"))->c_str())
			.fun<static_cast<Vector2 (TextParagraph::*)() const>(&TextParagraph::get_non_wrapped_size)>((new std::string("get_non_wrapped_size"))->c_str())
			.fun<static_cast<Vector2 (TextParagraph::*)() const>(&TextParagraph::get_size)>((new std::string("get_size"))->c_str())
			.fun<static_cast<RID (TextParagraph::*)() const>(&TextParagraph::get_rid)>((new std::string("get_rid"))->c_str())
			.fun<static_cast<RID (TextParagraph::*)(int32_t) const>(&TextParagraph::get_line_rid)>((new std::string("get_line_rid"))->c_str())
			.fun<static_cast<RID (TextParagraph::*)() const>(&TextParagraph::get_dropcap_rid)>((new std::string("get_dropcap_rid"))->c_str())
			.fun<static_cast<int32_t (TextParagraph::*)() const>(&TextParagraph::get_line_count)>((new std::string("get_line_count"))->c_str())
			.fun<static_cast<Array (TextParagraph::*)(int32_t) const>(&TextParagraph::get_line_objects)>((new std::string("get_line_objects"))->c_str())
			.fun<static_cast<Rect2 (TextParagraph::*)(int32_t, const Variant &) const>(&TextParagraph::get_line_object_rect)>((new std::string("get_line_object_rect"))->c_str())
			.fun<static_cast<Vector2 (TextParagraph::*)(int32_t) const>(&TextParagraph::get_line_size)>((new std::string("get_line_size"))->c_str())
			.fun<static_cast<Vector2i (TextParagraph::*)(int32_t) const>(&TextParagraph::get_line_range)>((new std::string("get_line_range"))->c_str())
			.fun<static_cast<double (TextParagraph::*)(int32_t) const>(&TextParagraph::get_line_ascent)>((new std::string("get_line_ascent"))->c_str())
			.fun<static_cast<double (TextParagraph::*)(int32_t) const>(&TextParagraph::get_line_descent)>((new std::string("get_line_descent"))->c_str())
			.fun<static_cast<double (TextParagraph::*)(int32_t) const>(&TextParagraph::get_line_width)>((new std::string("get_line_width"))->c_str())
			.fun<static_cast<double (TextParagraph::*)(int32_t) const>(&TextParagraph::get_line_underline_position)>((new std::string("get_line_underline_position"))->c_str())
			.fun<static_cast<double (TextParagraph::*)(int32_t) const>(&TextParagraph::get_line_underline_thickness)>((new std::string("get_line_underline_thickness"))->c_str())
			.fun<static_cast<Vector2 (TextParagraph::*)() const>(&TextParagraph::get_dropcap_size)>((new std::string("get_dropcap_size"))->c_str())
			.fun<static_cast<int32_t (TextParagraph::*)() const>(&TextParagraph::get_dropcap_lines)>((new std::string("get_dropcap_lines"))->c_str())
			.fun<static_cast<void (TextParagraph::*)(const RID &, const Vector2 &, const Color &, const Color &) const>(&TextParagraph::draw)>((new std::string("draw"))->c_str())
			.fun<static_cast<void (TextParagraph::*)(const RID &, const Vector2 &, int32_t, const Color &, const Color &) const>(&TextParagraph::draw_outline)>((new std::string("draw_outline"))->c_str())
			.fun<static_cast<void (TextParagraph::*)(const RID &, const Vector2 &, int32_t, const Color &) const>(&TextParagraph::draw_line)>((new std::string("draw_line"))->c_str())
			.fun<static_cast<void (TextParagraph::*)(const RID &, const Vector2 &, int32_t, int32_t, const Color &) const>(&TextParagraph::draw_line_outline)>((new std::string("draw_line_outline"))->c_str())
			.fun<static_cast<void (TextParagraph::*)(const RID &, const Vector2 &, const Color &) const>(&TextParagraph::draw_dropcap)>((new std::string("draw_dropcap"))->c_str())
			.fun<static_cast<void (TextParagraph::*)(const RID &, const Vector2 &, int32_t, const Color &) const>(&TextParagraph::draw_dropcap_outline)>((new std::string("draw_dropcap_outline"))->c_str())
			.fun<static_cast<int32_t (TextParagraph::*)(const Vector2 &) const>(&TextParagraph::hit_test)>((new std::string("hit_test"))->c_str());
}