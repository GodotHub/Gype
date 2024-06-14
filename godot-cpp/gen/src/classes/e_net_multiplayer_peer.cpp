/**************************************************************************/
/*  e_net_multiplayer_peer.cpp                                            */
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

#include <godot_cpp/classes/e_net_multiplayer_peer.hpp>

#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

#include <godot_cpp/classes/e_net_connection.hpp>
#include <godot_cpp/classes/e_net_packet_peer.hpp>
#include <godot_cpp/variant/string.hpp>

namespace godot {


Error ENetMultiplayerPeer::create_server(int32_t port, int32_t max_clients, int32_t max_channels, int32_t in_bandwidth, int32_t out_bandwidth) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ENetMultiplayerPeer::get_class_static()._native_ptr(), StringName("create_server")._native_ptr(), 2917761309);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Error(0));
	int64_t port_encoded;
	PtrToArg<int64_t>::encode(port, &port_encoded);
	int64_t max_clients_encoded;
	PtrToArg<int64_t>::encode(max_clients, &max_clients_encoded);
	int64_t max_channels_encoded;
	PtrToArg<int64_t>::encode(max_channels, &max_channels_encoded);
	int64_t in_bandwidth_encoded;
	PtrToArg<int64_t>::encode(in_bandwidth, &in_bandwidth_encoded);
	int64_t out_bandwidth_encoded;
	PtrToArg<int64_t>::encode(out_bandwidth, &out_bandwidth_encoded);
	return (Error)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &port_encoded, &max_clients_encoded, &max_channels_encoded, &in_bandwidth_encoded, &out_bandwidth_encoded);
}

Error ENetMultiplayerPeer::create_client(const String &address, int32_t port, int32_t channel_count, int32_t in_bandwidth, int32_t out_bandwidth, int32_t local_port) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ENetMultiplayerPeer::get_class_static()._native_ptr(), StringName("create_client")._native_ptr(), 2327163476);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Error(0));
	int64_t port_encoded;
	PtrToArg<int64_t>::encode(port, &port_encoded);
	int64_t channel_count_encoded;
	PtrToArg<int64_t>::encode(channel_count, &channel_count_encoded);
	int64_t in_bandwidth_encoded;
	PtrToArg<int64_t>::encode(in_bandwidth, &in_bandwidth_encoded);
	int64_t out_bandwidth_encoded;
	PtrToArg<int64_t>::encode(out_bandwidth, &out_bandwidth_encoded);
	int64_t local_port_encoded;
	PtrToArg<int64_t>::encode(local_port, &local_port_encoded);
	return (Error)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &address, &port_encoded, &channel_count_encoded, &in_bandwidth_encoded, &out_bandwidth_encoded, &local_port_encoded);
}

Error ENetMultiplayerPeer::create_mesh(int32_t unique_id) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ENetMultiplayerPeer::get_class_static()._native_ptr(), StringName("create_mesh")._native_ptr(), 844576869);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Error(0));
	int64_t unique_id_encoded;
	PtrToArg<int64_t>::encode(unique_id, &unique_id_encoded);
	return (Error)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &unique_id_encoded);
}

Error ENetMultiplayerPeer::add_mesh_peer(int32_t peer_id, const Ref<ENetConnection> &host) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ENetMultiplayerPeer::get_class_static()._native_ptr(), StringName("add_mesh_peer")._native_ptr(), 1293458335);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Error(0));
	int64_t peer_id_encoded;
	PtrToArg<int64_t>::encode(peer_id, &peer_id_encoded);
	return (Error)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &peer_id_encoded, (host != nullptr ? &host->_owner : nullptr));
}

void ENetMultiplayerPeer::set_bind_ip(const String &ip) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ENetMultiplayerPeer::get_class_static()._native_ptr(), StringName("set_bind_ip")._native_ptr(), 83702148);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &ip);
}

Ref<ENetConnection> ENetMultiplayerPeer::get_host() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ENetMultiplayerPeer::get_class_static()._native_ptr(), StringName("get_host")._native_ptr(), 4103238886);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<ENetConnection>());
	return Ref<ENetConnection>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<ENetConnection>(_gde_method_bind, _owner));
}

Ref<ENetPacketPeer> ENetMultiplayerPeer::get_peer(int32_t id) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ENetMultiplayerPeer::get_class_static()._native_ptr(), StringName("get_peer")._native_ptr(), 3793311544);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<ENetPacketPeer>());
	int64_t id_encoded;
	PtrToArg<int64_t>::encode(id, &id_encoded);
	return Ref<ENetPacketPeer>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<ENetPacketPeer>(_gde_method_bind, _owner, &id_encoded));
}


} // namespace godot 