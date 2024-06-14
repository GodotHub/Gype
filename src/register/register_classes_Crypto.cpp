
#include <godot_cpp/classes/crypto.hpp>
#include <godot_cpp/classes/crypto_key.hpp>
#include <godot_cpp/classes/hashing_context.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/x509_certificate.hpp>
#include <godot_cpp/variant/packed_byte_array.hpp>
#include <godot_cpp/variant/string.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_Crypto() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<Crypto>("Crypto")
			.constructor<>()
			.base<RefCounted>()
			.fun<static_cast<PackedByteArray (Crypto::*)(int32_t)>(&Crypto::generate_random_bytes)>((new std::string("generate_random_bytes"))->c_str())
			.fun<static_cast<Ref<CryptoKey> (Crypto::*)(int32_t)>(&Crypto::generate_rsa)>((new std::string("generate_rsa"))->c_str())
			.fun<static_cast<Ref<X509Certificate> (Crypto::*)(const Ref<CryptoKey> &, const String &, const String &, const String &)>(&Crypto::generate_self_signed_certificate)>((new std::string("generate_self_signed_certificate"))->c_str())
			.fun<static_cast<PackedByteArray (Crypto::*)(HashingContext::HashType, const PackedByteArray &, const Ref<CryptoKey> &)>(&Crypto::sign)>((new std::string("sign"))->c_str())
			.fun<static_cast<bool (Crypto::*)(HashingContext::HashType, const PackedByteArray &, const PackedByteArray &, const Ref<CryptoKey> &)>(&Crypto::verify)>((new std::string("verify"))->c_str())
			.fun<static_cast<PackedByteArray (Crypto::*)(const Ref<CryptoKey> &, const PackedByteArray &)>(&Crypto::encrypt)>((new std::string("encrypt"))->c_str())
			.fun<static_cast<PackedByteArray (Crypto::*)(const Ref<CryptoKey> &, const PackedByteArray &)>(&Crypto::decrypt)>((new std::string("decrypt"))->c_str())
			.fun<static_cast<PackedByteArray (Crypto::*)(HashingContext::HashType, const PackedByteArray &, const PackedByteArray &)>(&Crypto::hmac_digest)>((new std::string("hmac_digest"))->c_str())
			.fun<static_cast<bool (Crypto::*)(const PackedByteArray &, const PackedByteArray &)>(&Crypto::constant_time_compare)>((new std::string("constant_time_compare"))->c_str());
}