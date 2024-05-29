/**************************************************************************/
/*  scene_multiplayer.cpp                                                 */
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

#include <godot_cpp/classes/scene_multiplayer.hpp>

#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

#include <godot_cpp/variant/packed_byte_array.hpp>

namespace godot {

void SceneMultiplayer::set_root_path(const NodePath &path) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SceneMultiplayer::get_class_static()._native_ptr(), StringName("set_root_path")._native_ptr(), 1348162250);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &path);
}

NodePath SceneMultiplayer::get_root_path() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SceneMultiplayer::get_class_static()._native_ptr(), StringName("get_root_path")._native_ptr(), 4075236667);
	CHECK_METHOD_BIND_RET(_gde_method_bind, NodePath());
	return internal::_call_native_mb_ret<NodePath>(_gde_method_bind, _owner);
}

void SceneMultiplayer::clear() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SceneMultiplayer::get_class_static()._native_ptr(), StringName("clear")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

void SceneMultiplayer::disconnect_peer(int32_t id) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SceneMultiplayer::get_class_static()._native_ptr(), StringName("disconnect_peer")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t id_encoded;
	PtrToArg<int64_t>::encode(id, &id_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &id_encoded);
}

PackedInt32Array SceneMultiplayer::get_authenticating_peers() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SceneMultiplayer::get_class_static()._native_ptr(), StringName("get_authenticating_peers")._native_ptr(), 969006518);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedInt32Array());
	return internal::_call_native_mb_ret<PackedInt32Array>(_gde_method_bind, _owner);
}

Error SceneMultiplayer::send_auth(int32_t id, const PackedByteArray &data) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SceneMultiplayer::get_class_static()._native_ptr(), StringName("send_auth")._native_ptr(), 506032537);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Error(0));
	int64_t id_encoded;
	PtrToArg<int64_t>::encode(id, &id_encoded);
	return (Error)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &id_encoded, &data);
}

Error SceneMultiplayer::complete_auth(int32_t id) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SceneMultiplayer::get_class_static()._native_ptr(), StringName("complete_auth")._native_ptr(), 844576869);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Error(0));
	int64_t id_encoded;
	PtrToArg<int64_t>::encode(id, &id_encoded);
	return (Error)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &id_encoded);
}

void SceneMultiplayer::set_auth_callback(const Callable &callback) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SceneMultiplayer::get_class_static()._native_ptr(), StringName("set_auth_callback")._native_ptr(), 1611583062);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &callback);
}

Callable SceneMultiplayer::get_auth_callback() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SceneMultiplayer::get_class_static()._native_ptr(), StringName("get_auth_callback")._native_ptr(), 1307783378);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Callable());
	return internal::_call_native_mb_ret<Callable>(_gde_method_bind, _owner);
}

void SceneMultiplayer::set_auth_timeout(double timeout) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SceneMultiplayer::get_class_static()._native_ptr(), StringName("set_auth_timeout")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double timeout_encoded;
	PtrToArg<double>::encode(timeout, &timeout_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &timeout_encoded);
}

double SceneMultiplayer::get_auth_timeout() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SceneMultiplayer::get_class_static()._native_ptr(), StringName("get_auth_timeout")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void SceneMultiplayer::set_refuse_new_connections(bool refuse) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SceneMultiplayer::get_class_static()._native_ptr(), StringName("set_refuse_new_connections")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t refuse_encoded;
	PtrToArg<bool>::encode(refuse, &refuse_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &refuse_encoded);
}

bool SceneMultiplayer::is_refusing_new_connections() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SceneMultiplayer::get_class_static()._native_ptr(), StringName("is_refusing_new_connections")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void SceneMultiplayer::set_allow_object_decoding(bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SceneMultiplayer::get_class_static()._native_ptr(), StringName("set_allow_object_decoding")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enable_encoded);
}

bool SceneMultiplayer::is_object_decoding_allowed() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SceneMultiplayer::get_class_static()._native_ptr(), StringName("is_object_decoding_allowed")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void SceneMultiplayer::set_server_relay_enabled(bool enabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SceneMultiplayer::get_class_static()._native_ptr(), StringName("set_server_relay_enabled")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enabled_encoded;
	PtrToArg<bool>::encode(enabled, &enabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enabled_encoded);
}

bool SceneMultiplayer::is_server_relay_enabled() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SceneMultiplayer::get_class_static()._native_ptr(), StringName("is_server_relay_enabled")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

Error SceneMultiplayer::send_bytes(const PackedByteArray &bytes, int32_t id, MultiplayerPeer::TransferMode mode, int32_t channel) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SceneMultiplayer::get_class_static()._native_ptr(), StringName("send_bytes")._native_ptr(), 1307428718);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Error(0));
	int64_t id_encoded;
	PtrToArg<int64_t>::encode(id, &id_encoded);
	int64_t channel_encoded;
	PtrToArg<int64_t>::encode(channel, &channel_encoded);
	return (Error)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &bytes, &id_encoded, &mode, &channel_encoded);
}

int32_t SceneMultiplayer::get_max_sync_packet_size() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SceneMultiplayer::get_class_static()._native_ptr(), StringName("get_max_sync_packet_size")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void SceneMultiplayer::set_max_sync_packet_size(int32_t size) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SceneMultiplayer::get_class_static()._native_ptr(), StringName("set_max_sync_packet_size")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t size_encoded;
	PtrToArg<int64_t>::encode(size, &size_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &size_encoded);
}

int32_t SceneMultiplayer::get_max_delta_packet_size() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SceneMultiplayer::get_class_static()._native_ptr(), StringName("get_max_delta_packet_size")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void SceneMultiplayer::set_max_delta_packet_size(int32_t size) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SceneMultiplayer::get_class_static()._native_ptr(), StringName("set_max_delta_packet_size")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t size_encoded;
	PtrToArg<int64_t>::encode(size, &size_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &size_encoded);
}


} // namespace godot 