#include <godot_cpp/classes/crypto_key.hpp>
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/variant/string.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_CryptoKey() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<CryptoKey>("CryptoKey")
            .constructor<>()
            .base<Resource>()
            .fun<static_cast<Error(CryptoKey::*)(const String &,bool)>(&CryptoKey::save)>("save")
            .fun<static_cast<Error(CryptoKey::*)(const String &,bool)>(&CryptoKey::load)>("load")
            .fun<static_cast<bool(CryptoKey::*)()const>(&CryptoKey::is_public_only)>("is_public_only")
            .fun<static_cast<String(CryptoKey::*)(bool)>(&CryptoKey::save_to_string)>("save_to_string")
            .fun<static_cast<Error(CryptoKey::*)(const String &,bool)>(&CryptoKey::load_from_string)>("load_from_string")
;}