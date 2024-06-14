/**************************************************************************/
/*  packet_peer.cpp                                                       */
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

#include <godot_cpp/classes/packet_peer.hpp>

#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

namespace godot {


Variant PacketPeer::get_var(bool allow_objects) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PacketPeer::get_class_static()._native_ptr(), StringName("get_var")._native_ptr(), 3442865206);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Variant());
	int8_t allow_objects_encoded;
	PtrToArg<bool>::encode(allow_objects, &allow_objects_encoded);
	return internal::_call_native_mb_ret<Variant>(_gde_method_bind, _owner, &allow_objects_encoded);
}

Error PacketPeer::put_var(const Variant &var, bool full_objects) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PacketPeer::get_class_static()._native_ptr(), StringName("put_var")._native_ptr(), 2436251611);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Error(0));
	int8_t full_objects_encoded;
	PtrToArg<bool>::encode(full_objects, &full_objects_encoded);
	return (Error)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &var, &full_objects_encoded);
}

PackedByteArray PacketPeer::get_packet() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PacketPeer::get_class_static()._native_ptr(), StringName("get_packet")._native_ptr(), 2115431945);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedByteArray());
	return internal::_call_native_mb_ret<PackedByteArray>(_gde_method_bind, _owner);
}

Error PacketPeer::put_packet(const PackedByteArray &buffer) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PacketPeer::get_class_static()._native_ptr(), StringName("put_packet")._native_ptr(), 680677267);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Error(0));
	return (Error)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &buffer);
}

Error PacketPeer::get_packet_error() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PacketPeer::get_class_static()._native_ptr(), StringName("get_packet_error")._native_ptr(), 3185525595);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Error(0));
	return (Error)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

int32_t PacketPeer::get_available_packet_count() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PacketPeer::get_class_static()._native_ptr(), StringName("get_available_packet_count")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

int32_t PacketPeer::get_encode_buffer_max_size() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PacketPeer::get_class_static()._native_ptr(), StringName("get_encode_buffer_max_size")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void PacketPeer::set_encode_buffer_max_size(int32_t max_size) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PacketPeer::get_class_static()._native_ptr(), StringName("set_encode_buffer_max_size")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t max_size_encoded;
	PtrToArg<int64_t>::encode(max_size, &max_size_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &max_size_encoded);
}


} // namespace godot 