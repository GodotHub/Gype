/**************************************************************************/
/*  graph_node.cpp                                                        */
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

#include <godot_cpp/classes/graph_node.hpp>

#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

#include <godot_cpp/classes/h_box_container.hpp>
#include <godot_cpp/variant/vector2i.hpp>

namespace godot {

void GraphNode::set_title(const String &title) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GraphNode::get_class_static()._native_ptr(), StringName("set_title")._native_ptr(), 83702148);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &title);
}

String GraphNode::get_title() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GraphNode::get_class_static()._native_ptr(), StringName("get_title")._native_ptr(), 201670096);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner);
}

HBoxContainer *GraphNode::get_titlebar_hbox() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GraphNode::get_class_static()._native_ptr(), StringName("get_titlebar_hbox")._native_ptr(), 3590609951);
	CHECK_METHOD_BIND_RET(_gde_method_bind, nullptr);
	return internal::_call_native_mb_ret_obj<HBoxContainer>(_gde_method_bind, _owner);
}

void GraphNode::set_slot(int32_t slot_index, bool enable_left_port, int32_t type_left, const Color &color_left, bool enable_right_port, int32_t type_right, const Color &color_right, const Ref<Texture2D> &custom_icon_left, const Ref<Texture2D> &custom_icon_right, bool draw_stylebox) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GraphNode::get_class_static()._native_ptr(), StringName("set_slot")._native_ptr(), 2873310869);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t slot_index_encoded;
	PtrToArg<int64_t>::encode(slot_index, &slot_index_encoded);
	int8_t enable_left_port_encoded;
	PtrToArg<bool>::encode(enable_left_port, &enable_left_port_encoded);
	int64_t type_left_encoded;
	PtrToArg<int64_t>::encode(type_left, &type_left_encoded);
	int8_t enable_right_port_encoded;
	PtrToArg<bool>::encode(enable_right_port, &enable_right_port_encoded);
	int64_t type_right_encoded;
	PtrToArg<int64_t>::encode(type_right, &type_right_encoded);
	int8_t draw_stylebox_encoded;
	PtrToArg<bool>::encode(draw_stylebox, &draw_stylebox_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &slot_index_encoded, &enable_left_port_encoded, &type_left_encoded, &color_left, &enable_right_port_encoded, &type_right_encoded, &color_right, (custom_icon_left != nullptr ? &custom_icon_left->_owner : nullptr), (custom_icon_right != nullptr ? &custom_icon_right->_owner : nullptr), &draw_stylebox_encoded);
}

void GraphNode::clear_slot(int32_t slot_index) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GraphNode::get_class_static()._native_ptr(), StringName("clear_slot")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t slot_index_encoded;
	PtrToArg<int64_t>::encode(slot_index, &slot_index_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &slot_index_encoded);
}

void GraphNode::clear_all_slots() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GraphNode::get_class_static()._native_ptr(), StringName("clear_all_slots")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

bool GraphNode::is_slot_enabled_left(int32_t slot_index) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GraphNode::get_class_static()._native_ptr(), StringName("is_slot_enabled_left")._native_ptr(), 1116898809);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	int64_t slot_index_encoded;
	PtrToArg<int64_t>::encode(slot_index, &slot_index_encoded);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &slot_index_encoded);
}

void GraphNode::set_slot_enabled_left(int32_t slot_index, bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GraphNode::get_class_static()._native_ptr(), StringName("set_slot_enabled_left")._native_ptr(), 300928843);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t slot_index_encoded;
	PtrToArg<int64_t>::encode(slot_index, &slot_index_encoded);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &slot_index_encoded, &enable_encoded);
}

void GraphNode::set_slot_type_left(int32_t slot_index, int32_t type) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GraphNode::get_class_static()._native_ptr(), StringName("set_slot_type_left")._native_ptr(), 3937882851);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t slot_index_encoded;
	PtrToArg<int64_t>::encode(slot_index, &slot_index_encoded);
	int64_t type_encoded;
	PtrToArg<int64_t>::encode(type, &type_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &slot_index_encoded, &type_encoded);
}

int32_t GraphNode::get_slot_type_left(int32_t slot_index) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GraphNode::get_class_static()._native_ptr(), StringName("get_slot_type_left")._native_ptr(), 923996154);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	int64_t slot_index_encoded;
	PtrToArg<int64_t>::encode(slot_index, &slot_index_encoded);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &slot_index_encoded);
}

void GraphNode::set_slot_color_left(int32_t slot_index, const Color &color) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GraphNode::get_class_static()._native_ptr(), StringName("set_slot_color_left")._native_ptr(), 2878471219);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t slot_index_encoded;
	PtrToArg<int64_t>::encode(slot_index, &slot_index_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &slot_index_encoded, &color);
}

