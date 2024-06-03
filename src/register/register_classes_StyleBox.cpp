#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/style_box.hpp>

using namespace godot;

void register_classes_StyleBox() {
    qjs::Context::Module &_module = _General;
    _module.class_<StyleBox>("StyleBox")
           .constructor<>()
           .property<StyleBox::get_content_margin, StyleBox::set_content_margin>("content_margin_left")
           .property<StyleBox::get_content_margin, StyleBox::set_content_margin>("content_margin_top")
           .property<StyleBox::get_content_margin, StyleBox::set_content_margin>("content_margin_right")
           .property<StyleBox::get_content_margin, StyleBox::set_content_margin>("content_margin_bottom")
		    .fun<static_cast<void(StyleBox::*)(const RID &,const Rect2 &)const>(&StyleBox::_draw)>("_draw")
		    .fun<static_cast<Rect2(StyleBox::*)(const Rect2 &)const>(&StyleBox::_get_draw_rect)>("_get_draw_rect")
		    .fun<static_cast<Vector2(StyleBox::*)()const>(&StyleBox::_get_minimum_size)>("_get_minimum_size")
		    .fun<static_cast<bool(StyleBox::*)(const Vector2 &,const Rect2 &)const>(&StyleBox::_test_mask)>("_test_mask")
		    .fun<static_cast<Vector2(StyleBox::*)()const>(&StyleBox::get_minimum_size)>("get_minimum_size")
		    .fun<static_cast<void(StyleBox::*)(double)>(&StyleBox::set_content_margin_all)>("set_content_margin_all")
		    .fun<static_cast<double(StyleBox::*)(Side)const>(&StyleBox::get_margin)>("get_margin")
		    .fun<static_cast<Vector2(StyleBox::*)()const>(&StyleBox::get_offset)>("get_offset")
		    .fun<static_cast<void(StyleBox::*)(const RID &,const Rect2 &)const>(&StyleBox::draw)>("draw")
		    .fun<static_cast<CanvasItem *(StyleBox::*)()const>(&StyleBox::get_current_item_drawn)>("get_current_item_drawn")
		    .fun<static_cast<bool(StyleBox::*)(const Vector2 &,const Rect2 &)const>(&StyleBox::test_mask)>("test_mask")
;}