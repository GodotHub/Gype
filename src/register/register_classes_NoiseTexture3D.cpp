#include <godot_cpp/classes/gradient.hpp>
#include <godot_cpp/classes/noise.hpp>
#include <godot_cpp/classes/noise_texture3d.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_NoiseTexture3D() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<NoiseTexture3D>("NoiseTexture3D")
			.constructor<>()
			.property<&NoiseTexture3D::get_width, &NoiseTexture3D::set_width>("width")
			.property<&NoiseTexture3D::get_height, &NoiseTexture3D::set_height>("height")
			.property<&NoiseTexture3D::get_depth, &NoiseTexture3D::set_depth>("depth")
			.property<&NoiseTexture3D::get_invert, &NoiseTexture3D::set_invert>("invert")
			.property<&NoiseTexture3D::get_seamless, &NoiseTexture3D::set_seamless>("seamless")
			.property<&NoiseTexture3D::get_seamless_blend_skirt, &NoiseTexture3D::set_seamless_blend_skirt>("seamless_blend_skirt")
			.property<&NoiseTexture3D::is_normalized, &NoiseTexture3D::set_normalize>("normalize")
			.property<&NoiseTexture3D::get_color_ramp, &NoiseTexture3D::set_color_ramp>("color_ramp")
			.property<&NoiseTexture3D::get_noise, &NoiseTexture3D::set_noise>("noise");
}