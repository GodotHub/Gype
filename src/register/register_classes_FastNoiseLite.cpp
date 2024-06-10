#include <godot_cpp/classes/fast_noise_lite.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_FastNoiseLite() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<FastNoiseLite>("FastNoiseLite")
			.constructor<>()
			.property<&FastNoiseLite::get_noise_type, &FastNoiseLite::set_noise_type>("noise_type")
			.property<&FastNoiseLite::get_seed, &FastNoiseLite::set_seed>("seed")
			.property<&FastNoiseLite::get_frequency, &FastNoiseLite::set_frequency>("frequency")
			.property<&FastNoiseLite::get_offset, &FastNoiseLite::set_offset>("offset")
			.property<&FastNoiseLite::get_fractal_type, &FastNoiseLite::set_fractal_type>("fractal_type")
			.property<&FastNoiseLite::get_fractal_octaves, &FastNoiseLite::set_fractal_octaves>("fractal_octaves")
			.property<&FastNoiseLite::get_fractal_lacunarity, &FastNoiseLite::set_fractal_lacunarity>("fractal_lacunarity")
			.property<&FastNoiseLite::get_fractal_gain, &FastNoiseLite::set_fractal_gain>("fractal_gain")
			.property<&FastNoiseLite::get_fractal_weighted_strength, &FastNoiseLite::set_fractal_weighted_strength>("fractal_weighted_strength")
			.property<&FastNoiseLite::get_fractal_ping_pong_strength, &FastNoiseLite::set_fractal_ping_pong_strength>("fractal_ping_pong_strength")
			.property<&FastNoiseLite::get_cellular_distance_function, &FastNoiseLite::set_cellular_distance_function>("cellular_distance_function")
			.property<&FastNoiseLite::get_cellular_jitter, &FastNoiseLite::set_cellular_jitter>("cellular_jitter")
			.property<&FastNoiseLite::get_cellular_return_type, &FastNoiseLite::set_cellular_return_type>("cellular_return_type")
			.property<&FastNoiseLite::is_domain_warp_enabled, &FastNoiseLite::set_domain_warp_enabled>("domain_warp_enabled")
			.property<&FastNoiseLite::get_domain_warp_type, &FastNoiseLite::set_domain_warp_type>("domain_warp_type")
			.property<&FastNoiseLite::get_domain_warp_amplitude, &FastNoiseLite::set_domain_warp_amplitude>("domain_warp_amplitude")
			.property<&FastNoiseLite::get_domain_warp_frequency, &FastNoiseLite::set_domain_warp_frequency>("domain_warp_frequency")
			.property<&FastNoiseLite::get_domain_warp_fractal_type, &FastNoiseLite::set_domain_warp_fractal_type>("domain_warp_fractal_type")
			.property<&FastNoiseLite::get_domain_warp_fractal_octaves, &FastNoiseLite::set_domain_warp_fractal_octaves>("domain_warp_fractal_octaves")
			.property<&FastNoiseLite::get_domain_warp_fractal_lacunarity, &FastNoiseLite::set_domain_warp_fractal_lacunarity>("domain_warp_fractal_lacunarity")
			.property<&FastNoiseLite::get_domain_warp_fractal_gain, &FastNoiseLite::set_domain_warp_fractal_gain>("domain_warp_fractal_gain");
}