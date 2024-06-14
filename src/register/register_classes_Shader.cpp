
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/shader.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/variant/array.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_Shader() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<Shader>("Shader")
			.constructor<>()
			.base<Resource>()
			.property<static_cast<String (Shader::*)() const>(&Shader::get_code), static_cast<void (Shader::*)(const String &)>(&Shader::set_code)>((new std::string("code"))->c_str())
			.fun<static_cast<Shader::Mode (Shader::*)() const>(&Shader::get_mode)>((new std::string("get_mode"))->c_str())
			.fun<static_cast<void (Shader::*)(const StringName &, const Ref<Texture2D> &, int32_t)>(&Shader::set_default_texture_parameter)>((new std::string("set_default_texture_parameter"))->c_str())
			.fun<static_cast<Ref<Texture2D> (Shader::*)(const StringName &, int32_t) const>(&Shader::get_default_texture_parameter)>((new std::string("get_default_texture_parameter"))->c_str())
			.fun<static_cast<Array (Shader::*)(bool)>(&Shader::get_shader_uniform_list)>((new std::string("get_shader_uniform_list"))->c_str());
	qjs::Value _Mode = context->newObject();
	_Mode[(new std::string("MODE_SPATIAL"))->c_str()] = Shader::Mode::MODE_SPATIAL;
	_Mode[(new std::string("MODE_CANVAS_ITEM"))->c_str()] = Shader::Mode::MODE_CANVAS_ITEM;
	_Mode[(new std::string("MODE_PARTICLES"))->c_str()] = Shader::Mode::MODE_PARTICLES;
	_Mode[(new std::string("MODE_SKY"))->c_str()] = Shader::Mode::MODE_SKY;
	_Mode[(new std::string("MODE_FOG"))->c_str()] = Shader::Mode::MODE_FOG;
	_module.add("Mode", std::move(_Mode));
}