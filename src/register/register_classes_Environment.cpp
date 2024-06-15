#include <godot_cpp/classes/environment.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/color.hpp>
#include <godot_cpp/variant/vector3.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/sky.hpp>
#include <godot_cpp/classes/texture.hpp>
#include <stdint.h>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_Environment() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<Environment>("Environment")
            .constructor<>()
            .base<Resource>()
            .property<static_cast<Environment::BGMode(Environment::*)()const>(&Environment::get_background),static_cast<void(Environment::*)(Environment::BGMode)>(&Environment::set_background)>("background_mode")
            .property<static_cast<Color(Environment::*)()const>(&Environment::get_bg_color),static_cast<void(Environment::*)(const Color &)>(&Environment::set_bg_color)>("background_color")
            .property<static_cast<double(Environment::*)()const>(&Environment::get_bg_energy_multiplier),static_cast<void(Environment::*)(double)>(&Environment::set_bg_energy_multiplier)>("background_energy_multiplier")
            .property<static_cast<double(Environment::*)()const>(&Environment::get_bg_intensity),static_cast<void(Environment::*)(double)>(&Environment::set_bg_intensity)>("background_intensity")
            .property<static_cast<int32_t(Environment::*)()const>(&Environment::get_canvas_max_layer),static_cast<void(Environment::*)(int32_t)>(&Environment::set_canvas_max_layer)>("background_canvas_max_layer")
            .property<static_cast<int32_t(Environment::*)()const>(&Environment::get_camera_feed_id),static_cast<void(Environment::*)(int32_t)>(&Environment::set_camera_feed_id)>("background_camera_feed_id")
            .property<static_cast<Ref<Sky>(Environment::*)()const>(&Environment::get_sky),static_cast<void(Environment::*)(const Ref<Sky> &)>(&Environment::set_sky)>("sky")
            .property<static_cast<double(Environment::*)()const>(&Environment::get_sky_custom_fov),static_cast<void(Environment::*)(double)>(&Environment::set_sky_custom_fov)>("sky_custom_fov")
            .property<static_cast<Vector3(Environment::*)()const>(&Environment::get_sky_rotation),static_cast<void(Environment::*)(const Vector3 &)>(&Environment::set_sky_rotation)>("sky_rotation")
            .property<static_cast<Environment::AmbientSource(Environment::*)()const>(&Environment::get_ambient_source),static_cast<void(Environment::*)(Environment::AmbientSource)>(&Environment::set_ambient_source)>("ambient_light_source")
            .property<static_cast<Color(Environment::*)()const>(&Environment::get_ambient_light_color),static_cast<void(Environment::*)(const Color &)>(&Environment::set_ambient_light_color)>("ambient_light_color")
            .property<static_cast<double(Environment::*)()const>(&Environment::get_ambient_light_sky_contribution),static_cast<void(Environment::*)(double)>(&Environment::set_ambient_light_sky_contribution)>("ambient_light_sky_contribution")
            .property<static_cast<double(Environment::*)()const>(&Environment::get_ambient_light_energy),static_cast<void(Environment::*)(double)>(&Environment::set_ambient_light_energy)>("ambient_light_energy")
            .property<static_cast<Environment::ReflectionSource(Environment::*)()const>(&Environment::get_reflection_source),static_cast<void(Environment::*)(Environment::ReflectionSource)>(&Environment::set_reflection_source)>("reflected_light_source")
            .property<static_cast<Environment::ToneMapper(Environment::*)()const>(&Environment::get_tonemapper),static_cast<void(Environment::*)(Environment::ToneMapper)>(&Environment::set_tonemapper)>("tonemap_mode")
            .property<static_cast<double(Environment::*)()const>(&Environment::get_tonemap_exposure),static_cast<void(Environment::*)(double)>(&Environment::set_tonemap_exposure)>("tonemap_exposure")
            .property<static_cast<double(Environment::*)()const>(&Environment::get_tonemap_white),static_cast<void(Environment::*)(double)>(&Environment::set_tonemap_white)>("tonemap_white")
            .property<static_cast<bool(Environment::*)()const>(&Environment::is_ssr_enabled),static_cast<void(Environment::*)(bool)>(&Environment::set_ssr_enabled)>("ssr_enabled")
            .property<static_cast<int32_t(Environment::*)()const>(&Environment::get_ssr_max_steps),static_cast<void(Environment::*)(int32_t)>(&Environment::set_ssr_max_steps)>("ssr_max_steps")
            .property<static_cast<double(Environment::*)()const>(&Environment::get_ssr_fade_in),static_cast<void(Environment::*)(double)>(&Environment::set_ssr_fade_in)>("ssr_fade_in")
            .property<static_cast<double(Environment::*)()const>(&Environment::get_ssr_fade_out),static_cast<void(Environment::*)(double)>(&Environment::set_ssr_fade_out)>("ssr_fade_out")
            .property<static_cast<double(Environment::*)()const>(&Environment::get_ssr_depth_tolerance),static_cast<void(Environment::*)(double)>(&Environment::set_ssr_depth_tolerance)>("ssr_depth_tolerance")
            .property<static_cast<bool(Environment::*)()const>(&Environment::is_ssao_enabled),static_cast<void(Environment::*)(bool)>(&Environment::set_ssao_enabled)>("ssao_enabled")
            .property<static_cast<double(Environment::*)()const>(&Environment::get_ssao_radius),static_cast<void(Environment::*)(double)>(&Environment::set_ssao_radius)>("ssao_radius")
            .property<static_cast<double(Environment::*)()const>(&Environment::get_ssao_intensity),static_cast<void(Environment::*)(double)>(&Environment::set_ssao_intensity)>("ssao_intensity")
            .property<static_cast<double(Environment::*)()const>(&Environment::get_ssao_power),static_cast<void(Environment::*)(double)>(&Environment::set_ssao_power)>("ssao_power")
            .property<static_cast<double(Environment::*)()const>(&Environment::get_ssao_detail),static_cast<void(Environment::*)(double)>(&Environment::set_ssao_detail)>("ssao_detail")
            .property<static_cast<double(Environment::*)()const>(&Environment::get_ssao_horizon),static_cast<void(Environment::*)(double)>(&Environment::set_ssao_horizon)>("ssao_horizon")
            .property<static_cast<double(Environment::*)()const>(&Environment::get_ssao_sharpness),static_cast<void(Environment::*)(double)>(&Environment::set_ssao_sharpness)>("ssao_sharpness")
            .property<static_cast<double(Environment::*)()const>(&Environment::get_ssao_direct_light_affect),static_cast<void(Environment::*)(double)>(&Environment::set_ssao_direct_light_affect)>("ssao_light_affect")
            .property<static_cast<double(Environment::*)()const>(&Environment::get_ssao_ao_channel_affect),static_cast<void(Environment::*)(double)>(&Environment::set_ssao_ao_channel_affect)>("ssao_ao_channel_affect")
            .property<static_cast<bool(Environment::*)()const>(&Environment::is_ssil_enabled),static_cast<void(Environment::*)(bool)>(&Environment::set_ssil_enabled)>("ssil_enabled")
            .property<static_cast<double(Environment::*)()const>(&Environment::get_ssil_radius),static_cast<void(Environment::*)(double)>(&Environment::set_ssil_radius)>("ssil_radius")
            .property<static_cast<double(Environment::*)()const>(&Environment::get_ssil_intensity),static_cast<void(Environment::*)(double)>(&Environment::set_ssil_intensity)>("ssil_intensity")
            .property<static_cast<double(Environment::*)()const>(&Environment::get_ssil_sharpness),static_cast<void(Environment::*)(double)>(&Environment::set_ssil_sharpness)>("ssil_sharpness")
            .property<static_cast<double(Environment::*)()const>(&Environment::get_ssil_normal_rejection),static_cast<void(Environment::*)(double)>(&Environment::set_ssil_normal_rejection)>("ssil_normal_rejection")
            .property<static_cast<bool(Environment::*)()const>(&Environment::is_sdfgi_enabled),static_cast<void(Environment::*)(bool)>(&Environment::set_sdfgi_enabled)>("sdfgi_enabled")
            .property<static_cast<bool(Environment::*)()const>(&Environment::is_sdfgi_using_occlusion),static_cast<void(Environment::*)(bool)>(&Environment::set_sdfgi_use_occlusion)>("sdfgi_use_occlusion")
            .property<static_cast<bool(Environment::*)()const>(&Environment::is_sdfgi_reading_sky_light),static_cast<void(Environment::*)(bool)>(&Environment::set_sdfgi_read_sky_light)>("sdfgi_read_sky_light")
            .property<static_cast<double(Environment::*)()const>(&Environment::get_sdfgi_bounce_feedback),static_cast<void(Environment::*)(double)>(&Environment::set_sdfgi_bounce_feedback)>("sdfgi_bounce_feedback")
            .property<static_cast<int32_t(Environment::*)()const>(&Environment::get_sdfgi_cascades),static_cast<void(Environment::*)(int32_t)>(&Environment::set_sdfgi_cascades)>("sdfgi_cascades")
            .property<static_cast<double(Environment::*)()const>(&Environment::get_sdfgi_min_cell_size),static_cast<void(Environment::*)(double)>(&Environment::set_sdfgi_min_cell_size)>("sdfgi_min_cell_size")
            .property<static_cast<double(Environment::*)()const>(&Environment::get_sdfgi_cascade0_distance),static_cast<void(Environment::*)(double)>(&Environment::set_sdfgi_cascade0_distance)>("sdfgi_cascade0_distance")
            .property<static_cast<double(Environment::*)()const>(&Environment::get_sdfgi_max_distance),static_cast<void(Environment::*)(double)>(&Environment::set_sdfgi_max_distance)>("sdfgi_max_distance")
            .property<static_cast<Environment::SDFGIYScale(Environment::*)()const>(&Environment::get_sdfgi_y_scale),static_cast<void(Environment::*)(Environment::SDFGIYScale)>(&Environment::set_sdfgi_y_scale)>("sdfgi_y_scale")
            .property<static_cast<double(Environment::*)()const>(&Environment::get_sdfgi_energy),static_cast<void(Environment::*)(double)>(&Environment::set_sdfgi_energy)>("sdfgi_energy")
            .property<static_cast<double(Environment::*)()const>(&Environment::get_sdfgi_normal_bias),static_cast<void(Environment::*)(double)>(&Environment::set_sdfgi_normal_bias)>("sdfgi_normal_bias")
            .property<static_cast<double(Environment::*)()const>(&Environment::get_sdfgi_probe_bias),static_cast<void(Environment::*)(double)>(&Environment::set_sdfgi_probe_bias)>("sdfgi_probe_bias")
            .property<static_cast<bool(Environment::*)()const>(&Environment::is_glow_enabled),static_cast<void(Environment::*)(bool)>(&Environment::set_glow_enabled)>("glow_enabled")
            .property<static_cast<bool(Environment::*)()const>(&Environment::is_glow_normalized),static_cast<void(Environment::*)(bool)>(&Environment::set_glow_normalized)>("glow_normalized")
            .property<static_cast<double(Environment::*)()const>(&Environment::get_glow_intensity),static_cast<void(Environment::*)(double)>(&Environment::set_glow_intensity)>("glow_intensity")
            .property<static_cast<double(Environment::*)()const>(&Environment::get_glow_strength),static_cast<void(Environment::*)(double)>(&Environment::set_glow_strength)>("glow_strength")
            .property<static_cast<double(Environment::*)()const>(&Environment::get_glow_mix),static_cast<void(Environment::*)(double)>(&Environment::set_glow_mix)>("glow_mix")
            .property<static_cast<double(Environment::*)()const>(&Environment::get_glow_bloom),static_cast<void(Environment::*)(double)>(&Environment::set_glow_bloom)>("glow_bloom")
            .property<static_cast<Environment::GlowBlendMode(Environment::*)()const>(&Environment::get_glow_blend_mode),static_cast<void(Environment::*)(Environment::GlowBlendMode)>(&Environment::set_glow_blend_mode)>("glow_blend_mode")
            .property<static_cast<double(Environment::*)()const>(&Environment::get_glow_hdr_bleed_threshold),static_cast<void(Environment::*)(double)>(&Environment::set_glow_hdr_bleed_threshold)>("glow_hdr_threshold")
            .property<static_cast<double(Environment::*)()const>(&Environment::get_glow_hdr_bleed_scale),static_cast<void(Environment::*)(double)>(&Environment::set_glow_hdr_bleed_scale)>("glow_hdr_scale")
            .property<static_cast<double(Environment::*)()const>(&Environment::get_glow_hdr_luminance_cap),static_cast<void(Environment::*)(double)>(&Environment::set_glow_hdr_luminance_cap)>("glow_hdr_luminance_cap")
            .property<static_cast<double(Environment::*)()const>(&Environment::get_glow_map_strength),static_cast<void(Environment::*)(double)>(&Environment::set_glow_map_strength)>("glow_map_strength")
            .property<static_cast<Ref<Texture>(Environment::*)()const>(&Environment::get_glow_map),static_cast<void(Environment::*)(const Ref<Texture> &)>(&Environment::set_glow_map)>("glow_map")
            .property<static_cast<bool(Environment::*)()const>(&Environment::is_fog_enabled),static_cast<void(Environment::*)(bool)>(&Environment::set_fog_enabled)>("fog_enabled")
            .property<static_cast<Environment::FogMode(Environment::*)()const>(&Environment::get_fog_mode),static_cast<void(Environment::*)(Environment::FogMode)>(&Environment::set_fog_mode)>("fog_mode")
            .property<static_cast<Color(Environment::*)()const>(&Environment::get_fog_light_color),static_cast<void(Environment::*)(const Color &)>(&Environment::set_fog_light_color)>("fog_light_color")
            .property<static_cast<double(Environment::*)()const>(&Environment::get_fog_light_energy),static_cast<void(Environment::*)(double)>(&Environment::set_fog_light_energy)>("fog_light_energy")
            .property<static_cast<double(Environment::*)()const>(&Environment::get_fog_sun_scatter),static_cast<void(Environment::*)(double)>(&Environment::set_fog_sun_scatter)>("fog_sun_scatter")
            .property<static_cast<double(Environment::*)()const>(&Environment::get_fog_density),static_cast<void(Environment::*)(double)>(&Environment::set_fog_density)>("fog_density")
            .property<static_cast<double(Environment::*)()const>(&Environment::get_fog_aerial_perspective),static_cast<void(Environment::*)(double)>(&Environment::set_fog_aerial_perspective)>("fog_aerial_perspective")
            .property<static_cast<double(Environment::*)()const>(&Environment::get_fog_sky_affect),static_cast<void(Environment::*)(double)>(&Environment::set_fog_sky_affect)>("fog_sky_affect")
            .property<static_cast<double(Environment::*)()const>(&Environment::get_fog_height),static_cast<void(Environment::*)(double)>(&Environment::set_fog_height)>("fog_height")
            .property<static_cast<double(Environment::*)()const>(&Environment::get_fog_height_density),static_cast<void(Environment::*)(double)>(&Environment::set_fog_height_density)>("fog_height_density")
            .property<static_cast<double(Environment::*)()const>(&Environment::get_fog_depth_curve),static_cast<void(Environment::*)(double)>(&Environment::set_fog_depth_curve)>("fog_depth_curve")
            .property<static_cast<double(Environment::*)()const>(&Environment::get_fog_depth_begin),static_cast<void(Environment::*)(double)>(&Environment::set_fog_depth_begin)>("fog_depth_begin")
            .property<static_cast<double(Environment::*)()const>(&Environment::get_fog_depth_end),static_cast<void(Environment::*)(double)>(&Environment::set_fog_depth_end)>("fog_depth_end")
            .property<static_cast<bool(Environment::*)()const>(&Environment::is_volumetric_fog_enabled),static_cast<void(Environment::*)(bool)>(&Environment::set_volumetric_fog_enabled)>("volumetric_fog_enabled")
            .property<static_cast<double(Environment::*)()const>(&Environment::get_volumetric_fog_density),static_cast<void(Environment::*)(double)>(&Environment::set_volumetric_fog_density)>("volumetric_fog_density")
            .property<static_cast<Color(Environment::*)()const>(&Environment::get_volumetric_fog_albedo),static_cast<void(Environment::*)(const Color &)>(&Environment::set_volumetric_fog_albedo)>("volumetric_fog_albedo")
            .property<static_cast<Color(Environment::*)()const>(&Environment::get_volumetric_fog_emission),static_cast<void(Environment::*)(const Color &)>(&Environment::set_volumetric_fog_emission)>("volumetric_fog_emission")
            .property<static_cast<double(Environment::*)()const>(&Environment::get_volumetric_fog_emission_energy),static_cast<void(Environment::*)(double)>(&Environment::set_volumetric_fog_emission_energy)>("volumetric_fog_emission_energy")
            .property<static_cast<double(Environment::*)()const>(&Environment::get_volumetric_fog_gi_inject),static_cast<void(Environment::*)(double)>(&Environment::set_volumetric_fog_gi_inject)>("volumetric_fog_gi_inject")
            .property<static_cast<double(Environment::*)()const>(&Environment::get_volumetric_fog_anisotropy),static_cast<void(Environment::*)(double)>(&Environment::set_volumetric_fog_anisotropy)>("volumetric_fog_anisotropy")
            .property<static_cast<double(Environment::*)()const>(&Environment::get_volumetric_fog_length),static_cast<void(Environment::*)(double)>(&Environment::set_volumetric_fog_length)>("volumetric_fog_length")
            .property<static_cast<double(Environment::*)()const>(&Environment::get_volumetric_fog_detail_spread),static_cast<void(Environment::*)(double)>(&Environment::set_volumetric_fog_detail_spread)>("volumetric_fog_detail_spread")
            .property<static_cast<double(Environment::*)()const>(&Environment::get_volumetric_fog_ambient_inject),static_cast<void(Environment::*)(double)>(&Environment::set_volumetric_fog_ambient_inject)>("volumetric_fog_ambient_inject")
            .property<static_cast<double(Environment::*)()const>(&Environment::get_volumetric_fog_sky_affect),static_cast<void(Environment::*)(double)>(&Environment::set_volumetric_fog_sky_affect)>("volumetric_fog_sky_affect")
            .property<static_cast<bool(Environment::*)()const>(&Environment::is_volumetric_fog_temporal_reprojection_enabled),static_cast<void(Environment::*)(bool)>(&Environment::set_volumetric_fog_temporal_reprojection_enabled)>("volumetric_fog_temporal_reprojection_enabled")
            .property<static_cast<double(Environment::*)()const>(&Environment::get_volumetric_fog_temporal_reprojection_amount),static_cast<void(Environment::*)(double)>(&Environment::set_volumetric_fog_temporal_reprojection_amount)>("volumetric_fog_temporal_reprojection_amount")
            .property<static_cast<bool(Environment::*)()const>(&Environment::is_adjustment_enabled),static_cast<void(Environment::*)(bool)>(&Environment::set_adjustment_enabled)>("adjustment_enabled")
            .property<static_cast<double(Environment::*)()const>(&Environment::get_adjustment_brightness),static_cast<void(Environment::*)(double)>(&Environment::set_adjustment_brightness)>("adjustment_brightness")
            .property<static_cast<double(Environment::*)()const>(&Environment::get_adjustment_contrast),static_cast<void(Environment::*)(double)>(&Environment::set_adjustment_contrast)>("adjustment_contrast")
            .property<static_cast<double(Environment::*)()const>(&Environment::get_adjustment_saturation),static_cast<void(Environment::*)(double)>(&Environment::set_adjustment_saturation)>("adjustment_saturation")
            .property<static_cast<Ref<Texture>(Environment::*)()const>(&Environment::get_adjustment_color_correction),static_cast<void(Environment::*)(const Ref<Texture> &)>(&Environment::set_adjustment_color_correction)>("adjustment_color_correction")
            .fun<static_cast<void(Environment::*)(int32_t,double)>(&Environment::set_glow_level)>("set_glow_level")
            .fun<static_cast<double(Environment::*)(int32_t)const>(&Environment::get_glow_level)>("get_glow_level")
