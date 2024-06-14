/**************************************************************************/
/*  control.cpp                                                           */
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

#include <godot_cpp/classes/control.hpp>

#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

#include <godot_cpp/variant/array.hpp>
#include <godot_cpp/variant/callable.hpp>
#include <godot_cpp/classes/font.hpp>
#include <godot_cpp/classes/input_event.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/core/object.hpp>
#include <godot_cpp/classes/style_box.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/classes/theme.hpp>

namespace godot {

const int Control::NOTIFICATION_RESIZED = 40;
const int Control::NOTIFICATION_MOUSE_ENTER = 41;
const int Control::NOTIFICATION_MOUSE_EXIT = 42;
const int Control::NOTIFICATION_MOUSE_ENTER_SELF = 60;
const int Control::NOTIFICATION_MOUSE_EXIT_SELF = 61;
const int Control::NOTIFICATION_FOCUS_ENTER = 43;
const int Control::NOTIFICATION_FOCUS_EXIT = 44;
const int Control::NOTIFICATION_THEME_CHANGED = 45;
const int Control::NOTIFICATION_SCROLL_BEGIN = 47;
const int Control::NOTIFICATION_SCROLL_END = 48;
const int Control::NOTIFICATION_LAYOUT_DIRECTION_CHANGED = 49;

void Control::accept_event() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Control::get_class_static()._native_ptr(), StringName("accept_event")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

Vector2 Control::get_minimum_size() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Control::get_class_static()._native_ptr(), StringName("get_minimum_size")._native_ptr(), 3341600327);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector2());
	return internal::_call_native_mb_ret<Vector2>(_gde_method_bind, _owner);
}

Vector2 Control::get_combined_minimum_size() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Control::get_class_static()._native_ptr(), StringName("get_combined_minimum_size")._native_ptr(), 3341600327);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector2());
	return internal::_call_native_mb_ret<Vector2>(_gde_method_bind, _owner);
}

void Control::set_anchors_preset(Control::LayoutPreset preset, bool keep_offsets) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Control::get_class_static()._native_ptr(), StringName("set_anchors_preset")._native_ptr(), 509135270);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t keep_offsets_encoded;
	PtrToArg<bool>::encode(keep_offsets, &keep_offsets_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &preset, &keep_offsets_encoded);
}

void Control::set_offsets_preset(Control::LayoutPreset preset, Control::LayoutPresetMode resize_mode, int32_t margin) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Control::get_class_static()._native_ptr(), StringName("set_offsets_preset")._native_ptr(), 3724524307);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t margin_encoded;
	PtrToArg<int64_t>::encode(margin, &margin_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &preset, &resize_mode, &margin_encoded);
}

void Control::set_anchors_and_offsets_preset(Control::LayoutPreset preset, Control::LayoutPresetMode resize_mode, int32_t margin) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Control::get_class_static()._native_ptr(), StringName("set_anchors_and_offsets_preset")._native_ptr(), 3724524307);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t margin_encoded;
	PtrToArg<int64_t>::encode(margin, &margin_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &preset, &resize_mode, &margin_encoded);
}

void Control::set_anchor(Side side, double anchor, bool keep_offset, bool push_opposite_anchor) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Control::get_class_static()._native_ptr(), StringName("set_anchor")._native_ptr(), 2302782885);
	CHECK_METHOD_BIND(_gde_method_bind);
	double anchor_encoded;
	PtrToArg<double>::encode(anchor, &anchor_encoded);
	int8_t keep_offset_encoded;
	PtrToArg<bool>::encode(keep_offset, &keep_offset_encoded);
	int8_t push_opposite_anchor_encoded;
	PtrToArg<bool>::encode(push_opposite_anchor, &push_opposite_anchor_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &side, &anchor_encoded, &keep_offset_encoded, &push_opposite_anchor_encoded);
}

double Control::get_anchor(Side side) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Control::get_class_static()._native_ptr(), StringName("get_anchor")._native_ptr(), 2869120046);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner, &side);
}

