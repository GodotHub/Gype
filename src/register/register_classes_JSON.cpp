#include <godot_cpp/classes/json.hpp>
#include <godot_cpp/variant/variant.hpp>
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/variant/string.hpp>
#include <stdint.h>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_JSON() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<JSON>("JSON")
            .constructor<>()
            .base<Resource>()
            .property<static_cast<Variant(JSON::*)()const>(&JSON::get_data),static_cast<void(JSON::*)(const Variant &)>(&JSON::set_data)>("data")
            .static_fun<static_cast<String(*)(const Variant &,const String &,bool,bool)>(&JSON::stringify)>("stringify")
            .static_fun<static_cast<Variant(*)(const String &)>(&JSON::parse_string)>("parse_string")
            .fun<static_cast<Error(JSON::*)(const String &,bool)>(&JSON::parse)>("parse")
            .fun<static_cast<String(JSON::*)()const>(&JSON::get_parsed_text)>("get_parsed_text")
            .fun<static_cast<int32_t(JSON::*)()const>(&JSON::get_error_line)>("get_error_line")
            .fun<static_cast<String(JSON::*)()const>(&JSON::get_error_message)>("get_error_message")
;}