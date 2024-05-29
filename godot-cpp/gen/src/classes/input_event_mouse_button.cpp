/**************************************************************************/
/*  input_event_mouse_button.cpp                                          */
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

#include <godot_cpp/classes/input_event_mouse_button.hpp>

#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

namespace godot {

void InputEventMouseButton::set_factor(double factor) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(InputEventMouseButton::get_class_static()._native_ptr(), StringName("set_factor")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double factor_encoded;
	PtrToArg<double>::encode(factor, &factor_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &factor_encoded);
}

double InputEventMouseButton::get_factor() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(InputEventMouseButton::get_class_static()._native_ptr(), StringName("get_factor")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void InputEventMouseButton::set_button_index(MouseButton button_index) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(InputEventMouseButton::get_class_static()._native_ptr(), StringName("set_button_index")._native_ptr(), 3624991109);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &button_index);
}

MouseButton InputEventMouseButton::get_button_index() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(InputEventMouseButton::get_class_static()._native_ptr(), StringName("get_button_index")._native_ptr(), 1132662608);
	CHECK_METHOD_BIND_RET(_gde_method_bind, MouseButton(0));
	return (MouseButton)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void InputEventMouseButton::set_pressed(bool pressed) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(InputEventMouseButton::get_class_static()._native_ptr(), StringName("set_pressed")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t pressed_encoded;
	PtrToArg<bool>::encode(pressed, &pressed_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &pressed_encoded);
}

void InputEventMouseButton::set_canceled(bool canceled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(InputEventMouseButton::get_class_static()._native_ptr(), StringName("set_canceled")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t canceled_encoded;
	PtrToArg<bool>::encode(canceled, &canceled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &canceled_encoded);
}

void InputEventMouseButton::set_double_click(bool double_click) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(InputEventMouseButton::get_class_static()._native_ptr(), StringName("set_double_click")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t double_click_encoded;
	PtrToArg<bool>::encode(double_click, &double_click_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &double_click_encoded);
}

bool InputEventMouseButton::is_double_click() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(InputEventMouseButton::get_class_static()._native_ptr(), StringName("is_double_click")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}


} // namespace godot 