void Control::set_offset(Side side, double offset) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Control::get_class_static()._native_ptr(), StringName("set_offset")._native_ptr(), 4290182280);
	CHECK_METHOD_BIND(_gde_method_bind);
	double offset_encoded;
	PtrToArg<double>::encode(offset, &offset_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &side, &offset_encoded);
}

double Control::get_offset(Side offset) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Control::get_class_static()._native_ptr(), StringName("get_offset")._native_ptr(), 2869120046);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner, &offset);
}

void Control::set_anchor_and_offset(Side side, double anchor, double offset, bool push_opposite_anchor) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Control::get_class_static()._native_ptr(), StringName("set_anchor_and_offset")._native_ptr(), 4031722181);
	CHECK_METHOD_BIND(_gde_method_bind);
	double anchor_encoded;
	PtrToArg<double>::encode(anchor, &anchor_encoded);
	double offset_encoded;
	PtrToArg<double>::encode(offset, &offset_encoded);
	int8_t push_opposite_anchor_encoded;
	PtrToArg<bool>::encode(push_opposite_anchor, &push_opposite_anchor_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &side, &anchor_encoded, &offset_encoded, &push_opposite_anchor_encoded);
}

void Control::set_begin(const Vector2 &position) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Control::get_class_static()._native_ptr(), StringName("set_begin")._native_ptr(), 743155724);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &position);
}

void Control::set_end(const Vector2 &position) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Control::get_class_static()._native_ptr(), StringName("set_end")._native_ptr(), 743155724);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &position);
}

void Control::set_position(const Vector2 &position, bool keep_offsets) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Control::get_class_static()._native_ptr(), StringName("set_position")._native_ptr(), 2436320129);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t keep_offsets_encoded;
	PtrToArg<bool>::encode(keep_offsets, &keep_offsets_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &position, &keep_offsets_encoded);
}

void Control::set_size(const Vector2 &size, bool keep_offsets) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Control::get_class_static()._native_ptr(), StringName("set_size")._native_ptr(), 2436320129);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t keep_offsets_encoded;
	PtrToArg<bool>::encode(keep_offsets, &keep_offsets_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &size, &keep_offsets_encoded);
}

void Control::reset_size() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Control::get_class_static()._native_ptr(), StringName("reset_size")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

void Control::set_custom_minimum_size(const Vector2 &size) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Control::get_class_static()._native_ptr(), StringName("set_custom_minimum_size")._native_ptr(), 743155724);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &size);
}

void Control::set_global_position(const Vector2 &position, bool keep_offsets) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Control::get_class_static()._native_ptr(), StringName("set_global_position")._native_ptr(), 2436320129);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t keep_offsets_encoded;
	PtrToArg<bool>::encode(keep_offsets, &keep_offsets_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &position, &keep_offsets_encoded);
}

void Control::set_rotation(double radians) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Control::get_class_static()._native_ptr(), StringName("set_rotation")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double radians_encoded;
	PtrToArg<double>::encode(radians, &radians_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &radians_encoded);
}

void Control::set_rotation_degrees(double degrees) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Control::get_class_static()._native_ptr(), StringName("set_rotation_degrees")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double degrees_encoded;
	PtrToArg<double>::encode(degrees, &degrees_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &degrees_encoded);
}

void Control::set_scale(const Vector2 &scale) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Control::get_class_static()._native_ptr(), StringName("set_scale")._native_ptr(), 743155724);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &scale);
}

void Control::set_pivot_offset(const Vector2 &pivot_offset) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Control::get_class_static()._native_ptr(), StringName("set_pivot_offset")._native_ptr(), 743155724);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &pivot_offset);
}

Vector2 Control::get_begin() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Control::get_class_static()._native_ptr(), StringName("get_begin")._native_ptr(), 3341600327);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector2());
	return internal::_call_native_mb_ret<Vector2>(_gde_method_bind, _owner);
}

