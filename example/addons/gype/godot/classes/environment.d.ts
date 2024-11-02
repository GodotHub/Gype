
import { Resource } from "@godot/classes/resource";
import { Sky } from "@godot/classes/sky";
import { Texture } from "@godot/classes/texture";


export declare class Environment extends Resource{
  public set_background(_mode: number): void;
  public get_background(): number;
  public set_sky(_sky: Sky): void;
  public get_sky(): Sky;
  public set_sky_custom_fov(_scale: number): void;
  public get_sky_custom_fov(): number;
  public set_sky_rotation(_euler_radians: Vector3): void;
  public get_sky_rotation(): Vector3;
  public set_bg_color(_color: Color): void;
  public get_bg_color(): Color;
  public set_bg_energy_multiplier(_energy: number): void;
  public get_bg_energy_multiplier(): number;
  public set_bg_intensity(_energy: number): void;
  public get_bg_intensity(): number;
  public set_canvas_max_layer(_layer: number): void;
  public get_canvas_max_layer(): number;
  public set_camera_feed_id(_id: number): void;
  public get_camera_feed_id(): number;
  public set_ambient_light_color(_color: Color): void;
  public get_ambient_light_color(): Color;
  public set_ambient_source(_source: number): void;
  public get_ambient_source(): number;
  public set_ambient_light_energy(_energy: number): void;
  public get_ambient_light_energy(): number;
  public set_ambient_light_sky_contribution(_ratio: number): void;
  public get_ambient_light_sky_contribution(): number;
  public set_reflection_source(_source: number): void;
  public get_reflection_source(): number;
  public set_tonemapper(_mode: number): void;
  public get_tonemapper(): number;
  public set_tonemap_exposure(_exposure: number): void;
  public get_tonemap_exposure(): number;
  public set_tonemap_white(_white: number): void;
  public get_tonemap_white(): number;
  public set_ssr_enabled(_enabled: boolean): void;
  public is_ssr_enabled(): boolean;
  public set_ssr_max_steps(_max_steps: number): void;
  public get_ssr_max_steps(): number;
  public set_ssr_fade_in(_fade_in: number): void;
  public get_ssr_fade_in(): number;
  public set_ssr_fade_out(_fade_out: number): void;
  public get_ssr_fade_out(): number;
  public set_ssr_depth_tolerance(_depth_tolerance: number): void;
  public get_ssr_depth_tolerance(): number;
  public set_ssao_enabled(_enabled: boolean): void;
  public is_ssao_enabled(): boolean;
  public set_ssao_radius(_radius: number): void;
  public get_ssao_radius(): number;
  public set_ssao_intensity(_intensity: number): void;
  public get_ssao_intensity(): number;
  public set_ssao_power(_power: number): void;
  public get_ssao_power(): number;
  public set_ssao_detail(_detail: number): void;
  public get_ssao_detail(): number;
  public set_ssao_horizon(_horizon: number): void;
  public get_ssao_horizon(): number;
  public set_ssao_sharpness(_sharpness: number): void;
  public get_ssao_sharpness(): number;
  public set_ssao_direct_light_affect(_amount: number): void;
  public get_ssao_direct_light_affect(): number;
  public set_ssao_ao_channel_affect(_amount: number): void;
  public get_ssao_ao_channel_affect(): number;
  public set_ssil_enabled(_enabled: boolean): void;
  public is_ssil_enabled(): boolean;
  public set_ssil_radius(_radius: number): void;
  public get_ssil_radius(): number;
  public set_ssil_intensity(_intensity: number): void;
  public get_ssil_intensity(): number;
  public set_ssil_sharpness(_sharpness: number): void;
  public get_ssil_sharpness(): number;
  public set_ssil_normal_rejection(_normal_rejection: number): void;
  public get_ssil_normal_rejection(): number;
  public set_sdfgi_enabled(_enabled: boolean): void;
  public is_sdfgi_enabled(): boolean;
  public set_sdfgi_cascades(_amount: number): void;
  public get_sdfgi_cascades(): number;
  public set_sdfgi_min_cell_size(_size: number): void;
  public get_sdfgi_min_cell_size(): number;
  public set_sdfgi_max_distance(_distance: number): void;
  public get_sdfgi_max_distance(): number;
  public set_sdfgi_cascade0_distance(_distance: number): void;
  public get_sdfgi_cascade0_distance(): number;
  public set_sdfgi_y_scale(_scale: number): void;
  public get_sdfgi_y_scale(): number;
  public set_sdfgi_use_occlusion(_enable: boolean): void;
  public is_sdfgi_using_occlusion(): boolean;
  public set_sdfgi_bounce_feedback(_amount: number): void;
  public get_sdfgi_bounce_feedback(): number;
  public set_sdfgi_read_sky_light(_enable: boolean): void;
  public is_sdfgi_reading_sky_light(): boolean;
  public set_sdfgi_energy(_amount: number): void;
  public get_sdfgi_energy(): number;
  public set_sdfgi_normal_bias(_bias: number): void;
  public get_sdfgi_normal_bias(): number;
  public set_sdfgi_probe_bias(_bias: number): void;
  public get_sdfgi_probe_bias(): number;
  public set_glow_enabled(_enabled: boolean): void;
  public is_glow_enabled(): boolean;
  public set_glow_level(_idx: number, _intensity: number): void;
  public get_glow_level(_idx: number): number;
  public set_glow_normalized(_normalize: boolean): void;
  public is_glow_normalized(): boolean;
  public set_glow_intensity(_intensity: number): void;
  public get_glow_intensity(): number;
  public set_glow_strength(_strength: number): void;
  public get_glow_strength(): number;
  public set_glow_mix(_mix: number): void;
  public get_glow_mix(): number;
  public set_glow_bloom(_amount: number): void;
  public get_glow_bloom(): number;
  public set_glow_blend_mode(_mode: number): void;
  public get_glow_blend_mode(): number;
  public set_glow_hdr_bleed_threshold(_threshold: number): void;
  public get_glow_hdr_bleed_threshold(): number;
  public set_glow_hdr_bleed_scale(_scale: number): void;
  public get_glow_hdr_bleed_scale(): number;
  public set_glow_hdr_luminance_cap(_amount: number): void;
  public get_glow_hdr_luminance_cap(): number;
  public set_glow_map_strength(_strength: number): void;
  public get_glow_map_strength(): number;
  public set_glow_map(_mode: Texture): void;
  public get_glow_map(): Texture;
  public set_fog_enabled(_enabled: boolean): void;
  public is_fog_enabled(): boolean;
  public set_fog_mode(_mode: number): void;
  public get_fog_mode(): number;
  public set_fog_light_color(_light_color: Color): void;
  public get_fog_light_color(): Color;
  public set_fog_light_energy(_light_energy: number): void;
  public get_fog_light_energy(): number;
  public set_fog_sun_scatter(_sun_scatter: number): void;
  public get_fog_sun_scatter(): number;
  public set_fog_density(_density: number): void;
  public get_fog_density(): number;
  public set_fog_height(_height: number): void;
  public get_fog_height(): number;
  public set_fog_height_density(_height_density: number): void;
  public get_fog_height_density(): number;
  public set_fog_aerial_perspective(_aerial_perspective: number): void;
  public get_fog_aerial_perspective(): number;
  public set_fog_sky_affect(_sky_affect: number): void;
  public get_fog_sky_affect(): number;
  public set_fog_depth_curve(_curve: number): void;
  public get_fog_depth_curve(): number;
  public set_fog_depth_begin(_begin: number): void;
  public get_fog_depth_begin(): number;
  public set_fog_depth_end(_end: number): void;
  public get_fog_depth_end(): number;
  public set_volumetric_fog_enabled(_enabled: boolean): void;
  public is_volumetric_fog_enabled(): boolean;
  public set_volumetric_fog_emission(_color: Color): void;
  public get_volumetric_fog_emission(): Color;
  public set_volumetric_fog_albedo(_color: Color): void;
  public get_volumetric_fog_albedo(): Color;
  public set_volumetric_fog_density(_density: number): void;
  public get_volumetric_fog_density(): number;
  public set_volumetric_fog_emission_energy(_begin: number): void;
  public get_volumetric_fog_emission_energy(): number;
  public set_volumetric_fog_anisotropy(_anisotropy: number): void;
  public get_volumetric_fog_anisotropy(): number;
  public set_volumetric_fog_length(_length: number): void;
  public get_volumetric_fog_length(): number;
  public set_volumetric_fog_detail_spread(_detail_spread: number): void;
  public get_volumetric_fog_detail_spread(): number;
  public set_volumetric_fog_gi_inject(_gi_inject: number): void;
  public get_volumetric_fog_gi_inject(): number;
  public set_volumetric_fog_ambient_inject(_enabled: number): void;
  public get_volumetric_fog_ambient_inject(): number;
  public set_volumetric_fog_sky_affect(_sky_affect: number): void;
  public get_volumetric_fog_sky_affect(): number;
  public set_volumetric_fog_temporal_reprojection_enabled(_enabled: boolean): void;
  public is_volumetric_fog_temporal_reprojection_enabled(): boolean;
  public set_volumetric_fog_temporal_reprojection_amount(_temporal_reprojection_amount: number): void;
  public get_volumetric_fog_temporal_reprojection_amount(): number;
  public set_adjustment_enabled(_enabled: boolean): void;
  public is_adjustment_enabled(): boolean;
  public set_adjustment_brightness(_brightness: number): void;
  public get_adjustment_brightness(): number;
  public set_adjustment_contrast(_contrast: number): void;
  public get_adjustment_contrast(): number;
  public set_adjustment_saturation(_saturation: number): void;
  public get_adjustment_saturation(): number;
  public set_adjustment_color_correction(_color_correction: Texture): void;
  public get_adjustment_color_correction(): Texture;
  public get background_mode(): number;
  public set background_mode(value): void;
  public get background_color(): Color;
  public set background_color(value): void;
  public get background_energy_multiplier(): number;
  public set background_energy_multiplier(value): void;
  public get background_intensity(): number;
  public set background_intensity(value): void;
  public get background_canvas_max_layer(): number;
  public set background_canvas_max_layer(value): void;
  public get background_camera_feed_id(): number;
  public set background_camera_feed_id(value): void;
  public get sky(): Sky;
  public set sky(value): void;
  public get sky_custom_fov(): number;
  public set sky_custom_fov(value): void;
  public get sky_rotation(): Vector3;
  public set sky_rotation(value): void;
  public get ambient_light_source(): number;
  public set ambient_light_source(value): void;
  public get ambient_light_color(): Color;
  public set ambient_light_color(value): void;
  public get ambient_light_sky_contribution(): number;
  public set ambient_light_sky_contribution(value): void;
  public get ambient_light_energy(): number;
  public set ambient_light_energy(value): void;
  public get reflected_light_source(): number;
  public set reflected_light_source(value): void;
  public get tonemap_mode(): number;
  public set tonemap_mode(value): void;
  public get tonemap_exposure(): number;
  public set tonemap_exposure(value): void;
  public get tonemap_white(): number;
  public set tonemap_white(value): void;
  public get ssr_enabled(): boolean;
  public set ssr_enabled(value): void;
  public get ssr_max_steps(): number;
  public set ssr_max_steps(value): void;
  public get ssr_fade_in(): number;
  public set ssr_fade_in(value): void;
  public get ssr_fade_out(): number;
  public set ssr_fade_out(value): void;
  public get ssr_depth_tolerance(): number;
  public set ssr_depth_tolerance(value): void;
  public get ssao_enabled(): boolean;
  public set ssao_enabled(value): void;
  public get ssao_radius(): number;
  public set ssao_radius(value): void;
  public get ssao_intensity(): number;
  public set ssao_intensity(value): void;
  public get ssao_power(): number;
  public set ssao_power(value): void;
  public get ssao_detail(): number;
  public set ssao_detail(value): void;
  public get ssao_horizon(): number;
  public set ssao_horizon(value): void;
  public get ssao_sharpness(): number;
  public set ssao_sharpness(value): void;
  public get ssao_light_affect(): number;
  public set ssao_light_affect(value): void;
  public get ssao_ao_channel_affect(): number;
  public set ssao_ao_channel_affect(value): void;
  public get ssil_enabled(): boolean;
  public set ssil_enabled(value): void;
  public get ssil_radius(): number;
  public set ssil_radius(value): void;
  public get ssil_intensity(): number;
  public set ssil_intensity(value): void;
  public get ssil_sharpness(): number;
  public set ssil_sharpness(value): void;
  public get ssil_normal_rejection(): number;
  public set ssil_normal_rejection(value): void;
  public get sdfgi_enabled(): boolean;
  public set sdfgi_enabled(value): void;
  public get sdfgi_use_occlusion(): boolean;
  public set sdfgi_use_occlusion(value): void;
  public get sdfgi_read_sky_light(): boolean;
  public set sdfgi_read_sky_light(value): void;
  public get sdfgi_bounce_feedback(): number;
  public set sdfgi_bounce_feedback(value): void;
  public get sdfgi_cascades(): number;
  public set sdfgi_cascades(value): void;
  public get sdfgi_min_cell_size(): number;
  public set sdfgi_min_cell_size(value): void;
  public get sdfgi_cascade0_distance(): number;
  public set sdfgi_cascade0_distance(value): void;
  public get sdfgi_max_distance(): number;
  public set sdfgi_max_distance(value): void;
  public get sdfgi_y_scale(): number;
  public set sdfgi_y_scale(value): void;
  public get sdfgi_energy(): number;
  public set sdfgi_energy(value): void;
  public get sdfgi_normal_bias(): number;
  public set sdfgi_normal_bias(value): void;
  public get sdfgi_probe_bias(): number;
  public set sdfgi_probe_bias(value): void;
  public get glow_enabled(): boolean;
  public set glow_enabled(value): void;
  public get glow_normalized(): boolean;
  public set glow_normalized(value): void;
  public get glow_intensity(): number;
  public set glow_intensity(value): void;
  public get glow_strength(): number;
  public set glow_strength(value): void;
  public get glow_mix(): number;
  public set glow_mix(value): void;
  public get glow_bloom(): number;
  public set glow_bloom(value): void;
  public get glow_blend_mode(): number;
  public set glow_blend_mode(value): void;
  public get glow_hdr_threshold(): number;
  public set glow_hdr_threshold(value): void;
  public get glow_hdr_scale(): number;
  public set glow_hdr_scale(value): void;
  public get glow_hdr_luminance_cap(): number;
  public set glow_hdr_luminance_cap(value): void;
  public get glow_map_strength(): number;
  public set glow_map_strength(value): void;
  public get glow_map(): Texture2D;
  public set glow_map(value): void;
  public get fog_enabled(): boolean;
  public set fog_enabled(value): void;
  public get fog_mode(): number;
  public set fog_mode(value): void;
  public get fog_light_color(): Color;
  public set fog_light_color(value): void;
  public get fog_light_energy(): number;
  public set fog_light_energy(value): void;
  public get fog_sun_scatter(): number;
  public set fog_sun_scatter(value): void;
  public get fog_density(): number;
  public set fog_density(value): void;
  public get fog_aerial_perspective(): number;
  public set fog_aerial_perspective(value): void;
  public get fog_sky_affect(): number;
  public set fog_sky_affect(value): void;
  public get fog_height(): number;
  public set fog_height(value): void;
  public get fog_height_density(): number;
  public set fog_height_density(value): void;
  public get fog_depth_curve(): number;
  public set fog_depth_curve(value): void;
  public get fog_depth_begin(): number;
  public set fog_depth_begin(value): void;
  public get fog_depth_end(): number;
  public set fog_depth_end(value): void;
  public get volumetric_fog_enabled(): boolean;
  public set volumetric_fog_enabled(value): void;
  public get volumetric_fog_density(): number;
  public set volumetric_fog_density(value): void;
  public get volumetric_fog_albedo(): Color;
  public set volumetric_fog_albedo(value): void;
  public get volumetric_fog_emission(): Color;
  public set volumetric_fog_emission(value): void;
  public get volumetric_fog_emission_energy(): number;
  public set volumetric_fog_emission_energy(value): void;
  public get volumetric_fog_gi_inject(): number;
  public set volumetric_fog_gi_inject(value): void;
  public get volumetric_fog_anisotropy(): number;
  public set volumetric_fog_anisotropy(value): void;
  public get volumetric_fog_length(): number;
  public set volumetric_fog_length(value): void;
  public get volumetric_fog_detail_spread(): number;
  public set volumetric_fog_detail_spread(value): void;
  public get volumetric_fog_ambient_inject(): number;
  public set volumetric_fog_ambient_inject(value): void;
  public get volumetric_fog_sky_affect(): number;
  public set volumetric_fog_sky_affect(value): void;
  public get volumetric_fog_temporal_reprojection_enabled(): boolean;
  public set volumetric_fog_temporal_reprojection_enabled(value): void;
  public get volumetric_fog_temporal_reprojection_amount(): number;
  public set volumetric_fog_temporal_reprojection_amount(value): void;
  public get adjustment_enabled(): boolean;
  public set adjustment_enabled(value): void;
  public get adjustment_brightness(): number;
  public set adjustment_brightness(value): void;
  public get adjustment_contrast(): number;
  public set adjustment_contrast(value): void;
  public get adjustment_saturation(): number;
  public set adjustment_saturation(value): void;
  public get adjustment_color_correction(): Texture2D;
  public set adjustment_color_correction(value): void;
  static BGMode = {
    BG_CLEAR_COLOR = 0,
    BG_COLOR = 1,
    BG_SKY = 2,
    BG_CANVAS = 3,
    BG_KEEP = 4,
    BG_CAMERA_FEED = 5,
    BG_MAX = 6,
  }
  static AmbientSource = {
    AMBIENT_SOURCE_BG = 0,
    AMBIENT_SOURCE_DISABLED = 1,
    AMBIENT_SOURCE_COLOR = 2,
    AMBIENT_SOURCE_SKY = 3,
  }
  static ReflectionSource = {
    REFLECTION_SOURCE_BG = 0,
    REFLECTION_SOURCE_DISABLED = 1,
    REFLECTION_SOURCE_SKY = 2,
  }
  static ToneMapper = {
    TONE_MAPPER_LINEAR = 0,
    TONE_MAPPER_REINHARDT = 1,
    TONE_MAPPER_FILMIC = 2,
    TONE_MAPPER_ACES = 3,
  }
  static GlowBlendMode = {
    GLOW_BLEND_MODE_ADDITIVE = 0,
    GLOW_BLEND_MODE_SCREEN = 1,
    GLOW_BLEND_MODE_SOFTLIGHT = 2,
    GLOW_BLEND_MODE_REPLACE = 3,
    GLOW_BLEND_MODE_MIX = 4,
  }
  static FogMode = {
    FOG_MODE_EXPONENTIAL = 0,
    FOG_MODE_DEPTH = 1,
  }
  static SDFGIYScale = {
    SDFGI_Y_SCALE_50_PERCENT = 0,
    SDFGI_Y_SCALE_75_PERCENT = 1,
    SDFGI_Y_SCALE_100_PERCENT = 2,
  }
}