#include <godot_cpp/classes/material.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/shader.hpp>
#include <godot_cpp/classes/shader_material.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <godot_cpp/variant/variant.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_ShaderMaterial() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<ShaderMaterial>("ShaderMaterial")
			.constructor<>()
			.base<Material>()
			.property<static_cast<Ref<Shader> (ShaderMaterial::*)() const>(&ShaderMaterial::get_shader), static_cast<void (ShaderMaterial::*)(const Ref<Shader> &)>(&ShaderMaterial::set_shader)>((new std::string("shader"))->c_str())
			.fun<static_cast<void (ShaderMaterial::*)(const StringName &, const Variant &)>(&ShaderMaterial::set_shader_parameter)>((new std::string("set_shader_parameter"))->c_str())
			.fun<static_cast<Variant (ShaderMaterial::*)(const StringName &) const>(&ShaderMaterial::get_shader_parameter)>((new std::string("get_shader_parameter"))->c_str());
}