Vector2 Control::get_end() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Control::get_class_static()._native_ptr(), StringName("get_end")._native_ptr(), 3341600327);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector2());
	return internal::_call_native_mb_ret<Vector2>(_gde_method_bind, _owner);
}

Vector2 Control::get_position() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Control::get_class_static()._native_ptr(), StringName("get_position")._native_ptr(), 3341600327);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector2());
	return internal::_call_native_mb_ret<Vector2>(_gde_method_bind, _owner);
}

Vector2 Control::get_size() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Control::get_class_static()._native_ptr(), StringName("get_size")._native_ptr(), 3341600327);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector2());
	return internal::_call_native_mb_ret<Vector2>(_gde_method_bind, _owner);
}

double Control::get_rotation() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Control::get_class_static()._native_ptr(), StringName("get_rotation")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

double Control::get_rotation_degrees() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Control::get_class_static()._native_ptr(), StringName("get_rotation_degrees")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

Vector2 Control::get_scale() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Control::get_class_static()._native_ptr(), StringName("get_scale")._native_ptr(), 3341600327);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector2());
	return internal::_call_native_mb_ret<Vector2>(_gde_method_bind, _owner);
}

Vector2 Control::get_pivot_offset() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Control::get_class_static()._native_ptr(), StringName("get_pivot_offset")._native_ptr(), 3341600327);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector2());
	return internal::_call_native_mb_ret<Vector2>(_gde_method_bind, _owner);
}

Vector2 Control::get_custom_minimum_size() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Control::get_class_static()._native_ptr(), StringName("get_custom_minimum_size")._native_ptr(), 3341600327);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector2());
	return internal::_call_native_mb_ret<Vector2>(_gde_method_bind, _owner);
}

Vector2 Control::get_parent_area_size() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Control::get_class_static()._native_ptr(), StringName("get_parent_area_size")._native_ptr(), 3341600327);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector2());
	return internal::_call_native_mb_ret<Vector2>(_gde_method_bind, _owner);
}

Vector2 Control::get_global_position() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Control::get_class_static()._native_ptr(), StringName("get_global_position")._native_ptr(), 3341600327);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector2());
	return internal::_call_native_mb_ret<Vector2>(_gde_method_bind, _owner);
}

Vector2 Control::get_screen_position() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Control::get_class_static()._native_ptr(), StringName("get_screen_position")._native_ptr(), 3341600327);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector2());
	return internal::_call_native_mb_ret<Vector2>(_gde_method_bind, _owner);
}

Rect2 Control::get_rect() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Control::get_class_static()._native_ptr(), StringName("get_rect")._native_ptr(), 1639390495);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Rect2());
	return internal::_call_native_mb_ret<Rect2>(_gde_method_bind, _owner);
}

Rect2 Control::get_global_rect() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Control::get_class_static()._native_ptr(), StringName("get_global_rect")._native_ptr(), 1639390495);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Rect2());
	return internal::_call_native_mb_ret<Rect2>(_gde_method_bind, _owner);
}

void Control::set_focus_mode(Control::FocusMode mode) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Control::get_class_static()._native_ptr(), StringName("set_focus_mode")._native_ptr(), 3232914922);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &mode);
}

Control::FocusMode Control::get_focus_mode() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Control::get_class_static()._native_ptr(), StringName("get_focus_mode")._native_ptr(), 2132829277);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Control::FocusMode(0));
	return (Control::FocusMode)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

bool Control::has_focus() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Control::get_class_static()._native_ptr(), StringName("has_focus")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void Control::grab_focus() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Control::get_class_static()._native_ptr(), StringName("grab_focus")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

void Control::release_focus() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Control::get_class_static()._native_ptr(), StringName("release_focus")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

Control *Control::find_prev_valid_focus() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Control::get_class_static()._native_ptr(), StringName("find_prev_valid_focus")._native_ptr(), 2783021301);
	CHECK_METHOD_BIND_RET(_gde_method_bind, nullptr);
	return internal::_call_native_mb_ret_obj<Control>(_gde_method_bind, _owner);
}

