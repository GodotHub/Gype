#include <godot_cpp/classes/shader_include.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_ShaderInclude() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<ShaderInclude>("ShaderInclude")
			.constructor<>()
			.property<&ShaderInclude::get_code, &ShaderInclude::set_code>("code");
}