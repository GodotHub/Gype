/**************************************************************************/
/*  graph_edit.cpp                                                        */
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

#include <godot_cpp/classes/graph_edit.hpp>

#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

#include <godot_cpp/classes/h_box_container.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/core/object.hpp>
#include <godot_cpp/variant/string_name.hpp>

namespace godot {

Error GraphEdit::connect_node(const StringName &from_node, int32_t from_port, const StringName &to_node, int32_t to_port) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GraphEdit::get_class_static()._native_ptr(), StringName("connect_node")._native_ptr(), 195065850);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Error(0));
	int64_t from_port_encoded;
	PtrToArg<int64_t>::encode(from_port, &from_port_encoded);
	int64_t to_port_encoded;
	PtrToArg<int64_t>::encode(to_port, &to_port_encoded);
	return (Error)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &from_node, &from_port_encoded, &to_node, &to_port_encoded);
}

bool GraphEdit::is_node_connected(const StringName &from_node, int32_t from_port, const StringName &to_node, int32_t to_port) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GraphEdit::get_class_static()._native_ptr(), StringName("is_node_connected")._native_ptr(), 4216241294);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	int64_t from_port_encoded;
	PtrToArg<int64_t>::encode(from_port, &from_port_encoded);
	int64_t to_port_encoded;
	PtrToArg<int64_t>::encode(to_port, &to_port_encoded);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &from_node, &from_port_encoded, &to_node, &to_port_encoded);
}

void GraphEdit::disconnect_node(const StringName &from_node, int32_t from_port, const StringName &to_node, int32_t to_port) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GraphEdit::get_class_static()._native_ptr(), StringName("disconnect_node")._native_ptr(), 1933654315);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t from_port_encoded;
	PtrToArg<int64_t>::encode(from_port, &from_port_encoded);
	int64_t to_port_encoded;
	PtrToArg<int64_t>::encode(to_port, &to_port_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &from_node, &from_port_encoded, &to_node, &to_port_encoded);
}

void GraphEdit::set_connection_activity(const StringName &from_node, int32_t from_port, const StringName &to_node, int32_t to_port, double amount) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GraphEdit::get_class_static()._native_ptr(), StringName("set_connection_activity")._native_ptr(), 1141899943);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t from_port_encoded;
	PtrToArg<int64_t>::encode(from_port, &from_port_encoded);
	int64_t to_port_encoded;
	PtrToArg<int64_t>::encode(to_port, &to_port_encoded);
	double amount_encoded;
	PtrToArg<double>::encode(amount, &amount_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &from_node, &from_port_encoded, &to_node, &to_port_encoded, &amount_encoded);
}

TypedArray<Dictionary> GraphEdit::get_connection_list() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GraphEdit::get_class_static()._native_ptr(), StringName("get_connection_list")._native_ptr(), 3995934104);
	CHECK_METHOD_BIND_RET(_gde_method_bind, TypedArray<Dictionary>());
	return internal::_call_native_mb_ret<TypedArray<Dictionary>>(_gde_method_bind, _owner);
}

void GraphEdit::clear_connections() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GraphEdit::get_class_static()._native_ptr(), StringName("clear_connections")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

void GraphEdit::force_connection_drag_end() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GraphEdit::get_class_static()._native_ptr(), StringName("force_connection_drag_end")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

Vector2 GraphEdit::get_scroll_offset() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GraphEdit::get_class_static()._native_ptr(), StringName("get_scroll_offset")._native_ptr(), 3341600327);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector2());
	return internal::_call_native_mb_ret<Vector2>(_gde_method_bind, _owner);
}

void GraphEdit::set_scroll_offset(const Vector2 &offset) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GraphEdit::get_class_static()._native_ptr(), StringName("set_scroll_offset")._native_ptr(), 743155724);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &offset);
}

void GraphEdit::add_valid_right_disconnect_type(int32_t type) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GraphEdit::get_class_static()._native_ptr(), StringName("add_valid_right_disconnect_type")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t type_encoded;
	PtrToArg<int64_t>::encode(type, &type_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &type_encoded);
}

