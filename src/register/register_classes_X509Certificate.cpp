#include <godot_cpp/classes/x509_certificate.hpp>
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/variant/string.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_X509Certificate() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<X509Certificate>("X509Certificate")
            .constructor<>()
            .base<Resource>()
            .fun<static_cast<Error(X509Certificate::*)(const String &)>(&X509Certificate::save)>("save")
            .fun<static_cast<Error(X509Certificate::*)(const String &)>(&X509Certificate::load)>("load")
            .fun<static_cast<String(X509Certificate::*)()>(&X509Certificate::save_to_string)>("save_to_string")
            .fun<static_cast<Error(X509Certificate::*)(const String &)>(&X509Certificate::load_from_string)>("load_from_string")
;}