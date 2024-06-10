#include <godot_cpp/classes/shader_material.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <godot_cpp/variant/variant.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_ShaderMaterial() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<ShaderMaterial>("ShaderMaterial")
			.constructor<>()
			.property<&ShaderMaterial::get_shader, &ShaderMaterial::set_shader>("shader")
			.fun<static_cast<void (ShaderMaterial::*)(const StringName &, const Variant &)>(&ShaderMaterial::set_shader_parameter)>("set_shader_parameter")
			.fun<static_cast<Variant (ShaderMaterial::*)(const StringName &) const>(&ShaderMaterial::get_shader_parameter)>("get_shader_parameter");
}