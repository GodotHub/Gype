/**************************************************************************/
/*  upnp_device.cpp                                                       */
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

#include <godot_cpp/classes/upnp_device.hpp>

#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

namespace godot {

bool UPNPDevice::is_valid_gateway() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(UPNPDevice::get_class_static()._native_ptr(), StringName("is_valid_gateway")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

String UPNPDevice::query_external_address() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(UPNPDevice::get_class_static()._native_ptr(), StringName("query_external_address")._native_ptr(), 201670096);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner);
}

int32_t UPNPDevice::add_port_mapping(int32_t port, int32_t port_internal, const String &desc, const String &proto, int32_t duration) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(UPNPDevice::get_class_static()._native_ptr(), StringName("add_port_mapping")._native_ptr(), 818314583);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	int64_t port_encoded;
	PtrToArg<int64_t>::encode(port, &port_encoded);
	int64_t port_internal_encoded;
	PtrToArg<int64_t>::encode(port_internal, &port_internal_encoded);
	int64_t duration_encoded;
	PtrToArg<int64_t>::encode(duration, &duration_encoded);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &port_encoded, &port_internal_encoded, &desc, &proto, &duration_encoded);
}

int32_t UPNPDevice::delete_port_mapping(int32_t port, const String &proto) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(UPNPDevice::get_class_static()._native_ptr(), StringName("delete_port_mapping")._native_ptr(), 3444187325);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	int64_t port_encoded;
	PtrToArg<int64_t>::encode(port, &port_encoded);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &port_encoded, &proto);
}

void UPNPDevice::set_description_url(const String &url) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(UPNPDevice::get_class_static()._native_ptr(), StringName("set_description_url")._native_ptr(), 83702148);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &url);
}

String UPNPDevice::get_description_url() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(UPNPDevice::get_class_static()._native_ptr(), StringName("get_description_url")._native_ptr(), 201670096);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner);
}

void UPNPDevice::set_service_type(const String &type) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(UPNPDevice::get_class_static()._native_ptr(), StringName("set_service_type")._native_ptr(), 83702148);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &type);
}

String UPNPDevice::get_service_type() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(UPNPDevice::get_class_static()._native_ptr(), StringName("get_service_type")._native_ptr(), 201670096);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner);
}

void UPNPDevice::set_igd_control_url(const String &url) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(UPNPDevice::get_class_static()._native_ptr(), StringName("set_igd_control_url")._native_ptr(), 83702148);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &url);
}

String UPNPDevice::get_igd_control_url() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(UPNPDevice::get_class_static()._native_ptr(), StringName("get_igd_control_url")._native_ptr(), 201670096);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner);
}

void UPNPDevice::set_igd_service_type(const String &type) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(UPNPDevice::get_class_static()._native_ptr(), StringName("set_igd_service_type")._native_ptr(), 83702148);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &type);
}

String UPNPDevice::get_igd_service_type() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(UPNPDevice::get_class_static()._native_ptr(), StringName("get_igd_service_type")._native_ptr(), 201670096);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner);
}

void UPNPDevice::set_igd_our_addr(const String &addr) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(UPNPDevice::get_class_static()._native_ptr(), StringName("set_igd_our_addr")._native_ptr(), 83702148);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &addr);
}

String UPNPDevice::get_igd_our_addr() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(UPNPDevice::get_class_static()._native_ptr(), StringName("get_igd_our_addr")._native_ptr(), 201670096);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner);
}

void UPNPDevice::set_igd_status(UPNPDevice::IGDStatus status) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(UPNPDevice::get_class_static()._native_ptr(), StringName("set_igd_status")._native_ptr(), 519504122);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &status);
}

UPNPDevice::IGDStatus UPNPDevice::get_igd_status() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(UPNPDevice::get_class_static()._native_ptr(), StringName("get_igd_status")._native_ptr(), 180887011);
	CHECK_METHOD_BIND_RET(_gde_method_bind, UPNPDevice::IGDStatus(0));
	return (UPNPDevice::IGDStatus)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}


} // namespace godot 