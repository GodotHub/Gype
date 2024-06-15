#include <godot_cpp/classes/graph_edit.hpp>
#include <godot_cpp/variant/rect2.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <godot_cpp/classes/control.hpp>
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/graph_frame.hpp>
#include <godot_cpp/classes/h_box_container.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/variant/dictionary.hpp>
#include <godot_cpp/variant/packed_vector2_array.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <stdint.h>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_GraphEdit() {
    qjs::Context::Module &_module = get_Control_module();
    _module.class_<GraphEdit>("GraphEdit")
            .constructor<>()
            .base<Control>()
            .property<static_cast<Vector2(GraphEdit::*)()const>(&GraphEdit::get_scroll_offset),static_cast<void(GraphEdit::*)(const Vector2 &)>(&GraphEdit::set_scroll_offset)>("scroll_offset")
            .property<static_cast<bool(GraphEdit::*)()const>(&GraphEdit::is_showing_grid),static_cast<void(GraphEdit::*)(bool)>(&GraphEdit::set_show_grid)>("show_grid")
            .property<static_cast<GraphEdit::GridPattern(GraphEdit::*)()const>(&GraphEdit::get_grid_pattern),static_cast<void(GraphEdit::*)(GraphEdit::GridPattern)>(&GraphEdit::set_grid_pattern)>("grid_pattern")
            .property<static_cast<bool(GraphEdit::*)()const>(&GraphEdit::is_snapping_enabled),static_cast<void(GraphEdit::*)(bool)>(&GraphEdit::set_snapping_enabled)>("snapping_enabled")
            .property<static_cast<int32_t(GraphEdit::*)()const>(&GraphEdit::get_snapping_distance),static_cast<void(GraphEdit::*)(int32_t)>(&GraphEdit::set_snapping_distance)>("snapping_distance")
            .property<static_cast<GraphEdit::PanningScheme(GraphEdit::*)()const>(&GraphEdit::get_panning_scheme),static_cast<void(GraphEdit::*)(GraphEdit::PanningScheme)>(&GraphEdit::set_panning_scheme)>("panning_scheme")
            .property<static_cast<bool(GraphEdit::*)()const>(&GraphEdit::is_right_disconnects_enabled),static_cast<void(GraphEdit::*)(bool)>(&GraphEdit::set_right_disconnects)>("right_disconnects")
            .property<static_cast<double(GraphEdit::*)()const>(&GraphEdit::get_connection_lines_curvature),static_cast<void(GraphEdit::*)(double)>(&GraphEdit::set_connection_lines_curvature)>("connection_lines_curvature")
            .property<static_cast<double(GraphEdit::*)()const>(&GraphEdit::get_connection_lines_thickness),static_cast<void(GraphEdit::*)(double)>(&GraphEdit::set_connection_lines_thickness)>("connection_lines_thickness")
            .property<static_cast<bool(GraphEdit::*)()const>(&GraphEdit::is_connection_lines_antialiased),static_cast<void(GraphEdit::*)(bool)>(&GraphEdit::set_connection_lines_antialiased)>("connection_lines_antialiased")
            .property<static_cast<double(GraphEdit::*)()const>(&GraphEdit::get_zoom),static_cast<void(GraphEdit::*)(double)>(&GraphEdit::set_zoom)>("zoom")
            .property<static_cast<double(GraphEdit::*)()const>(&GraphEdit::get_zoom_min),static_cast<void(GraphEdit::*)(double)>(&GraphEdit::set_zoom_min)>("zoom_min")
            .property<static_cast<double(GraphEdit::*)()const>(&GraphEdit::get_zoom_max),static_cast<void(GraphEdit::*)(double)>(&GraphEdit::set_zoom_max)>("zoom_max")
            .property<static_cast<double(GraphEdit::*)()const>(&GraphEdit::get_zoom_step),static_cast<void(GraphEdit::*)(double)>(&GraphEdit::set_zoom_step)>("zoom_step")
            .property<static_cast<bool(GraphEdit::*)()const>(&GraphEdit::is_minimap_enabled),static_cast<void(GraphEdit::*)(bool)>(&GraphEdit::set_minimap_enabled)>("minimap_enabled")
            .property<static_cast<Vector2(GraphEdit::*)()const>(&GraphEdit::get_minimap_size),static_cast<void(GraphEdit::*)(const Vector2 &)>(&GraphEdit::set_minimap_size)>("minimap_size")
            .property<static_cast<double(GraphEdit::*)()const>(&GraphEdit::get_minimap_opacity),static_cast<void(GraphEdit::*)(double)>(&GraphEdit::set_minimap_opacity)>("minimap_opacity")
            .property<static_cast<bool(GraphEdit::*)()const>(&GraphEdit::is_showing_menu),static_cast<void(GraphEdit::*)(bool)>(&GraphEdit::set_show_menu)>("show_menu")
            .property<static_cast<bool(GraphEdit::*)()const>(&GraphEdit::is_showing_zoom_label),static_cast<void(GraphEdit::*)(bool)>(&GraphEdit::set_show_zoom_label)>("show_zoom_label")
            .property<static_cast<bool(GraphEdit::*)()const>(&GraphEdit::is_showing_zoom_buttons),static_cast<void(GraphEdit::*)(bool)>(&GraphEdit::set_show_zoom_buttons)>("show_zoom_buttons")
            .property<static_cast<bool(GraphEdit::*)()const>(&GraphEdit::is_showing_grid_buttons),static_cast<void(GraphEdit::*)(bool)>(&GraphEdit::set_show_grid_buttons)>("show_grid_buttons")
            .property<static_cast<bool(GraphEdit::*)()const>(&GraphEdit::is_showing_minimap_button),static_cast<void(GraphEdit::*)(bool)>(&GraphEdit::set_show_minimap_button)>("show_minimap_button")
            .property<static_cast<bool(GraphEdit::*)()const>(&GraphEdit::is_showing_arrange_button),static_cast<void(GraphEdit::*)(bool)>(&GraphEdit::set_show_arrange_button)>("show_arrange_button")
            .fun<static_cast<bool(GraphEdit::*)(Object *,int32_t,const Vector2 &)>(&GraphEdit::_is_in_input_hotzone)>("_is_in_input_hotzone")
            .fun<static_cast<bool(GraphEdit::*)(Object *,int32_t,const Vector2 &)>(&GraphEdit::_is_in_output_hotzone)>("_is_in_output_hotzone")
            .fun<static_cast<PackedVector2Array(GraphEdit::*)(const Vector2 &,const Vector2 &)const>(&GraphEdit::_get_connection_line)>("_get_connection_line")
            .fun<static_cast<bool(GraphEdit::*)(const StringName &,int32_t,const StringName &,int32_t)>(&GraphEdit::_is_node_hover_valid)>("_is_node_hover_valid")
            .fun<static_cast<Error(GraphEdit::*)(const StringName &,int32_t,const StringName &,int32_t)>(&GraphEdit::connect_node)>("connect_node")
            .fun<static_cast<bool(GraphEdit::*)(const StringName &,int32_t,const StringName &,int32_t)>(&GraphEdit::is_node_connected)>("is_node_connected")
            .fun<static_cast<void(GraphEdit::*)(const StringName &,int32_t,const StringName &,int32_t)>(&GraphEdit::disconnect_node)>("disconnect_node")
            .fun<static_cast<void(GraphEdit::*)(const StringName &,int32_t,const StringName &,int32_t,double)>(&GraphEdit::set_connection_activity)>("set_connection_activity")
            .fun<static_cast<TypedArray<Dictionary>(GraphEdit::*)()const>(&GraphEdit::get_connection_list)>("get_connection_list")
            .fun<static_cast<Dictionary(GraphEdit::*)(const Vector2 &,double)const>(&GraphEdit::get_closest_connection_at_point)>("get_closest_connection_at_point")
            .fun<static_cast<TypedArray<Dictionary>(GraphEdit::*)(const Rect2 &)const>(&GraphEdit::get_connections_intersecting_with_rect)>("get_connections_intersecting_with_rect")
            .fun<static_cast<void(GraphEdit::*)()>(&GraphEdit::clear_connections)>("clear_connections")
            .fun<static_cast<void(GraphEdit::*)()>(&GraphEdit::force_connection_drag_end)>("force_connection_drag_end")
            .fun<static_cast<void(GraphEdit::*)(int32_t)>(&GraphEdit::add_valid_right_disconnect_type)>("add_valid_right_disconnect_type")
            .fun<static_cast<void(GraphEdit::*)(int32_t)>(&GraphEdit::remove_valid_right_disconnect_type)>("remove_valid_right_disconnect_type")
            .fun<static_cast<void(GraphEdit::*)(int32_t)>(&GraphEdit::add_valid_left_disconnect_type)>("add_valid_left_disconnect_type")
            .fun<static_cast<void(GraphEdit::*)(int32_t)>(&GraphEdit::remove_valid_left_disconnect_type)>("remove_valid_left_disconnect_type")
            .fun<static_cast<void(GraphEdit::*)(int32_t,int32_t)>(&GraphEdit::add_valid_connection_type)>("add_valid_connection_type")
            .fun<static_cast<void(GraphEdit::*)(int32_t,int32_t)>(&GraphEdit::remove_valid_connection_type)>("remove_valid_connection_type")
            .fun<static_cast<bool(GraphEdit::*)(int32_t,int32_t)const>(&GraphEdit::is_valid_connection_type)>("is_valid_connection_type")
            .fun<static_cast<PackedVector2Array(GraphEdit::*)(const Vector2 &,const Vector2 &)const>(&GraphEdit::get_connection_line)>("get_connection_line")
            .fun<static_cast<void(GraphEdit::*)(const StringName &,const StringName &)>(&GraphEdit::attach_graph_element_to_frame)>("attach_graph_element_to_frame")
            .fun<static_cast<void(GraphEdit::*)(const StringName &)>(&GraphEdit::detach_graph_element_from_frame)>("detach_graph_element_from_frame")
            .fun<static_cast<GraphFrame *(GraphEdit::*)(const StringName &)>(&GraphEdit::get_element_frame)>("get_element_frame")
            .fun<static_cast<TypedArray<StringName>(GraphEdit::*)(const StringName &)>(&GraphEdit::get_attached_nodes_of_frame)>("get_attached_nodes_of_frame")
            .fun<static_cast<HBoxContainer *(GraphEdit::*)()>(&GraphEdit::get_menu_hbox)>("get_menu_hbox")
            .fun<static_cast<void(GraphEdit::*)()>(&GraphEdit::arrange_nodes)>("arrange_nodes")
            .fun<static_cast<void(GraphEdit::*)(Node *)>(&GraphEdit::set_selected)>("set_selected")
;    qjs::Value _PanningScheme = context->newObject();
    _PanningScheme["SCROLL_ZOOMS"] = GraphEdit::PanningScheme::SCROLL_ZOOMS;
    _PanningScheme["SCROLL_PANS"] = GraphEdit::PanningScheme::SCROLL_PANS;
    _module.add("PanningScheme", std::move(_PanningScheme));
    qjs::Value _GridPattern = context->newObject();
    _GridPattern["GRID_PATTERN_LINES"] = GraphEdit::GridPattern::GRID_PATTERN_LINES;
    _GridPattern["GRID_PATTERN_DOTS"] = GraphEdit::GridPattern::GRID_PATTERN_DOTS;
    _module.add("GridPattern", std::move(_GridPattern));
}