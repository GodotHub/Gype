#include <godot_cpp/classes/material.hpp>
#include <godot_cpp/classes/physical_sky_material.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/variant/color.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_PhysicalSkyMaterial() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<PhysicalSkyMaterial>("PhysicalSkyMaterial")
			.constructor<>()
			.base<Material>()
			.property<static_cast<double (PhysicalSkyMaterial::*)() const>(&PhysicalSkyMaterial::get_rayleigh_coefficient), static_cast<void (PhysicalSkyMaterial::*)(double)>(&PhysicalSkyMaterial::set_rayleigh_coefficient)>((new std::string("rayleigh_coefficient"))->c_str())
			.property<static_cast<Color (PhysicalSkyMaterial::*)() const>(&PhysicalSkyMaterial::get_rayleigh_color), static_cast<void (PhysicalSkyMaterial::*)(const Color &)>(&PhysicalSkyMaterial::set_rayleigh_color)>((new std::string("rayleigh_color"))->c_str())
			.property<static_cast<double (PhysicalSkyMaterial::*)() const>(&PhysicalSkyMaterial::get_mie_coefficient), static_cast<void (PhysicalSkyMaterial::*)(double)>(&PhysicalSkyMaterial::set_mie_coefficient)>((new std::string("mie_coefficient"))->c_str())
			.property<static_cast<double (PhysicalSkyMaterial::*)() const>(&PhysicalSkyMaterial::get_mie_eccentricity), static_cast<void (PhysicalSkyMaterial::*)(double)>(&PhysicalSkyMaterial::set_mie_eccentricity)>((new std::string("mie_eccentricity"))->c_str())
			.property<static_cast<Color (PhysicalSkyMaterial::*)() const>(&PhysicalSkyMaterial::get_mie_color), static_cast<void (PhysicalSkyMaterial::*)(const Color &)>(&PhysicalSkyMaterial::set_mie_color)>((new std::string("mie_color"))->c_str())
			.property<static_cast<double (PhysicalSkyMaterial::*)() const>(&PhysicalSkyMaterial::get_turbidity), static_cast<void (PhysicalSkyMaterial::*)(double)>(&PhysicalSkyMaterial::set_turbidity)>((new std::string("turbidity"))->c_str())
			.property<static_cast<double (PhysicalSkyMaterial::*)() const>(&PhysicalSkyMaterial::get_sun_disk_scale), static_cast<void (PhysicalSkyMaterial::*)(double)>(&PhysicalSkyMaterial::set_sun_disk_scale)>((new std::string("sun_disk_scale"))->c_str())
			.property<static_cast<Color (PhysicalSkyMaterial::*)() const>(&PhysicalSkyMaterial::get_ground_color), static_cast<void (PhysicalSkyMaterial::*)(const Color &)>(&PhysicalSkyMaterial::set_ground_color)>((new std::string("ground_color"))->c_str())
			.property<static_cast<double (PhysicalSkyMaterial::*)() const>(&PhysicalSkyMaterial::get_energy_multiplier), static_cast<void (PhysicalSkyMaterial::*)(double)>(&PhysicalSkyMaterial::set_energy_multiplier)>((new std::string("energy_multiplier"))->c_str())
			.property<static_cast<bool (PhysicalSkyMaterial::*)() const>(&PhysicalSkyMaterial::get_use_debanding), static_cast<void (PhysicalSkyMaterial::*)(bool)>(&PhysicalSkyMaterial::set_use_debanding)>((new std::string("use_debanding"))->c_str())
			.property<static_cast<Ref<Texture2D> (PhysicalSkyMaterial::*)() const>(&PhysicalSkyMaterial::get_night_sky), static_cast<void (PhysicalSkyMaterial::*)(const Ref<Texture2D> &)>(&PhysicalSkyMaterial::set_night_sky)>((new std::string("night_sky"))->c_str());
}