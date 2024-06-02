/**************************************************************************/
/*  graph_edit.hpp                                                        */
/**************************************************************************/
/*                         This file is part of:                          */
/*                             GODOT ENGINE                               */
/*                        https://godotengine.org                         */
/**************************************************************************/
/* Copyright (c) 2014-present Godot Engine contributors (see AUTHORS.md). */
/* Copyright (c) 2007-2014 Juan Linietsky, Ariel Manzur.                  */
/*                                                                        */
/* Permission is hereby granted, free of charge, to any person obtaining  */
/* a copy of this software and associated documentation files (the        */
/* "Software"), to deal in the Software without restriction, including    */
/* without limitation the rights to use, copy, modify, merge, publish,    */
/* distribute, sublicense, and/or sell copies of the Software, and to     */
/* permit persons to whom the Software is furnished to do so, subject to  */
/* the following conditions:                                              */
/*                                                                        */
/* The above copyright notice and this permission notice shall be         */
/* included in all copies or substantial portions of the Software.        */
/*                                                                        */
/* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,        */
/* EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF     */
/* MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. */
/* IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY   */
/* CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,   */
/* TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE      */
/* SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.                 */
/**************************************************************************/

// THIS FILE IS GENERATED. EDITS WILL BE LOST.

#ifndef GODOT_CPP_GRAPH_EDIT_HPP
#define GODOT_CPP_GRAPH_EDIT_HPP

#include <godot_cpp/classes/control.hpp>
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/variant/dictionary.hpp>
#include <godot_cpp/variant/packed_vector2_array.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <godot_cpp/variant/vector2.hpp>


#include <godot_cpp/core/class_db.hpp>

#include <type_traits>

#include <godot_cpp/templates/vararg.hpp>
namespace godot {

class HBoxContainer;
class Node;
class Object;
class StringName;

class GraphEdit : public Control {
	GDEXTENSION_CLASS(GraphEdit, Control)

public:
	enum PanningScheme {
		SCROLL_ZOOMS = 0,
		SCROLL_PANS = 1,
	};

	Error connect_node(const StringName &from_node, int32_t from_port, const StringName &to_node, int32_t to_port);
	bool is_node_connected(const StringName &from_node, int32_t from_port, const StringName &to_node, int32_t to_port);
	void disconnect_node(const StringName &from_node, int32_t from_port, const StringName &to_node, int32_t to_port);
	void set_connection_activity(const StringName &from_node, int32_t from_port, const StringName &to_node, int32_t to_port, double amount);
	TypedArray<Dictionary> get_connection_list() const;
	void clear_connections();
	void force_connection_drag_end();
	Vector2 get_scroll_offset() const;
	void set_scroll_offset(const Vector2 &offset);
	void add_valid_right_disconnect_type(int32_t type);
	void remove_valid_right_disconnect_type(int32_t type);
	void add_valid_left_disconnect_type(int32_t type);
	void remove_valid_left_disconnect_type(int32_t type);
	void add_valid_connection_type(int32_t from_type, int32_t to_type);
	void remove_valid_connection_type(int32_t from_type, int32_t to_type);
	bool is_valid_connection_type(int32_t from_type, int32_t to_type) const;
	PackedVector2Array get_connection_line(const Vector2 &from_node, const Vector2 &to_node);
	void set_panning_scheme(GraphEdit::PanningScheme scheme);
	GraphEdit::PanningScheme get_panning_scheme() const;
	void set_zoom(double zoom);
	double get_zoom() const;
	void set_zoom_min(double zoom_min);
	double get_zoom_min() const;
	void set_zoom_max(double zoom_max);
	double get_zoom_max() const;
	void set_zoom_step(double zoom_step);
	double get_zoom_step() const;
	void set_show_grid(bool enable);
	bool is_showing_grid() const;
	void set_snapping_enabled(bool enable);
	bool is_snapping_enabled() const;
	void set_snapping_distance(int32_t pixels);
	int32_t get_snapping_distance() const;
	void set_connection_lines_curvature(double curvature);
	double get_connection_lines_curvature() const;
	void set_connection_lines_thickness(double pixels);
	double get_connection_lines_thickness() const;
	void set_connection_lines_antialiased(bool pixels);
	bool is_connection_lines_antialiased() const;
	void set_minimap_size(const Vector2 &size);
	Vector2 get_minimap_size() const;
	void set_minimap_opacity(double opacity);
	double get_minimap_opacity() const;
	void set_minimap_enabled(bool enable);
	bool is_minimap_enabled() const;
	void set_show_menu(bool hidden);
	bool is_showing_menu() const;
	void set_show_zoom_label(bool enable);
	bool is_showing_zoom_label() const;
	void set_show_grid_buttons(bool hidden);
	bool is_showing_grid_buttons() const;
	void set_show_zoom_buttons(bool hidden);
	bool is_showing_zoom_buttons() const;
	void set_show_minimap_button(bool hidden);
	bool is_showing_minimap_button() const;
	void set_show_arrange_button(bool hidden);
	bool is_showing_arrange_button() const;
	void set_right_disconnects(bool enable);
	bool is_right_disconnects_enabled() const;
	HBoxContainer *get_menu_hbox();
	void arrange_nodes();
	void set_selected(Node *node);
	virtual bool _is_in_input_hotzone(Object *in_node, int32_t in_port, const Vector2 &mouse_position);
	virtual bool _is_in_output_hotzone(Object *in_node, int32_t in_port, const Vector2 &mouse_position);
	virtual PackedVector2Array _get_connection_line(const Vector2 &from_position, const Vector2 &to_position) const;
	virtual bool _is_node_hover_valid(const StringName &from_node, int32_t from_port, const StringName &to_node, int32_t to_port);

protected:
	template <typename T, typename B>
	static void register_virtuals() {
		Control::register_virtuals<T, B>();
		if constexpr (!std::is_same_v<decltype(&B::_is_in_input_hotzone), decltype(&T::_is_in_input_hotzone)>) {
			BIND_VIRTUAL_METHOD(T, _is_in_input_hotzone);
		}
		if constexpr (!std::is_same_v<decltype(&B::_is_in_output_hotzone), decltype(&T::_is_in_output_hotzone)>) {
			BIND_VIRTUAL_METHOD(T, _is_in_output_hotzone);
		}
		if constexpr (!std::is_same_v<decltype(&B::_get_connection_line), decltype(&T::_get_connection_line)>) {
			BIND_VIRTUAL_METHOD(T, _get_connection_line);
		}
		if constexpr (!std::is_same_v<decltype(&B::_is_node_hover_valid), decltype(&T::_is_node_hover_valid)>) {
			BIND_VIRTUAL_METHOD(T, _is_node_hover_valid);
		}
	}

public:
};

} // namespace godot

VARIANT_ENUM_CAST(GraphEdit::PanningScheme);

#endif // ! GODOT_CPP_GRAPH_EDIT_HPP