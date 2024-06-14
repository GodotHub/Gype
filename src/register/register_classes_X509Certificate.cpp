#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/x509_certificate.hpp>
#include <godot_cpp/variant/string.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_X509Certificate() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<X509Certificate>("X509Certificate")
			.constructor<>()
			.base<Resource>()
			.fun<static_cast<Error (X509Certificate::*)(const String &)>(&X509Certificate::save)>((new std::string("save"))->c_str())
			.fun<static_cast<Error (X509Certificate::*)(const String &)>(&X509Certificate::load)>((new std::string("load"))->c_str())
			.fun<static_cast<String (X509Certificate::*)()>(&X509Certificate::save_to_string)>((new std::string("save_to_string"))->c_str())
			.fun<static_cast<Error (X509Certificate::*)(const String &)>(&X509Certificate::load_from_string)>((new std::string("load_from_string"))->c_str());
}