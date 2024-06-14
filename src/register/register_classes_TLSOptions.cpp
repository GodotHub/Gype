#include <godot_cpp/classes/crypto_key.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/tls_options.hpp>
#include <godot_cpp/classes/x509_certificate.hpp>
#include <godot_cpp/variant/string.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_TLSOptions() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<TLSOptions>("TLSOptions")
			.constructor<>()
			.base<RefCounted>()
			.static_fun<static_cast<Ref<TLSOptions> (*)(const Ref<X509Certificate> &, const String &)>(&TLSOptions::client)>((new std::string("client"))->c_str())
			.static_fun<static_cast<Ref<TLSOptions> (*)(const Ref<X509Certificate> &)>(&TLSOptions::client_unsafe)>((new std::string("client_unsafe"))->c_str())
			.static_fun<static_cast<Ref<TLSOptions> (*)(const Ref<CryptoKey> &, const Ref<X509Certificate> &)>(&TLSOptions::server)>((new std::string("server"))->c_str());
}