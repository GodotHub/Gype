#include <godot_cpp/classes/procedural_sky_material.hpp>
#include <godot_cpp/classes/texture2d.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_ProceduralSkyMaterial() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<ProceduralSkyMaterial>("ProceduralSkyMaterial")
			.constructor<>()
			.property<&ProceduralSkyMaterial::get_sky_top_color, &ProceduralSkyMaterial::set_sky_top_color>("sky_top_color")
			.property<&ProceduralSkyMaterial::get_sky_horizon_color, &ProceduralSkyMaterial::set_sky_horizon_color>("sky_horizon_color")
			.property<&ProceduralSkyMaterial::get_sky_curve, &ProceduralSkyMaterial::set_sky_curve>("sky_curve")
			.property<&ProceduralSkyMaterial::get_sky_energy_multiplier, &ProceduralSkyMaterial::set_sky_energy_multiplier>("sky_energy_multiplier")
			.property<&ProceduralSkyMaterial::get_sky_cover, &ProceduralSkyMaterial::set_sky_cover>("sky_cover")
			.property<&ProceduralSkyMaterial::get_sky_cover_modulate, &ProceduralSkyMaterial::set_sky_cover_modulate>("sky_cover_modulate")
			.property<&ProceduralSkyMaterial::get_ground_bottom_color, &ProceduralSkyMaterial::set_ground_bottom_color>("ground_bottom_color")
			.property<&ProceduralSkyMaterial::get_ground_horizon_color, &ProceduralSkyMaterial::set_ground_horizon_color>("ground_horizon_color")
			.property<&ProceduralSkyMaterial::get_ground_curve, &ProceduralSkyMaterial::set_ground_curve>("ground_curve")
			.property<&ProceduralSkyMaterial::get_ground_energy_multiplier, &ProceduralSkyMaterial::set_ground_energy_multiplier>("ground_energy_multiplier")
			.property<&ProceduralSkyMaterial::get_sun_angle_max, &ProceduralSkyMaterial::set_sun_angle_max>("sun_angle_max")
			.property<&ProceduralSkyMaterial::get_sun_curve, &ProceduralSkyMaterial::set_sun_curve>("sun_curve")
			.property<&ProceduralSkyMaterial::get_use_debanding, &ProceduralSkyMaterial::set_use_debanding>("use_debanding");
}