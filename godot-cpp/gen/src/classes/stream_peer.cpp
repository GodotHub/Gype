/**************************************************************************/
/*  stream_peer.cpp                                                       */
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

#include <godot_cpp/classes/stream_peer.hpp>

#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

#include <godot_cpp/variant/packed_byte_array.hpp>

namespace godot {

Error StreamPeer::put_data(const PackedByteArray &data) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(StreamPeer::get_class_static()._native_ptr(), StringName("put_data")._native_ptr(), 680677267);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Error(0));
	return (Error)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &data);
}

Array StreamPeer::put_partial_data(const PackedByteArray &data) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(StreamPeer::get_class_static()._native_ptr(), StringName("put_partial_data")._native_ptr(), 2934048347);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Array());
	return internal::_call_native_mb_ret<Array>(_gde_method_bind, _owner, &data);
}

Array StreamPeer::get_data(int32_t bytes) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(StreamPeer::get_class_static()._native_ptr(), StringName("get_data")._native_ptr(), 1171824711);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Array());
	int64_t bytes_encoded;
	PtrToArg<int64_t>::encode(bytes, &bytes_encoded);
	return internal::_call_native_mb_ret<Array>(_gde_method_bind, _owner, &bytes_encoded);
}

Array StreamPeer::get_partial_data(int32_t bytes) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(StreamPeer::get_class_static()._native_ptr(), StringName("get_partial_data")._native_ptr(), 1171824711);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Array());
	int64_t bytes_encoded;
	PtrToArg<int64_t>::encode(bytes, &bytes_encoded);
	return internal::_call_native_mb_ret<Array>(_gde_method_bind, _owner, &bytes_encoded);
}

int32_t StreamPeer::get_available_bytes() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(StreamPeer::get_class_static()._native_ptr(), StringName("get_available_bytes")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void StreamPeer::set_big_endian(bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(StreamPeer::get_class_static()._native_ptr(), StringName("set_big_endian")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enable_encoded);
}

bool StreamPeer::is_big_endian_enabled() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(StreamPeer::get_class_static()._native_ptr(), StringName("is_big_endian_enabled")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void StreamPeer::put_8(int8_t value) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(StreamPeer::get_class_static()._native_ptr(), StringName("put_8")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t value_encoded;
	PtrToArg<int64_t>::encode(value, &value_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &value_encoded);
}

void StreamPeer::put_u8(uint8_t value) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(StreamPeer::get_class_static()._native_ptr(), StringName("put_u8")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t value_encoded;
	PtrToArg<int64_t>::encode(value, &value_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &value_encoded);
}

void StreamPeer::put_16(int16_t value) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(StreamPeer::get_class_static()._native_ptr(), StringName("put_16")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t value_encoded;
	PtrToArg<int64_t>::encode(value, &value_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &value_encoded);
}

void StreamPeer::put_u16(uint16_t value) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(StreamPeer::get_class_static()._native_ptr(), StringName("put_u16")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t value_encoded;
	PtrToArg<int64_t>::encode(value, &value_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &value_encoded);
}

void StreamPeer::put_32(int32_t value) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(StreamPeer::get_class_static()._native_ptr(), StringName("put_32")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t value_encoded;
	PtrToArg<int64_t>::encode(value, &value_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &value_encoded);
}

void StreamPeer::put_u32(uint32_t value) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(StreamPeer::get_class_static()._native_ptr(), StringName("put_u32")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t value_encoded;
	PtrToArg<int64_t>::encode(value, &value_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &value_encoded);
}

void StreamPeer::put_64(int64_t value) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(StreamPeer::get_class_static()._native_ptr(), StringName("put_64")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t value_encoded;
	PtrToArg<int64_t>::encode(value, &value_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &value_encoded);
}

void StreamPeer::put_u64(uint64_t value) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(StreamPeer::get_class_static()._native_ptr(), StringName("put_u64")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t value_encoded;
	PtrToArg<int64_t>::encode(value, &value_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &value_encoded);
}

void StreamPeer::put_float(double value) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(StreamPeer::get_class_static()._native_ptr(), StringName("put_float")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double value_encoded;
	PtrToArg<double>::encode(value, &value_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &value_encoded);
}

void StreamPeer::put_double(double value) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(StreamPeer::get_class_static()._native_ptr(), StringName("put_double")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double value_encoded;
	PtrToArg<double>::encode(value, &value_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &value_encoded);
}

void StreamPeer::put_string(const String &value) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(StreamPeer::get_class_static()._native_ptr(), StringName("put_string")._native_ptr(), 83702148);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &value);
}

