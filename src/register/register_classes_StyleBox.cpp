#include <godot_cpp/classes/canvas_item.hpp>
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/style_box.hpp>
#include <godot_cpp/variant/rect2.hpp>
#include <godot_cpp/variant/rid.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_StyleBox() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<StyleBox>("StyleBox")
			.constructor<>()
			.base<Resource>()
			.property<static_cast<double (StyleBox::*)(Side) const>(&StyleBox::get_content_margin), static_cast<void (StyleBox::*)(Side, double)>(&StyleBox::set_content_margin)>((new std::string("content_margin_left"))->c_str())
			.property<static_cast<double (StyleBox::*)(Side) const>(&StyleBox::get_content_margin), static_cast<void (StyleBox::*)(Side, double)>(&StyleBox::set_content_margin)>((new std::string("content_margin_top"))->c_str())
			.property<static_cast<double (StyleBox::*)(Side) const>(&StyleBox::get_content_margin), static_cast<void (StyleBox::*)(Side, double)>(&StyleBox::set_content_margin)>((new std::string("content_margin_right"))->c_str())
			.property<static_cast<double (StyleBox::*)(Side) const>(&StyleBox::get_content_margin), static_cast<void (StyleBox::*)(Side, double)>(&StyleBox::set_content_margin)>((new std::string("content_margin_bottom"))->c_str())
			.fun<static_cast<void (StyleBox::*)(const RID &, const Rect2 &) const>(&StyleBox::_draw)>((new std::string("_draw"))->c_str())
			.fun<static_cast<Rect2 (StyleBox::*)(const Rect2 &) const>(&StyleBox::_get_draw_rect)>((new std::string("_get_draw_rect"))->c_str())
			.fun<static_cast<Vector2 (StyleBox::*)() const>(&StyleBox::_get_minimum_size)>((new std::string("_get_minimum_size"))->c_str())
			.fun<static_cast<bool (StyleBox::*)(const Vector2 &, const Rect2 &) const>(&StyleBox::_test_mask)>((new std::string("_test_mask"))->c_str())
			.fun<static_cast<Vector2 (StyleBox::*)() const>(&StyleBox::get_minimum_size)>((new std::string("get_minimum_size"))->c_str())
			.fun<static_cast<void (StyleBox::*)(double)>(&StyleBox::set_content_margin_all)>((new std::string("set_content_margin_all"))->c_str())
			.fun<static_cast<double (StyleBox::*)(Side) const>(&StyleBox::get_margin)>((new std::string("get_margin"))->c_str())
			.fun<static_cast<Vector2 (StyleBox::*)() const>(&StyleBox::get_offset)>((new std::string("get_offset"))->c_str())
			.fun<static_cast<void (StyleBox::*)(const RID &, const Rect2 &) const>(&StyleBox::draw)>((new std::string("draw"))->c_str())
			.fun<static_cast<CanvasItem *(StyleBox::*)() const>(&StyleBox::get_current_item_drawn)>((new std::string("get_current_item_drawn"))->c_str())
			.fun<static_cast<bool (StyleBox::*)(const Vector2 &, const Rect2 &) const>(&StyleBox::test_mask)>((new std::string("test_mask"))->c_str());
}