Control *Control::find_next_valid_focus() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Control::get_class_static()._native_ptr(), StringName("find_next_valid_focus")._native_ptr(), 2783021301);
	CHECK_METHOD_BIND_RET(_gde_method_bind, nullptr);
	return internal::_call_native_mb_ret_obj<Control>(_gde_method_bind, _owner);
}

Control *Control::find_valid_focus_neighbor(Side side) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Control::get_class_static()._native_ptr(), StringName("find_valid_focus_neighbor")._native_ptr(), 1543910170);
	CHECK_METHOD_BIND_RET(_gde_method_bind, nullptr);
	return internal::_call_native_mb_ret_obj<Control>(_gde_method_bind, _owner, &side);
}

void Control::set_h_size_flags(BitField<Control::SizeFlags> flags) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Control::get_class_static()._native_ptr(), StringName("set_h_size_flags")._native_ptr(), 394851643);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &flags);
}

BitField<Control::SizeFlags> Control::get_h_size_flags() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Control::get_class_static()._native_ptr(), StringName("get_h_size_flags")._native_ptr(), 3781367401);
	CHECK_METHOD_BIND_RET(_gde_method_bind, BitField<Control::SizeFlags>(0));
	return (int64_t)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void Control::set_stretch_ratio(double ratio) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Control::get_class_static()._native_ptr(), StringName("set_stretch_ratio")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double ratio_encoded;
	PtrToArg<double>::encode(ratio, &ratio_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &ratio_encoded);
}

double Control::get_stretch_ratio() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Control::get_class_static()._native_ptr(), StringName("get_stretch_ratio")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void Control::set_v_size_flags(BitField<Control::SizeFlags> flags) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Control::get_class_static()._native_ptr(), StringName("set_v_size_flags")._native_ptr(), 394851643);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &flags);
}

BitField<Control::SizeFlags> Control::get_v_size_flags() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Control::get_class_static()._native_ptr(), StringName("get_v_size_flags")._native_ptr(), 3781367401);
	CHECK_METHOD_BIND_RET(_gde_method_bind, BitField<Control::SizeFlags>(0));
	return (int64_t)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void Control::set_theme(const Ref<Theme> &theme) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Control::get_class_static()._native_ptr(), StringName("set_theme")._native_ptr(), 2326690814);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (theme != nullptr ? &theme->_owner : nullptr));
}

Ref<Theme> Control::get_theme() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Control::get_class_static()._native_ptr(), StringName("get_theme")._native_ptr(), 3846893731);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<Theme>());
	return Ref<Theme>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<Theme>(_gde_method_bind, _owner));
}

void Control::set_theme_type_variation(const StringName &theme_type) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Control::get_class_static()._native_ptr(), StringName("set_theme_type_variation")._native_ptr(), 3304788590);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &theme_type);
}

StringName Control::get_theme_type_variation() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Control::get_class_static()._native_ptr(), StringName("get_theme_type_variation")._native_ptr(), 2002593661);
	CHECK_METHOD_BIND_RET(_gde_method_bind, StringName());
	return internal::_call_native_mb_ret<StringName>(_gde_method_bind, _owner);
}

void Control::begin_bulk_theme_override() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Control::get_class_static()._native_ptr(), StringName("begin_bulk_theme_override")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

void Control::end_bulk_theme_override() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Control::get_class_static()._native_ptr(), StringName("end_bulk_theme_override")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

void Control::add_theme_icon_override(const StringName &name, const Ref<Texture2D> &texture) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Control::get_class_static()._native_ptr(), StringName("add_theme_icon_override")._native_ptr(), 1373065600);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &name, (texture != nullptr ? &texture->_owner : nullptr));
}

void Control::add_theme_stylebox_override(const StringName &name, const Ref<StyleBox> &stylebox) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Control::get_class_static()._native_ptr(), StringName("add_theme_stylebox_override")._native_ptr(), 4188838905);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &name, (stylebox != nullptr ? &stylebox->_owner : nullptr));
}