Color GraphNode::get_slot_color_left(int32_t slot_index) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GraphNode::get_class_static()._native_ptr(), StringName("get_slot_color_left")._native_ptr(), 3457211756);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Color());
	int64_t slot_index_encoded;
	PtrToArg<int64_t>::encode(slot_index, &slot_index_encoded);
	return internal::_call_native_mb_ret<Color>(_gde_method_bind, _owner, &slot_index_encoded);
}

void GraphNode::set_slot_custom_icon_left(int32_t slot_index, const Ref<Texture2D> &custom_icon) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GraphNode::get_class_static()._native_ptr(), StringName("set_slot_custom_icon_left")._native_ptr(), 666127730);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t slot_index_encoded;
	PtrToArg<int64_t>::encode(slot_index, &slot_index_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &slot_index_encoded, (custom_icon != nullptr ? &custom_icon->_owner : nullptr));
}

Ref<Texture2D> GraphNode::get_slot_custom_icon_left(int32_t slot_index) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GraphNode::get_class_static()._native_ptr(), StringName("get_slot_custom_icon_left")._native_ptr(), 3536238170);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<Texture2D>());
	int64_t slot_index_encoded;
	PtrToArg<int64_t>::encode(slot_index, &slot_index_encoded);
	return Ref<Texture2D>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<Texture2D>(_gde_method_bind, _owner, &slot_index_encoded));
}

bool GraphNode::is_slot_enabled_right(int32_t slot_index) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GraphNode::get_class_static()._native_ptr(), StringName("is_slot_enabled_right")._native_ptr(), 1116898809);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	int64_t slot_index_encoded;
	PtrToArg<int64_t>::encode(slot_index, &slot_index_encoded);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &slot_index_encoded);
}

void GraphNode::set_slot_enabled_right(int32_t slot_index, bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GraphNode::get_class_static()._native_ptr(), StringName("set_slot_enabled_right")._native_ptr(), 300928843);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t slot_index_encoded;
	PtrToArg<int64_t>::encode(slot_index, &slot_index_encoded);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &slot_index_encoded, &enable_encoded);
}

void GraphNode::set_slot_type_right(int32_t slot_index, int32_t type) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GraphNode::get_class_static()._native_ptr(), StringName("set_slot_type_right")._native_ptr(), 3937882851);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t slot_index_encoded;
	PtrToArg<int64_t>::encode(slot_index, &slot_index_encoded);
	int64_t type_encoded;
	PtrToArg<int64_t>::encode(type, &type_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &slot_index_encoded, &type_encoded);
}

int32_t GraphNode::get_slot_type_right(int32_t slot_index) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GraphNode::get_class_static()._native_ptr(), StringName("get_slot_type_right")._native_ptr(), 923996154);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	int64_t slot_index_encoded;
	PtrToArg<int64_t>::encode(slot_index, &slot_index_encoded);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &slot_index_encoded);
}

void GraphNode::set_slot_color_right(int32_t slot_index, const Color &color) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GraphNode::get_class_static()._native_ptr(), StringName("set_slot_color_right")._native_ptr(), 2878471219);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t slot_index_encoded;
	PtrToArg<int64_t>::encode(slot_index, &slot_index_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &slot_index_encoded, &color);
}

Color GraphNode::get_slot_color_right(int32_t slot_index) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GraphNode::get_class_static()._native_ptr(), StringName("get_slot_color_right")._native_ptr(), 3457211756);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Color());
	int64_t slot_index_encoded;
	PtrToArg<int64_t>::encode(slot_index, &slot_index_encoded);
	return internal::_call_native_mb_ret<Color>(_gde_method_bind, _owner, &slot_index_encoded);
}

void GraphNode::set_slot_custom_icon_right(int32_t slot_index, const Ref<Texture2D> &custom_icon) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GraphNode::get_class_static()._native_ptr(), StringName("set_slot_custom_icon_right")._native_ptr(), 666127730);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t slot_index_encoded;
	PtrToArg<int64_t>::encode(slot_index, &slot_index_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &slot_index_encoded, (custom_icon != nullptr ? &custom_icon->_owner : nullptr));
}

Ref<Texture2D> GraphNode::get_slot_custom_icon_right(int32_t slot_index) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GraphNode::get_class_static()._native_ptr(), StringName("get_slot_custom_icon_right")._native_ptr(), 3536238170);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<Texture2D>());
	int64_t slot_index_encoded;
	PtrToArg<int64_t>::encode(slot_index, &slot_index_encoded);
	return Ref<Texture2D>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<Texture2D>(_gde_method_bind, _owner, &slot_index_encoded));
}

