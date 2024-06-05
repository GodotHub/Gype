#include <godot_cpp/classes/gradient.hpp>
#include <godot_cpp/classes/noise.hpp>
#include <godot_cpp/classes/noise_texture2d.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_NoiseTexture2D() {
	qjs::Context::Module &_module = _General;
	_module.class_<NoiseTexture2D>("NoiseTexture2D")
			.constructor<>()
			.property<&NoiseTexture2D::get_width, &NoiseTexture2D::set_width>("width")
			.property<&NoiseTexture2D::get_height, &NoiseTexture2D::set_height>("height")
			.property<&NoiseTexture2D::get_invert, &NoiseTexture2D::set_invert>("invert")
			.property<&NoiseTexture2D::is_in_3d_space, &NoiseTexture2D::set_in_3d_space>("in_3d_space")
			.property<&NoiseTexture2D::is_generating_mipmaps, &NoiseTexture2D::set_generate_mipmaps>("generate_mipmaps")
			.property<&NoiseTexture2D::get_seamless, &NoiseTexture2D::set_seamless>("seamless")
			.property<&NoiseTexture2D::get_seamless_blend_skirt, &NoiseTexture2D::set_seamless_blend_skirt>("seamless_blend_skirt")
			.property<&NoiseTexture2D::is_normal_map, &NoiseTexture2D::set_as_normal_map>("as_normal_map")
			.property<&NoiseTexture2D::get_bump_strength, &NoiseTexture2D::set_bump_strength>("bump_strength")
			.property<&NoiseTexture2D::is_normalized, &NoiseTexture2D::set_normalize>("normalize")
			.property<&NoiseTexture2D::get_color_ramp, &NoiseTexture2D::set_color_ramp>("color_ramp")
			.property<&NoiseTexture2D::get_noise, &NoiseTexture2D::set_noise>("noise");
}