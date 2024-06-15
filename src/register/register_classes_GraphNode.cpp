#include <godot_cpp/classes/graph_node.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/color.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <godot_cpp/variant/vector2i.hpp>
#include <godot_cpp/classes/graph_element.hpp>
#include <godot_cpp/classes/h_box_container.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/variant/string.hpp>
#include <stdint.h>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_GraphNode() {
    qjs::Context::Module &_module = get_Control_module();
    _module.class_<GraphNode>("GraphNode")
            .constructor<>()
            .base<GraphElement>()
            .property<static_cast<String(GraphNode::*)()const>(&GraphNode::get_title),static_cast<void(GraphNode::*)(const String &)>(&GraphNode::set_title)>("title")
            .property<static_cast<bool(GraphNode::*)()const>(&GraphNode::is_ignoring_valid_connection_type),static_cast<void(GraphNode::*)(bool)>(&GraphNode::set_ignore_invalid_connection_type)>("ignore_invalid_connection_type")
            .fun<static_cast<void(GraphNode::*)(int32_t,const Vector2i &,bool,const Color &)>(&GraphNode::_draw_port)>("_draw_port")
            .fun<static_cast<HBoxContainer *(GraphNode::*)()>(&GraphNode::get_titlebar_hbox)>("get_titlebar_hbox")
            .fun<static_cast<void(GraphNode::*)(int32_t,bool,int32_t,const Color &,bool,int32_t,const Color &,const Ref<Texture2D> &,const Ref<Texture2D> &,bool)>(&GraphNode::set_slot)>("set_slot")
            .fun<static_cast<void(GraphNode::*)(int32_t)>(&GraphNode::clear_slot)>("clear_slot")
            .fun<static_cast<void(GraphNode::*)()>(&GraphNode::clear_all_slots)>("clear_all_slots")
            .fun<static_cast<bool(GraphNode::*)(int32_t)const>(&GraphNode::is_slot_enabled_left)>("is_slot_enabled_left")
            .fun<static_cast<void(GraphNode::*)(int32_t,bool)>(&GraphNode::set_slot_enabled_left)>("set_slot_enabled_left")
            .fun<static_cast<void(GraphNode::*)(int32_t,int32_t)>(&GraphNode::set_slot_type_left)>("set_slot_type_left")
            .fun<static_cast<int32_t(GraphNode::*)(int32_t)const>(&GraphNode::get_slot_type_left)>("get_slot_type_left")
            .fun<static_cast<void(GraphNode::*)(int32_t,const Color &)>(&GraphNode::set_slot_color_left)>("set_slot_color_left")
            .fun<static_cast<Color(GraphNode::*)(int32_t)const>(&GraphNode::get_slot_color_left)>("get_slot_color_left")
            .fun<static_cast<void(GraphNode::*)(int32_t,const Ref<Texture2D> &)>(&GraphNode::set_slot_custom_icon_left)>("set_slot_custom_icon_left")
            .fun<static_cast<Ref<Texture2D>(GraphNode::*)(int32_t)const>(&GraphNode::get_slot_custom_icon_left)>("get_slot_custom_icon_left")
            .fun<static_cast<bool(GraphNode::*)(int32_t)const>(&GraphNode::is_slot_enabled_right)>("is_slot_enabled_right")
            .fun<static_cast<void(GraphNode::*)(int32_t,bool)>(&GraphNode::set_slot_enabled_right)>("set_slot_enabled_right")
            .fun<static_cast<void(GraphNode::*)(int32_t,int32_t)>(&GraphNode::set_slot_type_right)>("set_slot_type_right")
            .fun<static_cast<int32_t(GraphNode::*)(int32_t)const>(&GraphNode::get_slot_type_right)>("get_slot_type_right")
            .fun<static_cast<void(GraphNode::*)(int32_t,const Color &)>(&GraphNode::set_slot_color_right)>("set_slot_color_right")
            .fun<static_cast<Color(GraphNode::*)(int32_t)const>(&GraphNode::get_slot_color_right)>("get_slot_color_right")
            .fun<static_cast<void(GraphNode::*)(int32_t,const Ref<Texture2D> &)>(&GraphNode::set_slot_custom_icon_right)>("set_slot_custom_icon_right")
            .fun<static_cast<Ref<Texture2D>(GraphNode::*)(int32_t)const>(&GraphNode::get_slot_custom_icon_right)>("get_slot_custom_icon_right")
            .fun<static_cast<bool(GraphNode::*)(int32_t)const>(&GraphNode::is_slot_draw_stylebox)>("is_slot_draw_stylebox")
            .fun<static_cast<void(GraphNode::*)(int32_t,bool)>(&GraphNode::set_slot_draw_stylebox)>("set_slot_draw_stylebox")
            .fun<static_cast<int32_t(GraphNode::*)()>(&GraphNode::get_input_port_count)>("get_input_port_count")
            .fun<static_cast<Vector2(GraphNode::*)(int32_t)>(&GraphNode::get_input_port_position)>("get_input_port_position")
            .fun<static_cast<int32_t(GraphNode::*)(int32_t)>(&GraphNode::get_input_port_type)>("get_input_port_type")
            .fun<static_cast<Color(GraphNode::*)(int32_t)>(&GraphNode::get_input_port_color)>("get_input_port_color")
            .fun<static_cast<int32_t(GraphNode::*)(int32_t)>(&GraphNode::get_input_port_slot)>("get_input_port_slot")
            .fun<static_cast<int32_t(GraphNode::*)()>(&GraphNode::get_output_port_count)>("get_output_port_count")
            .fun<static_cast<Vector2(GraphNode::*)(int32_t)>(&GraphNode::get_output_port_position)>("get_output_port_position")
            .fun<static_cast<int32_t(GraphNode::*)(int32_t)>(&GraphNode::get_output_port_type)>("get_output_port_type")
            .fun<static_cast<Color(GraphNode::*)(int32_t)>(&GraphNode::get_output_port_color)>("get_output_port_color")
            .fun<static_cast<int32_t(GraphNode::*)(int32_t)>(&GraphNode::get_output_port_slot)>("get_output_port_slot")
;}