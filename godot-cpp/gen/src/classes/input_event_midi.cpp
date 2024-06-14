/**************************************************************************/
/*  input_event_midi.cpp                                                  */
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

#include <godot_cpp/classes/input_event_midi.hpp>

#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

namespace godot {


void InputEventMIDI::set_channel(int32_t channel) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(InputEventMIDI::get_class_static()._native_ptr(), StringName("set_channel")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t channel_encoded;
	PtrToArg<int64_t>::encode(channel, &channel_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &channel_encoded);
}

int32_t InputEventMIDI::get_channel() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(InputEventMIDI::get_class_static()._native_ptr(), StringName("get_channel")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void InputEventMIDI::set_message(MIDIMessage message) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(InputEventMIDI::get_class_static()._native_ptr(), StringName("set_message")._native_ptr(), 1064271510);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &message);
}

MIDIMessage InputEventMIDI::get_message() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(InputEventMIDI::get_class_static()._native_ptr(), StringName("get_message")._native_ptr(), 1936512097);
	CHECK_METHOD_BIND_RET(_gde_method_bind, MIDIMessage(0));
	return (MIDIMessage)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void InputEventMIDI::set_pitch(int32_t pitch) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(InputEventMIDI::get_class_static()._native_ptr(), StringName("set_pitch")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t pitch_encoded;
	PtrToArg<int64_t>::encode(pitch, &pitch_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &pitch_encoded);
}

int32_t InputEventMIDI::get_pitch() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(InputEventMIDI::get_class_static()._native_ptr(), StringName("get_pitch")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void InputEventMIDI::set_velocity(int32_t velocity) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(InputEventMIDI::get_class_static()._native_ptr(), StringName("set_velocity")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t velocity_encoded;
	PtrToArg<int64_t>::encode(velocity, &velocity_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &velocity_encoded);
}

int32_t InputEventMIDI::get_velocity() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(InputEventMIDI::get_class_static()._native_ptr(), StringName("get_velocity")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void InputEventMIDI::set_instrument(int32_t instrument) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(InputEventMIDI::get_class_static()._native_ptr(), StringName("set_instrument")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t instrument_encoded;
	PtrToArg<int64_t>::encode(instrument, &instrument_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &instrument_encoded);
}

int32_t InputEventMIDI::get_instrument() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(InputEventMIDI::get_class_static()._native_ptr(), StringName("get_instrument")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void InputEventMIDI::set_pressure(int32_t pressure) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(InputEventMIDI::get_class_static()._native_ptr(), StringName("set_pressure")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t pressure_encoded;
	PtrToArg<int64_t>::encode(pressure, &pressure_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &pressure_encoded);
}

int32_t InputEventMIDI::get_pressure() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(InputEventMIDI::get_class_static()._native_ptr(), StringName("get_pressure")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void InputEventMIDI::set_controller_number(int32_t controller_number) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(InputEventMIDI::get_class_static()._native_ptr(), StringName("set_controller_number")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t controller_number_encoded;
	PtrToArg<int64_t>::encode(controller_number, &controller_number_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &controller_number_encoded);
}

int32_t InputEventMIDI::get_controller_number() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(InputEventMIDI::get_class_static()._native_ptr(), StringName("get_controller_number")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void InputEventMIDI::set_controller_value(int32_t controller_value) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(InputEventMIDI::get_class_static()._native_ptr(), StringName("set_controller_value")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t controller_value_encoded;
	PtrToArg<int64_t>::encode(controller_value, &controller_value_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &controller_value_encoded);
}

int32_t InputEventMIDI::get_controller_value() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(InputEventMIDI::get_class_static()._native_ptr(), StringName("get_controller_value")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}


} // namespace godot 