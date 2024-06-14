/**************************************************************************/
/*  upnp.cpp                                                              */
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

#include <godot_cpp/classes/upnp.hpp>

#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

#include <godot_cpp/classes/upnp_device.hpp>

namespace godot {


int32_t UPNP::get_device_count() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(UPNP::get_class_static()._native_ptr(), StringName("get_device_count")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

Ref<UPNPDevice> UPNP::get_device(int32_t index) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(UPNP::get_class_static()._native_ptr(), StringName("get_device")._native_ptr(), 2193290270);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<UPNPDevice>());
	int64_t index_encoded;
	PtrToArg<int64_t>::encode(index, &index_encoded);
	return Ref<UPNPDevice>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<UPNPDevice>(_gde_method_bind, _owner, &index_encoded));
}

void UPNP::add_device(const Ref<UPNPDevice> &device) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(UPNP::get_class_static()._native_ptr(), StringName("add_device")._native_ptr(), 986715920);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (device != nullptr ? &device->_owner : nullptr));
}

void UPNP::set_device(int32_t index, const Ref<UPNPDevice> &device) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(UPNP::get_class_static()._native_ptr(), StringName("set_device")._native_ptr(), 3015133723);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t index_encoded;
	PtrToArg<int64_t>::encode(index, &index_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &index_encoded, (device != nullptr ? &device->_owner : nullptr));
}

void UPNP::remove_device(int32_t index) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(UPNP::get_class_static()._native_ptr(), StringName("remove_device")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t index_encoded;
	PtrToArg<int64_t>::encode(index, &index_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &index_encoded);
}

void UPNP::clear_devices() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(UPNP::get_class_static()._native_ptr(), StringName("clear_devices")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

Ref<UPNPDevice> UPNP::get_gateway() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(UPNP::get_class_static()._native_ptr(), StringName("get_gateway")._native_ptr(), 2276800779);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<UPNPDevice>());
	return Ref<UPNPDevice>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<UPNPDevice>(_gde_method_bind, _owner));
}

int32_t UPNP::discover(int32_t timeout, int32_t ttl, const String &device_filter) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(UPNP::get_class_static()._native_ptr(), StringName("discover")._native_ptr(), 1575334765);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	int64_t timeout_encoded;
	PtrToArg<int64_t>::encode(timeout, &timeout_encoded);
	int64_t ttl_encoded;
	PtrToArg<int64_t>::encode(ttl, &ttl_encoded);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &timeout_encoded, &ttl_encoded, &device_filter);
}

String UPNP::query_external_address() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(UPNP::get_class_static()._native_ptr(), StringName("query_external_address")._native_ptr(), 201670096);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner);
}

int32_t UPNP::add_port_mapping(int32_t port, int32_t port_internal, const String &desc, const String &proto, int32_t duration) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(UPNP::get_class_static()._native_ptr(), StringName("add_port_mapping")._native_ptr(), 818314583);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	int64_t port_encoded;
	PtrToArg<int64_t>::encode(port, &port_encoded);
	int64_t port_internal_encoded;
	PtrToArg<int64_t>::encode(port_internal, &port_internal_encoded);
	int64_t duration_encoded;
	PtrToArg<int64_t>::encode(duration, &duration_encoded);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &port_encoded, &port_internal_encoded, &desc, &proto, &duration_encoded);
}

int32_t UPNP::delete_port_mapping(int32_t port, const String &proto) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(UPNP::get_class_static()._native_ptr(), StringName("delete_port_mapping")._native_ptr(), 3444187325);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	int64_t port_encoded;
	PtrToArg<int64_t>::encode(port, &port_encoded);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &port_encoded, &proto);
}

void UPNP::set_discover_multicast_if(const String &m_if) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(UPNP::get_class_static()._native_ptr(), StringName("set_discover_multicast_if")._native_ptr(), 83702148);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &m_if);
}

String UPNP::get_discover_multicast_if() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(UPNP::get_class_static()._native_ptr(), StringName("get_discover_multicast_if")._native_ptr(), 201670096);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner);
}

void UPNP::set_discover_local_port(int32_t port) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(UPNP::get_class_static()._native_ptr(), StringName("set_discover_local_port")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t port_encoded;
	PtrToArg<int64_t>::encode(port, &port_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &port_encoded);
}

int32_t UPNP::get_discover_local_port() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(UPNP::get_class_static()._native_ptr(), StringName("get_discover_local_port")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void UPNP::set_discover_ipv6(bool ipv6) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(UPNP::get_class_static()._native_ptr(), StringName("set_discover_ipv6")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t ipv6_encoded;
	PtrToArg<bool>::encode(ipv6, &ipv6_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &ipv6_encoded);
}

bool UPNP::is_discover_ipv6() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(UPNP::get_class_static()._native_ptr(), StringName("is_discover_ipv6")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}


} // namespace godot 