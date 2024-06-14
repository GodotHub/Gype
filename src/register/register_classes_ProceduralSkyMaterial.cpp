#include <godot_cpp/classes/material.hpp>
#include <godot_cpp/classes/procedural_sky_material.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/variant/color.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_ProceduralSkyMaterial() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<ProceduralSkyMaterial>("ProceduralSkyMaterial")
			.constructor<>()
			.base<Material>()
			.property<static_cast<Color (ProceduralSkyMaterial::*)() const>(&ProceduralSkyMaterial::get_sky_top_color), static_cast<void (ProceduralSkyMaterial::*)(const Color &)>(&ProceduralSkyMaterial::set_sky_top_color)>((new std::string("sky_top_color"))->c_str())
			.property<static_cast<Color (ProceduralSkyMaterial::*)() const>(&ProceduralSkyMaterial::get_sky_horizon_color), static_cast<void (ProceduralSkyMaterial::*)(const Color &)>(&ProceduralSkyMaterial::set_sky_horizon_color)>((new std::string("sky_horizon_color"))->c_str())
			.property<static_cast<double (ProceduralSkyMaterial::*)() const>(&ProceduralSkyMaterial::get_sky_curve), static_cast<void (ProceduralSkyMaterial::*)(double)>(&ProceduralSkyMaterial::set_sky_curve)>((new std::string("sky_curve"))->c_str())
			.property<static_cast<double (ProceduralSkyMaterial::*)() const>(&ProceduralSkyMaterial::get_sky_energy_multiplier), static_cast<void (ProceduralSkyMaterial::*)(double)>(&ProceduralSkyMaterial::set_sky_energy_multiplier)>((new std::string("sky_energy_multiplier"))->c_str())
			.property<static_cast<Ref<Texture2D> (ProceduralSkyMaterial::*)() const>(&ProceduralSkyMaterial::get_sky_cover), static_cast<void (ProceduralSkyMaterial::*)(const Ref<Texture2D> &)>(&ProceduralSkyMaterial::set_sky_cover)>((new std::string("sky_cover"))->c_str())
			.property<static_cast<Color (ProceduralSkyMaterial::*)() const>(&ProceduralSkyMaterial::get_sky_cover_modulate), static_cast<void (ProceduralSkyMaterial::*)(const Color &)>(&ProceduralSkyMaterial::set_sky_cover_modulate)>((new std::string("sky_cover_modulate"))->c_str())
			.property<static_cast<Color (ProceduralSkyMaterial::*)() const>(&ProceduralSkyMaterial::get_ground_bottom_color), static_cast<void (ProceduralSkyMaterial::*)(const Color &)>(&ProceduralSkyMaterial::set_ground_bottom_color)>((new std::string("ground_bottom_color"))->c_str())
			.property<static_cast<Color (ProceduralSkyMaterial::*)() const>(&ProceduralSkyMaterial::get_ground_horizon_color), static_cast<void (ProceduralSkyMaterial::*)(const Color &)>(&ProceduralSkyMaterial::set_ground_horizon_color)>((new std::string("ground_horizon_color"))->c_str())
			.property<static_cast<double (ProceduralSkyMaterial::*)() const>(&ProceduralSkyMaterial::get_ground_curve), static_cast<void (ProceduralSkyMaterial::*)(double)>(&ProceduralSkyMaterial::set_ground_curve)>((new std::string("ground_curve"))->c_str())
			.property<static_cast<double (ProceduralSkyMaterial::*)() const>(&ProceduralSkyMaterial::get_ground_energy_multiplier), static_cast<void (ProceduralSkyMaterial::*)(double)>(&ProceduralSkyMaterial::set_ground_energy_multiplier)>((new std::string("ground_energy_multiplier"))->c_str())
			.property<static_cast<double (ProceduralSkyMaterial::*)() const>(&ProceduralSkyMaterial::get_sun_angle_max), static_cast<void (ProceduralSkyMaterial::*)(double)>(&ProceduralSkyMaterial::set_sun_angle_max)>((new std::string("sun_angle_max"))->c_str())
			.property<static_cast<double (ProceduralSkyMaterial::*)() const>(&ProceduralSkyMaterial::get_sun_curve), static_cast<void (ProceduralSkyMaterial::*)(double)>(&ProceduralSkyMaterial::set_sun_curve)>((new std::string("sun_curve"))->c_str())
			.property<static_cast<bool (ProceduralSkyMaterial::*)() const>(&ProceduralSkyMaterial::get_use_debanding), static_cast<void (ProceduralSkyMaterial::*)(bool)>(&ProceduralSkyMaterial::set_use_debanding)>((new std::string("use_debanding"))->c_str())
			.property<static_cast<double (ProceduralSkyMaterial::*)() const>(&ProceduralSkyMaterial::get_energy_multiplier), static_cast<void (ProceduralSkyMaterial::*)(double)>(&ProceduralSkyMaterial::set_energy_multiplier)>((new std::string("energy_multiplier"))->c_str());
}