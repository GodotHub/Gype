
#include <godot_cpp/classes/material.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/shader.hpp>
#include <godot_cpp/variant/rid.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_Material() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<Material>("Material")
			.constructor<>()
			.base<Resource>()
			.static_fun<&Material::RENDER_PRIORITY_MAX>((new std::string("RENDER_PRIORITY_MAX"))->c_str())
			.static_fun<&Material::RENDER_PRIORITY_MIN>((new std::string("RENDER_PRIORITY_MIN"))->c_str())
			.property<static_cast<int32_t (Material::*)() const>(&Material::get_render_priority), static_cast<void (Material::*)(int32_t)>(&Material::set_render_priority)>((new std::string("render_priority"))->c_str())
			.property<static_cast<Ref<Material> (Material::*)() const>(&Material::get_next_pass), static_cast<void (Material::*)(const Ref<Material> &)>(&Material::set_next_pass)>((new std::string("next_pass"))->c_str())
			.fun<static_cast<RID (Material::*)() const>(&Material::_get_shader_rid)>((new std::string("_get_shader_rid"))->c_str())
			.fun<static_cast<Shader::Mode (Material::*)() const>(&Material::_get_shader_mode)>((new std::string("_get_shader_mode"))->c_str())
			.fun<static_cast<bool (Material::*)() const>(&Material::_can_do_next_pass)>((new std::string("_can_do_next_pass"))->c_str())
			.fun<static_cast<bool (Material::*)() const>(&Material::_can_use_render_priority)>((new std::string("_can_use_render_priority"))->c_str())
			.fun<static_cast<void (Material::*)()>(&Material::inspect_native_shader_code)>((new std::string("inspect_native_shader_code"))->c_str())
			.fun<static_cast<Ref<Resource> (Material::*)() const>(&Material::create_placeholder)>((new std::string("create_placeholder"))->c_str());
}