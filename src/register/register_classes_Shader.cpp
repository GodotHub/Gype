#include <godot_cpp/classes/shader.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/variant/array.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <stdint.h>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_Shader() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<Shader>("Shader")
            .constructor<>()
            .base<Resource>()
            .property<static_cast<String(Shader::*)()const>(&Shader::get_code),static_cast<void(Shader::*)(const String &)>(&Shader::set_code)>("code")
            .fun<static_cast<Shader::Mode(Shader::*)()const>(&Shader::get_mode)>("get_mode")
            .fun<static_cast<void(Shader::*)(const StringName &,const Ref<Texture2D> &,int32_t)>(&Shader::set_default_texture_parameter)>("set_default_texture_parameter")
            .fun<static_cast<Ref<Texture2D>(Shader::*)(const StringName &,int32_t)const>(&Shader::get_default_texture_parameter)>("get_default_texture_parameter")
            .fun<static_cast<Array(Shader::*)(bool)>(&Shader::get_shader_uniform_list)>("get_shader_uniform_list")
;    qjs::Value _Mode = context->newObject();
    _Mode["MODE_SPATIAL"] = Shader::Mode::MODE_SPATIAL;
    _Mode["MODE_CANVAS_ITEM"] = Shader::Mode::MODE_CANVAS_ITEM;
    _Mode["MODE_PARTICLES"] = Shader::Mode::MODE_PARTICLES;
    _Mode["MODE_SKY"] = Shader::Mode::MODE_SKY;
    _Mode["MODE_FOG"] = Shader::Mode::MODE_FOG;
    _module.add("Mode", std::move(_Mode));
}