#include <godot_cpp/classes/gradient.hpp>
#include <godot_cpp/variant/color.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_Gradient() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<Gradient>("Gradient")
			.constructor<>()
			.property<&Gradient::get_interpolation_mode, &Gradient::set_interpolation_mode>("interpolation_mode")
			.property<&Gradient::get_interpolation_color_space, &Gradient::set_interpolation_color_space>("interpolation_color_space")
			.property<&Gradient::get_offsets, &Gradient::set_offsets>("offsets")
			.property<&Gradient::get_colors, &Gradient::set_colors>("colors")
			.fun<static_cast<void (Gradient::*)(double, const Color &)>(&Gradient::add_point)>("add_point")
			.fun<static_cast<void (Gradient::*)(int32_t)>(&Gradient::remove_point)>("remove_point")
			.fun<static_cast<void (Gradient::*)(int32_t, double)>(&Gradient::set_offset)>("set_offset")
			.fun<static_cast<double (Gradient::*)(int32_t)>(&Gradient::get_offset)>("get_offset")
			.fun<static_cast<void (Gradient::*)()>(&Gradient::reverse)>("reverse")
			.fun<static_cast<void (Gradient::*)(int32_t, const Color &)>(&Gradient::set_color)>("set_color")
			.fun<static_cast<Color (Gradient::*)(int32_t)>(&Gradient::get_color)>("get_color")
			.fun<static_cast<Color (Gradient::*)(double)>(&Gradient::sample)>("sample")
			.fun<static_cast<int32_t (Gradient::*)() const>(&Gradient::get_point_count)>("get_point_count");
}