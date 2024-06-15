#include <godot_cpp/classes/text_line.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/core/type_info.hpp>
#include <godot_cpp/variant/color.hpp>
#include <godot_cpp/variant/rect2.hpp>
#include <godot_cpp/variant/variant.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <godot_cpp/classes/font.hpp>
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/text_server.hpp>
#include <godot_cpp/variant/array.hpp>
#include <godot_cpp/variant/packed_float32_array.hpp>
#include <godot_cpp/variant/rid.hpp>
#include <godot_cpp/variant/string.hpp>
#include <stdint.h>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_TextLine() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<TextLine>("TextLine")
            .constructor<>()
            .base<RefCounted>()
            .property<static_cast<TextServer::Direction(TextLine::*)()const>(&TextLine::get_direction),static_cast<void(TextLine::*)(TextServer::Direction)>(&TextLine::set_direction)>("direction")
            .property<static_cast<TextServer::Orientation(TextLine::*)()const>(&TextLine::get_orientation),static_cast<void(TextLine::*)(TextServer::Orientation)>(&TextLine::set_orientation)>("orientation")
            .property<static_cast<bool(TextLine::*)()const>(&TextLine::get_preserve_invalid),static_cast<void(TextLine::*)(bool)>(&TextLine::set_preserve_invalid)>("preserve_invalid")
            .property<static_cast<bool(TextLine::*)()const>(&TextLine::get_preserve_control),static_cast<void(TextLine::*)(bool)>(&TextLine::set_preserve_control)>("preserve_control")
            .property<static_cast<double(TextLine::*)()const>(&TextLine::get_width),static_cast<void(TextLine::*)(double)>(&TextLine::set_width)>("width")
            .property<static_cast<HorizontalAlignment(TextLine::*)()const>(&TextLine::get_horizontal_alignment),static_cast<void(TextLine::*)(HorizontalAlignment)>(&TextLine::set_horizontal_alignment)>("alignment")
            .property<static_cast<BitField<TextServer::JustificationFlag>(TextLine::*)()const>(&TextLine::get_flags),static_cast<void(TextLine::*)(BitField<TextServer::JustificationFlag>)>(&TextLine::set_flags)>("flags")
            .property<static_cast<TextServer::OverrunBehavior(TextLine::*)()const>(&TextLine::get_text_overrun_behavior),static_cast<void(TextLine::*)(TextServer::OverrunBehavior)>(&TextLine::set_text_overrun_behavior)>("text_overrun_behavior")
            .property<static_cast<String(TextLine::*)()const>(&TextLine::get_ellipsis_char),static_cast<void(TextLine::*)(const String &)>(&TextLine::set_ellipsis_char)>("ellipsis_char")
            .fun<static_cast<void(TextLine::*)()>(&TextLine::clear)>("clear")
            .fun<static_cast<void(TextLine::*)(const Array &)>(&TextLine::set_bidi_override)>("set_bidi_override")
            .fun<static_cast<bool(TextLine::*)(const String &,const Ref<Font> &,int32_t,const String &,const Variant &)>(&TextLine::add_string)>("add_string")
            .fun<static_cast<bool(TextLine::*)(const Variant &,const Vector2 &,InlineAlignment,int32_t,double)>(&TextLine::add_object)>("add_object")
            .fun<static_cast<bool(TextLine::*)(const Variant &,const Vector2 &,InlineAlignment,double)>(&TextLine::resize_object)>("resize_object")
            .fun<static_cast<void(TextLine::*)(const PackedFloat32Array &)>(&TextLine::tab_align)>("tab_align")
            .fun<static_cast<Array(TextLine::*)()const>(&TextLine::get_objects)>("get_objects")
            .fun<static_cast<Rect2(TextLine::*)(const Variant &)const>(&TextLine::get_object_rect)>("get_object_rect")
            .fun<static_cast<Vector2(TextLine::*)()const>(&TextLine::get_size)>("get_size")
            .fun<static_cast<RID(TextLine::*)()const>(&TextLine::get_rid)>("get_rid")
            .fun<static_cast<double(TextLine::*)()const>(&TextLine::get_line_ascent)>("get_line_ascent")
            .fun<static_cast<double(TextLine::*)()const>(&TextLine::get_line_descent)>("get_line_descent")
            .fun<static_cast<double(TextLine::*)()const>(&TextLine::get_line_width)>("get_line_width")
            .fun<static_cast<double(TextLine::*)()const>(&TextLine::get_line_underline_position)>("get_line_underline_position")
            .fun<static_cast<double(TextLine::*)()const>(&TextLine::get_line_underline_thickness)>("get_line_underline_thickness")
            .fun<static_cast<void(TextLine::*)(const RID &,const Vector2 &,const Color &)const>(&TextLine::draw)>("draw")
            .fun<static_cast<void(TextLine::*)(const RID &,const Vector2 &,int32_t,const Color &)const>(&TextLine::draw_outline)>("draw_outline")
            .fun<static_cast<int32_t(TextLine::*)(double)const>(&TextLine::hit_test)>("hit_test")
;}