void Control::add_theme_font_override(const StringName &name, const Ref<Font> &font) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Control::get_class_static()._native_ptr(), StringName("add_theme_font_override")._native_ptr(), 3518018674);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &name, (font != nullptr ? &font->_owner : nullptr));
}

void Control::add_theme_font_size_override(const StringName &name, int32_t font_size) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Control::get_class_static()._native_ptr(), StringName("add_theme_font_size_override")._native_ptr(), 2415702435);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t font_size_encoded;
	PtrToArg<int64_t>::encode(font_size, &font_size_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &name, &font_size_encoded);
}

void Control::add_theme_color_override(const StringName &name, const Color &color) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Control::get_class_static()._native_ptr(), StringName("add_theme_color_override")._native_ptr(), 4260178595);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &name, &color);
}

void Control::add_theme_constant_override(const StringName &name, int32_t constant) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Control::get_class_static()._native_ptr(), StringName("add_theme_constant_override")._native_ptr(), 2415702435);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t constant_encoded;
	PtrToArg<int64_t>::encode(constant, &constant_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &name, &constant_encoded);
}

void Control::remove_theme_icon_override(const StringName &name) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Control::get_class_static()._native_ptr(), StringName("remove_theme_icon_override")._native_ptr(), 3304788590);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &name);
}

void Control::remove_theme_stylebox_override(const StringName &name) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Control::get_class_static()._native_ptr(), StringName("remove_theme_stylebox_override")._native_ptr(), 3304788590);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &name);
}

void Control::remove_theme_font_override(const StringName &name) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Control::get_class_static()._native_ptr(), StringName("remove_theme_font_override")._native_ptr(), 3304788590);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &name);
}

void Control::remove_theme_font_size_override(const StringName &name) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Control::get_class_static()._native_ptr(), StringName("remove_theme_font_size_override")._native_ptr(), 3304788590);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &name);
}

void Control::remove_theme_color_override(const StringName &name) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Control::get_class_static()._native_ptr(), StringName("remove_theme_color_override")._native_ptr(), 3304788590);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &name);
}

void Control::remove_theme_constant_override(const StringName &name) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Control::get_class_static()._native_ptr(), StringName("remove_theme_constant_override")._native_ptr(), 3304788590);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &name);
}

Ref<Texture2D> Control::get_theme_icon(const StringName &name, const StringName &theme_type) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Control::get_class_static()._native_ptr(), StringName("get_theme_icon")._native_ptr(), 2336455395);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<Texture2D>());
	return Ref<Texture2D>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<Texture2D>(_gde_method_bind, _owner, &name, &theme_type));
}

Ref<StyleBox> Control::get_theme_stylebox(const StringName &name, const StringName &theme_type) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Control::get_class_static()._native_ptr(), StringName("get_theme_stylebox")._native_ptr(), 2759935355);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<StyleBox>());
	return Ref<StyleBox>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<StyleBox>(_gde_method_bind, _owner, &name, &theme_type));
}

Ref<Font> Control::get_theme_font(const StringName &name, const StringName &theme_type) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Control::get_class_static()._native_ptr(), StringName("get_theme_font")._native_ptr(), 387378635);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<Font>());
	return Ref<Font>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<Font>(_gde_method_bind, _owner, &name, &theme_type));
}

int32_t Control::get_theme_font_size(const StringName &name, const StringName &theme_type) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Control::get_class_static()._native_ptr(), StringName("get_theme_font_size")._native_ptr(), 229578101);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &name, &theme_type);
}

Color Control::get_theme_color(const StringName &name, const StringName &theme_type) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Control::get_class_static()._native_ptr(), StringName("get_theme_color")._native_ptr(), 2377051548);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Color());
	return internal::_call_native_mb_ret<Color>(_gde_method_bind, _owner, &name, &theme_type);
}

int32_t Control::get_theme_constant(const StringName &name, const StringName &theme_type) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Control::get_class_static()._native_ptr(), StringName("get_theme_constant")._native_ptr(), 229578101);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &name, &theme_type);
}

