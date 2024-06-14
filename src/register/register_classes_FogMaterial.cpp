#include <godot_cpp/classes/fog_material.hpp>
#include <godot_cpp/classes/material.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/texture3d.hpp>
#include <godot_cpp/variant/color.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_FogMaterial() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<FogMaterial>("FogMaterial")
			.constructor<>()
			.base<Material>()
			.property<static_cast<double (FogMaterial::*)() const>(&FogMaterial::get_density), static_cast<void (FogMaterial::*)(double)>(&FogMaterial::set_density)>((new std::string("density"))->c_str())
			.property<static_cast<Color (FogMaterial::*)() const>(&FogMaterial::get_albedo), static_cast<void (FogMaterial::*)(const Color &)>(&FogMaterial::set_albedo)>((new std::string("albedo"))->c_str())
			.property<static_cast<Color (FogMaterial::*)() const>(&FogMaterial::get_emission), static_cast<void (FogMaterial::*)(const Color &)>(&FogMaterial::set_emission)>((new std::string("emission"))->c_str())
			.property<static_cast<double (FogMaterial::*)() const>(&FogMaterial::get_height_falloff), static_cast<void (FogMaterial::*)(double)>(&FogMaterial::set_height_falloff)>((new std::string("height_falloff"))->c_str())
			.property<static_cast<double (FogMaterial::*)() const>(&FogMaterial::get_edge_fade), static_cast<void (FogMaterial::*)(double)>(&FogMaterial::set_edge_fade)>((new std::string("edge_fade"))->c_str())
			.property<static_cast<Ref<Texture3D> (FogMaterial::*)() const>(&FogMaterial::get_density_texture), static_cast<void (FogMaterial::*)(const Ref<Texture3D> &)>(&FogMaterial::set_density_texture)>((new std::string("density_texture"))->c_str());
}