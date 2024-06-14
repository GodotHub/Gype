/**************************************************************************/
/*  input.cpp                                                             */
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

#include <godot_cpp/classes/input.hpp>

#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

#include <godot_cpp/classes/input_event.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/variant/string_name.hpp>

namespace godot {


Input *Input::singleton = nullptr;

Input *Input::get_singleton() {
	if (unlikely(singleton == nullptr)) {
		GDExtensionObjectPtr singleton_obj = internal::gdextension_interface_global_get_singleton(Input::get_class_static()._native_ptr());
#ifdef DEBUG_ENABLED
		ERR_FAIL_NULL_V(singleton_obj, nullptr);
#endif // DEBUG_ENABLED
		singleton = reinterpret_cast<Input *>(internal::gdextension_interface_object_get_instance_binding(singleton_obj, internal::token, &Input::_gde_binding_callbacks));
#ifdef DEBUG_ENABLED
		ERR_FAIL_NULL_V(singleton, nullptr);
#endif // DEBUG_ENABLED
		if (likely(singleton)) {
			ClassDB::_register_engine_singleton(Input::get_class_static(), singleton);
		}
	}
	return singleton;
}

Input::~Input() {
	if (singleton == this) {
		ClassDB::_unregister_engine_singleton(Input::get_class_static());
		singleton = nullptr;
	}
}

bool Input::is_anything_pressed() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Input::get_class_static()._native_ptr(), StringName("is_anything_pressed")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

bool Input::is_key_pressed(Key keycode) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Input::get_class_static()._native_ptr(), StringName("is_key_pressed")._native_ptr(), 1938909964);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &keycode);
}

bool Input::is_physical_key_pressed(Key keycode) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Input::get_class_static()._native_ptr(), StringName("is_physical_key_pressed")._native_ptr(), 1938909964);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &keycode);
}

bool Input::is_key_label_pressed(Key keycode) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Input::get_class_static()._native_ptr(), StringName("is_key_label_pressed")._native_ptr(), 1938909964);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &keycode);
}

bool Input::is_mouse_button_pressed(MouseButton button) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Input::get_class_static()._native_ptr(), StringName("is_mouse_button_pressed")._native_ptr(), 1821097125);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &button);
}

bool Input::is_joy_button_pressed(int32_t device, JoyButton button) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Input::get_class_static()._native_ptr(), StringName("is_joy_button_pressed")._native_ptr(), 787208542);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	int64_t device_encoded;
	PtrToArg<int64_t>::encode(device, &device_encoded);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &device_encoded, &button);
}

bool Input::is_action_pressed(const StringName &action, bool exact_match) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Input::get_class_static()._native_ptr(), StringName("is_action_pressed")._native_ptr(), 1558498928);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	int8_t exact_match_encoded;
	PtrToArg<bool>::encode(exact_match, &exact_match_encoded);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &action, &exact_match_encoded);
}

bool Input::is_action_just_pressed(const StringName &action, bool exact_match) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Input::get_class_static()._native_ptr(), StringName("is_action_just_pressed")._native_ptr(), 1558498928);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	int8_t exact_match_encoded;
	PtrToArg<bool>::encode(exact_match, &exact_match_encoded);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &action, &exact_match_encoded);
}

bool Input::is_action_just_released(const StringName &action, bool exact_match) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Input::get_class_static()._native_ptr(), StringName("is_action_just_released")._native_ptr(), 1558498928);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	int8_t exact_match_encoded;
	PtrToArg<bool>::encode(exact_match, &exact_match_encoded);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &action, &exact_match_encoded);
}

double Input::get_action_strength(const StringName &action, bool exact_match) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Input::get_class_static()._native_ptr(), StringName("get_action_strength")._native_ptr(), 801543509);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	int8_t exact_match_encoded;
	PtrToArg<bool>::encode(exact_match, &exact_match_encoded);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner, &action, &exact_match_encoded);
}

