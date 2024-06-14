
#include <godot_cpp/classes/graph_element.hpp>
#include <godot_cpp/classes/graph_frame.hpp>
#include <godot_cpp/classes/h_box_container.hpp>
#include <godot_cpp/variant/color.hpp>
#include <godot_cpp/variant/string.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_GraphFrame() {
	qjs::Context::Module &_module = get_Control_module();
	_module.class_<GraphFrame>("GraphFrame")
			.constructor<>()
			.base<GraphElement>()
			.property<static_cast<String (GraphFrame::*)() const>(&GraphFrame::get_title), static_cast<void (GraphFrame::*)(const String &)>(&GraphFrame::set_title)>((new std::string("title"))->c_str())
			.property<static_cast<bool (GraphFrame::*)() const>(&GraphFrame::is_autoshrink_enabled), static_cast<void (GraphFrame::*)(bool)>(&GraphFrame::set_autoshrink_enabled)>((new std::string("autoshrink_enabled"))->c_str())
			.property<static_cast<int32_t (GraphFrame::*)() const>(&GraphFrame::get_autoshrink_margin), static_cast<void (GraphFrame::*)(int32_t)>(&GraphFrame::set_autoshrink_margin)>((new std::string("autoshrink_margin"))->c_str())
			.property<static_cast<int32_t (GraphFrame::*)() const>(&GraphFrame::get_drag_margin), static_cast<void (GraphFrame::*)(int32_t)>(&GraphFrame::set_drag_margin)>((new std::string("drag_margin"))->c_str())
			.property<static_cast<bool (GraphFrame::*)() const>(&GraphFrame::is_tint_color_enabled), static_cast<void (GraphFrame::*)(bool)>(&GraphFrame::set_tint_color_enabled)>((new std::string("tint_color_enabled"))->c_str())
			.property<static_cast<Color (GraphFrame::*)() const>(&GraphFrame::get_tint_color), static_cast<void (GraphFrame::*)(const Color &)>(&GraphFrame::set_tint_color)>((new std::string("tint_color"))->c_str())
			.fun<static_cast<HBoxContainer *(GraphFrame::*)()>(&GraphFrame::get_titlebar_hbox)>((new std::string("get_titlebar_hbox"))->c_str());
}