#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/crypto_key.hpp>

using namespace godot;

void register_classes_CryptoKey() {
    qjs::Context::Module &_module = _General;
    _module.class_<CryptoKey>("CryptoKey")
           .constructor<>()
		    .fun<static_cast<Error(CryptoKey::*)(const String &,bool)>(&CryptoKey::save)>("save")
		    .fun<static_cast<Error(CryptoKey::*)(const String &,bool)>(&CryptoKey::load)>("load")
		    .fun<static_cast<bool(CryptoKey::*)()const>(&CryptoKey::is_public_only)>("is_public_only")
		    .fun<static_cast<String(CryptoKey::*)(bool)>(&CryptoKey::save_to_string)>("save_to_string")
		    .fun<static_cast<Error(CryptoKey::*)(const String &,bool)>(&CryptoKey::load_from_string)>("load_from_string")
;}