bool Control::has_theme_icon_override(const StringName &name) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Control::get_class_static()._native_ptr(), StringName("has_theme_icon_override")._native_ptr(), 2619796661);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &name);
}

bool Control::has_theme_stylebox_override(const StringName &name) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Control::get_class_static()._native_ptr(), StringName("has_theme_stylebox_override")._native_ptr(), 2619796661);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &name);
}

bool Control::has_theme_font_override(const StringName &name) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Control::get_class_static()._native_ptr(), StringName("has_theme_font_override")._native_ptr(), 2619796661);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &name);
}

bool Control::has_theme_font_size_override(const StringName &name) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Control::get_class_static()._native_ptr(), StringName("has_theme_font_size_override")._native_ptr(), 2619796661);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &name);
}

bool Control::has_theme_color_override(const StringName &name) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Control::get_class_static()._native_ptr(), StringName("has_theme_color_override")._native_ptr(), 2619796661);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &name);
}

bool Control::has_theme_constant_override(const StringName &name) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Control::get_class_static()._native_ptr(), StringName("has_theme_constant_override")._native_ptr(), 2619796661);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &name);
}

bool Control::has_theme_icon(const StringName &name, const StringName &theme_type) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Control::get_class_static()._native_ptr(), StringName("has_theme_icon")._native_ptr(), 1187511791);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &name, &theme_type);
}

bool Control::has_theme_stylebox(const StringName &name, const StringName &theme_type) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Control::get_class_static()._native_ptr(), StringName("has_theme_stylebox")._native_ptr(), 1187511791);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &name, &theme_type);
}

bool Control::has_theme_font(const StringName &name, const StringName &theme_type) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Control::get_class_static()._native_ptr(), StringName("has_theme_font")._native_ptr(), 1187511791);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &name, &theme_type);
}

bool Control::has_theme_font_size(const StringName &name, const StringName &theme_type) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Control::get_class_static()._native_ptr(), StringName("has_theme_font_size")._native_ptr(), 1187511791);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &name, &theme_type);
}

bool Control::has_theme_color(const StringName &name, const StringName &theme_type) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Control::get_class_static()._native_ptr(), StringName("has_theme_color")._native_ptr(), 1187511791);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &name, &theme_type);
}

bool Control::has_theme_constant(const StringName &name, const StringName &theme_type) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Control::get_class_static()._native_ptr(), StringName("has_theme_constant")._native_ptr(), 1187511791);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &name, &theme_type);
}

double Control::get_theme_default_base_scale() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Control::get_class_static()._native_ptr(), StringName("get_theme_default_base_scale")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

Ref<Font> Control::get_theme_default_font() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Control::get_class_static()._native_ptr(), StringName("get_theme_default_font")._native_ptr(), 3229501585);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<Font>());
	return Ref<Font>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<Font>(_gde_method_bind, _owner));
}

int32_t Control::get_theme_default_font_size() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Control::get_class_static()._native_ptr(), StringName("get_theme_default_font_size")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

Control *Control::get_parent_control() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Control::get_class_static()._native_ptr(), StringName("get_parent_control")._native_ptr(), 2783021301);
	CHECK_METHOD_BIND_RET(_gde_method_bind, nullptr);
	return internal::_call_native_mb_ret_obj<Control>(_gde_method_bind, _owner);
}

void Control::set_h_grow_direction(Control::GrowDirection direction) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Control::get_class_static()._native_ptr(), StringName("set_h_grow_direction")._native_ptr(), 2022385301);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &direction);
}

Control::GrowDirection Control::get_h_grow_direction() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Control::get_class_static()._native_ptr(), StringName("get_h_grow_direction")._native_ptr(), 3635610155);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Control::GrowDirection(0));
	return (Control::GrowDirection)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void Control::set_v_grow_direction(Control::GrowDirection direction) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Control::get_class_static()._native_ptr(), StringName("set_v_grow_direction")._native_ptr(), 2022385301);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &direction);
}

