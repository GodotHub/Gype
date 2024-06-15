#include <godot_cpp/classes/material.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/shader.hpp>
#include <godot_cpp/variant/rid.hpp>
#include <stdint.h>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_Material() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<Material>("Material")
            .constructor<>()
            .base<Resource>()
            .static_fun<&Material::RENDER_PRIORITY_MAX>("RENDER_PRIORITY_MAX")
            .static_fun<&Material::RENDER_PRIORITY_MIN>("RENDER_PRIORITY_MIN")
            .property<static_cast<int32_t(Material::*)()const>(&Material::get_render_priority),static_cast<void(Material::*)(int32_t)>(&Material::set_render_priority)>("render_priority")
            .property<static_cast<Ref<Material>(Material::*)()const>(&Material::get_next_pass),static_cast<void(Material::*)(const Ref<Material> &)>(&Material::set_next_pass)>("next_pass")
            .fun<static_cast<RID(Material::*)()const>(&Material::_get_shader_rid)>("_get_shader_rid")
            .fun<static_cast<Shader::Mode(Material::*)()const>(&Material::_get_shader_mode)>("_get_shader_mode")
            .fun<static_cast<bool(Material::*)()const>(&Material::_can_do_next_pass)>("_can_do_next_pass")
            .fun<static_cast<bool(Material::*)()const>(&Material::_can_use_render_priority)>("_can_use_render_priority")
            .fun<static_cast<void(Material::*)()>(&Material::inspect_native_shader_code)>("inspect_native_shader_code")
            .fun<static_cast<Ref<Resource>(Material::*)()const>(&Material::create_placeholder)>("create_placeholder")
;}