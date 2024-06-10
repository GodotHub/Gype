#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/graph_edit.hpp>
#include <godot_cpp/classes/h_box_container.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/variant/dictionary.hpp>
#include <godot_cpp/variant/packed_vector2_array.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <godot_cpp/variant/vector2.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_GraphEdit() {
	qjs::Context::Module &_module = get_Control_module();
	_module.class_<GraphEdit>("GraphEdit")
			.constructor<>()
			.property<&GraphEdit::get_scroll_offset, &GraphEdit::set_scroll_offset>("scroll_offset")
			.property<&GraphEdit::is_showing_grid, &GraphEdit::set_show_grid>("show_grid")
			.property<&GraphEdit::is_snapping_enabled, &GraphEdit::set_snapping_enabled>("snapping_enabled")
			.property<&GraphEdit::get_snapping_distance, &GraphEdit::set_snapping_distance>("snapping_distance")
			.property<&GraphEdit::get_panning_scheme, &GraphEdit::set_panning_scheme>("panning_scheme")
			.property<&GraphEdit::is_right_disconnects_enabled, &GraphEdit::set_right_disconnects>("right_disconnects")
			.property<&GraphEdit::get_connection_lines_curvature, &GraphEdit::set_connection_lines_curvature>("connection_lines_curvature")
			.property<&GraphEdit::get_connection_lines_thickness, &GraphEdit::set_connection_lines_thickness>("connection_lines_thickness")
			.property<&GraphEdit::is_connection_lines_antialiased, &GraphEdit::set_connection_lines_antialiased>("connection_lines_antialiased")
			.property<&GraphEdit::get_zoom, &GraphEdit::set_zoom>("zoom")
			.property<&GraphEdit::get_zoom_min, &GraphEdit::set_zoom_min>("zoom_min")
			.property<&GraphEdit::get_zoom_max, &GraphEdit::set_zoom_max>("zoom_max")
			.property<&GraphEdit::get_zoom_step, &GraphEdit::set_zoom_step>("zoom_step")
			.property<&GraphEdit::is_minimap_enabled, &GraphEdit::set_minimap_enabled>("minimap_enabled")
			.property<&GraphEdit::get_minimap_size, &GraphEdit::set_minimap_size>("minimap_size")
			.property<&GraphEdit::get_minimap_opacity, &GraphEdit::set_minimap_opacity>("minimap_opacity")
			.property<&GraphEdit::is_showing_menu, &GraphEdit::set_show_menu>("show_menu")
			.property<&GraphEdit::is_showing_zoom_label, &GraphEdit::set_show_zoom_label>("show_zoom_label")
			.property<&GraphEdit::is_showing_zoom_buttons, &GraphEdit::set_show_zoom_buttons>("show_zoom_buttons")
			.property<&GraphEdit::is_showing_grid_buttons, &GraphEdit::set_show_grid_buttons>("show_grid_buttons")
			.property<&GraphEdit::is_showing_minimap_button, &GraphEdit::set_show_minimap_button>("show_minimap_button")
			.property<&GraphEdit::is_showing_arrange_button, &GraphEdit::set_show_arrange_button>("show_arrange_button")
			.fun<static_cast<bool (GraphEdit::*)(Object *, int32_t, const Vector2 &)>(&GraphEdit::_is_in_input_hotzone)>("_is_in_input_hotzone")
			.fun<static_cast<bool (GraphEdit::*)(Object *, int32_t, const Vector2 &)>(&GraphEdit::_is_in_output_hotzone)>("_is_in_output_hotzone")
			.fun<static_cast<PackedVector2Array (GraphEdit::*)(const Vector2 &, const Vector2 &) const>(&GraphEdit::_get_connection_line)>("_get_connection_line")
			.fun<static_cast<bool (GraphEdit::*)(const StringName &, int32_t, const StringName &, int32_t)>(&GraphEdit::_is_node_hover_valid)>("_is_node_hover_valid")
			.fun<static_cast<Error (GraphEdit::*)(const StringName &, int32_t, const StringName &, int32_t)>(&GraphEdit::connect_node)>("connect_node")
			.fun<static_cast<bool (GraphEdit::*)(const StringName &, int32_t, const StringName &, int32_t)>(&GraphEdit::is_node_connected)>("is_node_connected")
			.fun<static_cast<void (GraphEdit::*)(const StringName &, int32_t, const StringName &, int32_t)>(&GraphEdit::disconnect_node)>("disconnect_node")
			.fun<static_cast<void (GraphEdit::*)(const StringName &, int32_t, const StringName &, int32_t, double)>(&GraphEdit::set_connection_activity)>("set_connection_activity")
			.fun<static_cast<TypedArray<Dictionary> (GraphEdit::*)() const>(&GraphEdit::get_connection_list)>("get_connection_list")
			.fun<static_cast<void (GraphEdit::*)()>(&GraphEdit::clear_connections)>("clear_connections")
			.fun<static_cast<void (GraphEdit::*)()>(&GraphEdit::force_connection_drag_end)>("force_connection_drag_end")
			.fun<static_cast<void (GraphEdit::*)(int32_t)>(&GraphEdit::add_valid_right_disconnect_type)>("add_valid_right_disconnect_type")
			.fun<static_cast<void (GraphEdit::*)(int32_t)>(&GraphEdit::remove_valid_right_disconnect_type)>("remove_valid_right_disconnect_type")
			.fun<static_cast<void (GraphEdit::*)(int32_t)>(&GraphEdit::add_valid_left_disconnect_type)>("add_valid_left_disconnect_type")
			.fun<static_cast<void (GraphEdit::*)(int32_t)>(&GraphEdit::remove_valid_left_disconnect_type)>("remove_valid_left_disconnect_type")
			.fun<static_cast<void (GraphEdit::*)(int32_t, int32_t)>(&GraphEdit::add_valid_connection_type)>("add_valid_connection_type")
			.fun<static_cast<void (GraphEdit::*)(int32_t, int32_t)>(&GraphEdit::remove_valid_connection_type)>("remove_valid_connection_type")
			.fun<static_cast<bool (GraphEdit::*)(int32_t, int32_t) const>(&GraphEdit::is_valid_connection_type)>("is_valid_connection_type")
			.fun<static_cast<PackedVector2Array (GraphEdit::*)(const Vector2 &, const Vector2 &) const>(&GraphEdit::get_connection_line)>("get_connection_line")
			.fun<static_cast<HBoxContainer *(GraphEdit::*)()>(&GraphEdit::get_menu_hbox)>("get_menu_hbox")
			.fun<static_cast<void (GraphEdit::*)()>(&GraphEdit::arrange_nodes)>("arrange_nodes")
			.fun<static_cast<void (GraphEdit::*)(Node *)>(&GraphEdit::set_selected)>("set_selected");
}