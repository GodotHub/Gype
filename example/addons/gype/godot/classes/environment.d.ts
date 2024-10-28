
import { Sky } from "@godot/classes/sky";
import { Resource } from "@godot/classes/resource";
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
  public get background_mode(): number {
    get_background();
  }
  public set background_mode(value: number): void {
    set_background(value);
  }
  public get background_color(): Color {
    get_bg_color();
  }
  public set background_color(value: Color): void {
    set_bg_color(value);
  }
  public get background_energy_multiplier(): number {
    get_bg_energy_multiplier();
  }
  public set background_energy_multiplier(value: number): void {
    set_bg_energy_multiplier(value);
  }
  public get background_intensity(): number {
    get_bg_intensity();
  }
  public set background_intensity(value: number): void {
    set_bg_intensity(value);
  }
  public get background_canvas_max_layer(): number {
    get_canvas_max_layer();
  }
  public set background_canvas_max_layer(value: number): void {
    set_canvas_max_layer(value);
  }
  public get background_camera_feed_id(): number {
    get_camera_feed_id();
  }
  public set background_camera_feed_id(value: number): void {
    set_camera_feed_id(value);
  }
  public get sky(): Sky {
    get_sky();
  }
  public set sky(value: Sky): void {
    set_sky(value);
  }
  public get sky_custom_fov(): number {
    get_sky_custom_fov();
  }
  public set sky_custom_fov(value: number): void {
    set_sky_custom_fov(value);
  }
  public get sky_rotation(): Vector3 {
    get_sky_rotation();
  }
  public set sky_rotation(value: Vector3): void {
    set_sky_rotation(value);
  }
  public get ambient_light_source(): number {
    get_ambient_source();
  }
  public set ambient_light_source(value: number): void {
    set_ambient_source(value);
  }
  public get ambient_light_color(): Color {
    get_ambient_light_color();
  }
  public set ambient_light_color(value: Color): void {
    set_ambient_light_color(value);
  }
  public get ambient_light_sky_contribution(): number {
    get_ambient_light_sky_contribution();
  }
  public set ambient_light_sky_contribution(value: number): void {
    set_ambient_light_sky_contribution(value);
  }
  public get ambient_light_energy(): number {
    get_ambient_light_energy();
  }
  public set ambient_light_energy(value: number): void {
    set_ambient_light_energy(value);
  }
  public get reflected_light_source(): number {
    get_reflection_source();
  }
  public set reflected_light_source(value: number): void {
    set_reflection_source(value);
  }
  public get tonemap_mode(): number {
    get_tonemapper();
  }
  public set tonemap_mode(value: number): void {
    set_tonemapper(value);
  }
  public get tonemap_exposure(): number {
    get_tonemap_exposure();
  }
  public set tonemap_exposure(value: number): void {
    set_tonemap_exposure(value);
  }
  public get tonemap_white(): number {
    get_tonemap_white();
  }
  public set tonemap_white(value: number): void {
    set_tonemap_white(value);
  }
  public get ssr_enabled(): boolean {
    is_ssr_enabled();
  }
  public set ssr_enabled(value: boolean): void {
    set_ssr_enabled(value);
  }
  public get ssr_max_steps(): number {
    get_ssr_max_steps();
  }
  public set ssr_max_steps(value: number): void {
    set_ssr_max_steps(value);
  }
  public get ssr_fade_in(): number {
    get_ssr_fade_in();
  }
  public set ssr_fade_in(value: number): void {
    set_ssr_fade_in(value);
  }
  public get ssr_fade_out(): number {
    get_ssr_fade_out();
  }
  public set ssr_fade_out(value: number): void {
    set_ssr_fade_out(value);
  }
  public get ssr_depth_tolerance(): number {
    get_ssr_depth_tolerance();
  }
  public set ssr_depth_tolerance(value: number): void {
    set_ssr_depth_tolerance(value);
  }
  public get ssao_enabled(): boolean {
    is_ssao_enabled();
  }
  public set ssao_enabled(value: boolean): void {
    set_ssao_enabled(value);
  }
  public get ssao_radius(): number {
    get_ssao_radius();
  }
  public set ssao_radius(value: number): void {
    set_ssao_radius(value);
  }
  public get ssao_intensity(): number {
    get_ssao_intensity();
  }
  public set ssao_intensity(value: number): void {
    set_ssao_intensity(value);
  }
  public get ssao_power(): number {
    get_ssao_power();
  }
  public set ssao_power(value: number): void {
    set_ssao_power(value);
  }
  public get ssao_detail(): number {
    get_ssao_detail();
  }
  public set ssao_detail(value: number): void {
    set_ssao_detail(value);
  }
  public get ssao_horizon(): number {
    get_ssao_horizon();
  }
  public set ssao_horizon(value: number): void {
    set_ssao_horizon(value);
  }
  public get ssao_sharpness(): number {
    get_ssao_sharpness();
  }
  public set ssao_sharpness(value: number): void {
    set_ssao_sharpness(value);
  }
  public get ssao_light_affect(): number {
    get_ssao_direct_light_affect();
  }
  public set ssao_light_affect(value: number): void {
    set_ssao_direct_light_affect(value);
  }
  public get ssao_ao_channel_affect(): number {
    get_ssao_ao_channel_affect();
  }
  public set ssao_ao_channel_affect(value: number): void {
    set_ssao_ao_channel_affect(value);
  }
  public get ssil_enabled(): boolean {
    is_ssil_enabled();
  }
  public set ssil_enabled(value: boolean): void {
    set_ssil_enabled(value);
  }
  public get ssil_radius(): number {
    get_ssil_radius();
  }
  public set ssil_radius(value: number): void {
    set_ssil_radius(value);
  }
  public get ssil_intensity(): number {
    get_ssil_intensity();
  }
  public set ssil_intensity(value: number): void {
    set_ssil_intensity(value);
  }
  public get ssil_sharpness(): number {
    get_ssil_sharpness();
  }
  public set ssil_sharpness(value: number): void {
    set_ssil_sharpness(value);
  }
  public get ssil_normal_rejection(): number {
    get_ssil_normal_rejection();
  }
  public set ssil_normal_rejection(value: number): void {
    set_ssil_normal_rejection(value);
  }
  public get sdfgi_enabled(): boolean {
    is_sdfgi_enabled();
  }
  public set sdfgi_enabled(value: boolean): void {
    set_sdfgi_enabled(value);
  }
  public get sdfgi_use_occlusion(): boolean {
    is_sdfgi_using_occlusion();
  }
  public set sdfgi_use_occlusion(value: boolean): void {
    set_sdfgi_use_occlusion(value);
  }
  public get sdfgi_read_sky_light(): boolean {
    is_sdfgi_reading_sky_light();
  }
  public set sdfgi_read_sky_light(value: boolean): void {
    set_sdfgi_read_sky_light(value);
  }
  public get sdfgi_bounce_feedback(): number {
    get_sdfgi_bounce_feedback();
  }
  public set sdfgi_bounce_feedback(value: number): void {
    set_sdfgi_bounce_feedback(value);
  }
  public get sdfgi_cascades(): number {
    get_sdfgi_cascades();
  }
  public set sdfgi_cascades(value: number): void {
    set_sdfgi_cascades(value);
  }
  public get sdfgi_min_cell_size(): number {
    get_sdfgi_min_cell_size();
  }
  public set sdfgi_min_cell_size(value: number): void {
    set_sdfgi_min_cell_size(value);
  }
  public get sdfgi_cascade0_distance(): number {
    get_sdfgi_cascade0_distance();
  }
  public set sdfgi_cascade0_distance(value: number): void {
    set_sdfgi_cascade0_distance(value);
  }
  public get sdfgi_max_distance(): number {
    get_sdfgi_max_distance();
  }
  public set sdfgi_max_distance(value: number): void {
    set_sdfgi_max_distance(value);
  }
  public get sdfgi_y_scale(): number {
    get_sdfgi_y_scale();
  }
  public set sdfgi_y_scale(value: number): void {
    set_sdfgi_y_scale(value);
  }
  public get sdfgi_energy(): number {
    get_sdfgi_energy();
  }
  public set sdfgi_energy(value: number): void {
    set_sdfgi_energy(value);
  }
  public get sdfgi_normal_bias(): number {
    get_sdfgi_normal_bias();
  }
  public set sdfgi_normal_bias(value: number): void {
    set_sdfgi_normal_bias(value);
  }
  public get sdfgi_probe_bias(): number {
    get_sdfgi_probe_bias();
  }
  public set sdfgi_probe_bias(value: number): void {
    set_sdfgi_probe_bias(value);
  }
  public get glow_enabled(): boolean {
    is_glow_enabled();
  }
  public set glow_enabled(value: boolean): void {
    set_glow_enabled(value);
  }
  public get glow_normalized(): boolean {
    is_glow_normalized();
  }
  public set glow_normalized(value: boolean): void {
    set_glow_normalized(value);
  }
  public get glow_intensity(): number {
    get_glow_intensity();
  }
  public set glow_intensity(value: number): void {
    set_glow_intensity(value);
  }
  public get glow_strength(): number {
    get_glow_strength();
  }
  public set glow_strength(value: number): void {
    set_glow_strength(value);
  }
  public get glow_mix(): number {
    get_glow_mix();
  }
  public set glow_mix(value: number): void {
    set_glow_mix(value);
  }
  public get glow_bloom(): number {
    get_glow_bloom();
  }
  public set glow_bloom(value: number): void {
    set_glow_bloom(value);
  }
  public get glow_blend_mode(): number {
    get_glow_blend_mode();
  }
  public set glow_blend_mode(value: number): void {
    set_glow_blend_mode(value);
  }
  public get glow_hdr_threshold(): number {
    get_glow_hdr_bleed_threshold();
  }
  public set glow_hdr_threshold(value: number): void {
    set_glow_hdr_bleed_threshold(value);
  }
  public get glow_hdr_scale(): number {
    get_glow_hdr_bleed_scale();
  }
  public set glow_hdr_scale(value: number): void {
    set_glow_hdr_bleed_scale(value);
  }
  public get glow_hdr_luminance_cap(): number {
    get_glow_hdr_luminance_cap();
  }
  public set glow_hdr_luminance_cap(value: number): void {
    set_glow_hdr_luminance_cap(value);
  }
  public get glow_map_strength(): number {
    get_glow_map_strength();
  }
  public set glow_map_strength(value: number): void {
    set_glow_map_strength(value);
  }
  public get glow_map(): Texture2D {
    get_glow_map();
  }
  public set glow_map(value: Texture2D): void {
    set_glow_map(value);
  }
  public get fog_enabled(): boolean {
    is_fog_enabled();
  }
  public set fog_enabled(value: boolean): void {
    set_fog_enabled(value);
  }
  public get fog_mode(): number {
    get_fog_mode();
  }
  public set fog_mode(value: number): void {
    set_fog_mode(value);
  }
  public get fog_light_color(): Color {
    get_fog_light_color();
  }
  public set fog_light_color(value: Color): void {
    set_fog_light_color(value);
  }
  public get fog_light_energy(): number {
    get_fog_light_energy();
  }
  public set fog_light_energy(value: number): void {
    set_fog_light_energy(value);
  }
  public get fog_sun_scatter(): number {
    get_fog_sun_scatter();
  }
  public set fog_sun_scatter(value: number): void {
    set_fog_sun_scatter(value);
  }
  public get fog_density(): number {
    get_fog_density();
  }
  public set fog_density(value: number): void {
    set_fog_density(value);
  }
  public get fog_aerial_perspective(): number {
    get_fog_aerial_perspective();
  }
  public set fog_aerial_perspective(value: number): void {
    set_fog_aerial_perspective(value);
  }
  public get fog_sky_affect(): number {
    get_fog_sky_affect();
  }
  public set fog_sky_affect(value: number): void {
    set_fog_sky_affect(value);
  }
  public get fog_height(): number {
    get_fog_height();
  }
  public set fog_height(value: number): void {
    set_fog_height(value);
  }
  public get fog_height_density(): number {
    get_fog_height_density();
  }
  public set fog_height_density(value: number): void {
    set_fog_height_density(value);
  }
  public get fog_depth_curve(): number {
    get_fog_depth_curve();
  }
  public set fog_depth_curve(value: number): void {
    set_fog_depth_curve(value);
  }
  public get fog_depth_begin(): number {
    get_fog_depth_begin();
  }
  public set fog_depth_begin(value: number): void {
    set_fog_depth_begin(value);
  }
  public get fog_depth_end(): number {
    get_fog_depth_end();
  }
  public set fog_depth_end(value: number): void {
    set_fog_depth_end(value);
  }
  public get volumetric_fog_enabled(): boolean {
    is_volumetric_fog_enabled();
  }
  public set volumetric_fog_enabled(value: boolean): void {
    set_volumetric_fog_enabled(value);
  }
  public get volumetric_fog_density(): number {
    get_volumetric_fog_density();
  }
  public set volumetric_fog_density(value: number): void {
    set_volumetric_fog_density(value);
  }
  public get volumetric_fog_albedo(): Color {
    get_volumetric_fog_albedo();
  }
  public set volumetric_fog_albedo(value: Color): void {
    set_volumetric_fog_albedo(value);
  }
  public get volumetric_fog_emission(): Color {
    get_volumetric_fog_emission();
  }
  public set volumetric_fog_emission(value: Color): void {
    set_volumetric_fog_emission(value);
  }
  public get volumetric_fog_emission_energy(): number {
    get_volumetric_fog_emission_energy();
  }
  public set volumetric_fog_emission_energy(value: number): void {
    set_volumetric_fog_emission_energy(value);
  }
  public get volumetric_fog_gi_inject(): number {
    get_volumetric_fog_gi_inject();
  }
  public set volumetric_fog_gi_inject(value: number): void {
    set_volumetric_fog_gi_inject(value);
  }
  public get volumetric_fog_anisotropy(): number {
    get_volumetric_fog_anisotropy();
  }
  public set volumetric_fog_anisotropy(value: number): void {
    set_volumetric_fog_anisotropy(value);
  }
  public get volumetric_fog_length(): number {
    get_volumetric_fog_length();
  }
  public set volumetric_fog_length(value: number): void {
    set_volumetric_fog_length(value);
  }
  public get volumetric_fog_detail_spread(): number {
    get_volumetric_fog_detail_spread();
  }
  public set volumetric_fog_detail_spread(value: number): void {
    set_volumetric_fog_detail_spread(value);
  }
  public get volumetric_fog_ambient_inject(): number {
    get_volumetric_fog_ambient_inject();
  }
  public set volumetric_fog_ambient_inject(value: number): void {
    set_volumetric_fog_ambient_inject(value);
  }
  public get volumetric_fog_sky_affect(): number {
    get_volumetric_fog_sky_affect();
  }
  public set volumetric_fog_sky_affect(value: number): void {
    set_volumetric_fog_sky_affect(value);
  }
  public get volumetric_fog_temporal_reprojection_enabled(): boolean {
    is_volumetric_fog_temporal_reprojection_enabled();
  }
  public set volumetric_fog_temporal_reprojection_enabled(value: boolean): void {
    set_volumetric_fog_temporal_reprojection_enabled(value);
  }
  public get volumetric_fog_temporal_reprojection_amount(): number {
    get_volumetric_fog_temporal_reprojection_amount();
  }
  public set volumetric_fog_temporal_reprojection_amount(value: number): void {
    set_volumetric_fog_temporal_reprojection_amount(value);
  }
  public get adjustment_enabled(): boolean {
    is_adjustment_enabled();
  }
  public set adjustment_enabled(value: boolean): void {
    set_adjustment_enabled(value);
  }
  public get adjustment_brightness(): number {
    get_adjustment_brightness();
  }
  public set adjustment_brightness(value: number): void {
    set_adjustment_brightness(value);
  }
  public get adjustment_contrast(): number {
    get_adjustment_contrast();
  }
  public set adjustment_contrast(value: number): void {
    set_adjustment_contrast(value);
  }
  public get adjustment_saturation(): number {
    get_adjustment_saturation();
  }
  public set adjustment_saturation(value: number): void {
    set_adjustment_saturation(value);
  }
  public get adjustment_color_correction(): Texture2D,Texture3D {
    get_adjustment_color_correction();
  }
  public set adjustment_color_correction(value: Texture2D,Texture3D): void {
    set_adjustment_color_correction(value);
  }
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