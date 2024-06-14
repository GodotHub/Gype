/**************************************************************************/
/*  camera2d.cpp                                                          */
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

#include <godot_cpp/classes/camera2d.hpp>

#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

#include <godot_cpp/classes/node.hpp>

namespace godot {


void Camera2D::set_offset(const Vector2 &offset) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Camera2D::get_class_static()._native_ptr(), StringName("set_offset")._native_ptr(), 743155724);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &offset);
}

Vector2 Camera2D::get_offset() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Camera2D::get_class_static()._native_ptr(), StringName("get_offset")._native_ptr(), 3341600327);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector2());
	return internal::_call_native_mb_ret<Vector2>(_gde_method_bind, _owner);
}

void Camera2D::set_anchor_mode(Camera2D::AnchorMode anchor_mode) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Camera2D::get_class_static()._native_ptr(), StringName("set_anchor_mode")._native_ptr(), 2050398218);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &anchor_mode);
}

Camera2D::AnchorMode Camera2D::get_anchor_mode() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Camera2D::get_class_static()._native_ptr(), StringName("get_anchor_mode")._native_ptr(), 155978067);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Camera2D::AnchorMode(0));
	return (Camera2D::AnchorMode)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void Camera2D::set_ignore_rotation(bool ignore) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Camera2D::get_class_static()._native_ptr(), StringName("set_ignore_rotation")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t ignore_encoded;
	PtrToArg<bool>::encode(ignore, &ignore_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &ignore_encoded);
}

bool Camera2D::is_ignoring_rotation() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Camera2D::get_class_static()._native_ptr(), StringName("is_ignoring_rotation")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void Camera2D::set_process_callback(Camera2D::Camera2DProcessCallback mode) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Camera2D::get_class_static()._native_ptr(), StringName("set_process_callback")._native_ptr(), 4201947462);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &mode);
}

Camera2D::Camera2DProcessCallback Camera2D::get_process_callback() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Camera2D::get_class_static()._native_ptr(), StringName("get_process_callback")._native_ptr(), 2325344499);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Camera2D::Camera2DProcessCallback(0));
	return (Camera2D::Camera2DProcessCallback)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void Camera2D::set_enabled(bool enabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Camera2D::get_class_static()._native_ptr(), StringName("set_enabled")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enabled_encoded;
	PtrToArg<bool>::encode(enabled, &enabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enabled_encoded);
}

bool Camera2D::is_enabled() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Camera2D::get_class_static()._native_ptr(), StringName("is_enabled")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void Camera2D::make_current() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Camera2D::get_class_static()._native_ptr(), StringName("make_current")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

bool Camera2D::is_current() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Camera2D::get_class_static()._native_ptr(), StringName("is_current")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void Camera2D::set_limit(Side margin, int32_t limit) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Camera2D::get_class_static()._native_ptr(), StringName("set_limit")._native_ptr(), 437707142);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t limit_encoded;
	PtrToArg<int64_t>::encode(limit, &limit_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &margin, &limit_encoded);
}

int32_t Camera2D::get_limit(Side margin) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Camera2D::get_class_static()._native_ptr(), StringName("get_limit")._native_ptr(), 1983885014);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &margin);
}

void Camera2D::set_limit_smoothing_enabled(bool limit_smoothing_enabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Camera2D::get_class_static()._native_ptr(), StringName("set_limit_smoothing_enabled")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t limit_smoothing_enabled_encoded;
	PtrToArg<bool>::encode(limit_smoothing_enabled, &limit_smoothing_enabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &limit_smoothing_enabled_encoded);
}

bool Camera2D::is_limit_smoothing_enabled() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Camera2D::get_class_static()._native_ptr(), StringName("is_limit_smoothing_enabled")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void Camera2D::set_drag_vertical_enabled(bool enabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Camera2D::get_class_static()._native_ptr(), StringName("set_drag_vertical_enabled")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enabled_encoded;
	PtrToArg<bool>::encode(enabled, &enabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enabled_encoded);
}

bool Camera2D::is_drag_vertical_enabled() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Camera2D::get_class_static()._native_ptr(), StringName("is_drag_vertical_enabled")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void Camera2D::set_drag_horizontal_enabled(bool enabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Camera2D::get_class_static()._native_ptr(), StringName("set_drag_horizontal_enabled")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enabled_encoded;
	PtrToArg<bool>::encode(enabled, &enabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enabled_encoded);
}

bool Camera2D::is_drag_horizontal_enabled() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Camera2D::get_class_static()._native_ptr(), StringName("is_drag_horizontal_enabled")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void Camera2D::set_drag_vertical_offset(double offset) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Camera2D::get_class_static()._native_ptr(), StringName("set_drag_vertical_offset")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double offset_encoded;
	PtrToArg<double>::encode(offset, &offset_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &offset_encoded);
}

double Camera2D::get_drag_vertical_offset() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Camera2D::get_class_static()._native_ptr(), StringName("get_drag_vertical_offset")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void Camera2D::set_drag_horizontal_offset(double offset) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Camera2D::get_class_static()._native_ptr(), StringName("set_drag_horizontal_offset")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double offset_encoded;
	PtrToArg<double>::encode(offset, &offset_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &offset_encoded);
}

double Camera2D::get_drag_horizontal_offset() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Camera2D::get_class_static()._native_ptr(), StringName("get_drag_horizontal_offset")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void Camera2D::set_drag_margin(Side margin, double drag_margin) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Camera2D::get_class_static()._native_ptr(), StringName("set_drag_margin")._native_ptr(), 4290182280);
	CHECK_METHOD_BIND(_gde_method_bind);
	double drag_margin_encoded;
	PtrToArg<double>::encode(drag_margin, &drag_margin_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &margin, &drag_margin_encoded);
}

