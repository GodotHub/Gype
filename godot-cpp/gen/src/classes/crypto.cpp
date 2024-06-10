/**************************************************************************/
/*  crypto.cpp                                                            */
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

#include <godot_cpp/classes/crypto.hpp>

#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

#include <godot_cpp/classes/crypto_key.hpp>
#include <godot_cpp/classes/x509_certificate.hpp>

namespace godot {

PackedByteArray Crypto::generate_random_bytes(int32_t size) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Crypto::get_class_static()._native_ptr(), StringName("generate_random_bytes")._native_ptr(), 47165747);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedByteArray());
	int64_t size_encoded;
	PtrToArg<int64_t>::encode(size, &size_encoded);
	return internal::_call_native_mb_ret<PackedByteArray>(_gde_method_bind, _owner, &size_encoded);
}

Ref<CryptoKey> Crypto::generate_rsa(int32_t size) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Crypto::get_class_static()._native_ptr(), StringName("generate_rsa")._native_ptr(), 1237515462);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<CryptoKey>());
	int64_t size_encoded;
	PtrToArg<int64_t>::encode(size, &size_encoded);
	return Ref<CryptoKey>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<CryptoKey>(_gde_method_bind, _owner, &size_encoded));
}

Ref<X509Certificate> Crypto::generate_self_signed_certificate(const Ref<CryptoKey> &key, const String &issuer_name, const String &not_before, const String &not_after) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Crypto::get_class_static()._native_ptr(), StringName("generate_self_signed_certificate")._native_ptr(), 492266173);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<X509Certificate>());
	return Ref<X509Certificate>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<X509Certificate>(_gde_method_bind, _owner, (key != nullptr ? &key->_owner : nullptr), &issuer_name, &not_before, &not_after));
}

PackedByteArray Crypto::sign(HashingContext::HashType hash_type, const PackedByteArray &hash, const Ref<CryptoKey> &key) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Crypto::get_class_static()._native_ptr(), StringName("sign")._native_ptr(), 1673662703);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedByteArray());
	return internal::_call_native_mb_ret<PackedByteArray>(_gde_method_bind, _owner, &hash_type, &hash, (key != nullptr ? &key->_owner : nullptr));
}

bool Crypto::verify(HashingContext::HashType hash_type, const PackedByteArray &hash, const PackedByteArray &signature, const Ref<CryptoKey> &key) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Crypto::get_class_static()._native_ptr(), StringName("verify")._native_ptr(), 2805902225);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &hash_type, &hash, &signature, (key != nullptr ? &key->_owner : nullptr));
}

PackedByteArray Crypto::encrypt(const Ref<CryptoKey> &key, const PackedByteArray &plaintext) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Crypto::get_class_static()._native_ptr(), StringName("encrypt")._native_ptr(), 2361793670);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedByteArray());
	return internal::_call_native_mb_ret<PackedByteArray>(_gde_method_bind, _owner, (key != nullptr ? &key->_owner : nullptr), &plaintext);
}

PackedByteArray Crypto::decrypt(const Ref<CryptoKey> &key, const PackedByteArray &ciphertext) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Crypto::get_class_static()._native_ptr(), StringName("decrypt")._native_ptr(), 2361793670);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedByteArray());
	return internal::_call_native_mb_ret<PackedByteArray>(_gde_method_bind, _owner, (key != nullptr ? &key->_owner : nullptr), &ciphertext);
}

PackedByteArray Crypto::hmac_digest(HashingContext::HashType hash_type, const PackedByteArray &key, const PackedByteArray &msg) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Crypto::get_class_static()._native_ptr(), StringName("hmac_digest")._native_ptr(), 2368951203);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedByteArray());
	return internal::_call_native_mb_ret<PackedByteArray>(_gde_method_bind, _owner, &hash_type, &key, &msg);
}

bool Crypto::constant_time_compare(const PackedByteArray &trusted, const PackedByteArray &received) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Crypto::get_class_static()._native_ptr(), StringName("constant_time_compare")._native_ptr(), 1024142237);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &trusted, &received);
}


} // namespace godot 