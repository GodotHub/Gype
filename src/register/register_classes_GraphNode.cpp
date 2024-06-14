
#include <godot_cpp/classes/graph_element.hpp>
#include <godot_cpp/classes/graph_node.hpp>
#include <godot_cpp/classes/h_box_container.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/variant/color.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <godot_cpp/variant/vector2i.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_GraphNode() {
	qjs::Context::Module &_module = get_Control_module();
	_module.class_<GraphNode>("GraphNode")
			.constructor<>()
			.base<GraphElement>()
			.property<static_cast<String (GraphNode::*)() const>(&GraphNode::get_title), static_cast<void (GraphNode::*)(const String &)>(&GraphNode::set_title)>((new std::string("title"))->c_str())
			.property<static_cast<bool (GraphNode::*)() const>(&GraphNode::is_ignoring_valid_connection_type), static_cast<void (GraphNode::*)(bool)>(&GraphNode::set_ignore_invalid_connection_type)>((new std::string("ignore_invalid_connection_type"))->c_str())
			.fun<static_cast<void (GraphNode::*)(int32_t, const Vector2i &, bool, const Color &)>(&GraphNode::_draw_port)>((new std::string("_draw_port"))->c_str())
			.fun<static_cast<HBoxContainer *(GraphNode::*)()>(&GraphNode::get_titlebar_hbox)>((new std::string("get_titlebar_hbox"))->c_str())
			.fun<static_cast<void (GraphNode::*)(int32_t, bool, int32_t, const Color &, bool, int32_t, const Color &, const Ref<Texture2D> &, const Ref<Texture2D> &, bool)>(&GraphNode::set_slot)>((new std::string("set_slot"))->c_str())
			.fun<static_cast<void (GraphNode::*)(int32_t)>(&GraphNode::clear_slot)>((new std::string("clear_slot"))->c_str())
			.fun<static_cast<void (GraphNode::*)()>(&GraphNode::clear_all_slots)>((new std::string("clear_all_slots"))->c_str())
			.fun<static_cast<bool (GraphNode::*)(int32_t) const>(&GraphNode::is_slot_enabled_left)>((new std::string("is_slot_enabled_left"))->c_str())
			.fun<static_cast<void (GraphNode::*)(int32_t, bool)>(&GraphNode::set_slot_enabled_left)>((new std::string("set_slot_enabled_left"))->c_str())
			.fun<static_cast<void (GraphNode::*)(int32_t, int32_t)>(&GraphNode::set_slot_type_left)>((new std::string("set_slot_type_left"))->c_str())
			.fun<static_cast<int32_t (GraphNode::*)(int32_t) const>(&GraphNode::get_slot_type_left)>((new std::string("get_slot_type_left"))->c_str())
			.fun<static_cast<void (GraphNode::*)(int32_t, const Color &)>(&GraphNode::set_slot_color_left)>((new std::string("set_slot_color_left"))->c_str())
			.fun<static_cast<Color (GraphNode::*)(int32_t) const>(&GraphNode::get_slot_color_left)>((new std::string("get_slot_color_left"))->c_str())
			.fun<static_cast<void (GraphNode::*)(int32_t, const Ref<Texture2D> &)>(&GraphNode::set_slot_custom_icon_left)>((new std::string("set_slot_custom_icon_left"))->c_str())
			.fun<static_cast<Ref<Texture2D> (GraphNode::*)(int32_t) const>(&GraphNode::get_slot_custom_icon_left)>((new std::string("get_slot_custom_icon_left"))->c_str())
			.fun<static_cast<bool (GraphNode::*)(int32_t) const>(&GraphNode::is_slot_enabled_right)>((new std::string("is_slot_enabled_right"))->c_str())
			.fun<static_cast<void (GraphNode::*)(int32_t, bool)>(&GraphNode::set_slot_enabled_right)>((new std::string("set_slot_enabled_right"))->c_str())
			.fun<static_cast<void (GraphNode::*)(int32_t, int32_t)>(&GraphNode::set_slot_type_right)>((new std::string("set_slot_type_right"))->c_str())
			.fun<static_cast<int32_t (GraphNode::*)(int32_t) const>(&GraphNode::get_slot_type_right)>((new std::string("get_slot_type_right"))->c_str())
			.fun<static_cast<void (GraphNode::*)(int32_t, const Color &)>(&GraphNode::set_slot_color_right)>((new std::string("set_slot_color_right"))->c_str())
			.fun<static_cast<Color (GraphNode::*)(int32_t) const>(&GraphNode::get_slot_color_right)>((new std::string("get_slot_color_right"))->c_str())
			.fun<static_cast<void (GraphNode::*)(int32_t, const Ref<Texture2D> &)>(&GraphNode::set_slot_custom_icon_right)>((new std::string("set_slot_custom_icon_right"))->c_str())
			.fun<static_cast<Ref<Texture2D> (GraphNode::*)(int32_t) const>(&GraphNode::get_slot_custom_icon_right)>((new std::string("get_slot_custom_icon_right"))->c_str())
			.fun<static_cast<bool (GraphNode::*)(int32_t) const>(&GraphNode::is_slot_draw_stylebox)>((new std::string("is_slot_draw_stylebox"))->c_str())
			.fun<static_cast<void (GraphNode::*)(int32_t, bool)>(&GraphNode::set_slot_draw_stylebox)>((new std::string("set_slot_draw_stylebox"))->c_str())
			.fun<static_cast<int32_t (GraphNode::*)()>(&GraphNode::get_input_port_count)>((new std::string("get_input_port_count"))->c_str())
			.fun<static_cast<Vector2 (GraphNode::*)(int32_t)>(&GraphNode::get_input_port_position)>((new std::string("get_input_port_position"))->c_str())
			.fun<static_cast<int32_t (GraphNode::*)(int32_t)>(&GraphNode::get_input_port_type)>((new std::string("get_input_port_type"))->c_str())
			.fun<static_cast<Color (GraphNode::*)(int32_t)>(&GraphNode::get_input_port_color)>((new std::string("get_input_port_color"))->c_str())
			.fun<static_cast<int32_t (GraphNode::*)(int32_t)>(&GraphNode::get_input_port_slot)>((new std::string("get_input_port_slot"))->c_str())
			.fun<static_cast<int32_t (GraphNode::*)()>(&GraphNode::get_output_port_count)>((new std::string("get_output_port_count"))->c_str())
			.fun<static_cast<Vector2 (GraphNode::*)(int32_t)>(&GraphNode::get_output_port_position)>((new std::string("get_output_port_position"))->c_str())
			.fun<static_cast<int32_t (GraphNode::*)(int32_t)>(&GraphNode::get_output_port_type)>((new std::string("get_output_port_type"))->c_str())
			.fun<static_cast<Color (GraphNode::*)(int32_t)>(&GraphNode::get_output_port_color)>((new std::string("get_output_port_color"))->c_str())
			.fun<static_cast<int32_t (GraphNode::*)(int32_t)>(&GraphNode::get_output_port_slot)>((new std::string("get_output_port_slot"))->c_str());
}