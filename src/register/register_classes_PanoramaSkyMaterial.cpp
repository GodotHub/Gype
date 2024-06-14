#include <godot_cpp/classes/material.hpp>
#include <godot_cpp/classes/panorama_sky_material.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_PanoramaSkyMaterial() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<PanoramaSkyMaterial>("PanoramaSkyMaterial")
			.constructor<>()
			.base<Material>()
			.property<static_cast<Ref<Texture2D> (PanoramaSkyMaterial::*)() const>(&PanoramaSkyMaterial::get_panorama), static_cast<void (PanoramaSkyMaterial::*)(const Ref<Texture2D> &)>(&PanoramaSkyMaterial::set_panorama)>((new std::string("panorama"))->c_str())
			.property<static_cast<bool (PanoramaSkyMaterial::*)() const>(&PanoramaSkyMaterial::is_filtering_enabled), static_cast<void (PanoramaSkyMaterial::*)(bool)>(&PanoramaSkyMaterial::set_filtering_enabled)>((new std::string("filter"))->c_str())
			.property<static_cast<double (PanoramaSkyMaterial::*)() const>(&PanoramaSkyMaterial::get_energy_multiplier), static_cast<void (PanoramaSkyMaterial::*)(double)>(&PanoramaSkyMaterial::set_energy_multiplier)>((new std::string("energy_multiplier"))->c_str());
}