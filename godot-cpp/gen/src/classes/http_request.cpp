/**************************************************************************/
/*  http_request.cpp                                                      */
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

#include <godot_cpp/classes/http_request.hpp>

#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

#include <godot_cpp/classes/tls_options.hpp>

namespace godot {

Error HTTPRequest::request(const String &url, const PackedStringArray &custom_headers, HTTPClient::Method method, const String &request_data) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(HTTPRequest::get_class_static()._native_ptr(), StringName("request")._native_ptr(), 3215244323);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Error(0));
	return (Error)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &url, &custom_headers, &method, &request_data);
}

Error HTTPRequest::request_raw(const String &url, const PackedStringArray &custom_headers, HTTPClient::Method method, const PackedByteArray &request_data_raw) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(HTTPRequest::get_class_static()._native_ptr(), StringName("request_raw")._native_ptr(), 2714829993);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Error(0));
	return (Error)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &url, &custom_headers, &method, &request_data_raw);
}

void HTTPRequest::cancel_request() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(HTTPRequest::get_class_static()._native_ptr(), StringName("cancel_request")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

void HTTPRequest::set_tls_options(const Ref<TLSOptions> &client_options) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(HTTPRequest::get_class_static()._native_ptr(), StringName("set_tls_options")._native_ptr(), 2210231844);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (client_options != nullptr ? &client_options->_owner : nullptr));
}

HTTPClient::Status HTTPRequest::get_http_client_status() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(HTTPRequest::get_class_static()._native_ptr(), StringName("get_http_client_status")._native_ptr(), 1426656811);
	CHECK_METHOD_BIND_RET(_gde_method_bind, HTTPClient::Status(0));
	return (HTTPClient::Status)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void HTTPRequest::set_use_threads(bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(HTTPRequest::get_class_static()._native_ptr(), StringName("set_use_threads")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enable_encoded);
}

bool HTTPRequest::is_using_threads() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(HTTPRequest::get_class_static()._native_ptr(), StringName("is_using_threads")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void HTTPRequest::set_accept_gzip(bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(HTTPRequest::get_class_static()._native_ptr(), StringName("set_accept_gzip")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enable_encoded);
}

bool HTTPRequest::is_accepting_gzip() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(HTTPRequest::get_class_static()._native_ptr(), StringName("is_accepting_gzip")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void HTTPRequest::set_body_size_limit(int32_t bytes) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(HTTPRequest::get_class_static()._native_ptr(), StringName("set_body_size_limit")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t bytes_encoded;
	PtrToArg<int64_t>::encode(bytes, &bytes_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &bytes_encoded);
}

int32_t HTTPRequest::get_body_size_limit() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(HTTPRequest::get_class_static()._native_ptr(), StringName("get_body_size_limit")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void HTTPRequest::set_max_redirects(int32_t amount) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(HTTPRequest::get_class_static()._native_ptr(), StringName("set_max_redirects")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t amount_encoded;
	PtrToArg<int64_t>::encode(amount, &amount_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &amount_encoded);
}

int32_t HTTPRequest::get_max_redirects() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(HTTPRequest::get_class_static()._native_ptr(), StringName("get_max_redirects")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void HTTPRequest::set_download_file(const String &path) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(HTTPRequest::get_class_static()._native_ptr(), StringName("set_download_file")._native_ptr(), 83702148);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &path);
}

String HTTPRequest::get_download_file() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(HTTPRequest::get_class_static()._native_ptr(), StringName("get_download_file")._native_ptr(), 201670096);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner);
}

int32_t HTTPRequest::get_downloaded_bytes() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(HTTPRequest::get_class_static()._native_ptr(), StringName("get_downloaded_bytes")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

int32_t HTTPRequest::get_body_size() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(HTTPRequest::get_class_static()._native_ptr(), StringName("get_body_size")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void HTTPRequest::set_timeout(double timeout) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(HTTPRequest::get_class_static()._native_ptr(), StringName("set_timeout")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double timeout_encoded;
	PtrToArg<double>::encode(timeout, &timeout_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &timeout_encoded);
}

double HTTPRequest::get_timeout() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(HTTPRequest::get_class_static()._native_ptr(), StringName("get_timeout")._native_ptr(), 191475506);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void HTTPRequest::set_download_chunk_size(int32_t chunk_size) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(HTTPRequest::get_class_static()._native_ptr(), StringName("set_download_chunk_size")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t chunk_size_encoded;
	PtrToArg<int64_t>::encode(chunk_size, &chunk_size_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &chunk_size_encoded);
}

int32_t HTTPRequest::get_download_chunk_size() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(HTTPRequest::get_class_static()._native_ptr(), StringName("get_download_chunk_size")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void HTTPRequest::set_http_proxy(const String &host, int32_t port) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(HTTPRequest::get_class_static()._native_ptr(), StringName("set_http_proxy")._native_ptr(), 2956805083);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t port_encoded;
	PtrToArg<int64_t>::encode(port, &port_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &host, &port_encoded);
}

void HTTPRequest::set_https_proxy(const String &host, int32_t port) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(HTTPRequest::get_class_static()._native_ptr(), StringName("set_https_proxy")._native_ptr(), 2956805083);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t port_encoded;
	PtrToArg<int64_t>::encode(port, &port_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &host, &port_encoded);
}


} // namespace godot 