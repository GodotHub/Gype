#include <godot_cpp/classes/font.hpp>
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/text_paragraph.hpp>
#include <godot_cpp/variant/array.hpp>
#include <godot_cpp/variant/color.hpp>
#include <godot_cpp/variant/packed_float32_array.hpp>
#include <godot_cpp/variant/rect2.hpp>
#include <godot_cpp/variant/rid.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/variant.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <godot_cpp/variant/vector2i.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_TextParagraph() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<TextParagraph>("TextParagraph")
			.constructor<>()
			.property<&TextParagraph::get_direction, &TextParagraph::set_direction>("direction")
			.property<&TextParagraph::get_custom_punctuation, &TextParagraph::set_custom_punctuation>("custom_punctuation")
			.property<&TextParagraph::get_orientation, &TextParagraph::set_orientation>("orientation")
			.property<&TextParagraph::get_preserve_invalid, &TextParagraph::set_preserve_invalid>("preserve_invalid")
			.property<&TextParagraph::get_preserve_control, &TextParagraph::set_preserve_control>("preserve_control")
			.property<&TextParagraph::get_alignment, &TextParagraph::set_alignment>("alignment")
			.property<&TextParagraph::get_break_flags, &TextParagraph::set_break_flags>("break_flags")
			.property<&TextParagraph::get_justification_flags, &TextParagraph::set_justification_flags>("justification_flags")
			.property<&TextParagraph::get_text_overrun_behavior, &TextParagraph::set_text_overrun_behavior>("text_overrun_behavior")
			.property<&TextParagraph::get_width, &TextParagraph::set_width>("width")
			.property<&TextParagraph::get_max_lines_visible, &TextParagraph::set_max_lines_visible>("max_lines_visible")
			.fun<static_cast<void (TextParagraph::*)()>(&TextParagraph::clear)>("clear")
			.fun<static_cast<void (TextParagraph::*)(const Array &)>(&TextParagraph::set_bidi_override)>("set_bidi_override")
			.fun<static_cast<bool (TextParagraph::*)(const String &, const Ref<Font> &, int32_t, const Rect2 &, const String &)>(&TextParagraph::set_dropcap)>("set_dropcap")
			.fun<static_cast<void (TextParagraph::*)()>(&TextParagraph::clear_dropcap)>("clear_dropcap")
			.fun<static_cast<bool (TextParagraph::*)(const String &, const Ref<Font> &, int32_t, const String &, const Variant &)>(&TextParagraph::add_string)>("add_string")
			.fun<static_cast<bool (TextParagraph::*)(const Variant &, const Vector2 &, InlineAlignment, int32_t, double)>(&TextParagraph::add_object)>("add_object")
			.fun<static_cast<bool (TextParagraph::*)(const Variant &, const Vector2 &, InlineAlignment, double)>(&TextParagraph::resize_object)>("resize_object")
			.fun<static_cast<void (TextParagraph::*)(const PackedFloat32Array &)>(&TextParagraph::tab_align)>("tab_align")
			.fun<static_cast<Vector2 (TextParagraph::*)() const>(&TextParagraph::get_non_wrapped_size)>("get_non_wrapped_size")
			.fun<static_cast<Vector2 (TextParagraph::*)() const>(&TextParagraph::get_size)>("get_size")
			.fun<static_cast<RID (TextParagraph::*)() const>(&TextParagraph::get_rid)>("get_rid")
			.fun<static_cast<RID (TextParagraph::*)(int32_t) const>(&TextParagraph::get_line_rid)>("get_line_rid")
			.fun<static_cast<RID (TextParagraph::*)() const>(&TextParagraph::get_dropcap_rid)>("get_dropcap_rid")
			.fun<static_cast<int32_t (TextParagraph::*)() const>(&TextParagraph::get_line_count)>("get_line_count")
			.fun<static_cast<Array (TextParagraph::*)(int32_t) const>(&TextParagraph::get_line_objects)>("get_line_objects")
			.fun<static_cast<Rect2 (TextParagraph::*)(int32_t, const Variant &) const>(&TextParagraph::get_line_object_rect)>("get_line_object_rect")
			.fun<static_cast<Vector2 (TextParagraph::*)(int32_t) const>(&TextParagraph::get_line_size)>("get_line_size")
			.fun<static_cast<Vector2i (TextParagraph::*)(int32_t) const>(&TextParagraph::get_line_range)>("get_line_range")
			.fun<static_cast<double (TextParagraph::*)(int32_t) const>(&TextParagraph::get_line_ascent)>("get_line_ascent")
			.fun<static_cast<double (TextParagraph::*)(int32_t) const>(&TextParagraph::get_line_descent)>("get_line_descent")
			.fun<static_cast<double (TextParagraph::*)(int32_t) const>(&TextParagraph::get_line_width)>("get_line_width")
			.fun<static_cast<double (TextParagraph::*)(int32_t) const>(&TextParagraph::get_line_underline_position)>("get_line_underline_position")
			.fun<static_cast<double (TextParagraph::*)(int32_t) const>(&TextParagraph::get_line_underline_thickness)>("get_line_underline_thickness")
			.fun<static_cast<Vector2 (TextParagraph::*)() const>(&TextParagraph::get_dropcap_size)>("get_dropcap_size")
			.fun<static_cast<int32_t (TextParagraph::*)() const>(&TextParagraph::get_dropcap_lines)>("get_dropcap_lines")
			.fun<static_cast<void (TextParagraph::*)(const RID &, const Vector2 &, const Color &, const Color &) const>(&TextParagraph::draw)>("draw")
			.fun<static_cast<void (TextParagraph::*)(const RID &, const Vector2 &, int32_t, const Color &, const Color &) const>(&TextParagraph::draw_outline)>("draw_outline")
			.fun<static_cast<void (TextParagraph::*)(const RID &, const Vector2 &, int32_t, const Color &) const>(&TextParagraph::draw_line)>("draw_line")
			.fun<static_cast<void (TextParagraph::*)(const RID &, const Vector2 &, int32_t, int32_t, const Color &) const>(&TextParagraph::draw_line_outline)>("draw_line_outline")
			.fun<static_cast<void (TextParagraph::*)(const RID &, const Vector2 &, const Color &) const>(&TextParagraph::draw_dropcap)>("draw_dropcap")
			.fun<static_cast<void (TextParagraph::*)(const RID &, const Vector2 &, int32_t, const Color &) const>(&TextParagraph::draw_dropcap_outline)>("draw_dropcap_outline")
			.fun<static_cast<int32_t (TextParagraph::*)(const Vector2 &) const>(&TextParagraph::hit_test)>("hit_test");
}