/**************************************************************************/
/*  e_net_packet_peer.cpp                                                 */
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

#include <godot_cpp/classes/e_net_packet_peer.hpp>

#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

#include <godot_cpp/variant/packed_byte_array.hpp>

namespace godot {

const int ENetPacketPeer::PACKET_LOSS_SCALE = 65536;
const int ENetPacketPeer::PACKET_THROTTLE_SCALE = 32;
const int ENetPacketPeer::FLAG_RELIABLE = 1;
const int ENetPacketPeer::FLAG_UNSEQUENCED = 2;
const int ENetPacketPeer::FLAG_UNRELIABLE_FRAGMENT = 8;

void ENetPacketPeer::peer_disconnect(int32_t data) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ENetPacketPeer::get_class_static()._native_ptr(), StringName("peer_disconnect")._native_ptr(), 1995695955);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t data_encoded;
	PtrToArg<int64_t>::encode(data, &data_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &data_encoded);
}

void ENetPacketPeer::peer_disconnect_later(int32_t data) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ENetPacketPeer::get_class_static()._native_ptr(), StringName("peer_disconnect_later")._native_ptr(), 1995695955);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t data_encoded;
	PtrToArg<int64_t>::encode(data, &data_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &data_encoded);
}

void ENetPacketPeer::peer_disconnect_now(int32_t data) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ENetPacketPeer::get_class_static()._native_ptr(), StringName("peer_disconnect_now")._native_ptr(), 1995695955);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t data_encoded;
	PtrToArg<int64_t>::encode(data, &data_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &data_encoded);
}

void ENetPacketPeer::ping() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ENetPacketPeer::get_class_static()._native_ptr(), StringName("ping")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

void ENetPacketPeer::ping_interval(int32_t ping_interval) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ENetPacketPeer::get_class_static()._native_ptr(), StringName("ping_interval")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t ping_interval_encoded;
	PtrToArg<int64_t>::encode(ping_interval, &ping_interval_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &ping_interval_encoded);
}

void ENetPacketPeer::reset() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ENetPacketPeer::get_class_static()._native_ptr(), StringName("reset")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

Error ENetPacketPeer::send(int32_t channel, const PackedByteArray &packet, int32_t flags) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ENetPacketPeer::get_class_static()._native_ptr(), StringName("send")._native_ptr(), 120522849);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Error(0));
	int64_t channel_encoded;
	PtrToArg<int64_t>::encode(channel, &channel_encoded);
	int64_t flags_encoded;
	PtrToArg<int64_t>::encode(flags, &flags_encoded);
	return (Error)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &channel_encoded, &packet, &flags_encoded);
}

void ENetPacketPeer::throttle_configure(int32_t interval, int32_t acceleration, int32_t deceleration) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ENetPacketPeer::get_class_static()._native_ptr(), StringName("throttle_configure")._native_ptr(), 1649997291);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t interval_encoded;
	PtrToArg<int64_t>::encode(interval, &interval_encoded);
	int64_t acceleration_encoded;
	PtrToArg<int64_t>::encode(acceleration, &acceleration_encoded);
	int64_t deceleration_encoded;
	PtrToArg<int64_t>::encode(deceleration, &deceleration_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &interval_encoded, &acceleration_encoded, &deceleration_encoded);
}

void ENetPacketPeer::set_timeout(int32_t timeout, int32_t timeout_min, int32_t timeout_max) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ENetPacketPeer::get_class_static()._native_ptr(), StringName("set_timeout")._native_ptr(), 1649997291);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t timeout_encoded;
	PtrToArg<int64_t>::encode(timeout, &timeout_encoded);
	int64_t timeout_min_encoded;
	PtrToArg<int64_t>::encode(timeout_min, &timeout_min_encoded);
	int64_t timeout_max_encoded;
	PtrToArg<int64_t>::encode(timeout_max, &timeout_max_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &timeout_encoded, &timeout_min_encoded, &timeout_max_encoded);
}

String ENetPacketPeer::get_remote_address() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ENetPacketPeer::get_class_static()._native_ptr(), StringName("get_remote_address")._native_ptr(), 201670096);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner);
}

int32_t ENetPacketPeer::get_remote_port() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ENetPacketPeer::get_class_static()._native_ptr(), StringName("get_remote_port")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

double ENetPacketPeer::get_statistic(ENetPacketPeer::PeerStatistic statistic) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ENetPacketPeer::get_class_static()._native_ptr(), StringName("get_statistic")._native_ptr(), 1642578323);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner, &statistic);
}

ENetPacketPeer::PeerState ENetPacketPeer::get_state() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ENetPacketPeer::get_class_static()._native_ptr(), StringName("get_state")._native_ptr(), 711068532);
	CHECK_METHOD_BIND_RET(_gde_method_bind, ENetPacketPeer::PeerState(0));
	return (ENetPacketPeer::PeerState)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

int32_t ENetPacketPeer::get_channels() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ENetPacketPeer::get_class_static()._native_ptr(), StringName("get_channels")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

bool ENetPacketPeer::is_active() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ENetPacketPeer::get_class_static()._native_ptr(), StringName("is_active")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}


} // namespace godot 