double Input::get_action_raw_strength(const StringName &action, bool exact_match) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Input::get_class_static()._native_ptr(), StringName("get_action_raw_strength")._native_ptr(), 801543509);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	int8_t exact_match_encoded;
	PtrToArg<bool>::encode(exact_match, &exact_match_encoded);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner, &action, &exact_match_encoded);
}

double Input::get_axis(const StringName &negative_action, const StringName &positive_action) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Input::get_class_static()._native_ptr(), StringName("get_axis")._native_ptr(), 1958752504);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner, &negative_action, &positive_action);
}

Vector2 Input::get_vector(const StringName &negative_x, const StringName &positive_x, const StringName &negative_y, const StringName &positive_y, double deadzone) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Input::get_class_static()._native_ptr(), StringName("get_vector")._native_ptr(), 2479607902);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector2());
	double deadzone_encoded;
	PtrToArg<double>::encode(deadzone, &deadzone_encoded);
	return internal::_call_native_mb_ret<Vector2>(_gde_method_bind, _owner, &negative_x, &positive_x, &negative_y, &positive_y, &deadzone_encoded);
}

void Input::add_joy_mapping(const String &mapping, bool update_existing) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Input::get_class_static()._native_ptr(), StringName("add_joy_mapping")._native_ptr(), 1168363258);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t update_existing_encoded;
	PtrToArg<bool>::encode(update_existing, &update_existing_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &mapping, &update_existing_encoded);
}

void Input::remove_joy_mapping(const String &guid) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Input::get_class_static()._native_ptr(), StringName("remove_joy_mapping")._native_ptr(), 83702148);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &guid);
}

bool Input::is_joy_known(int32_t device) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Input::get_class_static()._native_ptr(), StringName("is_joy_known")._native_ptr(), 3067735520);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	int64_t device_encoded;
	PtrToArg<int64_t>::encode(device, &device_encoded);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &device_encoded);
}

double Input::get_joy_axis(int32_t device, JoyAxis axis) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Input::get_class_static()._native_ptr(), StringName("get_joy_axis")._native_ptr(), 4063175957);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	int64_t device_encoded;
	PtrToArg<int64_t>::encode(device, &device_encoded);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner, &device_encoded, &axis);
}

String Input::get_joy_name(int32_t device) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Input::get_class_static()._native_ptr(), StringName("get_joy_name")._native_ptr(), 990163283);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	int64_t device_encoded;
	PtrToArg<int64_t>::encode(device, &device_encoded);
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner, &device_encoded);
}

String Input::get_joy_guid(int32_t device) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Input::get_class_static()._native_ptr(), StringName("get_joy_guid")._native_ptr(), 844755477);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	int64_t device_encoded;
	PtrToArg<int64_t>::encode(device, &device_encoded);
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner, &device_encoded);
}

Dictionary Input::get_joy_info(int32_t device) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Input::get_class_static()._native_ptr(), StringName("get_joy_info")._native_ptr(), 3485342025);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Dictionary());
	int64_t device_encoded;
	PtrToArg<int64_t>::encode(device, &device_encoded);
	return internal::_call_native_mb_ret<Dictionary>(_gde_method_bind, _owner, &device_encoded);
}

bool Input::should_ignore_device(int32_t vendor_id, int32_t product_id) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Input::get_class_static()._native_ptr(), StringName("should_ignore_device")._native_ptr(), 2522259332);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	int64_t vendor_id_encoded;
	PtrToArg<int64_t>::encode(vendor_id, &vendor_id_encoded);
	int64_t product_id_encoded;
	PtrToArg<int64_t>::encode(product_id, &product_id_encoded);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &vendor_id_encoded, &product_id_encoded);
}

TypedArray<int> Input::get_connected_joypads() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Input::get_class_static()._native_ptr(), StringName("get_connected_joypads")._native_ptr(), 2915620761);
	CHECK_METHOD_BIND_RET(_gde_method_bind, TypedArray<int>());
	return internal::_call_native_mb_ret<TypedArray<int>>(_gde_method_bind, _owner);
}