double Camera2D::get_drag_margin(Side margin) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Camera2D::get_class_static()._native_ptr(), StringName("get_drag_margin")._native_ptr(), 2869120046);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner, &margin);
}

Vector2 Camera2D::get_target_position() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Camera2D::get_class_static()._native_ptr(), StringName("get_target_position")._native_ptr(), 3341600327);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector2());
	return internal::_call_native_mb_ret<Vector2>(_gde_method_bind, _owner);
}

Vector2 Camera2D::get_screen_center_position() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Camera2D::get_class_static()._native_ptr(), StringName("get_screen_center_position")._native_ptr(), 3341600327);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector2());
	return internal::_call_native_mb_ret<Vector2>(_gde_method_bind, _owner);
}

void Camera2D::set_zoom(const Vector2 &zoom) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Camera2D::get_class_static()._native_ptr(), StringName("set_zoom")._native_ptr(), 743155724);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &zoom);
}

Vector2 Camera2D::get_zoom() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Camera2D::get_class_static()._native_ptr(), StringName("get_zoom")._native_ptr(), 3341600327);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector2());
	return internal::_call_native_mb_ret<Vector2>(_gde_method_bind, _owner);
}

void Camera2D::set_custom_viewport(Node *viewport) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Camera2D::get_class_static()._native_ptr(), StringName("set_custom_viewport")._native_ptr(), 1078189570);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (viewport != nullptr ? &viewport->_owner : nullptr));
}

Node *Camera2D::get_custom_viewport() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Camera2D::get_class_static()._native_ptr(), StringName("get_custom_viewport")._native_ptr(), 3160264692);
	CHECK_METHOD_BIND_RET(_gde_method_bind, nullptr);
	return internal::_call_native_mb_ret_obj<Node>(_gde_method_bind, _owner);
}

void Camera2D::set_position_smoothing_speed(double position_smoothing_speed) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Camera2D::get_class_static()._native_ptr(), StringName("set_position_smoothing_speed")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double position_smoothing_speed_encoded;
	PtrToArg<double>::encode(position_smoothing_speed, &position_smoothing_speed_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &position_smoothing_speed_encoded);
}

double Camera2D::get_position_smoothing_speed() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Camera2D::get_class_static()._native_ptr(), StringName("get_position_smoothing_speed")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void Camera2D::set_position_smoothing_enabled(bool position_smoothing_speed) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Camera2D::get_class_static()._native_ptr(), StringName("set_position_smoothing_enabled")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t position_smoothing_speed_encoded;
	PtrToArg<bool>::encode(position_smoothing_speed, &position_smoothing_speed_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &position_smoothing_speed_encoded);
}

bool Camera2D::is_position_smoothing_enabled() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Camera2D::get_class_static()._native_ptr(), StringName("is_position_smoothing_enabled")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void Camera2D::set_rotation_smoothing_enabled(bool enabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Camera2D::get_class_static()._native_ptr(), StringName("set_rotation_smoothing_enabled")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enabled_encoded;
	PtrToArg<bool>::encode(enabled, &enabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enabled_encoded);
}

bool Camera2D::is_rotation_smoothing_enabled() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Camera2D::get_class_static()._native_ptr(), StringName("is_rotation_smoothing_enabled")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void Camera2D::set_rotation_smoothing_speed(double speed) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Camera2D::get_class_static()._native_ptr(), StringName("set_rotation_smoothing_speed")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double speed_encoded;
	PtrToArg<double>::encode(speed, &speed_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &speed_encoded);
}

double Camera2D::get_rotation_smoothing_speed() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Camera2D::get_class_static()._native_ptr(), StringName("get_rotation_smoothing_speed")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void Camera2D::force_update_scroll() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Camera2D::get_class_static()._native_ptr(), StringName("force_update_scroll")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

void Camera2D::reset_smoothing() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Camera2D::get_class_static()._native_ptr(), StringName("reset_smoothing")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

void Camera2D::align() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Camera2D::get_class_static()._native_ptr(), StringName("align")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

void Camera2D::set_screen_drawing_enabled(bool screen_drawing_enabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Camera2D::get_class_static()._native_ptr(), StringName("set_screen_drawing_enabled")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t screen_drawing_enabled_encoded;
	PtrToArg<bool>::encode(screen_drawing_enabled, &screen_drawing_enabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &screen_drawing_enabled_encoded);
}

bool Camera2D::is_screen_drawing_enabled() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Camera2D::get_class_static()._native_ptr(), StringName("is_screen_drawing_enabled")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void Camera2D::set_limit_drawing_enabled(bool limit_drawing_enabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Camera2D::get_class_static()._native_ptr(), StringName("set_limit_drawing_enabled")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t limit_drawing_enabled_encoded;
	PtrToArg<bool>::encode(limit_drawing_enabled, &limit_drawing_enabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &limit_drawing_enabled_encoded);
}

bool Camera2D::is_limit_drawing_enabled() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Camera2D::get_class_static()._native_ptr(), StringName("is_limit_drawing_enabled")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void Camera2D::set_margin_drawing_enabled(bool margin_drawing_enabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Camera2D::get_class_static()._native_ptr(), StringName("set_margin_drawing_enabled")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t margin_drawing_enabled_encoded;
	PtrToArg<bool>::encode(margin_drawing_enabled, &margin_drawing_enabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &margin_drawing_enabled_encoded);
}

bool Camera2D::is_margin_drawing_enabled() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Camera2D::get_class_static()._native_ptr(), StringName("is_margin_drawing_enabled")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}


} // namespace godot 