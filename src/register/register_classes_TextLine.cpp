#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/text_line.hpp>

using namespace godot;

void register_classes_TextLine() {
    qjs::Context::Module &_module = _General;
    _module.class_<TextLine>("TextLine")
           .constructor<>()
           .property<TextLine::get_direction, TextLine::set_direction>("direction")
           .property<TextLine::get_orientation, TextLine::set_orientation>("orientation")
           .property<TextLine::get_preserve_invalid, TextLine::set_preserve_invalid>("preserve_invalid")
           .property<TextLine::get_preserve_control, TextLine::set_preserve_control>("preserve_control")
           .property<TextLine::get_width, TextLine::set_width>("width")
           .property<TextLine::get_horizontal_alignment, TextLine::set_horizontal_alignment>("alignment")
           .property<TextLine::get_flags, TextLine::set_flags>("flags")
           .property<TextLine::get_text_overrun_behavior, TextLine::set_text_overrun_behavior>("text_overrun_behavior")
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