#include <godot_cpp/classes/fog_material.hpp>
#include <godot_cpp/classes/texture3d.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_FogMaterial() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<FogMaterial>("FogMaterial")
			.constructor<>()
			.property<&FogMaterial::get_density, &FogMaterial::set_density>("density")
			.property<&FogMaterial::get_albedo, &FogMaterial::set_albedo>("albedo")
			.property<&FogMaterial::get_emission, &FogMaterial::set_emission>("emission")
			.property<&FogMaterial::get_height_falloff, &FogMaterial::set_height_falloff>("height_falloff")
			.property<&FogMaterial::get_edge_fade, &FogMaterial::set_edge_fade>("edge_fade")
			.property<&FogMaterial::get_density_texture, &FogMaterial::set_density_texture>("density_texture");
}