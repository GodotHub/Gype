#include "qjspp.hpp"
#include "register/register_classes.h"
#include <godot_cpp/classes/camera_attributes.hpp>
#include <godot_cpp/classes/lightmap_gi.hpp>
#include <godot_cpp/classes/lightmap_gi_data.hpp>
#include <godot_cpp/classes/sky.hpp>

using namespace godot;

void register_classes_LightmapGI() {
	qjs::Context::Module &_module = _Node3D;
	_module.class_<LightmapGI>("LightmapGI")
			.constructor<>()
			.property<&LightmapGI::get_bake_quality, &LightmapGI::set_bake_quality>("quality")
			.property<&LightmapGI::get_bounces, &LightmapGI::set_bounces>("bounces")
			.property<&LightmapGI::get_bounce_indirect_energy, &LightmapGI::set_bounce_indirect_energy>("bounce_indirect_energy")
			.property<&LightmapGI::is_directional, &LightmapGI::set_directional>("directional")
			.property<&LightmapGI::is_using_texture_for_bounces, &LightmapGI::set_use_texture_for_bounces>("use_texture_for_bounces")
			.property<&LightmapGI::is_interior, &LightmapGI::set_interior>("interior")
			.property<&LightmapGI::is_using_denoiser, &LightmapGI::set_use_denoiser>("use_denoiser")
			.property<&LightmapGI::get_denoiser_strength, &LightmapGI::set_denoiser_strength>("denoiser_strength")
			.property<&LightmapGI::get_bias, &LightmapGI::set_bias>("bias")
			.property<&LightmapGI::get_max_texture_size, &LightmapGI::set_max_texture_size>("max_texture_size")
			.property<&LightmapGI::get_environment_mode, &LightmapGI::set_environment_mode>("environment_mode")
			.property<&LightmapGI::get_environment_custom_sky, &LightmapGI::set_environment_custom_sky>("environment_custom_sky")
			.property<&LightmapGI::get_environment_custom_color, &LightmapGI::set_environment_custom_color>("environment_custom_color")
			.property<&LightmapGI::get_environment_custom_energy, &LightmapGI::set_environment_custom_energy>("environment_custom_energy")
			.property<&LightmapGI::get_camera_attributes, &LightmapGI::set_camera_attributes>("camera_attributes")
			.property<&LightmapGI::get_generate_probes, &LightmapGI::set_generate_probes>("generate_probes_subdiv")
			.property<&LightmapGI::get_light_data, &LightmapGI::set_light_data>("light_data");
}