void GraphEdit::remove_valid_right_disconnect_type(int32_t type) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GraphEdit::get_class_static()._native_ptr(), StringName("remove_valid_right_disconnect_type")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t type_encoded;
	PtrToArg<int64_t>::encode(type, &type_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &type_encoded);
}

void GraphEdit::add_valid_left_disconnect_type(int32_t type) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GraphEdit::get_class_static()._native_ptr(), StringName("add_valid_left_disconnect_type")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t type_encoded;
	PtrToArg<int64_t>::encode(type, &type_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &type_encoded);
}

void GraphEdit::remove_valid_left_disconnect_type(int32_t type) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GraphEdit::get_class_static()._native_ptr(), StringName("remove_valid_left_disconnect_type")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t type_encoded;
	PtrToArg<int64_t>::encode(type, &type_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &type_encoded);
}

void GraphEdit::add_valid_connection_type(int32_t from_type, int32_t to_type) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GraphEdit::get_class_static()._native_ptr(), StringName("add_valid_connection_type")._native_ptr(), 3937882851);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t from_type_encoded;
	PtrToArg<int64_t>::encode(from_type, &from_type_encoded);
	int64_t to_type_encoded;
	PtrToArg<int64_t>::encode(to_type, &to_type_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &from_type_encoded, &to_type_encoded);
}

void GraphEdit::remove_valid_connection_type(int32_t from_type, int32_t to_type) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GraphEdit::get_class_static()._native_ptr(), StringName("remove_valid_connection_type")._native_ptr(), 3937882851);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t from_type_encoded;
	PtrToArg<int64_t>::encode(from_type, &from_type_encoded);
	int64_t to_type_encoded;
	PtrToArg<int64_t>::encode(to_type, &to_type_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &from_type_encoded, &to_type_encoded);
}

bool GraphEdit::is_valid_connection_type(int32_t from_type, int32_t to_type) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GraphEdit::get_class_static()._native_ptr(), StringName("is_valid_connection_type")._native_ptr(), 2522259332);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	int64_t from_type_encoded;
	PtrToArg<int64_t>::encode(from_type, &from_type_encoded);
	int64_t to_type_encoded;
	PtrToArg<int64_t>::encode(to_type, &to_type_encoded);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &from_type_encoded, &to_type_encoded);
}

PackedVector2Array GraphEdit::get_connection_line(const Vector2 &from_node, const Vector2 &to_node) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GraphEdit::get_class_static()._native_ptr(), StringName("get_connection_line")._native_ptr(), 1562168077);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedVector2Array());
	return internal::_call_native_mb_ret<PackedVector2Array>(_gde_method_bind, _owner, &from_node, &to_node);
}

void GraphEdit::set_panning_scheme(GraphEdit::PanningScheme scheme) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GraphEdit::get_class_static()._native_ptr(), StringName("set_panning_scheme")._native_ptr(), 18893313);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &scheme);
}

GraphEdit::PanningScheme GraphEdit::get_panning_scheme() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GraphEdit::get_class_static()._native_ptr(), StringName("get_panning_scheme")._native_ptr(), 549924446);
	CHECK_METHOD_BIND_RET(_gde_method_bind, GraphEdit::PanningScheme(0));
	return (GraphEdit::PanningScheme)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void GraphEdit::set_zoom(double zoom) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GraphEdit::get_class_static()._native_ptr(), StringName("set_zoom")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double zoom_encoded;
	PtrToArg<double>::encode(zoom, &zoom_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &zoom_encoded);
}

double GraphEdit::get_zoom() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GraphEdit::get_class_static()._native_ptr(), StringName("get_zoom")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void GraphEdit::set_zoom_min(double zoom_min) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GraphEdit::get_class_static()._native_ptr(), StringName("set_zoom_min")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double zoom_min_encoded;
	PtrToArg<double>::encode(zoom_min, &zoom_min_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &zoom_min_encoded);
}

double GraphEdit::get_zoom_min() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GraphEdit::get_class_static()._native_ptr(), StringName("get_zoom_min")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void GraphEdit::set_zoom_max(double zoom_max) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GraphEdit::get_class_static()._native_ptr(), StringName("set_zoom_max")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double zoom_max_encoded;
	PtrToArg<double>::encode(zoom_max, &zoom_max_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &zoom_max_encoded);
}

