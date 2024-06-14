
#include <godot_cpp/classes/environment.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/sky.hpp>
#include <godot_cpp/classes/texture.hpp>
#include <godot_cpp/variant/color.hpp>
#include <godot_cpp/variant/vector3.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_Environment() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<Environment>("Environment")
			.constructor<>()
			.base<Resource>()
			.property<static_cast<Environment::BGMode (Environment::*)() const>(&Environment::get_background), static_cast<void (Environment::*)(Environment::BGMode)>(&Environment::set_background)>((new std::string("background_mode"))->c_str())
			.property<static_cast<Color (Environment::*)() const>(&Environment::get_bg_color), static_cast<void (Environment::*)(const Color &)>(&Environment::set_bg_color)>((new std::string("background_color"))->c_str())
			.property<static_cast<double (Environment::*)() const>(&Environment::get_bg_energy_multiplier), static_cast<void (Environment::*)(double)>(&Environment::set_bg_energy_multiplier)>((new std::string("background_energy_multiplier"))->c_str())
			.property<static_cast<double (Environment::*)() const>(&Environment::get_bg_intensity), static_cast<void (Environment::*)(double)>(&Environment::set_bg_intensity)>((new std::string("background_intensity"))->c_str())
			.property<static_cast<int32_t (Environment::*)() const>(&Environment::get_canvas_max_layer), static_cast<void (Environment::*)(int32_t)>(&Environment::set_canvas_max_layer)>((new std::string("background_canvas_max_layer"))->c_str())
			.property<static_cast<int32_t (Environment::*)() const>(&Environment::get_camera_feed_id), static_cast<void (Environment::*)(int32_t)>(&Environment::set_camera_feed_id)>((new std::string("background_camera_feed_id"))->c_str())
			.property<static_cast<Ref<Sky> (Environment::*)() const>(&Environment::get_sky), static_cast<void (Environment::*)(const Ref<Sky> &)>(&Environment::set_sky)>((new std::string("sky"))->c_str())
			.property<static_cast<double (Environment::*)() const>(&Environment::get_sky_custom_fov), static_cast<void (Environment::*)(double)>(&Environment::set_sky_custom_fov)>((new std::string("sky_custom_fov"))->c_str())
			.property<static_cast<Vector3 (Environment::*)() const>(&Environment::get_sky_rotation), static_cast<void (Environment::*)(const Vector3 &)>(&Environment::set_sky_rotation)>((new std::string("sky_rotation"))->c_str())
			.property<static_cast<Environment::AmbientSource (Environment::*)() const>(&Environment::get_ambient_source), static_cast<void (Environment::*)(Environment::AmbientSource)>(&Environment::set_ambient_source)>((new std::string("ambient_light_source"))->c_str())
			.property<static_cast<Color (Environment::*)() const>(&Environment::get_ambient_light_color), static_cast<void (Environment::*)(const Color &)>(&Environment::set_ambient_light_color)>((new std::string("ambient_light_color"))->c_str())
			.property<static_cast<double (Environment::*)() const>(&Environment::get_ambient_light_sky_contribution), static_cast<void (Environment::*)(double)>(&Environment::set_ambient_light_sky_contribution)>((new std::string("ambient_light_sky_contribution"))->c_str())
			.property<static_cast<double (Environment::*)() const>(&Environment::get_ambient_light_energy), static_cast<void (Environment::*)(double)>(&Environment::set_ambient_light_energy)>((new std::string("ambient_light_energy"))->c_str())
			.property<static_cast<Environment::ReflectionSource (Environment::*)() const>(&Environment::get_reflection_source), static_cast<void (Environment::*)(Environment::ReflectionSource)>(&Environment::set_reflection_source)>((new std::string("reflected_light_source"))->c_str())
			.property<static_cast<Environment::ToneMapper (Environment::*)() const>(&Environment::get_tonemapper), static_cast<void (Environment::*)(Environment::ToneMapper)>(&Environment::set_tonemapper)>((new std::string("tonemap_mode"))->c_str())
			.property<static_cast<double (Environment::*)() const>(&Environment::get_tonemap_exposure), static_cast<void (Environment::*)(double)>(&Environment::set_tonemap_exposure)>((new std::string("tonemap_exposure"))->c_str())
			.property<static_cast<double (Environment::*)() const>(&Environment::get_tonemap_white), static_cast<void (Environment::*)(double)>(&Environment::set_tonemap_white)>((new std::string("tonemap_white"))->c_str())
			.property<static_cast<bool (Environment::*)() const>(&Environment::is_ssr_enabled), static_cast<void (Environment::*)(bool)>(&Environment::set_ssr_enabled)>((new std::string("ssr_enabled"))->c_str())
			.property<static_cast<int32_t (Environment::*)() const>(&Environment::get_ssr_max_steps), static_cast<void (Environment::*)(int32_t)>(&Environment::set_ssr_max_steps)>((new std::string("ssr_max_steps"))->c_str())
			.property<static_cast<double (Environment::*)() const>(&Environment::get_ssr_fade_in), static_cast<void (Environment::*)(double)>(&Environment::set_ssr_fade_in)>((new std::string("ssr_fade_in"))->c_str())
			.property<static_cast<double (Environment::*)() const>(&Environment::get_ssr_fade_out), static_cast<void (Environment::*)(double)>(&Environment::set_ssr_fade_out)>((new std::string("ssr_fade_out"))->c_str())
			.property<static_cast<double (Environment::*)() const>(&Environment::get_ssr_depth_tolerance), static_cast<void (Environment::*)(double)>(&Environment::set_ssr_depth_tolerance)>((new std::string("ssr_depth_tolerance"))->c_str())
			.property<static_cast<bool (Environment::*)() const>(&Environment::is_ssao_enabled), static_cast<void (Environment::*)(bool)>(&Environment::set_ssao_enabled)>((new std::string("ssao_enabled"))->c_str())
			.property<static_cast<double (Environment::*)() const>(&Environment::get_ssao_radius), static_cast<void (Environment::*)(double)>(&Environment::set_ssao_radius)>((new std::string("ssao_radius"))->c_str())
			.property<static_cast<double (Environment::*)() const>(&Environment::get_ssao_intensity), static_cast<void (Environment::*)(double)>(&Environment::set_ssao_intensity)>((new std::string("ssao_intensity"))->c_str())
			.property<static_cast<double (Environment::*)() const>(&Environment::get_ssao_power), static_cast<void (Environment::*)(double)>(&Environment::set_ssao_power)>((new std::string("ssao_power"))->c_str())
			.property<static_cast<double (Environment::*)() const>(&Environment::get_ssao_detail), static_cast<void (Environment::*)(double)>(&Environment::set_ssao_detail)>((new std::string("ssao_detail"))->c_str())
			.property<static_cast<double (Environment::*)() const>(&Environment::get_ssao_horizon), static_cast<void (Environment::*)(double)>(&Environment::set_ssao_horizon)>((new std::string("ssao_horizon"))->c_str())
			.property<static_cast<double (Environment::*)() const>(&Environment::get_ssao_sharpness), static_cast<void (Environment::*)(double)>(&Environment::set_ssao_sharpness)>((new std::string("ssao_sharpness"))->c_str())
			.property<static_cast<double (Environment::*)() const>(&Environment::get_ssao_direct_light_affect), static_cast<void (Environment::*)(double)>(&Environment::set_ssao_direct_light_affect)>((new std::string("ssao_light_affect"))->c_str())
			.property<static_cast<double (Environment::*)() const>(&Environment::get_ssao_ao_channel_affect), static_cast<void (Environment::*)(double)>(&Environment::set_ssao_ao_channel_affect)>((new std::string("ssao_ao_channel_affect"))->c_str())
			.property<static_cast<bool (Environment::*)() const>(&Environment::is_ssil_enabled), static_cast<void (Environment::*)(bool)>(&Environment::set_ssil_enabled)>((new std::string("ssil_enabled"))->c_str())
			.property<static_cast<double (Environment::*)() const>(&Environment::get_ssil_radius), static_cast<void (Environment::*)(double)>(&Environment::set_ssil_radius)>((new std::string("ssil_radius"))->c_str())
			.property<static_cast<double (Environment::*)() const>(&Environment::get_ssil_intensity), static_cast<void (Environment::*)(double)>(&Environment::set_ssil_intensity)>((new std::string("ssil_intensity"))->c_str())
			.property<static_cast<double (Environment::*)() const>(&Environment::get_ssil_sharpness), static_cast<void (Environment::*)(double)>(&Environment::set_ssil_sharpness)>((new std::string("ssil_sharpness"))->c_str())
			.property<static_cast<double (Environment::*)() const>(&Environment::get_ssil_normal_rejection), static_cast<void (Environment::*)(double)>(&Environment::set_ssil_normal_rejection)>((new std::string("ssil_normal_rejection"))->c_str())
			.property<static_cast<bool (Environment::*)() const>(&Environment::is_sdfgi_enabled), static_cast<void (Environment::*)(bool)>(&Environment::set_sdfgi_enabled)>((new std::string("sdfgi_enabled"))->c_str())
			.property<static_cast<bool (Environment::*)() const>(&Environment::is_sdfgi_using_occlusion), static_cast<void (Environment::*)(bool)>(&Environment::set_sdfgi_use_occlusion)>((new std::string("sdfgi_use_occlusion"))->c_str())
			.property<static_cast<bool (Environment::*)() const>(&Environment::is_sdfgi_reading_sky_light), static_cast<void (Environment::*)(bool)>(&Environment::set_sdfgi_read_sky_light)>((new std::string("sdfgi_read_sky_light"))->c_str())
			.property<static_cast<double (Environment::*)() const>(&Environment::get_sdfgi_bounce_feedback), static_cast<void (Environment::*)(double)>(&Environment::set_sdfgi_bounce_feedback)>((new std::string("sdfgi_bounce_feedback"))->c_str())
			.property<static_cast<int32_t (Environment::*)() const>(&Environment::get_sdfgi_cascades), static_cast<void (Environment::*)(int32_t)>(&Environment::set_sdfgi_cascades)>((new std::string("sdfgi_cascades"))->c_str())
			.property<static_cast<double (Environment::*)() const>(&Environment::get_sdfgi_min_cell_size), static_cast<void (Environment::*)(double)>(&Environment::set_sdfgi_min_cell_size)>((new std::string("sdfgi_min_cell_size"))->c_str())
			.property<static_cast<double (Environment::*)() const>(&Environment::get_sdfgi_cascade0_distance), static_cast<void (Environment::*)(double)>(&Environment::set_sdfgi_cascade0_distance)>((new std::string("sdfgi_cascade0_distance"))->c_str())
			.property<static_cast<double (Environment::*)() const>(&Environment::get_sdfgi_max_distance), static_cast<void (Environment::*)(double)>(&Environment::set_sdfgi_max_distance)>((new std::string("sdfgi_max_distance"))->c_str())
			.property<static_cast<Environment::SDFGIYScale (Environment::*)() const>(&Environment::get_sdfgi_y_scale), static_cast<void (Environment::*)(Environment::SDFGIYScale)>(&Environment::set_sdfgi_y_scale)>((new std::string("sdfgi_y_scale"))->c_str())
			.property<static_cast<double (Environment::*)() const>(&Environment::get_sdfgi_energy), static_cast<void (Environment::*)(double)>(&Environment::set_sdfgi_energy)>((new std::string("sdfgi_energy"))->c_str())
			.property<static_cast<double (Environment::*)() const>(&Environment::get_sdfgi_normal_bias), static_cast<void (Environment::*)(double)>(&Environment::set_sdfgi_normal_bias)>((new std::string("sdfgi_normal_bias"))->c_str())
			.property<static_cast<double (Environment::*)() const>(&Environment::get_sdfgi_probe_bias), static_cast<void (Environment::*)(double)>(&Environment::set_sdfgi_probe_bias)>((new std::string("sdfgi_probe_bias"))->c_str())
			.property<static_cast<bool (Environment::*)() const>(&Environment::is_glow_enabled), static_cast<void (Environment::*)(bool)>(&Environment::set_glow_enabled)>((new std::string("glow_enabled"))->c_str())
			.property<static_cast<bool (Environment::*)() const>(&Environment::is_glow_normalized), static_cast<void (Environment::*)(bool)>(&Environment::set_glow_normalized)>((new std::string("glow_normalized"))->c_str())
			.property<static_cast<double (Environment::*)() const>(&Environment::get_glow_intensity), static_cast<void (Environment::*)(double)>(&Environment::set_glow_intensity)>((new std::string("glow_intensity"))->c_str())
			.property<static_cast<double (Environment::*)() const>(&Environment::get_glow_strength), static_cast<void (Environment::*)(double)>(&Environment::set_glow_strength)>((new std::string("glow_strength"))->c_str())
			.property<static_cast<double (Environment::*)() const>(&Environment::get_glow_mix), static_cast<void (Environment::*)(double)>(&Environment::set_glow_mix)>((new std::string("glow_mix"))->c_str())
			.property<static_cast<double (Environment::*)() const>(&Environment::get_glow_bloom), static_cast<void (Environment::*)(double)>(&Environment::set_glow_bloom)>((new std::string("glow_bloom"))->c_str())
			.property<static_cast<Environment::GlowBlendMode (Environment::*)() const>(&Environment::get_glow_blend_mode), static_cast<void (Environment::*)(Environment::GlowBlendMode)>(&Environment::set_glow_blend_mode)>((new std::string("glow_blend_mode"))->c_str())
			.property<static_cast<double (Environment::*)() const>(&Environment::get_glow_hdr_bleed_threshold), static_cast<void (Environment::*)(double)>(&Environment::set_glow_hdr_bleed_threshold)>((new std::string("glow_hdr_threshold"))->c_str())
			.property<static_cast<double (Environment::*)() const>(&Environment::get_glow_hdr_bleed_scale), static_cast<void (Environment::*)(double)>(&Environment::set_glow_hdr_bleed_scale)>((new std::string("glow_hdr_scale"))->c_str())
			.property<static_cast<double (Environment::*)() const>(&Environment::get_glow_hdr_luminance_cap), static_cast<void (Environment::*)(double)>(&Environment::set_glow_hdr_luminance_cap)>((new std::string("glow_hdr_luminance_cap"))->c_str())
			.property<static_cast<double (Environment::*)() const>(&Environment::get_glow_map_strength), static_cast<void (Environment::*)(double)>(&Environment::set_glow_map_strength)>((new std::string("glow_map_strength"))->c_str())
			.property<static_cast<Ref<Texture> (Environment::*)() const>(&Environment::get_glow_map), static_cast<void (Environment::*)(const Ref<Texture> &)>(&Environment::set_glow_map)>((new std::string("glow_map"))->c_str())
			.property<static_cast<bool (Environment::*)() const>(&Environment::is_fog_enabled), static_cast<void (Environment::*)(bool)>(&Environment::set_fog_enabled)>((new std::string("fog_enabled"))->c_str())
			.property<static_cast<Environment::FogMode (Environment::*)() const>(&Environment::get_fog_mode), static_cast<void (Environment::*)(Environment::FogMode)>(&Environment::set_fog_mode)>((new std::string("fog_mode"))->c_str())
			.property<static_cast<Color (Environment::*)() const>(&Environment::get_fog_light_color), static_cast<void (Environment::*)(const Color &)>(&Environment::set_fog_light_color)>((new std::string("fog_light_color"))->c_str())
			.property<static_cast<double (Environment::*)() const>(&Environment::get_fog_light_energy), static_cast<void (Environment::*)(double)>(&Environment::set_fog_light_energy)>((new std::string("fog_light_energy"))->c_str())
			.property<static_cast<double (Environment::*)() const>(&Environment::get_fog_sun_scatter), static_cast<void (Environment::*)(double)>(&Environment::set_fog_sun_scatter)>((new std::string("fog_sun_scatter"))->c_str())
			.property<static_cast<double (Environment::*)() const>(&Environment::get_fog_density), static_cast<void (Environment::*)(double)>(&Environment::set_fog_density)>((new std::string("fog_density"))->c_str())
			.property<static_cast<double (Environment::*)() const>(&Environment::get_fog_aerial_perspective), static_cast<void (Environment::*)(double)>(&Environment::set_fog_aerial_perspective)>((new std::string("fog_aerial_perspective"))->c_str())
			.property<static_cast<double (Environment::*)() const>(&Environment::get_fog_sky_affect), static_cast<void (Environment::*)(double)>(&Environment::set_fog_sky_affect)>((new std::string("fog_sky_affect"))->c_str())
			.property<static_cast<double (Environment::*)() const>(&Environment::get_fog_height), static_cast<void (Environment::*)(double)>(&Environment::set_fog_height)>((new std::string("fog_height"))->c_str())
			.property<static_cast<double (Environment::*)() const>(&Environment::get_fog_height_density), static_cast<void (Environment::*)(double)>(&Environment::set_fog_height_density)>((new std::string("fog_height_density"))->c_str())
			.property<static_cast<double (Environment::*)() const>(&Environment::get_fog_depth_curve), static_cast<void (Environment::*)(double)>(&Environment::set_fog_depth_curve)>((new std::string("fog_depth_curve"))->c_str())
			.property<static_cast<double (Environment::*)() const>(&Environment::get_fog_depth_begin), static_cast<void (Environment::*)(double)>(&Environment::set_fog_depth_begin)>((new std::string("fog_depth_begin"))->c_str())
			.property<static_cast<double (Environment::*)() const>(&Environment::get_fog_depth_end), static_cast<void (Environment::*)(double)>(&Environment::set_fog_depth_end)>((new std::string("fog_depth_end"))->c_str())
			.property<static_cast<bool (Environment::*)() const>(&Environment::is_volumetric_fog_enabled), static_cast<void (Environment::*)(bool)>(&Environment::set_volumetric_fog_enabled)>((new std::string("volumetric_fog_enabled"))->c_str())
			.property<static_cast<double (Environment::*)() const>(&Environment::get_volumetric_fog_density), static_cast<void (Environment::*)(double)>(&Environment::set_volumetric_fog_density)>((new std::string("volumetric_fog_density"))->c_str())
			.property<static_cast<Color (Environment::*)() const>(&Environment::get_volumetric_fog_albedo), static_cast<void (Environment::*)(const Color &)>(&Environment::set_volumetric_fog_albedo)>((new std::string("volumetric_fog_albedo"))->c_str())
			.property<static_cast<Color (Environment::*)() const>(&Environment::get_volumetric_fog_emission), static_cast<void (Environment::*)(const Color &)>(&Environment::set_volumetric_fog_emission)>((new std::string("volumetric_fog_emission"))->c_str())
			.property<static_cast<double (Environment::*)() const>(&Environment::get_volumetric_fog_emission_energy), static_cast<void (Environment::*)(double)>(&Environment::set_volumetric_fog_emission_energy)>((new std::string("volumetric_fog_emission_energy"))->c_str())
			.property<static_cast<double (Environment::*)() const>(&Environment::get_volumetric_fog_gi_inject), static_cast<void (Environment::*)(double)>(&Environment::set_volumetric_fog_gi_inject)>((new std::string("volumetric_fog_gi_inject"))->c_str())
			.property<static_cast<double (Environment::*)() const>(&Environment::get_volumetric_fog_anisotropy), static_cast<void (Environment::*)(double)>(&Environment::set_volumetric_fog_anisotropy)>((new std::string("volumetric_fog_anisotropy"))->c_str())
			.property<static_cast<double (Environment::*)() const>(&Environment::get_volumetric_fog_length), static_cast<void (Environment::*)(double)>(&Environment::set_volumetric_fog_length)>((new std::string("volumetric_fog_length"))->c_str())
			.property<static_cast<double (Environment::*)() const>(&Environment::get_volumetric_fog_detail_spread), static_cast<void (Environment::*)(double)>(&Environment::set_volumetric_fog_detail_spread)>((new std::string("volumetric_fog_detail_spread"))->c_str())
			.property<static_cast<double (Environment::*)() const>(&Environment::get_volumetric_fog_ambient_inject), static_cast<void (Environment::*)(double)>(&Environment::set_volumetric_fog_ambient_inject)>((new std::string("volumetric_fog_ambient_inject"))->c_str())
			.property<static_cast<double (Environment::*)() const>(&Environment::get_volumetric_fog_sky_affect), static_cast<void (Environment::*)(double)>(&Environment::set_volumetric_fog_sky_affect)>((new std::string("volumetric_fog_sky_affect"))->c_str())
			.property<static_cast<bool (Environment::*)() const>(&Environment::is_volumetric_fog_temporal_reprojection_enabled), static_cast<void (Environment::*)(bool)>(&Environment::set_volumetric_fog_temporal_reprojection_enabled)>((new std::string("volumetric_fog_temporal_reprojection_enabled"))->c_str())
			.property<static_cast<double (Environment::*)() const>(&Environment::get_volumetric_fog_temporal_reprojection_amount), static_cast<void (Environment::*)(double)>(&Environment::set_volumetric_fog_temporal_reprojection_amount)>((new std::string("volumetric_fog_temporal_reprojection_amount"))->c_str())
			.property<static_cast<bool (Environment::*)() const>(&Environment::is_adjustment_enabled), static_cast<void (Environment::*)(bool)>(&Environment::set_adjustment_enabled)>((new std::string("adjustment_enabled"))->c_str())
			.property<static_cast<double (Environment::*)() const>(&Environment::get_adjustment_brightness), static_cast<void (Environment::*)(double)>(&Environment::set_adjustment_brightness)>((new std::string("adjustment_brightness"))->c_str())
			.property<static_cast<double (Environment::*)() const>(&Environment::get_adjustment_contrast), static_cast<void (Environment::*)(double)>(&Environment::set_adjustment_contrast)>((new std::string("adjustment_contrast"))->c_str())
			.property<static_cast<double (Environment::*)() const>(&Environment::get_adjustment_saturation), static_cast<void (Environment::*)(double)>(&Environment::set_adjustment_saturation)>((new std::string("adjustment_saturation"))->c_str())
			.property<static_cast<Ref<Texture> (Environment::*)() const>(&Environment::get_adjustment_color_correction), static_cast<void (Environment::*)(const Ref<Texture> &)>(&Environment::set_adjustment_color_correction)>((new std::string("adjustment_color_correction"))->c_str())
			.fun<static_cast<void (Environment::*)(int32_t, double)>(&Environment::set_glow_level)>((new std::string("set_glow_level"))->c_str())
			.fun<static_cast<double (Environment::*)(int32_t) const>(&Environment::get_glow_level)>((new std::string("get_glow_level"))->c_str());
	qjs::Value _BGMode = context->newObject();
	_BGMode[(new std::string("BG_CLEAR_COLOR"))->c_str()] = Environment::BGMode::BG_CLEAR_COLOR;
	_BGMode[(new std::string("BG_COLOR"))->c_str()] = Environment::BGMode::BG_COLOR;
	_BGMode[(new std::string("BG_SKY"))->c_str()] = Environment::BGMode::BG_SKY;
	_BGMode[(new std::string("BG_CANVAS"))->c_str()] = Environment::BGMode::BG_CANVAS;
	_BGMode[(new std::string("BG_KEEP"))->c_str()] = Environment::BGMode::BG_KEEP;
	_BGMode[(new std::string("BG_CAMERA_FEED"))->c_str()] = Environment::BGMode::BG_CAMERA_FEED;
	_BGMode[(new std::string("BG_MAX"))->c_str()] = Environment::BGMode::BG_MAX;
	_module.add("BGMode", std::move(_BGMode));
	qjs::Value _AmbientSource = context->newObject();
	_AmbientSource[(new std::string("AMBIENT_SOURCE_BG"))->c_str()] = Environment::AmbientSource::AMBIENT_SOURCE_BG;
	_AmbientSource[(new std::string("AMBIENT_SOURCE_DISABLED"))->c_str()] = Environment::AmbientSource::AMBIENT_SOURCE_DISABLED;
	_AmbientSource[(new std::string("AMBIENT_SOURCE_COLOR"))->c_str()] = Environment::AmbientSource::AMBIENT_SOURCE_COLOR;
	_AmbientSource[(new std::string("AMBIENT_SOURCE_SKY"))->c_str()] = Environment::AmbientSource::AMBIENT_SOURCE_SKY;
	_module.add("AmbientSource", std::move(_AmbientSource));
	qjs::Value _ReflectionSource = context->newObject();
	_ReflectionSource[(new std::string("REFLECTION_SOURCE_BG"))->c_str()] = Environment::ReflectionSource::REFLECTION_SOURCE_BG;
	_ReflectionSource[(new std::string("REFLECTION_SOURCE_DISABLED"))->c_str()] = Environment::ReflectionSource::REFLECTION_SOURCE_DISABLED;
	_ReflectionSource[(new std::string("REFLECTION_SOURCE_SKY"))->c_str()] = Environment::ReflectionSource::REFLECTION_SOURCE_SKY;
	_module.add("ReflectionSource", std::move(_ReflectionSource));
	qjs::Value _ToneMapper = context->newObject();
	_ToneMapper[(new std::string("TONE_MAPPER_LINEAR"))->c_str()] = Environment::ToneMapper::TONE_MAPPER_LINEAR;
	_ToneMapper[(new std::string("TONE_MAPPER_REINHARDT"))->c_str()] = Environment::ToneMapper::TONE_MAPPER_REINHARDT;
	_ToneMapper[(new std::string("TONE_MAPPER_FILMIC"))->c_str()] = Environment::ToneMapper::TONE_MAPPER_FILMIC;
	_ToneMapper[(new std::string("TONE_MAPPER_ACES"))->c_str()] = Environment::ToneMapper::TONE_MAPPER_ACES;
	_module.add("ToneMapper", std::move(_ToneMapper));
	qjs::Value _GlowBlendMode = context->newObject();
	_GlowBlendMode[(new std::string("GLOW_BLEND_MODE_ADDITIVE"))->c_str()] = Environment::GlowBlendMode::GLOW_BLEND_MODE_ADDITIVE;
	_GlowBlendMode[(new std::string("GLOW_BLEND_MODE_SCREEN"))->c_str()] = Environment::GlowBlendMode::GLOW_BLEND_MODE_SCREEN;
	_GlowBlendMode[(new std::string("GLOW_BLEND_MODE_SOFTLIGHT"))->c_str()] = Environment::GlowBlendMode::GLOW_BLEND_MODE_SOFTLIGHT;
	_GlowBlendMode[(new std::string("GLOW_BLEND_MODE_REPLACE"))->c_str()] = Environment::GlowBlendMode::GLOW_BLEND_MODE_REPLACE;
	_GlowBlendMode[(new std::string("GLOW_BLEND_MODE_MIX"))->c_str()] = Environment::GlowBlendMode::GLOW_BLEND_MODE_MIX;
	_module.add("GlowBlendMode", std::move(_GlowBlendMode));
	qjs::Value _FogMode = context->newObject();
	_FogMode[(new std::string("FOG_MODE_EXPONENTIAL"))->c_str()] = Environment::FogMode::FOG_MODE_EXPONENTIAL;
	_FogMode[(new std::string("FOG_MODE_DEPTH"))->c_str()] = Environment::FogMode::FOG_MODE_DEPTH;
	_module.add("FogMode", std::move(_FogMode));
	qjs::Value _SDFGIYScale = context->newObject();
	_SDFGIYScale[(new std::string("SDFGI_Y_SCALE_50_PERCENT"))->c_str()] = Environment::SDFGIYScale::SDFGI_Y_SCALE_50_PERCENT;
	_SDFGIYScale[(new std::string("SDFGI_Y_SCALE_75_PERCENT"))->c_str()] = Environment::SDFGIYScale::SDFGI_Y_SCALE_75_PERCENT;
	_SDFGIYScale[(new std::string("SDFGI_Y_SCALE_100_PERCENT"))->c_str()] = Environment::SDFGIYScale::SDFGI_Y_SCALE_100_PERCENT;
	_module.add("SDFGIYScale", std::move(_SDFGIYScale));
}