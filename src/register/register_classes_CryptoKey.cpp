#include <godot_cpp/classes/crypto_key.hpp>
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/variant/string.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_CryptoKey() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<CryptoKey>("CryptoKey")
			.constructor<>()
			.base<Resource>()
			.fun<static_cast<Error (CryptoKey::*)(const String &, bool)>(&CryptoKey::save)>((new std::string("save"))->c_str())
			.fun<static_cast<Error (CryptoKey::*)(const String &, bool)>(&CryptoKey::load)>((new std::string("load"))->c_str())
			.fun<static_cast<bool (CryptoKey::*)() const>(&CryptoKey::is_public_only)>((new std::string("is_public_only"))->c_str())
			.fun<static_cast<String (CryptoKey::*)(bool)>(&CryptoKey::save_to_string)>((new std::string("save_to_string"))->c_str())
			.fun<static_cast<Error (CryptoKey::*)(const String &, bool)>(&CryptoKey::load_from_string)>((new std::string("load_from_string"))->c_str());
}