double GraphEdit::get_zoom_max() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GraphEdit::get_class_static()._native_ptr(), StringName("get_zoom_max")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void GraphEdit::set_zoom_step(double zoom_step) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GraphEdit::get_class_static()._native_ptr(), StringName("set_zoom_step")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double zoom_step_encoded;
	PtrToArg<double>::encode(zoom_step, &zoom_step_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &zoom_step_encoded);
}

double GraphEdit::get_zoom_step() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GraphEdit::get_class_static()._native_ptr(), StringName("get_zoom_step")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void GraphEdit::set_show_grid(bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GraphEdit::get_class_static()._native_ptr(), StringName("set_show_grid")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enable_encoded);
}

bool GraphEdit::is_showing_grid() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GraphEdit::get_class_static()._native_ptr(), StringName("is_showing_grid")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void GraphEdit::set_snapping_enabled(bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GraphEdit::get_class_static()._native_ptr(), StringName("set_snapping_enabled")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enable_encoded);
}

bool GraphEdit::is_snapping_enabled() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GraphEdit::get_class_static()._native_ptr(), StringName("is_snapping_enabled")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void GraphEdit::set_snapping_distance(int32_t pixels) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GraphEdit::get_class_static()._native_ptr(), StringName("set_snapping_distance")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t pixels_encoded;
	PtrToArg<int64_t>::encode(pixels, &pixels_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &pixels_encoded);
}

int32_t GraphEdit::get_snapping_distance() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GraphEdit::get_class_static()._native_ptr(), StringName("get_snapping_distance")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void GraphEdit::set_connection_lines_curvature(double curvature) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GraphEdit::get_class_static()._native_ptr(), StringName("set_connection_lines_curvature")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double curvature_encoded;
	PtrToArg<double>::encode(curvature, &curvature_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &curvature_encoded);
}

double GraphEdit::get_connection_lines_curvature() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GraphEdit::get_class_static()._native_ptr(), StringName("get_connection_lines_curvature")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void GraphEdit::set_connection_lines_thickness(double pixels) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GraphEdit::get_class_static()._native_ptr(), StringName("set_connection_lines_thickness")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double pixels_encoded;
	PtrToArg<double>::encode(pixels, &pixels_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &pixels_encoded);
}

double GraphEdit::get_connection_lines_thickness() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GraphEdit::get_class_static()._native_ptr(), StringName("get_connection_lines_thickness")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void GraphEdit::set_connection_lines_antialiased(bool pixels) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GraphEdit::get_class_static()._native_ptr(), StringName("set_connection_lines_antialiased")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t pixels_encoded;
	PtrToArg<bool>::encode(pixels, &pixels_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &pixels_encoded);
}

bool GraphEdit::is_connection_lines_antialiased() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GraphEdit::get_class_static()._native_ptr(), StringName("is_connection_lines_antialiased")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void GraphEdit::set_minimap_size(const Vector2 &size) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GraphEdit::get_class_static()._native_ptr(), StringName("set_minimap_size")._native_ptr(), 743155724);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &size);
}

Vector2 GraphEdit::get_minimap_size() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GraphEdit::get_class_static()._native_ptr(), StringName("get_minimap_size")._native_ptr(), 3341600327);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector2());
	return internal::_call_native_mb_ret<Vector2>(_gde_method_bind, _owner);
}

void GraphEdit::set_minimap_opacity(double opacity) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GraphEdit::get_class_static()._native_ptr(), StringName("set_minimap_opacity")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double opacity_encoded;
	PtrToArg<double>::encode(opacity, &opacity_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &opacity_encoded);
}

double GraphEdit::get_minimap_opacity() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GraphEdit::get_class_static()._native_ptr(), StringName("get_minimap_opacity")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void GraphEdit::set_minimap_enabled(bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GraphEdit::get_class_static()._native_ptr(), StringName("set_minimap_enabled")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enable_encoded);
}

