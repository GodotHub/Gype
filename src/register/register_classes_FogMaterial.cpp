#include <godot_cpp/classes/fog_material.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/color.hpp>
#include <godot_cpp/classes/material.hpp>
#include <godot_cpp/classes/texture3d.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_FogMaterial() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<FogMaterial>("FogMaterial")
            .constructor<>()
            .base<Material>()
            .property<static_cast<double(FogMaterial::*)()const>(&FogMaterial::get_density),static_cast<void(FogMaterial::*)(double)>(&FogMaterial::set_density)>("density")
            .property<static_cast<Color(FogMaterial::*)()const>(&FogMaterial::get_albedo),static_cast<void(FogMaterial::*)(const Color &)>(&FogMaterial::set_albedo)>("albedo")
            .property<static_cast<Color(FogMaterial::*)()const>(&FogMaterial::get_emission),static_cast<void(FogMaterial::*)(const Color &)>(&FogMaterial::set_emission)>("emission")
            .property<static_cast<double(FogMaterial::*)()const>(&FogMaterial::get_height_falloff),static_cast<void(FogMaterial::*)(double)>(&FogMaterial::set_height_falloff)>("height_falloff")
            .property<static_cast<double(FogMaterial::*)()const>(&FogMaterial::get_edge_fade),static_cast<void(FogMaterial::*)(double)>(&FogMaterial::set_edge_fade)>("edge_fade")
            .property<static_cast<Ref<Texture3D>(FogMaterial::*)()const>(&FogMaterial::get_density_texture),static_cast<void(FogMaterial::*)(const Ref<Texture3D> &)>(&FogMaterial::set_density_texture)>("density_texture")
;}