Vector2 Input::get_joy_vibration_strength(int32_t device) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Input::get_class_static()._native_ptr(), StringName("get_joy_vibration_strength")._native_ptr(), 3114997196);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector2());
	int64_t device_encoded;
	PtrToArg<int64_t>::encode(device, &device_encoded);
	return internal::_call_native_mb_ret<Vector2>(_gde_method_bind, _owner, &device_encoded);
}

double Input::get_joy_vibration_duration(int32_t device) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Input::get_class_static()._native_ptr(), StringName("get_joy_vibration_duration")._native_ptr(), 4025615559);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	int64_t device_encoded;
	PtrToArg<int64_t>::encode(device, &device_encoded);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner, &device_encoded);
}

void Input::start_joy_vibration(int32_t device, double weak_magnitude, double strong_magnitude, double duration) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Input::get_class_static()._native_ptr(), StringName("start_joy_vibration")._native_ptr(), 2576575033);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t device_encoded;
	PtrToArg<int64_t>::encode(device, &device_encoded);
	double weak_magnitude_encoded;
	PtrToArg<double>::encode(weak_magnitude, &weak_magnitude_encoded);
	double strong_magnitude_encoded;
	PtrToArg<double>::encode(strong_magnitude, &strong_magnitude_encoded);
	double duration_encoded;
	PtrToArg<double>::encode(duration, &duration_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &device_encoded, &weak_magnitude_encoded, &strong_magnitude_encoded, &duration_encoded);
}

void Input::stop_joy_vibration(int32_t device) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Input::get_class_static()._native_ptr(), StringName("stop_joy_vibration")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t device_encoded;
	PtrToArg<int64_t>::encode(device, &device_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &device_encoded);
}

void Input::vibrate_handheld(int32_t duration_ms, double amplitude) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Input::get_class_static()._native_ptr(), StringName("vibrate_handheld")._native_ptr(), 544894297);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t duration_ms_encoded;
	PtrToArg<int64_t>::encode(duration_ms, &duration_ms_encoded);
	double amplitude_encoded;
	PtrToArg<double>::encode(amplitude, &amplitude_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &duration_ms_encoded, &amplitude_encoded);
}

Vector3 Input::get_gravity() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Input::get_class_static()._native_ptr(), StringName("get_gravity")._native_ptr(), 3360562783);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector3());
	return internal::_call_native_mb_ret<Vector3>(_gde_method_bind, _owner);
}

Vector3 Input::get_accelerometer() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Input::get_class_static()._native_ptr(), StringName("get_accelerometer")._native_ptr(), 3360562783);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector3());
	return internal::_call_native_mb_ret<Vector3>(_gde_method_bind, _owner);
}

Vector3 Input::get_magnetometer() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Input::get_class_static()._native_ptr(), StringName("get_magnetometer")._native_ptr(), 3360562783);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector3());
	return internal::_call_native_mb_ret<Vector3>(_gde_method_bind, _owner);
}

Vector3 Input::get_gyroscope() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Input::get_class_static()._native_ptr(), StringName("get_gyroscope")._native_ptr(), 3360562783);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector3());
	return internal::_call_native_mb_ret<Vector3>(_gde_method_bind, _owner);
}

void Input::set_gravity(const Vector3 &value) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Input::get_class_static()._native_ptr(), StringName("set_gravity")._native_ptr(), 3460891852);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &value);
}

void Input::set_accelerometer(const Vector3 &value) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Input::get_class_static()._native_ptr(), StringName("set_accelerometer")._native_ptr(), 3460891852);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &value);
}

void Input::set_magnetometer(const Vector3 &value) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Input::get_class_static()._native_ptr(), StringName("set_magnetometer")._native_ptr(), 3460891852);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &value);
}

void Input::set_gyroscope(const Vector3 &value) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Input::get_class_static()._native_ptr(), StringName("set_gyroscope")._native_ptr(), 3460891852);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &value);
}

