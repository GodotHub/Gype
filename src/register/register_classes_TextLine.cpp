
#include <godot_cpp/classes/font.hpp>
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/text_line.hpp>
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
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_TextLine() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<TextLine>("TextLine")
			.constructor<>()
			.base<RefCounted>()
			.property<static_cast<TextServer::Direction (TextLine::*)() const>(&TextLine::get_direction), static_cast<void (TextLine::*)(TextServer::Direction)>(&TextLine::set_direction)>((new std::string("direction"))->c_str())
			.property<static_cast<TextServer::Orientation (TextLine::*)() const>(&TextLine::get_orientation), static_cast<void (TextLine::*)(TextServer::Orientation)>(&TextLine::set_orientation)>((new std::string("orientation"))->c_str())
			.property<static_cast<bool (TextLine::*)() const>(&TextLine::get_preserve_invalid), static_cast<void (TextLine::*)(bool)>(&TextLine::set_preserve_invalid)>((new std::string("preserve_invalid"))->c_str())
			.property<static_cast<bool (TextLine::*)() const>(&TextLine::get_preserve_control), static_cast<void (TextLine::*)(bool)>(&TextLine::set_preserve_control)>((new std::string("preserve_control"))->c_str())
			.property<static_cast<double (TextLine::*)() const>(&TextLine::get_width), static_cast<void (TextLine::*)(double)>(&TextLine::set_width)>((new std::string("width"))->c_str())
			.property<static_cast<HorizontalAlignment (TextLine::*)() const>(&TextLine::get_horizontal_alignment), static_cast<void (TextLine::*)(HorizontalAlignment)>(&TextLine::set_horizontal_alignment)>((new std::string("alignment"))->c_str())
			.property<static_cast<BitField<TextServer::JustificationFlag> (TextLine::*)() const>(&TextLine::get_flags), static_cast<void (TextLine::*)(BitField<TextServer::JustificationFlag>)>(&TextLine::set_flags)>((new std::string("flags"))->c_str())
			.property<static_cast<TextServer::OverrunBehavior (TextLine::*)() const>(&TextLine::get_text_overrun_behavior), static_cast<void (TextLine::*)(TextServer::OverrunBehavior)>(&TextLine::set_text_overrun_behavior)>((new std::string("text_overrun_behavior"))->c_str())
			.property<static_cast<String (TextLine::*)() const>(&TextLine::get_ellipsis_char), static_cast<void (TextLine::*)(const String &)>(&TextLine::set_ellipsis_char)>((new std::string("ellipsis_char"))->c_str())
			.fun<static_cast<void (TextLine::*)()>(&TextLine::clear)>((new std::string("clear"))->c_str())
			.fun<static_cast<void (TextLine::*)(const Array &)>(&TextLine::set_bidi_override)>((new std::string("set_bidi_override"))->c_str())
			.fun<static_cast<bool (TextLine::*)(const String &, const Ref<Font> &, int32_t, const String &, const Variant &)>(&TextLine::add_string)>((new std::string("add_string"))->c_str())
			.fun<static_cast<bool (TextLine::*)(const Variant &, const Vector2 &, InlineAlignment, int32_t, double)>(&TextLine::add_object)>((new std::string("add_object"))->c_str())
			.fun<static_cast<bool (TextLine::*)(const Variant &, const Vector2 &, InlineAlignment, double)>(&TextLine::resize_object)>((new std::string("resize_object"))->c_str())
			.fun<static_cast<void (TextLine::*)(const PackedFloat32Array &)>(&TextLine::tab_align)>((new std::string("tab_align"))->c_str())
			.fun<static_cast<Array (TextLine::*)() const>(&TextLine::get_objects)>((new std::string("get_objects"))->c_str())
			.fun<static_cast<Rect2 (TextLine::*)(const Variant &) const>(&TextLine::get_object_rect)>((new std::string("get_object_rect"))->c_str())
			.fun<static_cast<Vector2 (TextLine::*)() const>(&TextLine::get_size)>((new std::string("get_size"))->c_str())
			.fun<static_cast<RID (TextLine::*)() const>(&TextLine::get_rid)>((new std::string("get_rid"))->c_str())
			.fun<static_cast<double (TextLine::*)() const>(&TextLine::get_line_ascent)>((new std::string("get_line_ascent"))->c_str())
			.fun<static_cast<double (TextLine::*)() const>(&TextLine::get_line_descent)>((new std::string("get_line_descent"))->c_str())
			.fun<static_cast<double (TextLine::*)() const>(&TextLine::get_line_width)>((new std::string("get_line_width"))->c_str())
			.fun<static_cast<double (TextLine::*)() const>(&TextLine::get_line_underline_position)>((new std::string("get_line_underline_position"))->c_str())
			.fun<static_cast<double (TextLine::*)() const>(&TextLine::get_line_underline_thickness)>((new std::string("get_line_underline_thickness"))->c_str())
			.fun<static_cast<void (TextLine::*)(const RID &, const Vector2 &, const Color &) const>(&TextLine::draw)>((new std::string("draw"))->c_str())
			.fun<static_cast<void (TextLine::*)(const RID &, const Vector2 &, int32_t, const Color &) const>(&TextLine::draw_outline)>((new std::string("draw_outline"))->c_str())
			.fun<static_cast<int32_t (TextLine::*)(double) const>(&TextLine::hit_test)>((new std::string("hit_test"))->c_str());
}