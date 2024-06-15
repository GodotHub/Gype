#include <godot_cpp/classes/gradient.hpp>
#include <godot_cpp/variant/color.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/variant/packed_color_array.hpp>
#include <godot_cpp/variant/packed_float32_array.hpp>
#include <stdint.h>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_Gradient() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<Gradient>("Gradient")
            .constructor<>()
            .base<Resource>()
            .property<static_cast<Gradient::InterpolationMode(Gradient::*)()>(&Gradient::get_interpolation_mode),static_cast<void(Gradient::*)(Gradient::InterpolationMode)>(&Gradient::set_interpolation_mode)>("interpolation_mode")
            .property<static_cast<Gradient::ColorSpace(Gradient::*)()>(&Gradient::get_interpolation_color_space),static_cast<void(Gradient::*)(Gradient::ColorSpace)>(&Gradient::set_interpolation_color_space)>("interpolation_color_space")
            .property<static_cast<PackedFloat32Array(Gradient::*)()const>(&Gradient::get_offsets),static_cast<void(Gradient::*)(const PackedFloat32Array &)>(&Gradient::set_offsets)>("offsets")
            .property<static_cast<PackedColorArray(Gradient::*)()const>(&Gradient::get_colors),static_cast<void(Gradient::*)(const PackedColorArray &)>(&Gradient::set_colors)>("colors")
            .fun<static_cast<void(Gradient::*)(double,const Color &)>(&Gradient::add_point)>("add_point")
            .fun<static_cast<void(Gradient::*)(int32_t)>(&Gradient::remove_point)>("remove_point")
            .fun<static_cast<void(Gradient::*)(int32_t,double)>(&Gradient::set_offset)>("set_offset")
            .fun<static_cast<double(Gradient::*)(int32_t)>(&Gradient::get_offset)>("get_offset")
            .fun<static_cast<void(Gradient::*)()>(&Gradient::reverse)>("reverse")
            .fun<static_cast<void(Gradient::*)(int32_t,const Color &)>(&Gradient::set_color)>("set_color")
            .fun<static_cast<Color(Gradient::*)(int32_t)>(&Gradient::get_color)>("get_color")
            .fun<static_cast<Color(Gradient::*)(double)>(&Gradient::sample)>("sample")
            .fun<static_cast<int32_t(Gradient::*)()const>(&Gradient::get_point_count)>("get_point_count")
;    qjs::Value _InterpolationMode = context->newObject();
    _InterpolationMode["GRADIENT_INTERPOLATE_LINEAR"] = Gradient::InterpolationMode::GRADIENT_INTERPOLATE_LINEAR;
    _InterpolationMode["GRADIENT_INTERPOLATE_CONSTANT"] = Gradient::InterpolationMode::GRADIENT_INTERPOLATE_CONSTANT;
    _InterpolationMode["GRADIENT_INTERPOLATE_CUBIC"] = Gradient::InterpolationMode::GRADIENT_INTERPOLATE_CUBIC;
    _module.add("InterpolationMode", std::move(_InterpolationMode));
    qjs::Value _ColorSpace = context->newObject();
    _ColorSpace["GRADIENT_COLOR_SPACE_SRGB"] = Gradient::ColorSpace::GRADIENT_COLOR_SPACE_SRGB;
    _ColorSpace["GRADIENT_COLOR_SPACE_LINEAR_SRGB"] = Gradient::ColorSpace::GRADIENT_COLOR_SPACE_LINEAR_SRGB;
    _ColorSpace["GRADIENT_COLOR_SPACE_OKLAB"] = Gradient::ColorSpace::GRADIENT_COLOR_SPACE_OKLAB;
    _module.add("ColorSpace", std::move(_ColorSpace));
}