Vector2 Input::get_last_mouse_velocity() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Input::get_class_static()._native_ptr(), StringName("get_last_mouse_velocity")._native_ptr(), 1497962370);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector2());
	return internal::_call_native_mb_ret<Vector2>(_gde_method_bind, _owner);
}

Vector2 Input::get_last_mouse_screen_velocity() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Input::get_class_static()._native_ptr(), StringName("get_last_mouse_screen_velocity")._native_ptr(), 1497962370);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector2());
	return internal::_call_native_mb_ret<Vector2>(_gde_method_bind, _owner);
}

BitField<MouseButtonMask> Input::get_mouse_button_mask() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Input::get_class_static()._native_ptr(), StringName("get_mouse_button_mask")._native_ptr(), 2512161324);
	CHECK_METHOD_BIND_RET(_gde_method_bind, BitField<MouseButtonMask>(0));
	return (int64_t)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void Input::set_mouse_mode(Input::MouseMode mode) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Input::get_class_static()._native_ptr(), StringName("set_mouse_mode")._native_ptr(), 2228490894);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &mode);
}

Input::MouseMode Input::get_mouse_mode() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Input::get_class_static()._native_ptr(), StringName("get_mouse_mode")._native_ptr(), 965286182);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Input::MouseMode(0));
	return (Input::MouseMode)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void Input::warp_mouse(const Vector2 &position) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Input::get_class_static()._native_ptr(), StringName("warp_mouse")._native_ptr(), 743155724);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &position);
}

void Input::action_press(const StringName &action, double strength) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Input::get_class_static()._native_ptr(), StringName("action_press")._native_ptr(), 1713091165);
	CHECK_METHOD_BIND(_gde_method_bind);
	double strength_encoded;
	PtrToArg<double>::encode(strength, &strength_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &action, &strength_encoded);
}

void Input::action_release(const StringName &action) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Input::get_class_static()._native_ptr(), StringName("action_release")._native_ptr(), 3304788590);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &action);
}

void Input::set_default_cursor_shape(Input::CursorShape shape) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Input::get_class_static()._native_ptr(), StringName("set_default_cursor_shape")._native_ptr(), 2124816902);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &shape);
}

Input::CursorShape Input::get_current_cursor_shape() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Input::get_class_static()._native_ptr(), StringName("get_current_cursor_shape")._native_ptr(), 3455658929);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Input::CursorShape(0));
	return (Input::CursorShape)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void Input::set_custom_mouse_cursor(const Ref<Resource> &image, Input::CursorShape shape, const Vector2 &hotspot) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Input::get_class_static()._native_ptr(), StringName("set_custom_mouse_cursor")._native_ptr(), 703945977);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (image != nullptr ? &image->_owner : nullptr), &shape, &hotspot);
}

void Input::parse_input_event(const Ref<InputEvent> &event) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Input::get_class_static()._native_ptr(), StringName("parse_input_event")._native_ptr(), 3754044979);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (event != nullptr ? &event->_owner : nullptr));
}

void Input::set_use_accumulated_input(bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Input::get_class_static()._native_ptr(), StringName("set_use_accumulated_input")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enable_encoded);
}

bool Input::is_using_accumulated_input() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Input::get_class_static()._native_ptr(), StringName("is_using_accumulated_input")._native_ptr(), 2240911060);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void Input::flush_buffered_events() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Input::get_class_static()._native_ptr(), StringName("flush_buffered_events")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

void Input::set_emulate_mouse_from_touch(bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Input::get_class_static()._native_ptr(), StringName("set_emulate_mouse_from_touch")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enable_encoded);
}

bool Input::is_emulating_mouse_from_touch() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Input::get_class_static()._native_ptr(), StringName("is_emulating_mouse_from_touch")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void Input::set_emulate_touch_from_mouse(bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Input::get_class_static()._native_ptr(), StringName("set_emulate_touch_from_mouse")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enable_encoded);
}

bool Input::is_emulating_touch_from_mouse() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Input::get_class_static()._native_ptr(), StringName("is_emulating_touch_from_mouse")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}


} // namespace godot 