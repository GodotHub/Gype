#include <godot_cpp/classes/physical_sky_material.hpp>
#include <godot_cpp/classes/texture2d.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_PhysicalSkyMaterial() {
	qjs::Context::Module &_module = _General;
	_module.class_<PhysicalSkyMaterial>("PhysicalSkyMaterial")
			.constructor<>()
			.property<&PhysicalSkyMaterial::get_rayleigh_coefficient, &PhysicalSkyMaterial::set_rayleigh_coefficient>("rayleigh_coefficient")
			.property<&PhysicalSkyMaterial::get_rayleigh_color, &PhysicalSkyMaterial::set_rayleigh_color>("rayleigh_color")
			.property<&PhysicalSkyMaterial::get_mie_coefficient, &PhysicalSkyMaterial::set_mie_coefficient>("mie_coefficient")
			.property<&PhysicalSkyMaterial::get_mie_eccentricity, &PhysicalSkyMaterial::set_mie_eccentricity>("mie_eccentricity")
			.property<&PhysicalSkyMaterial::get_mie_color, &PhysicalSkyMaterial::set_mie_color>("mie_color")
			.property<&PhysicalSkyMaterial::get_turbidity, &PhysicalSkyMaterial::set_turbidity>("turbidity")
			.property<&PhysicalSkyMaterial::get_sun_disk_scale, &PhysicalSkyMaterial::set_sun_disk_scale>("sun_disk_scale")
			.property<&PhysicalSkyMaterial::get_ground_color, &PhysicalSkyMaterial::set_ground_color>("ground_color")
			.property<&PhysicalSkyMaterial::get_energy_multiplier, &PhysicalSkyMaterial::set_energy_multiplier>("energy_multiplier")
			.property<&PhysicalSkyMaterial::get_use_debanding, &PhysicalSkyMaterial::set_use_debanding>("use_debanding")
			.property<&PhysicalSkyMaterial::get_night_sky, &PhysicalSkyMaterial::set_night_sky>("night_sky");
}