Control::GrowDirection Control::get_v_grow_direction() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Control::get_class_static()._native_ptr(), StringName("get_v_grow_direction")._native_ptr(), 3635610155);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Control::GrowDirection(0));
	return (Control::GrowDirection)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void Control::set_tooltip_text(const String &hint) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Control::get_class_static()._native_ptr(), StringName("set_tooltip_text")._native_ptr(), 83702148);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &hint);
}

String Control::get_tooltip_text() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Control::get_class_static()._native_ptr(), StringName("get_tooltip_text")._native_ptr(), 201670096);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner);
}

String Control::get_tooltip(const Vector2 &at_position) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Control::get_class_static()._native_ptr(), StringName("get_tooltip")._native_ptr(), 2895288280);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner, &at_position);
}

void Control::set_default_cursor_shape(Control::CursorShape shape) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Control::get_class_static()._native_ptr(), StringName("set_default_cursor_shape")._native_ptr(), 217062046);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &shape);
}

Control::CursorShape Control::get_default_cursor_shape() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Control::get_class_static()._native_ptr(), StringName("get_default_cursor_shape")._native_ptr(), 2359535750);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Control::CursorShape(0));
	return (Control::CursorShape)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

Control::CursorShape Control::get_cursor_shape(const Vector2 &position) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Control::get_class_static()._native_ptr(), StringName("get_cursor_shape")._native_ptr(), 1395773853);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Control::CursorShape(0));
	return (Control::CursorShape)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &position);
}

void Control::set_focus_neighbor(Side side, const NodePath &neighbor) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Control::get_class_static()._native_ptr(), StringName("set_focus_neighbor")._native_ptr(), 2024461774);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &side, &neighbor);
}

NodePath Control::get_focus_neighbor(Side side) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Control::get_class_static()._native_ptr(), StringName("get_focus_neighbor")._native_ptr(), 2757935761);
	CHECK_METHOD_BIND_RET(_gde_method_bind, NodePath());
	return internal::_call_native_mb_ret<NodePath>(_gde_method_bind, _owner, &side);
}

void Control::set_focus_next(const NodePath &next) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Control::get_class_static()._native_ptr(), StringName("set_focus_next")._native_ptr(), 1348162250);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &next);
}

NodePath Control::get_focus_next() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Control::get_class_static()._native_ptr(), StringName("get_focus_next")._native_ptr(), 4075236667);
	CHECK_METHOD_BIND_RET(_gde_method_bind, NodePath());
	return internal::_call_native_mb_ret<NodePath>(_gde_method_bind, _owner);
}

void Control::set_focus_previous(const NodePath &previous) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Control::get_class_static()._native_ptr(), StringName("set_focus_previous")._native_ptr(), 1348162250);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &previous);
}

NodePath Control::get_focus_previous() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Control::get_class_static()._native_ptr(), StringName("get_focus_previous")._native_ptr(), 4075236667);
	CHECK_METHOD_BIND_RET(_gde_method_bind, NodePath());
	return internal::_call_native_mb_ret<NodePath>(_gde_method_bind, _owner);
}

void Control::force_drag(const Variant &data, Control *preview) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Control::get_class_static()._native_ptr(), StringName("force_drag")._native_ptr(), 3191844692);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &data, (preview != nullptr ? &preview->_owner : nullptr));
}

void Control::set_mouse_filter(Control::MouseFilter filter) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Control::get_class_static()._native_ptr(), StringName("set_mouse_filter")._native_ptr(), 3891156122);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &filter);
}

Control::MouseFilter Control::get_mouse_filter() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Control::get_class_static()._native_ptr(), StringName("get_mouse_filter")._native_ptr(), 1572545674);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Control::MouseFilter(0));
	return (Control::MouseFilter)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void Control::set_force_pass_scroll_events(bool force_pass_scroll_events) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Control::get_class_static()._native_ptr(), StringName("set_force_pass_scroll_events")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t force_pass_scroll_events_encoded;
	PtrToArg<bool>::encode(force_pass_scroll_events, &force_pass_scroll_events_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &force_pass_scroll_events_encoded);
}

