#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/shader_material.hpp>

using namespace godot;

void register_classes_ShaderMaterial() {
    qjs::Context::Module &_module = _General;
    _module.class_<ShaderMaterial>("ShaderMaterial")
           .constructor<>()
           .property<ShaderMaterial::get_shader, ShaderMaterial::set_shader>("shader")
		    .fun<static_cast<void(ShaderMaterial::*)(const StringName &,const Variant &)>(&ShaderMaterial::set_shader_parameter)>("set_shader_parameter")
		    .fun<static_cast<Variant(ShaderMaterial::*)(const StringName &)const>(&ShaderMaterial::get_shader_parameter)>("get_shader_parameter")
;}