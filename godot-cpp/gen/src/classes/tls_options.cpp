/**************************************************************************/
/*  tls_options.cpp                                                       */
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

#include <godot_cpp/classes/tls_options.hpp>

#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

#include <godot_cpp/classes/crypto_key.hpp>

namespace godot {


Ref<TLSOptions> TLSOptions::client(const Ref<X509Certificate> &trusted_chain, const String &common_name_override) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TLSOptions::get_class_static()._native_ptr(), StringName("client")._native_ptr(), 3565000357);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<TLSOptions>());
	return Ref<TLSOptions>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<TLSOptions>(_gde_method_bind, nullptr, (trusted_chain != nullptr ? &trusted_chain->_owner : nullptr), &common_name_override));
}

Ref<TLSOptions> TLSOptions::client_unsafe(const Ref<X509Certificate> &trusted_chain) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TLSOptions::get_class_static()._native_ptr(), StringName("client_unsafe")._native_ptr(), 2090251749);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<TLSOptions>());
	return Ref<TLSOptions>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<TLSOptions>(_gde_method_bind, nullptr, (trusted_chain != nullptr ? &trusted_chain->_owner : nullptr)));
}

Ref<TLSOptions> TLSOptions::server(const Ref<CryptoKey> &key, const Ref<X509Certificate> &certificate) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TLSOptions::get_class_static()._native_ptr(), StringName("server")._native_ptr(), 36969539);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<TLSOptions>());
	return Ref<TLSOptions>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<TLSOptions>(_gde_method_bind, nullptr, (key != nullptr ? &key->_owner : nullptr), (certificate != nullptr ? &certificate->_owner : nullptr)));
}


} // namespace godot 