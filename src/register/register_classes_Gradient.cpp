
#include <godot_cpp/classes/gradient.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/variant/color.hpp>
#include <godot_cpp/variant/packed_color_array.hpp>
#include <godot_cpp/variant/packed_float32_array.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_Gradient() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<Gradient>("Gradient")
			.constructor<>()
			.base<Resource>()
			.property<static_cast<Gradient::InterpolationMode (Gradient::*)()>(&Gradient::get_interpolation_mode), static_cast<void (Gradient::*)(Gradient::InterpolationMode)>(&Gradient::set_interpolation_mode)>((new std::string("interpolation_mode"))->c_str())
			.property<static_cast<Gradient::ColorSpace (Gradient::*)()>(&Gradient::get_interpolation_color_space), static_cast<void (Gradient::*)(Gradient::ColorSpace)>(&Gradient::set_interpolation_color_space)>((new std::string("interpolation_color_space"))->c_str())
			.property<static_cast<PackedFloat32Array (Gradient::*)() const>(&Gradient::get_offsets), static_cast<void (Gradient::*)(const PackedFloat32Array &)>(&Gradient::set_offsets)>((new std::string("offsets"))->c_str())
			.property<static_cast<PackedColorArray (Gradient::*)() const>(&Gradient::get_colors), static_cast<void (Gradient::*)(const PackedColorArray &)>(&Gradient::set_colors)>((new std::string("colors"))->c_str())
			.fun<static_cast<void (Gradient::*)(double, const Color &)>(&Gradient::add_point)>((new std::string("add_point"))->c_str())
			.fun<static_cast<void (Gradient::*)(int32_t)>(&Gradient::remove_point)>((new std::string("remove_point"))->c_str())
			.fun<static_cast<void (Gradient::*)(int32_t, double)>(&Gradient::set_offset)>((new std::string("set_offset"))->c_str())
			.fun<static_cast<double (Gradient::*)(int32_t)>(&Gradient::get_offset)>((new std::string("get_offset"))->c_str())
			.fun<static_cast<void (Gradient::*)()>(&Gradient::reverse)>((new std::string("reverse"))->c_str())
			.fun<static_cast<void (Gradient::*)(int32_t, const Color &)>(&Gradient::set_color)>((new std::string("set_color"))->c_str())
			.fun<static_cast<Color (Gradient::*)(int32_t)>(&Gradient::get_color)>((new std::string("get_color"))->c_str())
			.fun<static_cast<Color (Gradient::*)(double)>(&Gradient::sample)>((new std::string("sample"))->c_str())
			.fun<static_cast<int32_t (Gradient::*)() const>(&Gradient::get_point_count)>((new std::string("get_point_count"))->c_str());
	qjs::Value _InterpolationMode = context->newObject();
	_InterpolationMode[(new std::string("GRADIENT_INTERPOLATE_LINEAR"))->c_str()] = Gradient::InterpolationMode::GRADIENT_INTERPOLATE_LINEAR;
	_InterpolationMode[(new std::string("GRADIENT_INTERPOLATE_CONSTANT"))->c_str()] = Gradient::InterpolationMode::GRADIENT_INTERPOLATE_CONSTANT;
	_InterpolationMode[(new std::string("GRADIENT_INTERPOLATE_CUBIC"))->c_str()] = Gradient::InterpolationMode::GRADIENT_INTERPOLATE_CUBIC;
	_module.add("InterpolationMode", std::move(_InterpolationMode));
	qjs::Value _ColorSpace = context->newObject();
	_ColorSpace[(new std::string("GRADIENT_COLOR_SPACE_SRGB"))->c_str()] = Gradient::ColorSpace::GRADIENT_COLOR_SPACE_SRGB;
	_ColorSpace[(new std::string("GRADIENT_COLOR_SPACE_LINEAR_SRGB"))->c_str()] = Gradient::ColorSpace::GRADIENT_COLOR_SPACE_LINEAR_SRGB;
	_ColorSpace[(new std::string("GRADIENT_COLOR_SPACE_OKLAB"))->c_str()] = Gradient::ColorSpace::GRADIENT_COLOR_SPACE_OKLAB;
	_module.add("ColorSpace", std::move(_ColorSpace));
}