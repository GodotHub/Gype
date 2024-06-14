
#include <godot_cpp/classes/control.hpp>
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/graph_edit.hpp>
#include <godot_cpp/classes/graph_frame.hpp>
#include <godot_cpp/classes/h_box_container.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/variant/dictionary.hpp>
#include <godot_cpp/variant/packed_vector2_array.hpp>
#include <godot_cpp/variant/rect2.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_GraphEdit() {
	qjs::Context::Module &_module = get_Control_module();
	_module.class_<GraphEdit>("GraphEdit")
			.constructor<>()
			.base<Control>()
			.property<static_cast<Vector2 (GraphEdit::*)() const>(&GraphEdit::get_scroll_offset), static_cast<void (GraphEdit::*)(const Vector2 &)>(&GraphEdit::set_scroll_offset)>((new std::string("scroll_offset"))->c_str())
			.property<static_cast<bool (GraphEdit::*)() const>(&GraphEdit::is_showing_grid), static_cast<void (GraphEdit::*)(bool)>(&GraphEdit::set_show_grid)>((new std::string("show_grid"))->c_str())
			.property<static_cast<GraphEdit::GridPattern (GraphEdit::*)() const>(&GraphEdit::get_grid_pattern), static_cast<void (GraphEdit::*)(GraphEdit::GridPattern)>(&GraphEdit::set_grid_pattern)>((new std::string("grid_pattern"))->c_str())
			.property<static_cast<bool (GraphEdit::*)() const>(&GraphEdit::is_snapping_enabled), static_cast<void (GraphEdit::*)(bool)>(&GraphEdit::set_snapping_enabled)>((new std::string("snapping_enabled"))->c_str())
			.property<static_cast<int32_t (GraphEdit::*)() const>(&GraphEdit::get_snapping_distance), static_cast<void (GraphEdit::*)(int32_t)>(&GraphEdit::set_snapping_distance)>((new std::string("snapping_distance"))->c_str())
			.property<static_cast<GraphEdit::PanningScheme (GraphEdit::*)() const>(&GraphEdit::get_panning_scheme), static_cast<void (GraphEdit::*)(GraphEdit::PanningScheme)>(&GraphEdit::set_panning_scheme)>((new std::string("panning_scheme"))->c_str())
			.property<static_cast<bool (GraphEdit::*)() const>(&GraphEdit::is_right_disconnects_enabled), static_cast<void (GraphEdit::*)(bool)>(&GraphEdit::set_right_disconnects)>((new std::string("right_disconnects"))->c_str())
			.property<static_cast<double (GraphEdit::*)() const>(&GraphEdit::get_connection_lines_curvature), static_cast<void (GraphEdit::*)(double)>(&GraphEdit::set_connection_lines_curvature)>((new std::string("connection_lines_curvature"))->c_str())
			.property<static_cast<double (GraphEdit::*)() const>(&GraphEdit::get_connection_lines_thickness), static_cast<void (GraphEdit::*)(double)>(&GraphEdit::set_connection_lines_thickness)>((new std::string("connection_lines_thickness"))->c_str())
			.property<static_cast<bool (GraphEdit::*)() const>(&GraphEdit::is_connection_lines_antialiased), static_cast<void (GraphEdit::*)(bool)>(&GraphEdit::set_connection_lines_antialiased)>((new std::string("connection_lines_antialiased"))->c_str())
			.property<static_cast<double (GraphEdit::*)() const>(&GraphEdit::get_zoom), static_cast<void (GraphEdit::*)(double)>(&GraphEdit::set_zoom)>((new std::string("zoom"))->c_str())
			.property<static_cast<double (GraphEdit::*)() const>(&GraphEdit::get_zoom_min), static_cast<void (GraphEdit::*)(double)>(&GraphEdit::set_zoom_min)>((new std::string("zoom_min"))->c_str())
			.property<static_cast<double (GraphEdit::*)() const>(&GraphEdit::get_zoom_max), static_cast<void (GraphEdit::*)(double)>(&GraphEdit::set_zoom_max)>((new std::string("zoom_max"))->c_str())
			.property<static_cast<double (GraphEdit::*)() const>(&GraphEdit::get_zoom_step), static_cast<void (GraphEdit::*)(double)>(&GraphEdit::set_zoom_step)>((new std::string("zoom_step"))->c_str())
			.property<static_cast<bool (GraphEdit::*)() const>(&GraphEdit::is_minimap_enabled), static_cast<void (GraphEdit::*)(bool)>(&GraphEdit::set_minimap_enabled)>((new std::string("minimap_enabled"))->c_str())
			.property<static_cast<Vector2 (GraphEdit::*)() const>(&GraphEdit::get_minimap_size), static_cast<void (GraphEdit::*)(const Vector2 &)>(&GraphEdit::set_minimap_size)>((new std::string("minimap_size"))->c_str())
			.property<static_cast<double (GraphEdit::*)() const>(&GraphEdit::get_minimap_opacity), static_cast<void (GraphEdit::*)(double)>(&GraphEdit::set_minimap_opacity)>((new std::string("minimap_opacity"))->c_str())
			.property<static_cast<bool (GraphEdit::*)() const>(&GraphEdit::is_showing_menu), static_cast<void (GraphEdit::*)(bool)>(&GraphEdit::set_show_menu)>((new std::string("show_menu"))->c_str())
			.property<static_cast<bool (GraphEdit::*)() const>(&GraphEdit::is_showing_zoom_label), static_cast<void (GraphEdit::*)(bool)>(&GraphEdit::set_show_zoom_label)>((new std::string("show_zoom_label"))->c_str())
			.property<static_cast<bool (GraphEdit::*)() const>(&GraphEdit::is_showing_zoom_buttons), static_cast<void (GraphEdit::*)(bool)>(&GraphEdit::set_show_zoom_buttons)>((new std::string("show_zoom_buttons"))->c_str())
			.property<static_cast<bool (GraphEdit::*)() const>(&GraphEdit::is_showing_grid_buttons), static_cast<void (GraphEdit::*)(bool)>(&GraphEdit::set_show_grid_buttons)>((new std::string("show_grid_buttons"))->c_str())
			.property<static_cast<bool (GraphEdit::*)() const>(&GraphEdit::is_showing_minimap_button), static_cast<void (GraphEdit::*)(bool)>(&GraphEdit::set_show_minimap_button)>((new std::string("show_minimap_button"))->c_str())
			.property<static_cast<bool (GraphEdit::*)() const>(&GraphEdit::is_showing_arrange_button), static_cast<void (GraphEdit::*)(bool)>(&GraphEdit::set_show_arrange_button)>((new std::string("show_arrange_button"))->c_str())
			.fun<static_cast<bool (GraphEdit::*)(Object *, int32_t, const Vector2 &)>(&GraphEdit::_is_in_input_hotzone)>((new std::string("_is_in_input_hotzone"))->c_str())
			.fun<static_cast<bool (GraphEdit::*)(Object *, int32_t, const Vector2 &)>(&GraphEdit::_is_in_output_hotzone)>((new std::string("_is_in_output_hotzone"))->c_str())
			.fun<static_cast<PackedVector2Array (GraphEdit::*)(const Vector2 &, const Vector2 &) const>(&GraphEdit::_get_connection_line)>((new std::string("_get_connection_line"))->c_str())
			.fun<static_cast<bool (GraphEdit::*)(const StringName &, int32_t, const StringName &, int32_t)>(&GraphEdit::_is_node_hover_valid)>((new std::string("_is_node_hover_valid"))->c_str())
			.fun<static_cast<Error (GraphEdit::*)(const StringName &, int32_t, const StringName &, int32_t)>(&GraphEdit::connect_node)>((new std::string("connect_node"))->c_str())
			.fun<static_cast<bool (GraphEdit::*)(const StringName &, int32_t, const StringName &, int32_t)>(&GraphEdit::is_node_connected)>((new std::string("is_node_connected"))->c_str())
			.fun<static_cast<void (GraphEdit::*)(const StringName &, int32_t, const StringName &, int32_t)>(&GraphEdit::disconnect_node)>((new std::string("disconnect_node"))->c_str())
			.fun<static_cast<void (GraphEdit::*)(const StringName &, int32_t, const StringName &, int32_t, double)>(&GraphEdit::set_connection_activity)>((new std::string("set_connection_activity"))->c_str())
			.fun<static_cast<TypedArray<Dictionary> (GraphEdit::*)() const>(&GraphEdit::get_connection_list)>((new std::string("get_connection_list"))->c_str())
			.fun<static_cast<Dictionary (GraphEdit::*)(const Vector2 &, double) const>(&GraphEdit::get_closest_connection_at_point)>((new std::string("get_closest_connection_at_point"))->c_str())
			.fun<static_cast<TypedArray<Dictionary> (GraphEdit::*)(const Rect2 &) const>(&GraphEdit::get_connections_intersecting_with_rect)>((new std::string("get_connections_intersecting_with_rect"))->c_str())
			.fun<static_cast<void (GraphEdit::*)()>(&GraphEdit::clear_connections)>((new std::string("clear_connections"))->c_str())
			.fun<static_cast<void (GraphEdit::*)()>(&GraphEdit::force_connection_drag_end)>((new std::string("force_connection_drag_end"))->c_str())
			.fun<static_cast<void (GraphEdit::*)(int32_t)>(&GraphEdit::add_valid_right_disconnect_type)>((new std::string("add_valid_right_disconnect_type"))->c_str())
			.fun<static_cast<void (GraphEdit::*)(int32_t)>(&GraphEdit::remove_valid_right_disconnect_type)>((new std::string("remove_valid_right_disconnect_type"))->c_str())
			.fun<static_cast<void (GraphEdit::*)(int32_t)>(&GraphEdit::add_valid_left_disconnect_type)>((new std::string("add_valid_left_disconnect_type"))->c_str())
			.fun<static_cast<void (GraphEdit::*)(int32_t)>(&GraphEdit::remove_valid_left_disconnect_type)>((new std::string("remove_valid_left_disconnect_type"))->c_str())
			.fun<static_cast<void (GraphEdit::*)(int32_t, int32_t)>(&GraphEdit::add_valid_connection_type)>((new std::string("add_valid_connection_type"))->c_str())
			.fun<static_cast<void (GraphEdit::*)(int32_t, int32_t)>(&GraphEdit::remove_valid_connection_type)>((new std::string("remove_valid_connection_type"))->c_str())
			.fun<static_cast<bool (GraphEdit::*)(int32_t, int32_t) const>(&GraphEdit::is_valid_connection_type)>((new std::string("is_valid_connection_type"))->c_str())
			.fun<static_cast<PackedVector2Array (GraphEdit::*)(const Vector2 &, const Vector2 &) const>(&GraphEdit::get_connection_line)>((new std::string("get_connection_line"))->c_str())
			.fun<static_cast<void (GraphEdit::*)(const StringName &, const StringName &)>(&GraphEdit::attach_graph_element_to_frame)>((new std::string("attach_graph_element_to_frame"))->c_str())
			.fun<static_cast<void (GraphEdit::*)(const StringName &)>(&GraphEdit::detach_graph_element_from_frame)>((new std::string("detach_graph_element_from_frame"))->c_str())
			.fun<static_cast<GraphFrame *(GraphEdit::*)(const StringName &)>(&GraphEdit::get_element_frame)>((new std::string("get_element_frame"))->c_str())
			.fun<static_cast<TypedArray<StringName> (GraphEdit::*)(const StringName &)>(&GraphEdit::get_attached_nodes_of_frame)>((new std::string("get_attached_nodes_of_frame"))->c_str())
			.fun<static_cast<HBoxContainer *(GraphEdit::*)()>(&GraphEdit::get_menu_hbox)>((new std::string("get_menu_hbox"))->c_str())
			.fun<static_cast<void (GraphEdit::*)()>(&GraphEdit::arrange_nodes)>((new std::string("arrange_nodes"))->c_str())
			.fun<static_cast<void (GraphEdit::*)(Node *)>(&GraphEdit::set_selected)>((new std::string("set_selected"))->c_str());
	qjs::Value _PanningScheme = context->newObject();
	_PanningScheme[(new std::string("SCROLL_ZOOMS"))->c_str()] = GraphEdit::PanningScheme::SCROLL_ZOOMS;
	_PanningScheme[(new std::string("SCROLL_PANS"))->c_str()] = GraphEdit::PanningScheme::SCROLL_PANS;
	_module.add("PanningScheme", std::move(_PanningScheme));
	qjs::Value _GridPattern = context->newObject();
	_GridPattern[(new std::string("GRID_PATTERN_LINES"))->c_str()] = GraphEdit::GridPattern::GRID_PATTERN_LINES;
	_GridPattern[(new std::string("GRID_PATTERN_DOTS"))->c_str()] = GraphEdit::GridPattern::GRID_PATTERN_DOTS;
	_module.add("GridPattern", std::move(_GridPattern));
}