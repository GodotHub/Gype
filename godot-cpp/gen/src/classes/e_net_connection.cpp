/**************************************************************************/
/*  e_net_connection.cpp                                                  */
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

#include <godot_cpp/classes/e_net_connection.hpp>

#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

#include <godot_cpp/classes/e_net_packet_peer.hpp>
#include <godot_cpp/variant/packed_byte_array.hpp>
#include <godot_cpp/variant/string.hpp>

namespace godot {

Error ENetConnection::create_host_bound(const String &bind_address, int32_t bind_port, int32_t max_peers, int32_t max_channels, int32_t in_bandwidth, int32_t out_bandwidth) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ENetConnection::get_class_static()._native_ptr(), StringName("create_host_bound")._native_ptr(), 1515002313);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Error(0));
	int64_t bind_port_encoded;
	PtrToArg<int64_t>::encode(bind_port, &bind_port_encoded);
	int64_t max_peers_encoded;
	PtrToArg<int64_t>::encode(max_peers, &max_peers_encoded);
	int64_t max_channels_encoded;
	PtrToArg<int64_t>::encode(max_channels, &max_channels_encoded);
	int64_t in_bandwidth_encoded;
	PtrToArg<int64_t>::encode(in_bandwidth, &in_bandwidth_encoded);
	int64_t out_bandwidth_encoded;
	PtrToArg<int64_t>::encode(out_bandwidth, &out_bandwidth_encoded);
	return (Error)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &bind_address, &bind_port_encoded, &max_peers_encoded, &max_channels_encoded, &in_bandwidth_encoded, &out_bandwidth_encoded);
}

Error ENetConnection::create_host(int32_t max_peers, int32_t max_channels, int32_t in_bandwidth, int32_t out_bandwidth) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ENetConnection::get_class_static()._native_ptr(), StringName("create_host")._native_ptr(), 117198950);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Error(0));
	int64_t max_peers_encoded;
	PtrToArg<int64_t>::encode(max_peers, &max_peers_encoded);
	int64_t max_channels_encoded;
	PtrToArg<int64_t>::encode(max_channels, &max_channels_encoded);
	int64_t in_bandwidth_encoded;
	PtrToArg<int64_t>::encode(in_bandwidth, &in_bandwidth_encoded);
	int64_t out_bandwidth_encoded;
	PtrToArg<int64_t>::encode(out_bandwidth, &out_bandwidth_encoded);
	return (Error)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &max_peers_encoded, &max_channels_encoded, &in_bandwidth_encoded, &out_bandwidth_encoded);
}

void ENetConnection::destroy() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ENetConnection::get_class_static()._native_ptr(), StringName("destroy")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

Ref<ENetPacketPeer> ENetConnection::connect_to_host(const String &address, int32_t port, int32_t channels, int32_t data) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ENetConnection::get_class_static()._native_ptr(), StringName("connect_to_host")._native_ptr(), 2171300490);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<ENetPacketPeer>());
	int64_t port_encoded;
	PtrToArg<int64_t>::encode(port, &port_encoded);
	int64_t channels_encoded;
	PtrToArg<int64_t>::encode(channels, &channels_encoded);
	int64_t data_encoded;
	PtrToArg<int64_t>::encode(data, &data_encoded);
	return Ref<ENetPacketPeer>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<ENetPacketPeer>(_gde_method_bind, _owner, &address, &port_encoded, &channels_encoded, &data_encoded));
}

Array ENetConnection::service(int32_t timeout) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ENetConnection::get_class_static()._native_ptr(), StringName("service")._native_ptr(), 2402345344);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Array());
	int64_t timeout_encoded;
	PtrToArg<int64_t>::encode(timeout, &timeout_encoded);
	return internal::_call_native_mb_ret<Array>(_gde_method_bind, _owner, &timeout_encoded);
}

void ENetConnection::flush() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ENetConnection::get_class_static()._native_ptr(), StringName("flush")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

void ENetConnection::bandwidth_limit(int32_t in_bandwidth, int32_t out_bandwidth) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ENetConnection::get_class_static()._native_ptr(), StringName("bandwidth_limit")._native_ptr(), 2302169788);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t in_bandwidth_encoded;
	PtrToArg<int64_t>::encode(in_bandwidth, &in_bandwidth_encoded);
	int64_t out_bandwidth_encoded;
	PtrToArg<int64_t>::encode(out_bandwidth, &out_bandwidth_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &in_bandwidth_encoded, &out_bandwidth_encoded);
}

void ENetConnection::channel_limit(int32_t limit) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ENetConnection::get_class_static()._native_ptr(), StringName("channel_limit")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t limit_encoded;
	PtrToArg<int64_t>::encode(limit, &limit_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &limit_encoded);
}

void ENetConnection::broadcast(int32_t channel, const PackedByteArray &packet, int32_t flags) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ENetConnection::get_class_static()._native_ptr(), StringName("broadcast")._native_ptr(), 2772371345);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t channel_encoded;
	PtrToArg<int64_t>::encode(channel, &channel_encoded);
	int64_t flags_encoded;
	PtrToArg<int64_t>::encode(flags, &flags_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &channel_encoded, &packet, &flags_encoded);
}

void ENetConnection::compress(ENetConnection::CompressionMode mode) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ENetConnection::get_class_static()._native_ptr(), StringName("compress")._native_ptr(), 2660215187);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &mode);
}

Error ENetConnection::dtls_server_setup(const Ref<TLSOptions> &server_options) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ENetConnection::get_class_static()._native_ptr(), StringName("dtls_server_setup")._native_ptr(), 1262296096);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Error(0));
	return (Error)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, (server_options != nullptr ? &server_options->_owner : nullptr));
}

Error ENetConnection::dtls_client_setup(const String &hostname, const Ref<TLSOptions> &client_options) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ENetConnection::get_class_static()._native_ptr(), StringName("dtls_client_setup")._native_ptr(), 1966198364);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Error(0));
	return (Error)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &hostname, (client_options != nullptr ? &client_options->_owner : nullptr));
}

void ENetConnection::refuse_new_connections(bool refuse) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ENetConnection::get_class_static()._native_ptr(), StringName("refuse_new_connections")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t refuse_encoded;
	PtrToArg<bool>::encode(refuse, &refuse_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &refuse_encoded);
}

double ENetConnection::pop_statistic(ENetConnection::HostStatistic statistic) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ENetConnection::get_class_static()._native_ptr(), StringName("pop_statistic")._native_ptr(), 2166904170);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner, &statistic);
}

int32_t ENetConnection::get_max_channels() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ENetConnection::get_class_static()._native_ptr(), StringName("get_max_channels")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

int32_t ENetConnection::get_local_port() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ENetConnection::get_class_static()._native_ptr(), StringName("get_local_port")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

TypedArray<ENetPacketPeer> ENetConnection::get_peers() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ENetConnection::get_class_static()._native_ptr(), StringName("get_peers")._native_ptr(), 2915620761);
	CHECK_METHOD_BIND_RET(_gde_method_bind, TypedArray<ENetPacketPeer>());
	return internal::_call_native_mb_ret<TypedArray<ENetPacketPeer>>(_gde_method_bind, _owner);
}

void ENetConnection::socket_send(const String &destination_address, int32_t destination_port, const PackedByteArray &packet) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ENetConnection::get_class_static()._native_ptr(), StringName("socket_send")._native_ptr(), 1100646812);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t destination_port_encoded;
	PtrToArg<int64_t>::encode(destination_port, &destination_port_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &destination_address, &destination_port_encoded, &packet);
}


} // namespace godot 