;    qjs::Value _BGMode = context->newObject();
    _BGMode["BG_CLEAR_COLOR"] = Environment::BGMode::BG_CLEAR_COLOR;
    _BGMode["BG_COLOR"] = Environment::BGMode::BG_COLOR;
    _BGMode["BG_SKY"] = Environment::BGMode::BG_SKY;
    _BGMode["BG_CANVAS"] = Environment::BGMode::BG_CANVAS;
    _BGMode["BG_KEEP"] = Environment::BGMode::BG_KEEP;
    _BGMode["BG_CAMERA_FEED"] = Environment::BGMode::BG_CAMERA_FEED;
    _BGMode["BG_MAX"] = Environment::BGMode::BG_MAX;
    _module.add("BGMode", std::move(_BGMode));
    qjs::Value _AmbientSource = context->newObject();
    _AmbientSource["AMBIENT_SOURCE_BG"] = Environment::AmbientSource::AMBIENT_SOURCE_BG;
    _AmbientSource["AMBIENT_SOURCE_DISABLED"] = Environment::AmbientSource::AMBIENT_SOURCE_DISABLED;
    _AmbientSource["AMBIENT_SOURCE_COLOR"] = Environment::AmbientSource::AMBIENT_SOURCE_COLOR;
    _AmbientSource["AMBIENT_SOURCE_SKY"] = Environment::AmbientSource::AMBIENT_SOURCE_SKY;
    _module.add("AmbientSource", std::move(_AmbientSource));
    qjs::Value _ReflectionSource = context->newObject();
    _ReflectionSource["REFLECTION_SOURCE_BG"] = Environment::ReflectionSource::REFLECTION_SOURCE_BG;
    _ReflectionSource["REFLECTION_SOURCE_DISABLED"] = Environment::ReflectionSource::REFLECTION_SOURCE_DISABLED;
    _ReflectionSource["REFLECTION_SOURCE_SKY"] = Environment::ReflectionSource::REFLECTION_SOURCE_SKY;
    _module.add("ReflectionSource", std::move(_ReflectionSource));
    qjs::Value _ToneMapper = context->newObject();
    _ToneMapper["TONE_MAPPER_LINEAR"] = Environment::ToneMapper::TONE_MAPPER_LINEAR;
    _ToneMapper["TONE_MAPPER_REINHARDT"] = Environment::ToneMapper::TONE_MAPPER_REINHARDT;
    _ToneMapper["TONE_MAPPER_FILMIC"] = Environment::ToneMapper::TONE_MAPPER_FILMIC;
    _ToneMapper["TONE_MAPPER_ACES"] = Environment::ToneMapper::TONE_MAPPER_ACES;
    _module.add("ToneMapper", std::move(_ToneMapper));
    qjs::Value _GlowBlendMode = context->newObject();
    _GlowBlendMode["GLOW_BLEND_MODE_ADDITIVE"] = Environment::GlowBlendMode::GLOW_BLEND_MODE_ADDITIVE;
    _GlowBlendMode["GLOW_BLEND_MODE_SCREEN"] = Environment::GlowBlendMode::GLOW_BLEND_MODE_SCREEN;
    _GlowBlendMode["GLOW_BLEND_MODE_SOFTLIGHT"] = Environment::GlowBlendMode::GLOW_BLEND_MODE_SOFTLIGHT;
    _GlowBlendMode["GLOW_BLEND_MODE_REPLACE"] = Environment::GlowBlendMode::GLOW_BLEND_MODE_REPLACE;
    _GlowBlendMode["GLOW_BLEND_MODE_MIX"] = Environment::GlowBlendMode::GLOW_BLEND_MODE_MIX;
    _module.add("GlowBlendMode", std::move(_GlowBlendMode));
    qjs::Value _FogMode = context->newObject();
    _FogMode["FOG_MODE_EXPONENTIAL"] = Environment::FogMode::FOG_MODE_EXPONENTIAL;
    _FogMode["FOG_MODE_DEPTH"] = Environment::FogMode::FOG_MODE_DEPTH;
    _module.add("FogMode", std::move(_FogMode));
    qjs::Value _SDFGIYScale = context->newObject();
    _SDFGIYScale["SDFGI_Y_SCALE_50_PERCENT"] = Environment::SDFGIYScale::SDFGI_Y_SCALE_50_PERCENT;
    _SDFGIYScale["SDFGI_Y_SCALE_75_PERCENT"] = Environment::SDFGIYScale::SDFGI_Y_SCALE_75_PERCENT;
    _SDFGIYScale["SDFGI_Y_SCALE_100_PERCENT"] = Environment::SDFGIYScale::SDFGI_Y_SCALE_100_PERCENT;
    _module.add("SDFGIYScale", std::move(_SDFGIYScale));
}