void StreamPeer::put_utf8_string(const String &value) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(StreamPeer::get_class_static()._native_ptr(), StringName("put_utf8_string")._native_ptr(), 83702148);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &value);
}

void StreamPeer::put_var(const Variant &value, bool full_objects) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(StreamPeer::get_class_static()._native_ptr(), StringName("put_var")._native_ptr(), 738511890);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t full_objects_encoded;
	PtrToArg<bool>::encode(full_objects, &full_objects_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &value, &full_objects_encoded);
}

int8_t StreamPeer::get_8() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(StreamPeer::get_class_static()._native_ptr(), StringName("get_8")._native_ptr(), 2455072627);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

uint8_t StreamPeer::get_u8() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(StreamPeer::get_class_static()._native_ptr(), StringName("get_u8")._native_ptr(), 2455072627);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

int16_t StreamPeer::get_16() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(StreamPeer::get_class_static()._native_ptr(), StringName("get_16")._native_ptr(), 2455072627);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

uint16_t StreamPeer::get_u16() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(StreamPeer::get_class_static()._native_ptr(), StringName("get_u16")._native_ptr(), 2455072627);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

int32_t StreamPeer::get_32() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(StreamPeer::get_class_static()._native_ptr(), StringName("get_32")._native_ptr(), 2455072627);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

uint32_t StreamPeer::get_u32() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(StreamPeer::get_class_static()._native_ptr(), StringName("get_u32")._native_ptr(), 2455072627);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

int64_t StreamPeer::get_64() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(StreamPeer::get_class_static()._native_ptr(), StringName("get_64")._native_ptr(), 2455072627);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

uint64_t StreamPeer::get_u64() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(StreamPeer::get_class_static()._native_ptr(), StringName("get_u64")._native_ptr(), 2455072627);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<uint64_t>(_gde_method_bind, _owner);
}

double StreamPeer::get_float() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(StreamPeer::get_class_static()._native_ptr(), StringName("get_float")._native_ptr(), 191475506);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

double StreamPeer::get_double() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(StreamPeer::get_class_static()._native_ptr(), StringName("get_double")._native_ptr(), 191475506);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

String StreamPeer::get_string(int32_t bytes) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(StreamPeer::get_class_static()._native_ptr(), StringName("get_string")._native_ptr(), 2309358862);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	int64_t bytes_encoded;
	PtrToArg<int64_t>::encode(bytes, &bytes_encoded);
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner, &bytes_encoded);
}

String StreamPeer::get_utf8_string(int32_t bytes) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(StreamPeer::get_class_static()._native_ptr(), StringName("get_utf8_string")._native_ptr(), 2309358862);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	int64_t bytes_encoded;
	PtrToArg<int64_t>::encode(bytes, &bytes_encoded);
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner, &bytes_encoded);
}

Variant StreamPeer::get_var(bool allow_objects) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(StreamPeer::get_class_static()._native_ptr(), StringName("get_var")._native_ptr(), 3442865206);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Variant());
	int8_t allow_objects_encoded;
	PtrToArg<bool>::encode(allow_objects, &allow_objects_encoded);
	return internal::_call_native_mb_ret<Variant>(_gde_method_bind, _owner, &allow_objects_encoded);
}


} // namespace godot 