bool Control::is_force_pass_scroll_events() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Control::get_class_static()._native_ptr(), StringName("is_force_pass_scroll_events")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void Control::set_clip_contents(bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Control::get_class_static()._native_ptr(), StringName("set_clip_contents")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enable_encoded);
}

bool Control::is_clipping_contents() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Control::get_class_static()._native_ptr(), StringName("is_clipping_contents")._native_ptr(), 2240911060);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void Control::grab_click_focus() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Control::get_class_static()._native_ptr(), StringName("grab_click_focus")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

void Control::set_drag_forwarding(const Callable &drag_func, const Callable &can_drop_func, const Callable &drop_func) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Control::get_class_static()._native_ptr(), StringName("set_drag_forwarding")._native_ptr(), 1076571380);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &drag_func, &can_drop_func, &drop_func);
}

void Control::set_drag_preview(Control *control) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Control::get_class_static()._native_ptr(), StringName("set_drag_preview")._native_ptr(), 1496901182);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (control != nullptr ? &control->_owner : nullptr));
}

bool Control::is_drag_successful() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Control::get_class_static()._native_ptr(), StringName("is_drag_successful")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void Control::warp_mouse(const Vector2 &position) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Control::get_class_static()._native_ptr(), StringName("warp_mouse")._native_ptr(), 743155724);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &position);
}

void Control::set_shortcut_context(Node *node) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Control::get_class_static()._native_ptr(), StringName("set_shortcut_context")._native_ptr(), 1078189570);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (node != nullptr ? &node->_owner : nullptr));
}

Node *Control::get_shortcut_context() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Control::get_class_static()._native_ptr(), StringName("get_shortcut_context")._native_ptr(), 3160264692);
	CHECK_METHOD_BIND_RET(_gde_method_bind, nullptr);
	return internal::_call_native_mb_ret_obj<Node>(_gde_method_bind, _owner);
}

void Control::update_minimum_size() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Control::get_class_static()._native_ptr(), StringName("update_minimum_size")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

void Control::set_layout_direction(Control::LayoutDirection direction) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Control::get_class_static()._native_ptr(), StringName("set_layout_direction")._native_ptr(), 3310692370);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &direction);
}

Control::LayoutDirection Control::get_layout_direction() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Control::get_class_static()._native_ptr(), StringName("get_layout_direction")._native_ptr(), 1546772008);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Control::LayoutDirection(0));
	return (Control::LayoutDirection)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

bool Control::is_layout_rtl() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Control::get_class_static()._native_ptr(), StringName("is_layout_rtl")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void Control::set_auto_translate(bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Control::get_class_static()._native_ptr(), StringName("set_auto_translate")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enable_encoded);
}

bool Control::is_auto_translating() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Control::get_class_static()._native_ptr(), StringName("is_auto_translating")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void Control::set_localize_numeral_system(bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Control::get_class_static()._native_ptr(), StringName("set_localize_numeral_system")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enable_encoded);
}

bool Control::is_localizing_numeral_system() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Control::get_class_static()._native_ptr(), StringName("is_localizing_numeral_system")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

bool Control::_has_point(const Vector2 &point) const {
	return false;
}

TypedArray<Vector3i> Control::_structured_text_parser(const Array &args, const String &text) const {
	return TypedArray<Vector3i>();
}

Vector2 Control::_get_minimum_size() const {
	return Vector2();
}

String Control::_get_tooltip(const Vector2 &at_position) const {
	return String();
}

Variant Control::_get_drag_data(const Vector2 &at_position) {
	return Variant();
}

bool Control::_can_drop_data(const Vector2 &at_position, const Variant &data) const {
	return false;
}

void Control::_drop_data(const Vector2 &at_position, const Variant &data) {}

Object *Control::_make_custom_tooltip(const String &for_text) const {
	return nullptr;
}

void Control::_gui_input(const Ref<InputEvent> &event) {}


} // namespace godot 