bool GraphEdit::is_minimap_enabled() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GraphEdit::get_class_static()._native_ptr(), StringName("is_minimap_enabled")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void GraphEdit::set_show_menu(bool hidden) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GraphEdit::get_class_static()._native_ptr(), StringName("set_show_menu")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t hidden_encoded;
	PtrToArg<bool>::encode(hidden, &hidden_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &hidden_encoded);
}

bool GraphEdit::is_showing_menu() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GraphEdit::get_class_static()._native_ptr(), StringName("is_showing_menu")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void GraphEdit::set_show_zoom_label(bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GraphEdit::get_class_static()._native_ptr(), StringName("set_show_zoom_label")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enable_encoded);
}

bool GraphEdit::is_showing_zoom_label() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GraphEdit::get_class_static()._native_ptr(), StringName("is_showing_zoom_label")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void GraphEdit::set_show_grid_buttons(bool hidden) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GraphEdit::get_class_static()._native_ptr(), StringName("set_show_grid_buttons")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t hidden_encoded;
	PtrToArg<bool>::encode(hidden, &hidden_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &hidden_encoded);
}

bool GraphEdit::is_showing_grid_buttons() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GraphEdit::get_class_static()._native_ptr(), StringName("is_showing_grid_buttons")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void GraphEdit::set_show_zoom_buttons(bool hidden) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GraphEdit::get_class_static()._native_ptr(), StringName("set_show_zoom_buttons")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t hidden_encoded;
	PtrToArg<bool>::encode(hidden, &hidden_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &hidden_encoded);
}

bool GraphEdit::is_showing_zoom_buttons() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GraphEdit::get_class_static()._native_ptr(), StringName("is_showing_zoom_buttons")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void GraphEdit::set_show_minimap_button(bool hidden) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GraphEdit::get_class_static()._native_ptr(), StringName("set_show_minimap_button")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t hidden_encoded;
	PtrToArg<bool>::encode(hidden, &hidden_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &hidden_encoded);
}

bool GraphEdit::is_showing_minimap_button() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GraphEdit::get_class_static()._native_ptr(), StringName("is_showing_minimap_button")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void GraphEdit::set_show_arrange_button(bool hidden) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GraphEdit::get_class_static()._native_ptr(), StringName("set_show_arrange_button")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t hidden_encoded;
	PtrToArg<bool>::encode(hidden, &hidden_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &hidden_encoded);
}

bool GraphEdit::is_showing_arrange_button() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GraphEdit::get_class_static()._native_ptr(), StringName("is_showing_arrange_button")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void GraphEdit::set_right_disconnects(bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GraphEdit::get_class_static()._native_ptr(), StringName("set_right_disconnects")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enable_encoded);
}

bool GraphEdit::is_right_disconnects_enabled() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GraphEdit::get_class_static()._native_ptr(), StringName("is_right_disconnects_enabled")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

HBoxContainer *GraphEdit::get_menu_hbox() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GraphEdit::get_class_static()._native_ptr(), StringName("get_menu_hbox")._native_ptr(), 3590609951);
	CHECK_METHOD_BIND_RET(_gde_method_bind, nullptr);
	return internal::_call_native_mb_ret_obj<HBoxContainer>(_gde_method_bind, _owner);
}

void GraphEdit::arrange_nodes() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GraphEdit::get_class_static()._native_ptr(), StringName("arrange_nodes")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

void GraphEdit::set_selected(Node *node) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GraphEdit::get_class_static()._native_ptr(), StringName("set_selected")._native_ptr(), 1078189570);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (node != nullptr ? &node->_owner : nullptr));
}

bool GraphEdit::_is_in_input_hotzone(Object *in_node, int32_t in_port, const Vector2 &mouse_position) {
	return false;
}

bool GraphEdit::_is_in_output_hotzone(Object *in_node, int32_t in_port, const Vector2 &mouse_position) {
	return false;
}

PackedVector2Array GraphEdit::_get_connection_line(const Vector2 &from_position, const Vector2 &to_position) const {
	return PackedVector2Array();
}

bool GraphEdit::_is_node_hover_valid(const StringName &from_node, int32_t from_port, const StringName &to_node, int32_t to_port) {
	return false;
}


} // namespace godot 