
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/json.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/variant.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_JSON() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<JSON>("JSON")
			.constructor<>()
			.base<Resource>()
			.property<static_cast<Variant (JSON::*)() const>(&JSON::get_data), static_cast<void (JSON::*)(const Variant &)>(&JSON::set_data)>((new std::string("data"))->c_str())
			.static_fun<static_cast<String (*)(const Variant &, const String &, bool, bool)>(&JSON::stringify)>((new std::string("stringify"))->c_str())
			.static_fun<static_cast<Variant (*)(const String &)>(&JSON::parse_string)>((new std::string("parse_string"))->c_str())
			.fun<static_cast<Error (JSON::*)(const String &, bool)>(&JSON::parse)>((new std::string("parse"))->c_str())
			.fun<static_cast<String (JSON::*)() const>(&JSON::get_parsed_text)>((new std::string("get_parsed_text"))->c_str())
			.fun<static_cast<int32_t (JSON::*)() const>(&JSON::get_error_line)>((new std::string("get_error_line"))->c_str())
			.fun<static_cast<String (JSON::*)() const>(&JSON::get_error_message)>((new std::string("get_error_message"))->c_str());
}