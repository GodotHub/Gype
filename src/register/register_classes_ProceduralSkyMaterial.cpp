#include <godot_cpp/classes/procedural_sky_material.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/color.hpp>
#include <godot_cpp/classes/material.hpp>
#include <godot_cpp/classes/texture2d.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_ProceduralSkyMaterial() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<ProceduralSkyMaterial>("ProceduralSkyMaterial")
            .constructor<>()
            .base<Material>()
            .property<static_cast<Color(ProceduralSkyMaterial::*)()const>(&ProceduralSkyMaterial::get_sky_top_color),static_cast<void(ProceduralSkyMaterial::*)(const Color &)>(&ProceduralSkyMaterial::set_sky_top_color)>("sky_top_color")
            .property<static_cast<Color(ProceduralSkyMaterial::*)()const>(&ProceduralSkyMaterial::get_sky_horizon_color),static_cast<void(ProceduralSkyMaterial::*)(const Color &)>(&ProceduralSkyMaterial::set_sky_horizon_color)>("sky_horizon_color")
            .property<static_cast<double(ProceduralSkyMaterial::*)()const>(&ProceduralSkyMaterial::get_sky_curve),static_cast<void(ProceduralSkyMaterial::*)(double)>(&ProceduralSkyMaterial::set_sky_curve)>("sky_curve")
            .property<static_cast<double(ProceduralSkyMaterial::*)()const>(&ProceduralSkyMaterial::get_sky_energy_multiplier),static_cast<void(ProceduralSkyMaterial::*)(double)>(&ProceduralSkyMaterial::set_sky_energy_multiplier)>("sky_energy_multiplier")
            .property<static_cast<Ref<Texture2D>(ProceduralSkyMaterial::*)()const>(&ProceduralSkyMaterial::get_sky_cover),static_cast<void(ProceduralSkyMaterial::*)(const Ref<Texture2D> &)>(&ProceduralSkyMaterial::set_sky_cover)>("sky_cover")
            .property<static_cast<Color(ProceduralSkyMaterial::*)()const>(&ProceduralSkyMaterial::get_sky_cover_modulate),static_cast<void(ProceduralSkyMaterial::*)(const Color &)>(&ProceduralSkyMaterial::set_sky_cover_modulate)>("sky_cover_modulate")
            .property<static_cast<Color(ProceduralSkyMaterial::*)()const>(&ProceduralSkyMaterial::get_ground_bottom_color),static_cast<void(ProceduralSkyMaterial::*)(const Color &)>(&ProceduralSkyMaterial::set_ground_bottom_color)>("ground_bottom_color")
            .property<static_cast<Color(ProceduralSkyMaterial::*)()const>(&ProceduralSkyMaterial::get_ground_horizon_color),static_cast<void(ProceduralSkyMaterial::*)(const Color &)>(&ProceduralSkyMaterial::set_ground_horizon_color)>("ground_horizon_color")
            .property<static_cast<double(ProceduralSkyMaterial::*)()const>(&ProceduralSkyMaterial::get_ground_curve),static_cast<void(ProceduralSkyMaterial::*)(double)>(&ProceduralSkyMaterial::set_ground_curve)>("ground_curve")
            .property<static_cast<double(ProceduralSkyMaterial::*)()const>(&ProceduralSkyMaterial::get_ground_energy_multiplier),static_cast<void(ProceduralSkyMaterial::*)(double)>(&ProceduralSkyMaterial::set_ground_energy_multiplier)>("ground_energy_multiplier")
            .property<static_cast<double(ProceduralSkyMaterial::*)()const>(&ProceduralSkyMaterial::get_sun_angle_max),static_cast<void(ProceduralSkyMaterial::*)(double)>(&ProceduralSkyMaterial::set_sun_angle_max)>("sun_angle_max")
            .property<static_cast<double(ProceduralSkyMaterial::*)()const>(&ProceduralSkyMaterial::get_sun_curve),static_cast<void(ProceduralSkyMaterial::*)(double)>(&ProceduralSkyMaterial::set_sun_curve)>("sun_curve")
            .property<static_cast<bool(ProceduralSkyMaterial::*)()const>(&ProceduralSkyMaterial::get_use_debanding),static_cast<void(ProceduralSkyMaterial::*)(bool)>(&ProceduralSkyMaterial::set_use_debanding)>("use_debanding")
            .property<static_cast<double(ProceduralSkyMaterial::*)()const>(&ProceduralSkyMaterial::get_energy_multiplier),static_cast<void(ProceduralSkyMaterial::*)(double)>(&ProceduralSkyMaterial::set_energy_multiplier)>("energy_multiplier")
;}