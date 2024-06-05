#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/shader.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/variant/array.hpp>
#include <godot_cpp/variant/string_name.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_Shader() {
	qjs::Context::Module &_module = _General;
	_module.class_<Shader>("Shader")
			.constructor<>()
			.property<&Shader::get_code, &Shader::set_code>("code")
			.fun<static_cast<Shader::Mode (Shader::*)() const>(&Shader::get_mode)>("get_mode")
			.fun<static_cast<void (Shader::*)(const StringName &, const Ref<Texture2D> &, int32_t)>(&Shader::set_default_texture_parameter)>("set_default_texture_parameter")
			.fun<static_cast<Ref<Texture2D> (Shader::*)(const StringName &, int32_t) const>(&Shader::get_default_texture_parameter)>("get_default_texture_parameter")
			.fun<static_cast<Array (Shader::*)(bool)>(&Shader::get_shader_uniform_list)>("get_shader_uniform_list");
}