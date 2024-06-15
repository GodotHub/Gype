#include <godot_cpp/classes/physical_sky_material.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/color.hpp>
#include <godot_cpp/classes/material.hpp>
#include <godot_cpp/classes/texture2d.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_PhysicalSkyMaterial() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<PhysicalSkyMaterial>("PhysicalSkyMaterial")
            .constructor<>()
            .base<Material>()
            .property<static_cast<double(PhysicalSkyMaterial::*)()const>(&PhysicalSkyMaterial::get_rayleigh_coefficient),static_cast<void(PhysicalSkyMaterial::*)(double)>(&PhysicalSkyMaterial::set_rayleigh_coefficient)>("rayleigh_coefficient")
            .property<static_cast<Color(PhysicalSkyMaterial::*)()const>(&PhysicalSkyMaterial::get_rayleigh_color),static_cast<void(PhysicalSkyMaterial::*)(const Color &)>(&PhysicalSkyMaterial::set_rayleigh_color)>("rayleigh_color")
            .property<static_cast<double(PhysicalSkyMaterial::*)()const>(&PhysicalSkyMaterial::get_mie_coefficient),static_cast<void(PhysicalSkyMaterial::*)(double)>(&PhysicalSkyMaterial::set_mie_coefficient)>("mie_coefficient")
            .property<static_cast<double(PhysicalSkyMaterial::*)()const>(&PhysicalSkyMaterial::get_mie_eccentricity),static_cast<void(PhysicalSkyMaterial::*)(double)>(&PhysicalSkyMaterial::set_mie_eccentricity)>("mie_eccentricity")
            .property<static_cast<Color(PhysicalSkyMaterial::*)()const>(&PhysicalSkyMaterial::get_mie_color),static_cast<void(PhysicalSkyMaterial::*)(const Color &)>(&PhysicalSkyMaterial::set_mie_color)>("mie_color")
            .property<static_cast<double(PhysicalSkyMaterial::*)()const>(&PhysicalSkyMaterial::get_turbidity),static_cast<void(PhysicalSkyMaterial::*)(double)>(&PhysicalSkyMaterial::set_turbidity)>("turbidity")
            .property<static_cast<double(PhysicalSkyMaterial::*)()const>(&PhysicalSkyMaterial::get_sun_disk_scale),static_cast<void(PhysicalSkyMaterial::*)(double)>(&PhysicalSkyMaterial::set_sun_disk_scale)>("sun_disk_scale")
            .property<static_cast<Color(PhysicalSkyMaterial::*)()const>(&PhysicalSkyMaterial::get_ground_color),static_cast<void(PhysicalSkyMaterial::*)(const Color &)>(&PhysicalSkyMaterial::set_ground_color)>("ground_color")
            .property<static_cast<double(PhysicalSkyMaterial::*)()const>(&PhysicalSkyMaterial::get_energy_multiplier),static_cast<void(PhysicalSkyMaterial::*)(double)>(&PhysicalSkyMaterial::set_energy_multiplier)>("energy_multiplier")
            .property<static_cast<bool(PhysicalSkyMaterial::*)()const>(&PhysicalSkyMaterial::get_use_debanding),static_cast<void(PhysicalSkyMaterial::*)(bool)>(&PhysicalSkyMaterial::set_use_debanding)>("use_debanding")
            .property<static_cast<Ref<Texture2D>(PhysicalSkyMaterial::*)()const>(&PhysicalSkyMaterial::get_night_sky),static_cast<void(PhysicalSkyMaterial::*)(const Ref<Texture2D> &)>(&PhysicalSkyMaterial::set_night_sky)>("night_sky")
;}