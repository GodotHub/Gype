#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/shader_include.hpp>
#include <godot_cpp/variant/string.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_ShaderInclude() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<ShaderInclude>("ShaderInclude")
			.constructor<>()
			.base<Resource>()
			.property<static_cast<String (ShaderInclude::*)() const>(&ShaderInclude::get_code), static_cast<void (ShaderInclude::*)(const String &)>(&ShaderInclude::set_code)>((new std::string("code"))->c_str());
}