bool GraphNode::is_slot_draw_stylebox(int32_t slot_index) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GraphNode::get_class_static()._native_ptr(), StringName("is_slot_draw_stylebox")._native_ptr(), 1116898809);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	int64_t slot_index_encoded;
	PtrToArg<int64_t>::encode(slot_index, &slot_index_encoded);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &slot_index_encoded);
}

void GraphNode::set_slot_draw_stylebox(int32_t slot_index, bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GraphNode::get_class_static()._native_ptr(), StringName("set_slot_draw_stylebox")._native_ptr(), 300928843);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t slot_index_encoded;
	PtrToArg<int64_t>::encode(slot_index, &slot_index_encoded);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &slot_index_encoded, &enable_encoded);
}

void GraphNode::set_ignore_invalid_connection_type(bool ignore) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GraphNode::get_class_static()._native_ptr(), StringName("set_ignore_invalid_connection_type")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t ignore_encoded;
	PtrToArg<bool>::encode(ignore, &ignore_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &ignore_encoded);
}

bool GraphNode::is_ignoring_valid_connection_type() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GraphNode::get_class_static()._native_ptr(), StringName("is_ignoring_valid_connection_type")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

int32_t GraphNode::get_input_port_count() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GraphNode::get_class_static()._native_ptr(), StringName("get_input_port_count")._native_ptr(), 2455072627);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

Vector2 GraphNode::get_input_port_position(int32_t port_idx) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GraphNode::get_class_static()._native_ptr(), StringName("get_input_port_position")._native_ptr(), 3114997196);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector2());
	int64_t port_idx_encoded;
	PtrToArg<int64_t>::encode(port_idx, &port_idx_encoded);
	return internal::_call_native_mb_ret<Vector2>(_gde_method_bind, _owner, &port_idx_encoded);
}

int32_t GraphNode::get_input_port_type(int32_t port_idx) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GraphNode::get_class_static()._native_ptr(), StringName("get_input_port_type")._native_ptr(), 3744713108);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	int64_t port_idx_encoded;
	PtrToArg<int64_t>::encode(port_idx, &port_idx_encoded);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &port_idx_encoded);
}

Color GraphNode::get_input_port_color(int32_t port_idx) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GraphNode::get_class_static()._native_ptr(), StringName("get_input_port_color")._native_ptr(), 2624840992);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Color());
	int64_t port_idx_encoded;
	PtrToArg<int64_t>::encode(port_idx, &port_idx_encoded);
	return internal::_call_native_mb_ret<Color>(_gde_method_bind, _owner, &port_idx_encoded);
}

int32_t GraphNode::get_input_port_slot(int32_t port_idx) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GraphNode::get_class_static()._native_ptr(), StringName("get_input_port_slot")._native_ptr(), 3744713108);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	int64_t port_idx_encoded;
	PtrToArg<int64_t>::encode(port_idx, &port_idx_encoded);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &port_idx_encoded);
}

int32_t GraphNode::get_output_port_count() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GraphNode::get_class_static()._native_ptr(), StringName("get_output_port_count")._native_ptr(), 2455072627);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

Vector2 GraphNode::get_output_port_position(int32_t port_idx) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GraphNode::get_class_static()._native_ptr(), StringName("get_output_port_position")._native_ptr(), 3114997196);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector2());
	int64_t port_idx_encoded;
	PtrToArg<int64_t>::encode(port_idx, &port_idx_encoded);
	return internal::_call_native_mb_ret<Vector2>(_gde_method_bind, _owner, &port_idx_encoded);
}

int32_t GraphNode::get_output_port_type(int32_t port_idx) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GraphNode::get_class_static()._native_ptr(), StringName("get_output_port_type")._native_ptr(), 3744713108);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	int64_t port_idx_encoded;
	PtrToArg<int64_t>::encode(port_idx, &port_idx_encoded);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &port_idx_encoded);
}

Color GraphNode::get_output_port_color(int32_t port_idx) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GraphNode::get_class_static()._native_ptr(), StringName("get_output_port_color")._native_ptr(), 2624840992);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Color());
	int64_t port_idx_encoded;
	PtrToArg<int64_t>::encode(port_idx, &port_idx_encoded);
	return internal::_call_native_mb_ret<Color>(_gde_method_bind, _owner, &port_idx_encoded);
}

int32_t GraphNode::get_output_port_slot(int32_t port_idx) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GraphNode::get_class_static()._native_ptr(), StringName("get_output_port_slot")._native_ptr(), 3744713108);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	int64_t port_idx_encoded;
	PtrToArg<int64_t>::encode(port_idx, &port_idx_encoded);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &port_idx_encoded);
}

void GraphNode::_draw_port(int32_t slot_index, const Vector2i &position, bool left, const Color &color) {}


} // namespace godot 