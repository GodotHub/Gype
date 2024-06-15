#include <godot_cpp/classes/graph_frame.hpp>
#include <godot_cpp/variant/color.hpp>
#include <godot_cpp/classes/graph_element.hpp>
#include <godot_cpp/classes/h_box_container.hpp>
#include <godot_cpp/variant/string.hpp>
#include <stdint.h>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_GraphFrame() {
    qjs::Context::Module &_module = get_Control_module();
    _module.class_<GraphFrame>("GraphFrame")
            .constructor<>()
            .base<GraphElement>()
            .property<static_cast<String(GraphFrame::*)()const>(&GraphFrame::get_title),static_cast<void(GraphFrame::*)(const String &)>(&GraphFrame::set_title)>("title")
            .property<static_cast<bool(GraphFrame::*)()const>(&GraphFrame::is_autoshrink_enabled),static_cast<void(GraphFrame::*)(bool)>(&GraphFrame::set_autoshrink_enabled)>("autoshrink_enabled")
            .property<static_cast<int32_t(GraphFrame::*)()const>(&GraphFrame::get_autoshrink_margin),static_cast<void(GraphFrame::*)(int32_t)>(&GraphFrame::set_autoshrink_margin)>("autoshrink_margin")
            .property<static_cast<int32_t(GraphFrame::*)()const>(&GraphFrame::get_drag_margin),static_cast<void(GraphFrame::*)(int32_t)>(&GraphFrame::set_drag_margin)>("drag_margin")
            .property<static_cast<bool(GraphFrame::*)()const>(&GraphFrame::is_tint_color_enabled),static_cast<void(GraphFrame::*)(bool)>(&GraphFrame::set_tint_color_enabled)>("tint_color_enabled")
            .property<static_cast<Color(GraphFrame::*)()const>(&GraphFrame::get_tint_color),static_cast<void(GraphFrame::*)(const Color &)>(&GraphFrame::set_tint_color)>("tint_color")
            .fun<static_cast<HBoxContainer *(GraphFrame::*)()>(&GraphFrame::get_titlebar_hbox)>("get_titlebar_hbox")
;}