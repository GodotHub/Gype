#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/json.hpp>

using namespace godot;

void register_classes_JSON() {
    qjs::Context::Module &_module = _General;
    _module.class_<JSON>("JSON")
           .constructor<>()
           .property<JSON::get_data, JSON::set_data>("data")
            .static_fun<JSON::stringify>("stringify")
            .static_fun<JSON::parse_string>("parse_string")
		    .fun<static_cast<Error(JSON::*)(const String &,bool)>(&JSON::parse)>("parse")
		    .fun<static_cast<String(JSON::*)()const>(&JSON::get_parsed_text)>("get_parsed_text")
		    .fun<static_cast<int32_t(JSON::*)()const>(&JSON::get_error_line)>("get_error_line")
		    .fun<static_cast<String(JSON::*)()const>(&JSON::get_error_message)>("get_error_message")
;}