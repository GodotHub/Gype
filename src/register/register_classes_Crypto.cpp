#include <godot_cpp/classes/crypto.hpp>
#include <godot_cpp/classes/crypto_key.hpp>
#include <godot_cpp/classes/hashing_context.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/x509_certificate.hpp>
#include <godot_cpp/variant/packed_byte_array.hpp>
#include <godot_cpp/variant/string.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_Crypto() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<Crypto>("Crypto")
			.constructor<>()
			.fun<static_cast<PackedByteArray (Crypto::*)(int32_t)>(&Crypto::generate_random_bytes)>("generate_random_bytes")
			.fun<static_cast<Ref<CryptoKey> (Crypto::*)(int32_t)>(&Crypto::generate_rsa)>("generate_rsa")
			.fun<static_cast<Ref<X509Certificate> (Crypto::*)(const Ref<CryptoKey> &, const String &, const String &, const String &)>(&Crypto::generate_self_signed_certificate)>("generate_self_signed_certificate")
			.fun<static_cast<PackedByteArray (Crypto::*)(HashingContext::HashType, const PackedByteArray &, const Ref<CryptoKey> &)>(&Crypto::sign)>("sign")
			.fun<static_cast<bool (Crypto::*)(HashingContext::HashType, const PackedByteArray &, const PackedByteArray &, const Ref<CryptoKey> &)>(&Crypto::verify)>("verify")
			.fun<static_cast<PackedByteArray (Crypto::*)(const Ref<CryptoKey> &, const PackedByteArray &)>(&Crypto::encrypt)>("encrypt")
			.fun<static_cast<PackedByteArray (Crypto::*)(const Ref<CryptoKey> &, const PackedByteArray &)>(&Crypto::decrypt)>("decrypt")
			.fun<static_cast<PackedByteArray (Crypto::*)(HashingContext::HashType, const PackedByteArray &, const PackedByteArray &)>(&Crypto::hmac_digest)>("hmac_digest")
			.fun<static_cast<bool (Crypto::*)(const PackedByteArray &, const PackedByteArray &)>(&Crypto::constant_time_compare)>("constant_time_compare");
}