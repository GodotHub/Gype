import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { Resource } from '@js_godot/classes/resource'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_set_background;
  method_get_background;
  method_set_sky;
  method_get_sky;
  method_set_sky_custom_fov;
  method_get_sky_custom_fov;
  method_set_sky_rotation;
  method_get_sky_rotation;
  method_set_bg_color;
  method_get_bg_color;
  method_set_bg_energy_multiplier;
  method_get_bg_energy_multiplier;
  method_set_bg_intensity;
  method_get_bg_intensity;
  method_set_canvas_max_layer;
  method_get_canvas_max_layer;
  method_set_camera_feed_id;
  method_get_camera_feed_id;
  method_set_ambient_light_color;
  method_get_ambient_light_color;
  method_set_ambient_source;
  method_get_ambient_source;
  method_set_ambient_light_energy;
  method_get_ambient_light_energy;
  method_set_ambient_light_sky_contribution;
  method_get_ambient_light_sky_contribution;
  method_set_reflection_source;
  method_get_reflection_source;
  method_set_tonemapper;
  method_get_tonemapper;
  method_set_tonemap_exposure;
  method_get_tonemap_exposure;
  method_set_tonemap_white;
  method_get_tonemap_white;
  method_set_ssr_enabled;
  method_is_ssr_enabled;
  method_set_ssr_max_steps;
  method_get_ssr_max_steps;
  method_set_ssr_fade_in;
  method_get_ssr_fade_in;
  method_set_ssr_fade_out;
  method_get_ssr_fade_out;
  method_set_ssr_depth_tolerance;
  method_get_ssr_depth_tolerance;
  method_set_ssao_enabled;
  method_is_ssao_enabled;
  method_set_ssao_radius;
  method_get_ssao_radius;
  method_set_ssao_intensity;
  method_get_ssao_intensity;
  method_set_ssao_power;
  method_get_ssao_power;
  method_set_ssao_detail;
  method_get_ssao_detail;
  method_set_ssao_horizon;
  method_get_ssao_horizon;
  method_set_ssao_sharpness;
  method_get_ssao_sharpness;
  method_set_ssao_direct_light_affect;
  method_get_ssao_direct_light_affect;
  method_set_ssao_ao_channel_affect;
  method_get_ssao_ao_channel_affect;
  method_set_ssil_enabled;
  method_is_ssil_enabled;
  method_set_ssil_radius;
  method_get_ssil_radius;
  method_set_ssil_intensity;
  method_get_ssil_intensity;
  method_set_ssil_sharpness;
  method_get_ssil_sharpness;
  method_set_ssil_normal_rejection;
  method_get_ssil_normal_rejection;
  method_set_sdfgi_enabled;
  method_is_sdfgi_enabled;
  method_set_sdfgi_cascades;
  method_get_sdfgi_cascades;
  method_set_sdfgi_min_cell_size;
  method_get_sdfgi_min_cell_size;
  method_set_sdfgi_max_distance;
  method_get_sdfgi_max_distance;
  method_set_sdfgi_cascade0_distance;
  method_get_sdfgi_cascade0_distance;
  method_set_sdfgi_y_scale;
  method_get_sdfgi_y_scale;
  method_set_sdfgi_use_occlusion;
  method_is_sdfgi_using_occlusion;
  method_set_sdfgi_bounce_feedback;
  method_get_sdfgi_bounce_feedback;
  method_set_sdfgi_read_sky_light;
  method_is_sdfgi_reading_sky_light;
  method_set_sdfgi_energy;
  method_get_sdfgi_energy;
  method_set_sdfgi_normal_bias;
  method_get_sdfgi_normal_bias;
  method_set_sdfgi_probe_bias;
  method_get_sdfgi_probe_bias;
  method_set_glow_enabled;
  method_is_glow_enabled;
  method_set_glow_level;
  method_get_glow_level;
  method_set_glow_normalized;
  method_is_glow_normalized;
  method_set_glow_intensity;
  method_get_glow_intensity;
  method_set_glow_strength;
  method_get_glow_strength;
  method_set_glow_mix;
  method_get_glow_mix;
  method_set_glow_bloom;
  method_get_glow_bloom;
  method_set_glow_blend_mode;
  method_get_glow_blend_mode;
  method_set_glow_hdr_bleed_threshold;
  method_get_glow_hdr_bleed_threshold;
  method_set_glow_hdr_bleed_scale;
  method_get_glow_hdr_bleed_scale;
  method_set_glow_hdr_luminance_cap;
  method_get_glow_hdr_luminance_cap;
  method_set_glow_map_strength;
  method_get_glow_map_strength;
  method_set_glow_map;
  method_get_glow_map;
  method_set_fog_enabled;
  method_is_fog_enabled;
  method_set_fog_mode;
  method_get_fog_mode;
  method_set_fog_light_color;
  method_get_fog_light_color;
  method_set_fog_light_energy;
  method_get_fog_light_energy;
  method_set_fog_sun_scatter;
  method_get_fog_sun_scatter;
  method_set_fog_density;
  method_get_fog_density;
  method_set_fog_height;
  method_get_fog_height;
  method_set_fog_height_density;
  method_get_fog_height_density;
  method_set_fog_aerial_perspective;
  method_get_fog_aerial_perspective;
  method_set_fog_sky_affect;
  method_get_fog_sky_affect;
  method_set_fog_depth_curve;
  method_get_fog_depth_curve;
  method_set_fog_depth_begin;
  method_get_fog_depth_begin;
  method_set_fog_depth_end;
  method_get_fog_depth_end;
  method_set_volumetric_fog_enabled;
  method_is_volumetric_fog_enabled;
  method_set_volumetric_fog_emission;
  method_get_volumetric_fog_emission;
  method_set_volumetric_fog_albedo;
  method_get_volumetric_fog_albedo;
  method_set_volumetric_fog_density;
  method_get_volumetric_fog_density;
  method_set_volumetric_fog_emission_energy;
  method_get_volumetric_fog_emission_energy;
  method_set_volumetric_fog_anisotropy;
  method_get_volumetric_fog_anisotropy;
  method_set_volumetric_fog_length;
  method_get_volumetric_fog_length;
  method_set_volumetric_fog_detail_spread;
  method_get_volumetric_fog_detail_spread;
  method_set_volumetric_fog_gi_inject;
  method_get_volumetric_fog_gi_inject;
  method_set_volumetric_fog_ambient_inject;
  method_get_volumetric_fog_ambient_inject;
  method_set_volumetric_fog_sky_affect;
  method_get_volumetric_fog_sky_affect;
  method_set_volumetric_fog_temporal_reprojection_enabled;
  method_is_volumetric_fog_temporal_reprojection_enabled;
  method_set_volumetric_fog_temporal_reprojection_amount;
  method_get_volumetric_fog_temporal_reprojection_amount;
  method_set_adjustment_enabled;
  method_is_adjustment_enabled;
  method_set_adjustment_brightness;
  method_get_adjustment_brightness;
  method_set_adjustment_contrast;
  method_get_adjustment_contrast;
  method_set_adjustment_saturation;
  method_get_adjustment_saturation;
  method_set_adjustment_color_correction;
  method_get_adjustment_color_correction;
}
export class Environment extends Resource{

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("Environment");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_background() {
    if (!this.#_bindings.method_set_background) {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_background");
      this.#_bindings.method_set_background = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4071623990
      );
    }
  }
  static init_method_get_background() {
    if (!this.#_bindings.method_get_background) {
      let classname = new StringName("Environment");
      let methodname = new StringName("get_background");
      this.#_bindings.method_get_background = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1843210413
      );
    }
  }
  static init_method_set_sky() {
    if (!this.#_bindings.method_set_sky) {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_sky");
      this.#_bindings.method_set_sky = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3336722921
      );
    }
  }
  static init_method_get_sky() {
    if (!this.#_bindings.method_get_sky) {
      let classname = new StringName("Environment");
      let methodname = new StringName("get_sky");
      this.#_bindings.method_get_sky = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1177136966
      );
    }
  }
  static init_method_set_sky_custom_fov() {
    if (!this.#_bindings.method_set_sky_custom_fov) {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_sky_custom_fov");
      this.#_bindings.method_set_sky_custom_fov = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_sky_custom_fov() {
    if (!this.#_bindings.method_get_sky_custom_fov) {
      let classname = new StringName("Environment");
      let methodname = new StringName("get_sky_custom_fov");
      this.#_bindings.method_get_sky_custom_fov = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_sky_rotation() {
    if (!this.#_bindings.method_set_sky_rotation) {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_sky_rotation");
      this.#_bindings.method_set_sky_rotation = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3460891852
      );
    }
  }
  static init_method_get_sky_rotation() {
    if (!this.#_bindings.method_get_sky_rotation) {
      let classname = new StringName("Environment");
      let methodname = new StringName("get_sky_rotation");
      this.#_bindings.method_get_sky_rotation = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3360562783
      );
    }
  }
  static init_method_set_bg_color() {
    if (!this.#_bindings.method_set_bg_color) {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_bg_color");
      this.#_bindings.method_set_bg_color = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2920490490
      );
    }
  }
  static init_method_get_bg_color() {
    if (!this.#_bindings.method_get_bg_color) {
      let classname = new StringName("Environment");
      let methodname = new StringName("get_bg_color");
      this.#_bindings.method_get_bg_color = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3444240500
      );
    }
  }
  static init_method_set_bg_energy_multiplier() {
    if (!this.#_bindings.method_set_bg_energy_multiplier) {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_bg_energy_multiplier");
      this.#_bindings.method_set_bg_energy_multiplier = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_bg_energy_multiplier() {
    if (!this.#_bindings.method_get_bg_energy_multiplier) {
      let classname = new StringName("Environment");
      let methodname = new StringName("get_bg_energy_multiplier");
      this.#_bindings.method_get_bg_energy_multiplier = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_bg_intensity() {
    if (!this.#_bindings.method_set_bg_intensity) {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_bg_intensity");
      this.#_bindings.method_set_bg_intensity = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_bg_intensity() {
    if (!this.#_bindings.method_get_bg_intensity) {
      let classname = new StringName("Environment");
      let methodname = new StringName("get_bg_intensity");
      this.#_bindings.method_get_bg_intensity = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_canvas_max_layer() {
    if (!this.#_bindings.method_set_canvas_max_layer) {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_canvas_max_layer");
      this.#_bindings.method_set_canvas_max_layer = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_canvas_max_layer() {
    if (!this.#_bindings.method_get_canvas_max_layer) {
      let classname = new StringName("Environment");
      let methodname = new StringName("get_canvas_max_layer");
      this.#_bindings.method_get_canvas_max_layer = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_camera_feed_id() {
    if (!this.#_bindings.method_set_camera_feed_id) {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_camera_feed_id");
      this.#_bindings.method_set_camera_feed_id = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_camera_feed_id() {
    if (!this.#_bindings.method_get_camera_feed_id) {
      let classname = new StringName("Environment");
      let methodname = new StringName("get_camera_feed_id");
      this.#_bindings.method_get_camera_feed_id = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_ambient_light_color() {
    if (!this.#_bindings.method_set_ambient_light_color) {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_ambient_light_color");
      this.#_bindings.method_set_ambient_light_color = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2920490490
      );
    }
  }
  static init_method_get_ambient_light_color() {
    if (!this.#_bindings.method_get_ambient_light_color) {
      let classname = new StringName("Environment");
      let methodname = new StringName("get_ambient_light_color");
      this.#_bindings.method_get_ambient_light_color = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3444240500
      );
    }
  }
  static init_method_set_ambient_source() {
    if (!this.#_bindings.method_set_ambient_source) {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_ambient_source");
      this.#_bindings.method_set_ambient_source = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2607780160
      );
    }
  }
  static init_method_get_ambient_source() {
    if (!this.#_bindings.method_get_ambient_source) {
      let classname = new StringName("Environment");
      let methodname = new StringName("get_ambient_source");
      this.#_bindings.method_get_ambient_source = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        67453933
      );
    }
  }
  static init_method_set_ambient_light_energy() {
    if (!this.#_bindings.method_set_ambient_light_energy) {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_ambient_light_energy");
      this.#_bindings.method_set_ambient_light_energy = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_ambient_light_energy() {
    if (!this.#_bindings.method_get_ambient_light_energy) {
      let classname = new StringName("Environment");
      let methodname = new StringName("get_ambient_light_energy");
      this.#_bindings.method_get_ambient_light_energy = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_ambient_light_sky_contribution() {
    if (!this.#_bindings.method_set_ambient_light_sky_contribution) {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_ambient_light_sky_contribution");
      this.#_bindings.method_set_ambient_light_sky_contribution = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_ambient_light_sky_contribution() {
    if (!this.#_bindings.method_get_ambient_light_sky_contribution) {
      let classname = new StringName("Environment");
      let methodname = new StringName("get_ambient_light_sky_contribution");
      this.#_bindings.method_get_ambient_light_sky_contribution = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_reflection_source() {
    if (!this.#_bindings.method_set_reflection_source) {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_reflection_source");
      this.#_bindings.method_set_reflection_source = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        299673197
      );
    }
  }
  static init_method_get_reflection_source() {
    if (!this.#_bindings.method_get_reflection_source) {
      let classname = new StringName("Environment");
      let methodname = new StringName("get_reflection_source");
      this.#_bindings.method_get_reflection_source = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        777700713
      );
    }
  }
  static init_method_set_tonemapper() {
    if (!this.#_bindings.method_set_tonemapper) {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_tonemapper");
      this.#_bindings.method_set_tonemapper = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1509116664
      );
    }
  }
  static init_method_get_tonemapper() {
    if (!this.#_bindings.method_get_tonemapper) {
      let classname = new StringName("Environment");
      let methodname = new StringName("get_tonemapper");
      this.#_bindings.method_get_tonemapper = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2908408137
      );
    }
  }
  static init_method_set_tonemap_exposure() {
    if (!this.#_bindings.method_set_tonemap_exposure) {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_tonemap_exposure");
      this.#_bindings.method_set_tonemap_exposure = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_tonemap_exposure() {
    if (!this.#_bindings.method_get_tonemap_exposure) {
      let classname = new StringName("Environment");
      let methodname = new StringName("get_tonemap_exposure");
      this.#_bindings.method_get_tonemap_exposure = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_tonemap_white() {
    if (!this.#_bindings.method_set_tonemap_white) {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_tonemap_white");
      this.#_bindings.method_set_tonemap_white = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_tonemap_white() {
    if (!this.#_bindings.method_get_tonemap_white) {
      let classname = new StringName("Environment");
      let methodname = new StringName("get_tonemap_white");
      this.#_bindings.method_get_tonemap_white = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_ssr_enabled() {
    if (!this.#_bindings.method_set_ssr_enabled) {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_ssr_enabled");
      this.#_bindings.method_set_ssr_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_ssr_enabled() {
    if (!this.#_bindings.method_is_ssr_enabled) {
      let classname = new StringName("Environment");
      let methodname = new StringName("is_ssr_enabled");
      this.#_bindings.method_is_ssr_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_ssr_max_steps() {
    if (!this.#_bindings.method_set_ssr_max_steps) {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_ssr_max_steps");
      this.#_bindings.method_set_ssr_max_steps = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_ssr_max_steps() {
    if (!this.#_bindings.method_get_ssr_max_steps) {
      let classname = new StringName("Environment");
      let methodname = new StringName("get_ssr_max_steps");
      this.#_bindings.method_get_ssr_max_steps = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_ssr_fade_in() {
    if (!this.#_bindings.method_set_ssr_fade_in) {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_ssr_fade_in");
      this.#_bindings.method_set_ssr_fade_in = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_ssr_fade_in() {
    if (!this.#_bindings.method_get_ssr_fade_in) {
      let classname = new StringName("Environment");
      let methodname = new StringName("get_ssr_fade_in");
      this.#_bindings.method_get_ssr_fade_in = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_ssr_fade_out() {
    if (!this.#_bindings.method_set_ssr_fade_out) {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_ssr_fade_out");
      this.#_bindings.method_set_ssr_fade_out = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_ssr_fade_out() {
    if (!this.#_bindings.method_get_ssr_fade_out) {
      let classname = new StringName("Environment");
      let methodname = new StringName("get_ssr_fade_out");
      this.#_bindings.method_get_ssr_fade_out = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_ssr_depth_tolerance() {
    if (!this.#_bindings.method_set_ssr_depth_tolerance) {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_ssr_depth_tolerance");
      this.#_bindings.method_set_ssr_depth_tolerance = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_ssr_depth_tolerance() {
    if (!this.#_bindings.method_get_ssr_depth_tolerance) {
      let classname = new StringName("Environment");
      let methodname = new StringName("get_ssr_depth_tolerance");
      this.#_bindings.method_get_ssr_depth_tolerance = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_ssao_enabled() {
    if (!this.#_bindings.method_set_ssao_enabled) {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_ssao_enabled");
      this.#_bindings.method_set_ssao_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_ssao_enabled() {
    if (!this.#_bindings.method_is_ssao_enabled) {
      let classname = new StringName("Environment");
      let methodname = new StringName("is_ssao_enabled");
      this.#_bindings.method_is_ssao_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_ssao_radius() {
    if (!this.#_bindings.method_set_ssao_radius) {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_ssao_radius");
      this.#_bindings.method_set_ssao_radius = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_ssao_radius() {
    if (!this.#_bindings.method_get_ssao_radius) {
      let classname = new StringName("Environment");
      let methodname = new StringName("get_ssao_radius");
      this.#_bindings.method_get_ssao_radius = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_ssao_intensity() {
    if (!this.#_bindings.method_set_ssao_intensity) {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_ssao_intensity");
      this.#_bindings.method_set_ssao_intensity = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_ssao_intensity() {
    if (!this.#_bindings.method_get_ssao_intensity) {
      let classname = new StringName("Environment");
      let methodname = new StringName("get_ssao_intensity");
      this.#_bindings.method_get_ssao_intensity = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_ssao_power() {
    if (!this.#_bindings.method_set_ssao_power) {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_ssao_power");
      this.#_bindings.method_set_ssao_power = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_ssao_power() {
    if (!this.#_bindings.method_get_ssao_power) {
      let classname = new StringName("Environment");
      let methodname = new StringName("get_ssao_power");
      this.#_bindings.method_get_ssao_power = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_ssao_detail() {
    if (!this.#_bindings.method_set_ssao_detail) {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_ssao_detail");
      this.#_bindings.method_set_ssao_detail = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_ssao_detail() {
    if (!this.#_bindings.method_get_ssao_detail) {
      let classname = new StringName("Environment");
      let methodname = new StringName("get_ssao_detail");
      this.#_bindings.method_get_ssao_detail = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_ssao_horizon() {
    if (!this.#_bindings.method_set_ssao_horizon) {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_ssao_horizon");
      this.#_bindings.method_set_ssao_horizon = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_ssao_horizon() {
    if (!this.#_bindings.method_get_ssao_horizon) {
      let classname = new StringName("Environment");
      let methodname = new StringName("get_ssao_horizon");
      this.#_bindings.method_get_ssao_horizon = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_ssao_sharpness() {
    if (!this.#_bindings.method_set_ssao_sharpness) {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_ssao_sharpness");
      this.#_bindings.method_set_ssao_sharpness = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_ssao_sharpness() {
    if (!this.#_bindings.method_get_ssao_sharpness) {
      let classname = new StringName("Environment");
      let methodname = new StringName("get_ssao_sharpness");
      this.#_bindings.method_get_ssao_sharpness = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_ssao_direct_light_affect() {
    if (!this.#_bindings.method_set_ssao_direct_light_affect) {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_ssao_direct_light_affect");
      this.#_bindings.method_set_ssao_direct_light_affect = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_ssao_direct_light_affect() {
    if (!this.#_bindings.method_get_ssao_direct_light_affect) {
      let classname = new StringName("Environment");
      let methodname = new StringName("get_ssao_direct_light_affect");
      this.#_bindings.method_get_ssao_direct_light_affect = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_ssao_ao_channel_affect() {
    if (!this.#_bindings.method_set_ssao_ao_channel_affect) {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_ssao_ao_channel_affect");
      this.#_bindings.method_set_ssao_ao_channel_affect = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_ssao_ao_channel_affect() {
    if (!this.#_bindings.method_get_ssao_ao_channel_affect) {
      let classname = new StringName("Environment");
      let methodname = new StringName("get_ssao_ao_channel_affect");
      this.#_bindings.method_get_ssao_ao_channel_affect = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_ssil_enabled() {
    if (!this.#_bindings.method_set_ssil_enabled) {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_ssil_enabled");
      this.#_bindings.method_set_ssil_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_ssil_enabled() {
    if (!this.#_bindings.method_is_ssil_enabled) {
      let classname = new StringName("Environment");
      let methodname = new StringName("is_ssil_enabled");
      this.#_bindings.method_is_ssil_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_ssil_radius() {
    if (!this.#_bindings.method_set_ssil_radius) {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_ssil_radius");
      this.#_bindings.method_set_ssil_radius = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_ssil_radius() {
    if (!this.#_bindings.method_get_ssil_radius) {
      let classname = new StringName("Environment");
      let methodname = new StringName("get_ssil_radius");
      this.#_bindings.method_get_ssil_radius = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_ssil_intensity() {
    if (!this.#_bindings.method_set_ssil_intensity) {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_ssil_intensity");
      this.#_bindings.method_set_ssil_intensity = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_ssil_intensity() {
    if (!this.#_bindings.method_get_ssil_intensity) {
      let classname = new StringName("Environment");
      let methodname = new StringName("get_ssil_intensity");
      this.#_bindings.method_get_ssil_intensity = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_ssil_sharpness() {
    if (!this.#_bindings.method_set_ssil_sharpness) {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_ssil_sharpness");
      this.#_bindings.method_set_ssil_sharpness = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_ssil_sharpness() {
    if (!this.#_bindings.method_get_ssil_sharpness) {
      let classname = new StringName("Environment");
      let methodname = new StringName("get_ssil_sharpness");
      this.#_bindings.method_get_ssil_sharpness = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_ssil_normal_rejection() {
    if (!this.#_bindings.method_set_ssil_normal_rejection) {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_ssil_normal_rejection");
      this.#_bindings.method_set_ssil_normal_rejection = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_ssil_normal_rejection() {
    if (!this.#_bindings.method_get_ssil_normal_rejection) {
      let classname = new StringName("Environment");
      let methodname = new StringName("get_ssil_normal_rejection");
      this.#_bindings.method_get_ssil_normal_rejection = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_sdfgi_enabled() {
    if (!this.#_bindings.method_set_sdfgi_enabled) {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_sdfgi_enabled");
      this.#_bindings.method_set_sdfgi_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_sdfgi_enabled() {
    if (!this.#_bindings.method_is_sdfgi_enabled) {
      let classname = new StringName("Environment");
      let methodname = new StringName("is_sdfgi_enabled");
      this.#_bindings.method_is_sdfgi_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_sdfgi_cascades() {
    if (!this.#_bindings.method_set_sdfgi_cascades) {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_sdfgi_cascades");
      this.#_bindings.method_set_sdfgi_cascades = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_sdfgi_cascades() {
    if (!this.#_bindings.method_get_sdfgi_cascades) {
      let classname = new StringName("Environment");
      let methodname = new StringName("get_sdfgi_cascades");
      this.#_bindings.method_get_sdfgi_cascades = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_sdfgi_min_cell_size() {
    if (!this.#_bindings.method_set_sdfgi_min_cell_size) {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_sdfgi_min_cell_size");
      this.#_bindings.method_set_sdfgi_min_cell_size = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_sdfgi_min_cell_size() {
    if (!this.#_bindings.method_get_sdfgi_min_cell_size) {
      let classname = new StringName("Environment");
      let methodname = new StringName("get_sdfgi_min_cell_size");
      this.#_bindings.method_get_sdfgi_min_cell_size = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_sdfgi_max_distance() {
    if (!this.#_bindings.method_set_sdfgi_max_distance) {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_sdfgi_max_distance");
      this.#_bindings.method_set_sdfgi_max_distance = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_sdfgi_max_distance() {
    if (!this.#_bindings.method_get_sdfgi_max_distance) {
      let classname = new StringName("Environment");
      let methodname = new StringName("get_sdfgi_max_distance");
      this.#_bindings.method_get_sdfgi_max_distance = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_sdfgi_cascade0_distance() {
    if (!this.#_bindings.method_set_sdfgi_cascade0_distance) {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_sdfgi_cascade0_distance");
      this.#_bindings.method_set_sdfgi_cascade0_distance = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_sdfgi_cascade0_distance() {
    if (!this.#_bindings.method_get_sdfgi_cascade0_distance) {
      let classname = new StringName("Environment");
      let methodname = new StringName("get_sdfgi_cascade0_distance");
      this.#_bindings.method_get_sdfgi_cascade0_distance = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_sdfgi_y_scale() {
    if (!this.#_bindings.method_set_sdfgi_y_scale) {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_sdfgi_y_scale");
      this.#_bindings.method_set_sdfgi_y_scale = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3608608372
      );
    }
  }
  static init_method_get_sdfgi_y_scale() {
    if (!this.#_bindings.method_get_sdfgi_y_scale) {
      let classname = new StringName("Environment");
      let methodname = new StringName("get_sdfgi_y_scale");
      this.#_bindings.method_get_sdfgi_y_scale = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2568002245
      );
    }
  }
  static init_method_set_sdfgi_use_occlusion() {
    if (!this.#_bindings.method_set_sdfgi_use_occlusion) {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_sdfgi_use_occlusion");
      this.#_bindings.method_set_sdfgi_use_occlusion = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_sdfgi_using_occlusion() {
    if (!this.#_bindings.method_is_sdfgi_using_occlusion) {
      let classname = new StringName("Environment");
      let methodname = new StringName("is_sdfgi_using_occlusion");
      this.#_bindings.method_is_sdfgi_using_occlusion = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_sdfgi_bounce_feedback() {
    if (!this.#_bindings.method_set_sdfgi_bounce_feedback) {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_sdfgi_bounce_feedback");
      this.#_bindings.method_set_sdfgi_bounce_feedback = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_sdfgi_bounce_feedback() {
    if (!this.#_bindings.method_get_sdfgi_bounce_feedback) {
      let classname = new StringName("Environment");
      let methodname = new StringName("get_sdfgi_bounce_feedback");
      this.#_bindings.method_get_sdfgi_bounce_feedback = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_sdfgi_read_sky_light() {
    if (!this.#_bindings.method_set_sdfgi_read_sky_light) {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_sdfgi_read_sky_light");
      this.#_bindings.method_set_sdfgi_read_sky_light = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_sdfgi_reading_sky_light() {
    if (!this.#_bindings.method_is_sdfgi_reading_sky_light) {
      let classname = new StringName("Environment");
      let methodname = new StringName("is_sdfgi_reading_sky_light");
      this.#_bindings.method_is_sdfgi_reading_sky_light = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_sdfgi_energy() {
    if (!this.#_bindings.method_set_sdfgi_energy) {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_sdfgi_energy");
      this.#_bindings.method_set_sdfgi_energy = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_sdfgi_energy() {
    if (!this.#_bindings.method_get_sdfgi_energy) {
      let classname = new StringName("Environment");
      let methodname = new StringName("get_sdfgi_energy");
      this.#_bindings.method_get_sdfgi_energy = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_sdfgi_normal_bias() {
    if (!this.#_bindings.method_set_sdfgi_normal_bias) {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_sdfgi_normal_bias");
      this.#_bindings.method_set_sdfgi_normal_bias = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_sdfgi_normal_bias() {
    if (!this.#_bindings.method_get_sdfgi_normal_bias) {
      let classname = new StringName("Environment");
      let methodname = new StringName("get_sdfgi_normal_bias");
      this.#_bindings.method_get_sdfgi_normal_bias = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_sdfgi_probe_bias() {
    if (!this.#_bindings.method_set_sdfgi_probe_bias) {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_sdfgi_probe_bias");
      this.#_bindings.method_set_sdfgi_probe_bias = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_sdfgi_probe_bias() {
    if (!this.#_bindings.method_get_sdfgi_probe_bias) {
      let classname = new StringName("Environment");
      let methodname = new StringName("get_sdfgi_probe_bias");
      this.#_bindings.method_get_sdfgi_probe_bias = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_glow_enabled() {
    if (!this.#_bindings.method_set_glow_enabled) {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_glow_enabled");
      this.#_bindings.method_set_glow_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_glow_enabled() {
    if (!this.#_bindings.method_is_glow_enabled) {
      let classname = new StringName("Environment");
      let methodname = new StringName("is_glow_enabled");
      this.#_bindings.method_is_glow_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_glow_level() {
    if (!this.#_bindings.method_set_glow_level) {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_glow_level");
      this.#_bindings.method_set_glow_level = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1602489585
      );
    }
  }
  static init_method_get_glow_level() {
    if (!this.#_bindings.method_get_glow_level) {
      let classname = new StringName("Environment");
      let methodname = new StringName("get_glow_level");
      this.#_bindings.method_get_glow_level = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2339986948
      );
    }
  }
  static init_method_set_glow_normalized() {
    if (!this.#_bindings.method_set_glow_normalized) {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_glow_normalized");
      this.#_bindings.method_set_glow_normalized = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_glow_normalized() {
    if (!this.#_bindings.method_is_glow_normalized) {
      let classname = new StringName("Environment");
      let methodname = new StringName("is_glow_normalized");
      this.#_bindings.method_is_glow_normalized = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_glow_intensity() {
    if (!this.#_bindings.method_set_glow_intensity) {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_glow_intensity");
      this.#_bindings.method_set_glow_intensity = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_glow_intensity() {
    if (!this.#_bindings.method_get_glow_intensity) {
      let classname = new StringName("Environment");
      let methodname = new StringName("get_glow_intensity");
      this.#_bindings.method_get_glow_intensity = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_glow_strength() {
    if (!this.#_bindings.method_set_glow_strength) {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_glow_strength");
      this.#_bindings.method_set_glow_strength = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_glow_strength() {
    if (!this.#_bindings.method_get_glow_strength) {
      let classname = new StringName("Environment");
      let methodname = new StringName("get_glow_strength");
      this.#_bindings.method_get_glow_strength = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_glow_mix() {
    if (!this.#_bindings.method_set_glow_mix) {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_glow_mix");
      this.#_bindings.method_set_glow_mix = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_glow_mix() {
    if (!this.#_bindings.method_get_glow_mix) {
      let classname = new StringName("Environment");
      let methodname = new StringName("get_glow_mix");
      this.#_bindings.method_get_glow_mix = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_glow_bloom() {
    if (!this.#_bindings.method_set_glow_bloom) {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_glow_bloom");
      this.#_bindings.method_set_glow_bloom = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_glow_bloom() {
    if (!this.#_bindings.method_get_glow_bloom) {
      let classname = new StringName("Environment");
      let methodname = new StringName("get_glow_bloom");
      this.#_bindings.method_get_glow_bloom = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_glow_blend_mode() {
    if (!this.#_bindings.method_set_glow_blend_mode) {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_glow_blend_mode");
      this.#_bindings.method_set_glow_blend_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2561587761
      );
    }
  }
  static init_method_get_glow_blend_mode() {
    if (!this.#_bindings.method_get_glow_blend_mode) {
      let classname = new StringName("Environment");
      let methodname = new StringName("get_glow_blend_mode");
      this.#_bindings.method_get_glow_blend_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1529667332
      );
    }
  }
  static init_method_set_glow_hdr_bleed_threshold() {
    if (!this.#_bindings.method_set_glow_hdr_bleed_threshold) {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_glow_hdr_bleed_threshold");
      this.#_bindings.method_set_glow_hdr_bleed_threshold = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_glow_hdr_bleed_threshold() {
    if (!this.#_bindings.method_get_glow_hdr_bleed_threshold) {
      let classname = new StringName("Environment");
      let methodname = new StringName("get_glow_hdr_bleed_threshold");
      this.#_bindings.method_get_glow_hdr_bleed_threshold = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_glow_hdr_bleed_scale() {
    if (!this.#_bindings.method_set_glow_hdr_bleed_scale) {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_glow_hdr_bleed_scale");
      this.#_bindings.method_set_glow_hdr_bleed_scale = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_glow_hdr_bleed_scale() {
    if (!this.#_bindings.method_get_glow_hdr_bleed_scale) {
      let classname = new StringName("Environment");
      let methodname = new StringName("get_glow_hdr_bleed_scale");
      this.#_bindings.method_get_glow_hdr_bleed_scale = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_glow_hdr_luminance_cap() {
    if (!this.#_bindings.method_set_glow_hdr_luminance_cap) {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_glow_hdr_luminance_cap");
      this.#_bindings.method_set_glow_hdr_luminance_cap = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_glow_hdr_luminance_cap() {
    if (!this.#_bindings.method_get_glow_hdr_luminance_cap) {
      let classname = new StringName("Environment");
      let methodname = new StringName("get_glow_hdr_luminance_cap");
      this.#_bindings.method_get_glow_hdr_luminance_cap = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_glow_map_strength() {
    if (!this.#_bindings.method_set_glow_map_strength) {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_glow_map_strength");
      this.#_bindings.method_set_glow_map_strength = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_glow_map_strength() {
    if (!this.#_bindings.method_get_glow_map_strength) {
      let classname = new StringName("Environment");
      let methodname = new StringName("get_glow_map_strength");
      this.#_bindings.method_get_glow_map_strength = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_glow_map() {
    if (!this.#_bindings.method_set_glow_map) {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_glow_map");
      this.#_bindings.method_set_glow_map = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1790811099
      );
    }
  }
  static init_method_get_glow_map() {
    if (!this.#_bindings.method_get_glow_map) {
      let classname = new StringName("Environment");
      let methodname = new StringName("get_glow_map");
      this.#_bindings.method_get_glow_map = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4037048985
      );
    }
  }
  static init_method_set_fog_enabled() {
    if (!this.#_bindings.method_set_fog_enabled) {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_fog_enabled");
      this.#_bindings.method_set_fog_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_fog_enabled() {
    if (!this.#_bindings.method_is_fog_enabled) {
      let classname = new StringName("Environment");
      let methodname = new StringName("is_fog_enabled");
      this.#_bindings.method_is_fog_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_fog_mode() {
    if (!this.#_bindings.method_set_fog_mode) {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_fog_mode");
      this.#_bindings.method_set_fog_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3059806579
      );
    }
  }
  static init_method_get_fog_mode() {
    if (!this.#_bindings.method_get_fog_mode) {
      let classname = new StringName("Environment");
      let methodname = new StringName("get_fog_mode");
      this.#_bindings.method_get_fog_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2456062483
      );
    }
  }
  static init_method_set_fog_light_color() {
    if (!this.#_bindings.method_set_fog_light_color) {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_fog_light_color");
      this.#_bindings.method_set_fog_light_color = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2920490490
      );
    }
  }
  static init_method_get_fog_light_color() {
    if (!this.#_bindings.method_get_fog_light_color) {
      let classname = new StringName("Environment");
      let methodname = new StringName("get_fog_light_color");
      this.#_bindings.method_get_fog_light_color = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3444240500
      );
    }
  }
  static init_method_set_fog_light_energy() {
    if (!this.#_bindings.method_set_fog_light_energy) {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_fog_light_energy");
      this.#_bindings.method_set_fog_light_energy = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_fog_light_energy() {
    if (!this.#_bindings.method_get_fog_light_energy) {
      let classname = new StringName("Environment");
      let methodname = new StringName("get_fog_light_energy");
      this.#_bindings.method_get_fog_light_energy = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_fog_sun_scatter() {
    if (!this.#_bindings.method_set_fog_sun_scatter) {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_fog_sun_scatter");
      this.#_bindings.method_set_fog_sun_scatter = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_fog_sun_scatter() {
    if (!this.#_bindings.method_get_fog_sun_scatter) {
      let classname = new StringName("Environment");
      let methodname = new StringName("get_fog_sun_scatter");
      this.#_bindings.method_get_fog_sun_scatter = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_fog_density() {
    if (!this.#_bindings.method_set_fog_density) {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_fog_density");
      this.#_bindings.method_set_fog_density = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_fog_density() {
    if (!this.#_bindings.method_get_fog_density) {
      let classname = new StringName("Environment");
      let methodname = new StringName("get_fog_density");
      this.#_bindings.method_get_fog_density = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_fog_height() {
    if (!this.#_bindings.method_set_fog_height) {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_fog_height");
      this.#_bindings.method_set_fog_height = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_fog_height() {
    if (!this.#_bindings.method_get_fog_height) {
      let classname = new StringName("Environment");
      let methodname = new StringName("get_fog_height");
      this.#_bindings.method_get_fog_height = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_fog_height_density() {
    if (!this.#_bindings.method_set_fog_height_density) {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_fog_height_density");
      this.#_bindings.method_set_fog_height_density = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_fog_height_density() {
    if (!this.#_bindings.method_get_fog_height_density) {
      let classname = new StringName("Environment");
      let methodname = new StringName("get_fog_height_density");
      this.#_bindings.method_get_fog_height_density = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_fog_aerial_perspective() {
    if (!this.#_bindings.method_set_fog_aerial_perspective) {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_fog_aerial_perspective");
      this.#_bindings.method_set_fog_aerial_perspective = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_fog_aerial_perspective() {
    if (!this.#_bindings.method_get_fog_aerial_perspective) {
      let classname = new StringName("Environment");
      let methodname = new StringName("get_fog_aerial_perspective");
      this.#_bindings.method_get_fog_aerial_perspective = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_fog_sky_affect() {
    if (!this.#_bindings.method_set_fog_sky_affect) {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_fog_sky_affect");
      this.#_bindings.method_set_fog_sky_affect = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_fog_sky_affect() {
    if (!this.#_bindings.method_get_fog_sky_affect) {
      let classname = new StringName("Environment");
      let methodname = new StringName("get_fog_sky_affect");
      this.#_bindings.method_get_fog_sky_affect = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_fog_depth_curve() {
    if (!this.#_bindings.method_set_fog_depth_curve) {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_fog_depth_curve");
      this.#_bindings.method_set_fog_depth_curve = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_fog_depth_curve() {
    if (!this.#_bindings.method_get_fog_depth_curve) {
      let classname = new StringName("Environment");
      let methodname = new StringName("get_fog_depth_curve");
      this.#_bindings.method_get_fog_depth_curve = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_fog_depth_begin() {
    if (!this.#_bindings.method_set_fog_depth_begin) {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_fog_depth_begin");
      this.#_bindings.method_set_fog_depth_begin = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_fog_depth_begin() {
    if (!this.#_bindings.method_get_fog_depth_begin) {
      let classname = new StringName("Environment");
      let methodname = new StringName("get_fog_depth_begin");
      this.#_bindings.method_get_fog_depth_begin = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_fog_depth_end() {
    if (!this.#_bindings.method_set_fog_depth_end) {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_fog_depth_end");
      this.#_bindings.method_set_fog_depth_end = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_fog_depth_end() {
    if (!this.#_bindings.method_get_fog_depth_end) {
      let classname = new StringName("Environment");
      let methodname = new StringName("get_fog_depth_end");
      this.#_bindings.method_get_fog_depth_end = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_volumetric_fog_enabled() {
    if (!this.#_bindings.method_set_volumetric_fog_enabled) {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_volumetric_fog_enabled");
      this.#_bindings.method_set_volumetric_fog_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_volumetric_fog_enabled() {
    if (!this.#_bindings.method_is_volumetric_fog_enabled) {
      let classname = new StringName("Environment");
      let methodname = new StringName("is_volumetric_fog_enabled");
      this.#_bindings.method_is_volumetric_fog_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_volumetric_fog_emission() {
    if (!this.#_bindings.method_set_volumetric_fog_emission) {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_volumetric_fog_emission");
      this.#_bindings.method_set_volumetric_fog_emission = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2920490490
      );
    }
  }
  static init_method_get_volumetric_fog_emission() {
    if (!this.#_bindings.method_get_volumetric_fog_emission) {
      let classname = new StringName("Environment");
      let methodname = new StringName("get_volumetric_fog_emission");
      this.#_bindings.method_get_volumetric_fog_emission = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3444240500
      );
    }
  }
  static init_method_set_volumetric_fog_albedo() {
    if (!this.#_bindings.method_set_volumetric_fog_albedo) {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_volumetric_fog_albedo");
      this.#_bindings.method_set_volumetric_fog_albedo = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2920490490
      );
    }
  }
  static init_method_get_volumetric_fog_albedo() {
    if (!this.#_bindings.method_get_volumetric_fog_albedo) {
      let classname = new StringName("Environment");
      let methodname = new StringName("get_volumetric_fog_albedo");
      this.#_bindings.method_get_volumetric_fog_albedo = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3444240500
      );
    }
  }
  static init_method_set_volumetric_fog_density() {
    if (!this.#_bindings.method_set_volumetric_fog_density) {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_volumetric_fog_density");
      this.#_bindings.method_set_volumetric_fog_density = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_volumetric_fog_density() {
    if (!this.#_bindings.method_get_volumetric_fog_density) {
      let classname = new StringName("Environment");
      let methodname = new StringName("get_volumetric_fog_density");
      this.#_bindings.method_get_volumetric_fog_density = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_volumetric_fog_emission_energy() {
    if (!this.#_bindings.method_set_volumetric_fog_emission_energy) {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_volumetric_fog_emission_energy");
      this.#_bindings.method_set_volumetric_fog_emission_energy = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_volumetric_fog_emission_energy() {
    if (!this.#_bindings.method_get_volumetric_fog_emission_energy) {
      let classname = new StringName("Environment");
      let methodname = new StringName("get_volumetric_fog_emission_energy");
      this.#_bindings.method_get_volumetric_fog_emission_energy = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_volumetric_fog_anisotropy() {
    if (!this.#_bindings.method_set_volumetric_fog_anisotropy) {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_volumetric_fog_anisotropy");
      this.#_bindings.method_set_volumetric_fog_anisotropy = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_volumetric_fog_anisotropy() {
    if (!this.#_bindings.method_get_volumetric_fog_anisotropy) {
      let classname = new StringName("Environment");
      let methodname = new StringName("get_volumetric_fog_anisotropy");
      this.#_bindings.method_get_volumetric_fog_anisotropy = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_volumetric_fog_length() {
    if (!this.#_bindings.method_set_volumetric_fog_length) {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_volumetric_fog_length");
      this.#_bindings.method_set_volumetric_fog_length = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_volumetric_fog_length() {
    if (!this.#_bindings.method_get_volumetric_fog_length) {
      let classname = new StringName("Environment");
      let methodname = new StringName("get_volumetric_fog_length");
      this.#_bindings.method_get_volumetric_fog_length = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_volumetric_fog_detail_spread() {
    if (!this.#_bindings.method_set_volumetric_fog_detail_spread) {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_volumetric_fog_detail_spread");
      this.#_bindings.method_set_volumetric_fog_detail_spread = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_volumetric_fog_detail_spread() {
    if (!this.#_bindings.method_get_volumetric_fog_detail_spread) {
      let classname = new StringName("Environment");
      let methodname = new StringName("get_volumetric_fog_detail_spread");
      this.#_bindings.method_get_volumetric_fog_detail_spread = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_volumetric_fog_gi_inject() {
    if (!this.#_bindings.method_set_volumetric_fog_gi_inject) {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_volumetric_fog_gi_inject");
      this.#_bindings.method_set_volumetric_fog_gi_inject = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_volumetric_fog_gi_inject() {
    if (!this.#_bindings.method_get_volumetric_fog_gi_inject) {
      let classname = new StringName("Environment");
      let methodname = new StringName("get_volumetric_fog_gi_inject");
      this.#_bindings.method_get_volumetric_fog_gi_inject = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_volumetric_fog_ambient_inject() {
    if (!this.#_bindings.method_set_volumetric_fog_ambient_inject) {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_volumetric_fog_ambient_inject");
      this.#_bindings.method_set_volumetric_fog_ambient_inject = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_volumetric_fog_ambient_inject() {
    if (!this.#_bindings.method_get_volumetric_fog_ambient_inject) {
      let classname = new StringName("Environment");
      let methodname = new StringName("get_volumetric_fog_ambient_inject");
      this.#_bindings.method_get_volumetric_fog_ambient_inject = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_volumetric_fog_sky_affect() {
    if (!this.#_bindings.method_set_volumetric_fog_sky_affect) {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_volumetric_fog_sky_affect");
      this.#_bindings.method_set_volumetric_fog_sky_affect = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_volumetric_fog_sky_affect() {
    if (!this.#_bindings.method_get_volumetric_fog_sky_affect) {
      let classname = new StringName("Environment");
      let methodname = new StringName("get_volumetric_fog_sky_affect");
      this.#_bindings.method_get_volumetric_fog_sky_affect = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_volumetric_fog_temporal_reprojection_enabled() {
    if (!this.#_bindings.method_set_volumetric_fog_temporal_reprojection_enabled) {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_volumetric_fog_temporal_reprojection_enabled");
      this.#_bindings.method_set_volumetric_fog_temporal_reprojection_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_volumetric_fog_temporal_reprojection_enabled() {
    if (!this.#_bindings.method_is_volumetric_fog_temporal_reprojection_enabled) {
      let classname = new StringName("Environment");
      let methodname = new StringName("is_volumetric_fog_temporal_reprojection_enabled");
      this.#_bindings.method_is_volumetric_fog_temporal_reprojection_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_volumetric_fog_temporal_reprojection_amount() {
    if (!this.#_bindings.method_set_volumetric_fog_temporal_reprojection_amount) {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_volumetric_fog_temporal_reprojection_amount");
      this.#_bindings.method_set_volumetric_fog_temporal_reprojection_amount = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_volumetric_fog_temporal_reprojection_amount() {
    if (!this.#_bindings.method_get_volumetric_fog_temporal_reprojection_amount) {
      let classname = new StringName("Environment");
      let methodname = new StringName("get_volumetric_fog_temporal_reprojection_amount");
      this.#_bindings.method_get_volumetric_fog_temporal_reprojection_amount = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_adjustment_enabled() {
    if (!this.#_bindings.method_set_adjustment_enabled) {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_adjustment_enabled");
      this.#_bindings.method_set_adjustment_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_adjustment_enabled() {
    if (!this.#_bindings.method_is_adjustment_enabled) {
      let classname = new StringName("Environment");
      let methodname = new StringName("is_adjustment_enabled");
      this.#_bindings.method_is_adjustment_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_adjustment_brightness() {
    if (!this.#_bindings.method_set_adjustment_brightness) {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_adjustment_brightness");
      this.#_bindings.method_set_adjustment_brightness = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_adjustment_brightness() {
    if (!this.#_bindings.method_get_adjustment_brightness) {
      let classname = new StringName("Environment");
      let methodname = new StringName("get_adjustment_brightness");
      this.#_bindings.method_get_adjustment_brightness = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_adjustment_contrast() {
    if (!this.#_bindings.method_set_adjustment_contrast) {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_adjustment_contrast");
      this.#_bindings.method_set_adjustment_contrast = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_adjustment_contrast() {
    if (!this.#_bindings.method_get_adjustment_contrast) {
      let classname = new StringName("Environment");
      let methodname = new StringName("get_adjustment_contrast");
      this.#_bindings.method_get_adjustment_contrast = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_adjustment_saturation() {
    if (!this.#_bindings.method_set_adjustment_saturation) {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_adjustment_saturation");
      this.#_bindings.method_set_adjustment_saturation = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_adjustment_saturation() {
    if (!this.#_bindings.method_get_adjustment_saturation) {
      let classname = new StringName("Environment");
      let methodname = new StringName("get_adjustment_saturation");
      this.#_bindings.method_get_adjustment_saturation = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_adjustment_color_correction() {
    if (!this.#_bindings.method_set_adjustment_color_correction) {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_adjustment_color_correction");
      this.#_bindings.method_set_adjustment_color_correction = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1790811099
      );
    }
  }
  static init_method_get_adjustment_color_correction() {
    if (!this.#_bindings.method_get_adjustment_color_correction) {
      let classname = new StringName("Environment");
      let methodname = new StringName("get_adjustment_color_correction");
      this.#_bindings.method_get_adjustment_color_correction = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4037048985
      );
    }
  }

  
  
  set_background(_mode) {
    Environment.init_method_set_background();
    return _call_native_mb_no_ret(
      Environment.#_bindings.method_set_background,
      this._owner,
      _mode
    );
    
  }
  get_background() {
    Environment.init_method_get_background();
    return _call_native_mb_ret(
      Environment.#_bindings.method_get_background,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_sky(_sky) {
    Environment.init_method_set_sky();
    return _call_native_mb_no_ret(
      Environment.#_bindings.method_set_sky,
      this._owner,
      _sky
    );
    
  }
  get_sky() {
    Environment.init_method_get_sky();
    return _call_native_mb_ret(
      Environment.#_bindings.method_get_sky,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  set_sky_custom_fov(_scale) {
    Environment.init_method_set_sky_custom_fov();
    return _call_native_mb_no_ret(
      Environment.#_bindings.method_set_sky_custom_fov,
      this._owner,
      _scale
    );
    
  }
  get_sky_custom_fov() {
    Environment.init_method_get_sky_custom_fov();
    return _call_native_mb_ret(
      Environment.#_bindings.method_get_sky_custom_fov,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_sky_rotation(_euler_radians) {
    Environment.init_method_set_sky_rotation();
    return _call_native_mb_no_ret(
      Environment.#_bindings.method_set_sky_rotation,
      this._owner,
      _euler_radians
    );
    
  }
  get_sky_rotation() {
    Environment.init_method_get_sky_rotation();
    return _call_native_mb_ret(
      Environment.#_bindings.method_get_sky_rotation,
      this._owner,
			Variant.Type.VECTOR3,
    
      
    );
    
  }
  set_bg_color(_color) {
    Environment.init_method_set_bg_color();
    return _call_native_mb_no_ret(
      Environment.#_bindings.method_set_bg_color,
      this._owner,
      _color
    );
    
  }
  get_bg_color() {
    Environment.init_method_get_bg_color();
    return _call_native_mb_ret(
      Environment.#_bindings.method_get_bg_color,
      this._owner,
			Variant.Type.COLOR,
    
      
    );
    
  }
  set_bg_energy_multiplier(_energy) {
    Environment.init_method_set_bg_energy_multiplier();
    return _call_native_mb_no_ret(
      Environment.#_bindings.method_set_bg_energy_multiplier,
      this._owner,
      _energy
    );
    
  }
  get_bg_energy_multiplier() {
    Environment.init_method_get_bg_energy_multiplier();
    return _call_native_mb_ret(
      Environment.#_bindings.method_get_bg_energy_multiplier,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_bg_intensity(_energy) {
    Environment.init_method_set_bg_intensity();
    return _call_native_mb_no_ret(
      Environment.#_bindings.method_set_bg_intensity,
      this._owner,
      _energy
    );
    
  }
  get_bg_intensity() {
    Environment.init_method_get_bg_intensity();
    return _call_native_mb_ret(
      Environment.#_bindings.method_get_bg_intensity,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_canvas_max_layer(_layer) {
    Environment.init_method_set_canvas_max_layer();
    return _call_native_mb_no_ret(
      Environment.#_bindings.method_set_canvas_max_layer,
      this._owner,
      _layer
    );
    
  }
  get_canvas_max_layer() {
    Environment.init_method_get_canvas_max_layer();
    return _call_native_mb_ret(
      Environment.#_bindings.method_get_canvas_max_layer,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_camera_feed_id(_id) {
    Environment.init_method_set_camera_feed_id();
    return _call_native_mb_no_ret(
      Environment.#_bindings.method_set_camera_feed_id,
      this._owner,
      _id
    );
    
  }
  get_camera_feed_id() {
    Environment.init_method_get_camera_feed_id();
    return _call_native_mb_ret(
      Environment.#_bindings.method_get_camera_feed_id,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_ambient_light_color(_color) {
    Environment.init_method_set_ambient_light_color();
    return _call_native_mb_no_ret(
      Environment.#_bindings.method_set_ambient_light_color,
      this._owner,
      _color
    );
    
  }
  get_ambient_light_color() {
    Environment.init_method_get_ambient_light_color();
    return _call_native_mb_ret(
      Environment.#_bindings.method_get_ambient_light_color,
      this._owner,
			Variant.Type.COLOR,
    
      
    );
    
  }
  set_ambient_source(_source) {
    Environment.init_method_set_ambient_source();
    return _call_native_mb_no_ret(
      Environment.#_bindings.method_set_ambient_source,
      this._owner,
      _source
    );
    
  }
  get_ambient_source() {
    Environment.init_method_get_ambient_source();
    return _call_native_mb_ret(
      Environment.#_bindings.method_get_ambient_source,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_ambient_light_energy(_energy) {
    Environment.init_method_set_ambient_light_energy();
    return _call_native_mb_no_ret(
      Environment.#_bindings.method_set_ambient_light_energy,
      this._owner,
      _energy
    );
    
  }
  get_ambient_light_energy() {
    Environment.init_method_get_ambient_light_energy();
    return _call_native_mb_ret(
      Environment.#_bindings.method_get_ambient_light_energy,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_ambient_light_sky_contribution(_ratio) {
    Environment.init_method_set_ambient_light_sky_contribution();
    return _call_native_mb_no_ret(
      Environment.#_bindings.method_set_ambient_light_sky_contribution,
      this._owner,
      _ratio
    );
    
  }
  get_ambient_light_sky_contribution() {
    Environment.init_method_get_ambient_light_sky_contribution();
    return _call_native_mb_ret(
      Environment.#_bindings.method_get_ambient_light_sky_contribution,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_reflection_source(_source) {
    Environment.init_method_set_reflection_source();
    return _call_native_mb_no_ret(
      Environment.#_bindings.method_set_reflection_source,
      this._owner,
      _source
    );
    
  }
  get_reflection_source() {
    Environment.init_method_get_reflection_source();
    return _call_native_mb_ret(
      Environment.#_bindings.method_get_reflection_source,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_tonemapper(_mode) {
    Environment.init_method_set_tonemapper();
    return _call_native_mb_no_ret(
      Environment.#_bindings.method_set_tonemapper,
      this._owner,
      _mode
    );
    
  }
  get_tonemapper() {
    Environment.init_method_get_tonemapper();
    return _call_native_mb_ret(
      Environment.#_bindings.method_get_tonemapper,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_tonemap_exposure(_exposure) {
    Environment.init_method_set_tonemap_exposure();
    return _call_native_mb_no_ret(
      Environment.#_bindings.method_set_tonemap_exposure,
      this._owner,
      _exposure
    );
    
  }
  get_tonemap_exposure() {
    Environment.init_method_get_tonemap_exposure();
    return _call_native_mb_ret(
      Environment.#_bindings.method_get_tonemap_exposure,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_tonemap_white(_white) {
    Environment.init_method_set_tonemap_white();
    return _call_native_mb_no_ret(
      Environment.#_bindings.method_set_tonemap_white,
      this._owner,
      _white
    );
    
  }
  get_tonemap_white() {
    Environment.init_method_get_tonemap_white();
    return _call_native_mb_ret(
      Environment.#_bindings.method_get_tonemap_white,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_ssr_enabled(_enabled) {
    Environment.init_method_set_ssr_enabled();
    return _call_native_mb_no_ret(
      Environment.#_bindings.method_set_ssr_enabled,
      this._owner,
      _enabled
    );
    
  }
  is_ssr_enabled() {
    Environment.init_method_is_ssr_enabled();
    return _call_native_mb_ret(
      Environment.#_bindings.method_is_ssr_enabled,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_ssr_max_steps(_max_steps) {
    Environment.init_method_set_ssr_max_steps();
    return _call_native_mb_no_ret(
      Environment.#_bindings.method_set_ssr_max_steps,
      this._owner,
      _max_steps
    );
    
  }
  get_ssr_max_steps() {
    Environment.init_method_get_ssr_max_steps();
    return _call_native_mb_ret(
      Environment.#_bindings.method_get_ssr_max_steps,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_ssr_fade_in(_fade_in) {
    Environment.init_method_set_ssr_fade_in();
    return _call_native_mb_no_ret(
      Environment.#_bindings.method_set_ssr_fade_in,
      this._owner,
      _fade_in
    );
    
  }
  get_ssr_fade_in() {
    Environment.init_method_get_ssr_fade_in();
    return _call_native_mb_ret(
      Environment.#_bindings.method_get_ssr_fade_in,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_ssr_fade_out(_fade_out) {
    Environment.init_method_set_ssr_fade_out();
    return _call_native_mb_no_ret(
      Environment.#_bindings.method_set_ssr_fade_out,
      this._owner,
      _fade_out
    );
    
  }
  get_ssr_fade_out() {
    Environment.init_method_get_ssr_fade_out();
    return _call_native_mb_ret(
      Environment.#_bindings.method_get_ssr_fade_out,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_ssr_depth_tolerance(_depth_tolerance) {
    Environment.init_method_set_ssr_depth_tolerance();
    return _call_native_mb_no_ret(
      Environment.#_bindings.method_set_ssr_depth_tolerance,
      this._owner,
      _depth_tolerance
    );
    
  }
  get_ssr_depth_tolerance() {
    Environment.init_method_get_ssr_depth_tolerance();
    return _call_native_mb_ret(
      Environment.#_bindings.method_get_ssr_depth_tolerance,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_ssao_enabled(_enabled) {
    Environment.init_method_set_ssao_enabled();
    return _call_native_mb_no_ret(
      Environment.#_bindings.method_set_ssao_enabled,
      this._owner,
      _enabled
    );
    
  }
  is_ssao_enabled() {
    Environment.init_method_is_ssao_enabled();
    return _call_native_mb_ret(
      Environment.#_bindings.method_is_ssao_enabled,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_ssao_radius(_radius) {
    Environment.init_method_set_ssao_radius();
    return _call_native_mb_no_ret(
      Environment.#_bindings.method_set_ssao_radius,
      this._owner,
      _radius
    );
    
  }
  get_ssao_radius() {
    Environment.init_method_get_ssao_radius();
    return _call_native_mb_ret(
      Environment.#_bindings.method_get_ssao_radius,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_ssao_intensity(_intensity) {
    Environment.init_method_set_ssao_intensity();
    return _call_native_mb_no_ret(
      Environment.#_bindings.method_set_ssao_intensity,
      this._owner,
      _intensity
    );
    
  }
  get_ssao_intensity() {
    Environment.init_method_get_ssao_intensity();
    return _call_native_mb_ret(
      Environment.#_bindings.method_get_ssao_intensity,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_ssao_power(_power) {
    Environment.init_method_set_ssao_power();
    return _call_native_mb_no_ret(
      Environment.#_bindings.method_set_ssao_power,
      this._owner,
      _power
    );
    
  }
  get_ssao_power() {
    Environment.init_method_get_ssao_power();
    return _call_native_mb_ret(
      Environment.#_bindings.method_get_ssao_power,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_ssao_detail(_detail) {
    Environment.init_method_set_ssao_detail();
    return _call_native_mb_no_ret(
      Environment.#_bindings.method_set_ssao_detail,
      this._owner,
      _detail
    );
    
  }
  get_ssao_detail() {
    Environment.init_method_get_ssao_detail();
    return _call_native_mb_ret(
      Environment.#_bindings.method_get_ssao_detail,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_ssao_horizon(_horizon) {
    Environment.init_method_set_ssao_horizon();
    return _call_native_mb_no_ret(
      Environment.#_bindings.method_set_ssao_horizon,
      this._owner,
      _horizon
    );
    
  }
  get_ssao_horizon() {
    Environment.init_method_get_ssao_horizon();
    return _call_native_mb_ret(
      Environment.#_bindings.method_get_ssao_horizon,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_ssao_sharpness(_sharpness) {
    Environment.init_method_set_ssao_sharpness();
    return _call_native_mb_no_ret(
      Environment.#_bindings.method_set_ssao_sharpness,
      this._owner,
      _sharpness
    );
    
  }
  get_ssao_sharpness() {
    Environment.init_method_get_ssao_sharpness();
    return _call_native_mb_ret(
      Environment.#_bindings.method_get_ssao_sharpness,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_ssao_direct_light_affect(_amount) {
    Environment.init_method_set_ssao_direct_light_affect();
    return _call_native_mb_no_ret(
      Environment.#_bindings.method_set_ssao_direct_light_affect,
      this._owner,
      _amount
    );
    
  }
  get_ssao_direct_light_affect() {
    Environment.init_method_get_ssao_direct_light_affect();
    return _call_native_mb_ret(
      Environment.#_bindings.method_get_ssao_direct_light_affect,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_ssao_ao_channel_affect(_amount) {
    Environment.init_method_set_ssao_ao_channel_affect();
    return _call_native_mb_no_ret(
      Environment.#_bindings.method_set_ssao_ao_channel_affect,
      this._owner,
      _amount
    );
    
  }
  get_ssao_ao_channel_affect() {
    Environment.init_method_get_ssao_ao_channel_affect();
    return _call_native_mb_ret(
      Environment.#_bindings.method_get_ssao_ao_channel_affect,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_ssil_enabled(_enabled) {
    Environment.init_method_set_ssil_enabled();
    return _call_native_mb_no_ret(
      Environment.#_bindings.method_set_ssil_enabled,
      this._owner,
      _enabled
    );
    
  }
  is_ssil_enabled() {
    Environment.init_method_is_ssil_enabled();
    return _call_native_mb_ret(
      Environment.#_bindings.method_is_ssil_enabled,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_ssil_radius(_radius) {
    Environment.init_method_set_ssil_radius();
    return _call_native_mb_no_ret(
      Environment.#_bindings.method_set_ssil_radius,
      this._owner,
      _radius
    );
    
  }
  get_ssil_radius() {
    Environment.init_method_get_ssil_radius();
    return _call_native_mb_ret(
      Environment.#_bindings.method_get_ssil_radius,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_ssil_intensity(_intensity) {
    Environment.init_method_set_ssil_intensity();
    return _call_native_mb_no_ret(
      Environment.#_bindings.method_set_ssil_intensity,
      this._owner,
      _intensity
    );
    
  }
  get_ssil_intensity() {
    Environment.init_method_get_ssil_intensity();
    return _call_native_mb_ret(
      Environment.#_bindings.method_get_ssil_intensity,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_ssil_sharpness(_sharpness) {
    Environment.init_method_set_ssil_sharpness();
    return _call_native_mb_no_ret(
      Environment.#_bindings.method_set_ssil_sharpness,
      this._owner,
      _sharpness
    );
    
  }
  get_ssil_sharpness() {
    Environment.init_method_get_ssil_sharpness();
    return _call_native_mb_ret(
      Environment.#_bindings.method_get_ssil_sharpness,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_ssil_normal_rejection(_normal_rejection) {
    Environment.init_method_set_ssil_normal_rejection();
    return _call_native_mb_no_ret(
      Environment.#_bindings.method_set_ssil_normal_rejection,
      this._owner,
      _normal_rejection
    );
    
  }
  get_ssil_normal_rejection() {
    Environment.init_method_get_ssil_normal_rejection();
    return _call_native_mb_ret(
      Environment.#_bindings.method_get_ssil_normal_rejection,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_sdfgi_enabled(_enabled) {
    Environment.init_method_set_sdfgi_enabled();
    return _call_native_mb_no_ret(
      Environment.#_bindings.method_set_sdfgi_enabled,
      this._owner,
      _enabled
    );
    
  }
  is_sdfgi_enabled() {
    Environment.init_method_is_sdfgi_enabled();
    return _call_native_mb_ret(
      Environment.#_bindings.method_is_sdfgi_enabled,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_sdfgi_cascades(_amount) {
    Environment.init_method_set_sdfgi_cascades();
    return _call_native_mb_no_ret(
      Environment.#_bindings.method_set_sdfgi_cascades,
      this._owner,
      _amount
    );
    
  }
  get_sdfgi_cascades() {
    Environment.init_method_get_sdfgi_cascades();
    return _call_native_mb_ret(
      Environment.#_bindings.method_get_sdfgi_cascades,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_sdfgi_min_cell_size(_size) {
    Environment.init_method_set_sdfgi_min_cell_size();
    return _call_native_mb_no_ret(
      Environment.#_bindings.method_set_sdfgi_min_cell_size,
      this._owner,
      _size
    );
    
  }
  get_sdfgi_min_cell_size() {
    Environment.init_method_get_sdfgi_min_cell_size();
    return _call_native_mb_ret(
      Environment.#_bindings.method_get_sdfgi_min_cell_size,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_sdfgi_max_distance(_distance) {
    Environment.init_method_set_sdfgi_max_distance();
    return _call_native_mb_no_ret(
      Environment.#_bindings.method_set_sdfgi_max_distance,
      this._owner,
      _distance
    );
    
  }
  get_sdfgi_max_distance() {
    Environment.init_method_get_sdfgi_max_distance();
    return _call_native_mb_ret(
      Environment.#_bindings.method_get_sdfgi_max_distance,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_sdfgi_cascade0_distance(_distance) {
    Environment.init_method_set_sdfgi_cascade0_distance();
    return _call_native_mb_no_ret(
      Environment.#_bindings.method_set_sdfgi_cascade0_distance,
      this._owner,
      _distance
    );
    
  }
  get_sdfgi_cascade0_distance() {
    Environment.init_method_get_sdfgi_cascade0_distance();
    return _call_native_mb_ret(
      Environment.#_bindings.method_get_sdfgi_cascade0_distance,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_sdfgi_y_scale(_scale) {
    Environment.init_method_set_sdfgi_y_scale();
    return _call_native_mb_no_ret(
      Environment.#_bindings.method_set_sdfgi_y_scale,
      this._owner,
      _scale
    );
    
  }
  get_sdfgi_y_scale() {
    Environment.init_method_get_sdfgi_y_scale();
    return _call_native_mb_ret(
      Environment.#_bindings.method_get_sdfgi_y_scale,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_sdfgi_use_occlusion(_enable) {
    Environment.init_method_set_sdfgi_use_occlusion();
    return _call_native_mb_no_ret(
      Environment.#_bindings.method_set_sdfgi_use_occlusion,
      this._owner,
      _enable
    );
    
  }
  is_sdfgi_using_occlusion() {
    Environment.init_method_is_sdfgi_using_occlusion();
    return _call_native_mb_ret(
      Environment.#_bindings.method_is_sdfgi_using_occlusion,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_sdfgi_bounce_feedback(_amount) {
    Environment.init_method_set_sdfgi_bounce_feedback();
    return _call_native_mb_no_ret(
      Environment.#_bindings.method_set_sdfgi_bounce_feedback,
      this._owner,
      _amount
    );
    
  }
  get_sdfgi_bounce_feedback() {
    Environment.init_method_get_sdfgi_bounce_feedback();
    return _call_native_mb_ret(
      Environment.#_bindings.method_get_sdfgi_bounce_feedback,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_sdfgi_read_sky_light(_enable) {
    Environment.init_method_set_sdfgi_read_sky_light();
    return _call_native_mb_no_ret(
      Environment.#_bindings.method_set_sdfgi_read_sky_light,
      this._owner,
      _enable
    );
    
  }
  is_sdfgi_reading_sky_light() {
    Environment.init_method_is_sdfgi_reading_sky_light();
    return _call_native_mb_ret(
      Environment.#_bindings.method_is_sdfgi_reading_sky_light,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_sdfgi_energy(_amount) {
    Environment.init_method_set_sdfgi_energy();
    return _call_native_mb_no_ret(
      Environment.#_bindings.method_set_sdfgi_energy,
      this._owner,
      _amount
    );
    
  }
  get_sdfgi_energy() {
    Environment.init_method_get_sdfgi_energy();
    return _call_native_mb_ret(
      Environment.#_bindings.method_get_sdfgi_energy,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_sdfgi_normal_bias(_bias) {
    Environment.init_method_set_sdfgi_normal_bias();
    return _call_native_mb_no_ret(
      Environment.#_bindings.method_set_sdfgi_normal_bias,
      this._owner,
      _bias
    );
    
  }
  get_sdfgi_normal_bias() {
    Environment.init_method_get_sdfgi_normal_bias();
    return _call_native_mb_ret(
      Environment.#_bindings.method_get_sdfgi_normal_bias,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_sdfgi_probe_bias(_bias) {
    Environment.init_method_set_sdfgi_probe_bias();
    return _call_native_mb_no_ret(
      Environment.#_bindings.method_set_sdfgi_probe_bias,
      this._owner,
      _bias
    );
    
  }
  get_sdfgi_probe_bias() {
    Environment.init_method_get_sdfgi_probe_bias();
    return _call_native_mb_ret(
      Environment.#_bindings.method_get_sdfgi_probe_bias,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_glow_enabled(_enabled) {
    Environment.init_method_set_glow_enabled();
    return _call_native_mb_no_ret(
      Environment.#_bindings.method_set_glow_enabled,
      this._owner,
      _enabled
    );
    
  }
  is_glow_enabled() {
    Environment.init_method_is_glow_enabled();
    return _call_native_mb_ret(
      Environment.#_bindings.method_is_glow_enabled,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_glow_level(_idx, _intensity) {
    Environment.init_method_set_glow_level();
    return _call_native_mb_no_ret(
      Environment.#_bindings.method_set_glow_level,
      this._owner,
      _idx, _intensity
    );
    
  }
  get_glow_level(_idx) {
    Environment.init_method_get_glow_level();
    return _call_native_mb_ret(
      Environment.#_bindings.method_get_glow_level,
      this._owner,
			Variant.Type.FLOAT,
    
      _idx
    );
    
  }
  set_glow_normalized(_normalize) {
    Environment.init_method_set_glow_normalized();
    return _call_native_mb_no_ret(
      Environment.#_bindings.method_set_glow_normalized,
      this._owner,
      _normalize
    );
    
  }
  is_glow_normalized() {
    Environment.init_method_is_glow_normalized();
    return _call_native_mb_ret(
      Environment.#_bindings.method_is_glow_normalized,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_glow_intensity(_intensity) {
    Environment.init_method_set_glow_intensity();
    return _call_native_mb_no_ret(
      Environment.#_bindings.method_set_glow_intensity,
      this._owner,
      _intensity
    );
    
  }
  get_glow_intensity() {
    Environment.init_method_get_glow_intensity();
    return _call_native_mb_ret(
      Environment.#_bindings.method_get_glow_intensity,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_glow_strength(_strength) {
    Environment.init_method_set_glow_strength();
    return _call_native_mb_no_ret(
      Environment.#_bindings.method_set_glow_strength,
      this._owner,
      _strength
    );
    
  }
  get_glow_strength() {
    Environment.init_method_get_glow_strength();
    return _call_native_mb_ret(
      Environment.#_bindings.method_get_glow_strength,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_glow_mix(_mix) {
    Environment.init_method_set_glow_mix();
    return _call_native_mb_no_ret(
      Environment.#_bindings.method_set_glow_mix,
      this._owner,
      _mix
    );
    
  }
  get_glow_mix() {
    Environment.init_method_get_glow_mix();
    return _call_native_mb_ret(
      Environment.#_bindings.method_get_glow_mix,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_glow_bloom(_amount) {
    Environment.init_method_set_glow_bloom();
    return _call_native_mb_no_ret(
      Environment.#_bindings.method_set_glow_bloom,
      this._owner,
      _amount
    );
    
  }
  get_glow_bloom() {
    Environment.init_method_get_glow_bloom();
    return _call_native_mb_ret(
      Environment.#_bindings.method_get_glow_bloom,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_glow_blend_mode(_mode) {
    Environment.init_method_set_glow_blend_mode();
    return _call_native_mb_no_ret(
      Environment.#_bindings.method_set_glow_blend_mode,
      this._owner,
      _mode
    );
    
  }
  get_glow_blend_mode() {
    Environment.init_method_get_glow_blend_mode();
    return _call_native_mb_ret(
      Environment.#_bindings.method_get_glow_blend_mode,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_glow_hdr_bleed_threshold(_threshold) {
    Environment.init_method_set_glow_hdr_bleed_threshold();
    return _call_native_mb_no_ret(
      Environment.#_bindings.method_set_glow_hdr_bleed_threshold,
      this._owner,
      _threshold
    );
    
  }
  get_glow_hdr_bleed_threshold() {
    Environment.init_method_get_glow_hdr_bleed_threshold();
    return _call_native_mb_ret(
      Environment.#_bindings.method_get_glow_hdr_bleed_threshold,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_glow_hdr_bleed_scale(_scale) {
    Environment.init_method_set_glow_hdr_bleed_scale();
    return _call_native_mb_no_ret(
      Environment.#_bindings.method_set_glow_hdr_bleed_scale,
      this._owner,
      _scale
    );
    
  }
  get_glow_hdr_bleed_scale() {
    Environment.init_method_get_glow_hdr_bleed_scale();
    return _call_native_mb_ret(
      Environment.#_bindings.method_get_glow_hdr_bleed_scale,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_glow_hdr_luminance_cap(_amount) {
    Environment.init_method_set_glow_hdr_luminance_cap();
    return _call_native_mb_no_ret(
      Environment.#_bindings.method_set_glow_hdr_luminance_cap,
      this._owner,
      _amount
    );
    
  }
  get_glow_hdr_luminance_cap() {
    Environment.init_method_get_glow_hdr_luminance_cap();
    return _call_native_mb_ret(
      Environment.#_bindings.method_get_glow_hdr_luminance_cap,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_glow_map_strength(_strength) {
    Environment.init_method_set_glow_map_strength();
    return _call_native_mb_no_ret(
      Environment.#_bindings.method_set_glow_map_strength,
      this._owner,
      _strength
    );
    
  }
  get_glow_map_strength() {
    Environment.init_method_get_glow_map_strength();
    return _call_native_mb_ret(
      Environment.#_bindings.method_get_glow_map_strength,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_glow_map(_mode) {
    Environment.init_method_set_glow_map();
    return _call_native_mb_no_ret(
      Environment.#_bindings.method_set_glow_map,
      this._owner,
      _mode
    );
    
  }
  get_glow_map() {
    Environment.init_method_get_glow_map();
    return _call_native_mb_ret(
      Environment.#_bindings.method_get_glow_map,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  set_fog_enabled(_enabled) {
    Environment.init_method_set_fog_enabled();
    return _call_native_mb_no_ret(
      Environment.#_bindings.method_set_fog_enabled,
      this._owner,
      _enabled
    );
    
  }
  is_fog_enabled() {
    Environment.init_method_is_fog_enabled();
    return _call_native_mb_ret(
      Environment.#_bindings.method_is_fog_enabled,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_fog_mode(_mode) {
    Environment.init_method_set_fog_mode();
    return _call_native_mb_no_ret(
      Environment.#_bindings.method_set_fog_mode,
      this._owner,
      _mode
    );
    
  }
  get_fog_mode() {
    Environment.init_method_get_fog_mode();
    return _call_native_mb_ret(
      Environment.#_bindings.method_get_fog_mode,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_fog_light_color(_light_color) {
    Environment.init_method_set_fog_light_color();
    return _call_native_mb_no_ret(
      Environment.#_bindings.method_set_fog_light_color,
      this._owner,
      _light_color
    );
    
  }
  get_fog_light_color() {
    Environment.init_method_get_fog_light_color();
    return _call_native_mb_ret(
      Environment.#_bindings.method_get_fog_light_color,
      this._owner,
			Variant.Type.COLOR,
    
      
    );
    
  }
  set_fog_light_energy(_light_energy) {
    Environment.init_method_set_fog_light_energy();
    return _call_native_mb_no_ret(
      Environment.#_bindings.method_set_fog_light_energy,
      this._owner,
      _light_energy
    );
    
  }
  get_fog_light_energy() {
    Environment.init_method_get_fog_light_energy();
    return _call_native_mb_ret(
      Environment.#_bindings.method_get_fog_light_energy,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_fog_sun_scatter(_sun_scatter) {
    Environment.init_method_set_fog_sun_scatter();
    return _call_native_mb_no_ret(
      Environment.#_bindings.method_set_fog_sun_scatter,
      this._owner,
      _sun_scatter
    );
    
  }
  get_fog_sun_scatter() {
    Environment.init_method_get_fog_sun_scatter();
    return _call_native_mb_ret(
      Environment.#_bindings.method_get_fog_sun_scatter,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_fog_density(_density) {
    Environment.init_method_set_fog_density();
    return _call_native_mb_no_ret(
      Environment.#_bindings.method_set_fog_density,
      this._owner,
      _density
    );
    
  }
  get_fog_density() {
    Environment.init_method_get_fog_density();
    return _call_native_mb_ret(
      Environment.#_bindings.method_get_fog_density,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_fog_height(_height) {
    Environment.init_method_set_fog_height();
    return _call_native_mb_no_ret(
      Environment.#_bindings.method_set_fog_height,
      this._owner,
      _height
    );
    
  }
  get_fog_height() {
    Environment.init_method_get_fog_height();
    return _call_native_mb_ret(
      Environment.#_bindings.method_get_fog_height,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_fog_height_density(_height_density) {
    Environment.init_method_set_fog_height_density();
    return _call_native_mb_no_ret(
      Environment.#_bindings.method_set_fog_height_density,
      this._owner,
      _height_density
    );
    
  }
  get_fog_height_density() {
    Environment.init_method_get_fog_height_density();
    return _call_native_mb_ret(
      Environment.#_bindings.method_get_fog_height_density,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_fog_aerial_perspective(_aerial_perspective) {
    Environment.init_method_set_fog_aerial_perspective();
    return _call_native_mb_no_ret(
      Environment.#_bindings.method_set_fog_aerial_perspective,
      this._owner,
      _aerial_perspective
    );
    
  }
  get_fog_aerial_perspective() {
    Environment.init_method_get_fog_aerial_perspective();
    return _call_native_mb_ret(
      Environment.#_bindings.method_get_fog_aerial_perspective,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_fog_sky_affect(_sky_affect) {
    Environment.init_method_set_fog_sky_affect();
    return _call_native_mb_no_ret(
      Environment.#_bindings.method_set_fog_sky_affect,
      this._owner,
      _sky_affect
    );
    
  }
  get_fog_sky_affect() {
    Environment.init_method_get_fog_sky_affect();
    return _call_native_mb_ret(
      Environment.#_bindings.method_get_fog_sky_affect,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_fog_depth_curve(_curve) {
    Environment.init_method_set_fog_depth_curve();
    return _call_native_mb_no_ret(
      Environment.#_bindings.method_set_fog_depth_curve,
      this._owner,
      _curve
    );
    
  }
  get_fog_depth_curve() {
    Environment.init_method_get_fog_depth_curve();
    return _call_native_mb_ret(
      Environment.#_bindings.method_get_fog_depth_curve,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_fog_depth_begin(_begin) {
    Environment.init_method_set_fog_depth_begin();
    return _call_native_mb_no_ret(
      Environment.#_bindings.method_set_fog_depth_begin,
      this._owner,
      _begin
    );
    
  }
  get_fog_depth_begin() {
    Environment.init_method_get_fog_depth_begin();
    return _call_native_mb_ret(
      Environment.#_bindings.method_get_fog_depth_begin,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_fog_depth_end(_end) {
    Environment.init_method_set_fog_depth_end();
    return _call_native_mb_no_ret(
      Environment.#_bindings.method_set_fog_depth_end,
      this._owner,
      _end
    );
    
  }
  get_fog_depth_end() {
    Environment.init_method_get_fog_depth_end();
    return _call_native_mb_ret(
      Environment.#_bindings.method_get_fog_depth_end,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_volumetric_fog_enabled(_enabled) {
    Environment.init_method_set_volumetric_fog_enabled();
    return _call_native_mb_no_ret(
      Environment.#_bindings.method_set_volumetric_fog_enabled,
      this._owner,
      _enabled
    );
    
  }
  is_volumetric_fog_enabled() {
    Environment.init_method_is_volumetric_fog_enabled();
    return _call_native_mb_ret(
      Environment.#_bindings.method_is_volumetric_fog_enabled,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_volumetric_fog_emission(_color) {
    Environment.init_method_set_volumetric_fog_emission();
    return _call_native_mb_no_ret(
      Environment.#_bindings.method_set_volumetric_fog_emission,
      this._owner,
      _color
    );
    
  }
  get_volumetric_fog_emission() {
    Environment.init_method_get_volumetric_fog_emission();
    return _call_native_mb_ret(
      Environment.#_bindings.method_get_volumetric_fog_emission,
      this._owner,
			Variant.Type.COLOR,
    
      
    );
    
  }
  set_volumetric_fog_albedo(_color) {
    Environment.init_method_set_volumetric_fog_albedo();
    return _call_native_mb_no_ret(
      Environment.#_bindings.method_set_volumetric_fog_albedo,
      this._owner,
      _color
    );
    
  }
  get_volumetric_fog_albedo() {
    Environment.init_method_get_volumetric_fog_albedo();
    return _call_native_mb_ret(
      Environment.#_bindings.method_get_volumetric_fog_albedo,
      this._owner,
			Variant.Type.COLOR,
    
      
    );
    
  }
  set_volumetric_fog_density(_density) {
    Environment.init_method_set_volumetric_fog_density();
    return _call_native_mb_no_ret(
      Environment.#_bindings.method_set_volumetric_fog_density,
      this._owner,
      _density
    );
    
  }
  get_volumetric_fog_density() {
    Environment.init_method_get_volumetric_fog_density();
    return _call_native_mb_ret(
      Environment.#_bindings.method_get_volumetric_fog_density,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_volumetric_fog_emission_energy(_begin) {
    Environment.init_method_set_volumetric_fog_emission_energy();
    return _call_native_mb_no_ret(
      Environment.#_bindings.method_set_volumetric_fog_emission_energy,
      this._owner,
      _begin
    );
    
  }
  get_volumetric_fog_emission_energy() {
    Environment.init_method_get_volumetric_fog_emission_energy();
    return _call_native_mb_ret(
      Environment.#_bindings.method_get_volumetric_fog_emission_energy,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_volumetric_fog_anisotropy(_anisotropy) {
    Environment.init_method_set_volumetric_fog_anisotropy();
    return _call_native_mb_no_ret(
      Environment.#_bindings.method_set_volumetric_fog_anisotropy,
      this._owner,
      _anisotropy
    );
    
  }
  get_volumetric_fog_anisotropy() {
    Environment.init_method_get_volumetric_fog_anisotropy();
    return _call_native_mb_ret(
      Environment.#_bindings.method_get_volumetric_fog_anisotropy,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_volumetric_fog_length(_length) {
    Environment.init_method_set_volumetric_fog_length();
    return _call_native_mb_no_ret(
      Environment.#_bindings.method_set_volumetric_fog_length,
      this._owner,
      _length
    );
    
  }
  get_volumetric_fog_length() {
    Environment.init_method_get_volumetric_fog_length();
    return _call_native_mb_ret(
      Environment.#_bindings.method_get_volumetric_fog_length,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_volumetric_fog_detail_spread(_detail_spread) {
    Environment.init_method_set_volumetric_fog_detail_spread();
    return _call_native_mb_no_ret(
      Environment.#_bindings.method_set_volumetric_fog_detail_spread,
      this._owner,
      _detail_spread
    );
    
  }
  get_volumetric_fog_detail_spread() {
    Environment.init_method_get_volumetric_fog_detail_spread();
    return _call_native_mb_ret(
      Environment.#_bindings.method_get_volumetric_fog_detail_spread,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_volumetric_fog_gi_inject(_gi_inject) {
    Environment.init_method_set_volumetric_fog_gi_inject();
    return _call_native_mb_no_ret(
      Environment.#_bindings.method_set_volumetric_fog_gi_inject,
      this._owner,
      _gi_inject
    );
    
  }
  get_volumetric_fog_gi_inject() {
    Environment.init_method_get_volumetric_fog_gi_inject();
    return _call_native_mb_ret(
      Environment.#_bindings.method_get_volumetric_fog_gi_inject,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_volumetric_fog_ambient_inject(_enabled) {
    Environment.init_method_set_volumetric_fog_ambient_inject();
    return _call_native_mb_no_ret(
      Environment.#_bindings.method_set_volumetric_fog_ambient_inject,
      this._owner,
      _enabled
    );
    
  }
  get_volumetric_fog_ambient_inject() {
    Environment.init_method_get_volumetric_fog_ambient_inject();
    return _call_native_mb_ret(
      Environment.#_bindings.method_get_volumetric_fog_ambient_inject,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_volumetric_fog_sky_affect(_sky_affect) {
    Environment.init_method_set_volumetric_fog_sky_affect();
    return _call_native_mb_no_ret(
      Environment.#_bindings.method_set_volumetric_fog_sky_affect,
      this._owner,
      _sky_affect
    );
    
  }
  get_volumetric_fog_sky_affect() {
    Environment.init_method_get_volumetric_fog_sky_affect();
    return _call_native_mb_ret(
      Environment.#_bindings.method_get_volumetric_fog_sky_affect,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_volumetric_fog_temporal_reprojection_enabled(_enabled) {
    Environment.init_method_set_volumetric_fog_temporal_reprojection_enabled();
    return _call_native_mb_no_ret(
      Environment.#_bindings.method_set_volumetric_fog_temporal_reprojection_enabled,
      this._owner,
      _enabled
    );
    
  }
  is_volumetric_fog_temporal_reprojection_enabled() {
    Environment.init_method_is_volumetric_fog_temporal_reprojection_enabled();
    return _call_native_mb_ret(
      Environment.#_bindings.method_is_volumetric_fog_temporal_reprojection_enabled,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_volumetric_fog_temporal_reprojection_amount(_temporal_reprojection_amount) {
    Environment.init_method_set_volumetric_fog_temporal_reprojection_amount();
    return _call_native_mb_no_ret(
      Environment.#_bindings.method_set_volumetric_fog_temporal_reprojection_amount,
      this._owner,
      _temporal_reprojection_amount
    );
    
  }
  get_volumetric_fog_temporal_reprojection_amount() {
    Environment.init_method_get_volumetric_fog_temporal_reprojection_amount();
    return _call_native_mb_ret(
      Environment.#_bindings.method_get_volumetric_fog_temporal_reprojection_amount,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_adjustment_enabled(_enabled) {
    Environment.init_method_set_adjustment_enabled();
    return _call_native_mb_no_ret(
      Environment.#_bindings.method_set_adjustment_enabled,
      this._owner,
      _enabled
    );
    
  }
  is_adjustment_enabled() {
    Environment.init_method_is_adjustment_enabled();
    return _call_native_mb_ret(
      Environment.#_bindings.method_is_adjustment_enabled,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_adjustment_brightness(_brightness) {
    Environment.init_method_set_adjustment_brightness();
    return _call_native_mb_no_ret(
      Environment.#_bindings.method_set_adjustment_brightness,
      this._owner,
      _brightness
    );
    
  }
  get_adjustment_brightness() {
    Environment.init_method_get_adjustment_brightness();
    return _call_native_mb_ret(
      Environment.#_bindings.method_get_adjustment_brightness,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_adjustment_contrast(_contrast) {
    Environment.init_method_set_adjustment_contrast();
    return _call_native_mb_no_ret(
      Environment.#_bindings.method_set_adjustment_contrast,
      this._owner,
      _contrast
    );
    
  }
  get_adjustment_contrast() {
    Environment.init_method_get_adjustment_contrast();
    return _call_native_mb_ret(
      Environment.#_bindings.method_get_adjustment_contrast,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_adjustment_saturation(_saturation) {
    Environment.init_method_set_adjustment_saturation();
    return _call_native_mb_no_ret(
      Environment.#_bindings.method_set_adjustment_saturation,
      this._owner,
      _saturation
    );
    
  }
  get_adjustment_saturation() {
    Environment.init_method_get_adjustment_saturation();
    return _call_native_mb_ret(
      Environment.#_bindings.method_get_adjustment_saturation,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_adjustment_color_correction(_color_correction) {
    Environment.init_method_set_adjustment_color_correction();
    return _call_native_mb_no_ret(
      Environment.#_bindings.method_set_adjustment_color_correction,
      this._owner,
      _color_correction
    );
    
  }
  get_adjustment_color_correction() {
    Environment.init_method_get_adjustment_color_correction();
    return _call_native_mb_ret(
      Environment.#_bindings.method_get_adjustment_color_correction,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  
get background_mode () {
  return this.get_background();
}
set background_mode (new_value) {
  this.set_background(new_value);
}
get background_color () {
  return this.get_bg_color();
}
set background_color (new_value) {
  this.set_bg_color(new_value);
}
get background_energy_multiplier () {
  return this.get_bg_energy_multiplier();
}
set background_energy_multiplier (new_value) {
  this.set_bg_energy_multiplier(new_value);
}
get background_intensity () {
  return this.get_bg_intensity();
}
set background_intensity (new_value) {
  this.set_bg_intensity(new_value);
}
get background_canvas_max_layer () {
  return this.get_canvas_max_layer();
}
set background_canvas_max_layer (new_value) {
  this.set_canvas_max_layer(new_value);
}
get background_camera_feed_id () {
  return this.get_camera_feed_id();
}
set background_camera_feed_id (new_value) {
  this.set_camera_feed_id(new_value);
}
get sky () {
  return this.get_sky();
}
set sky (new_value) {
  this.set_sky(new_value);
}
get sky_custom_fov () {
  return this.get_sky_custom_fov();
}
set sky_custom_fov (new_value) {
  this.set_sky_custom_fov(new_value);
}
get sky_rotation () {
  return this.get_sky_rotation();
}
set sky_rotation (new_value) {
  this.set_sky_rotation(new_value);
}
get ambient_light_source () {
  return this.get_ambient_source();
}
set ambient_light_source (new_value) {
  this.set_ambient_source(new_value);
}
get ambient_light_color () {
  return this.get_ambient_light_color();
}
set ambient_light_color (new_value) {
  this.set_ambient_light_color(new_value);
}
get ambient_light_sky_contribution () {
  return this.get_ambient_light_sky_contribution();
}
set ambient_light_sky_contribution (new_value) {
  this.set_ambient_light_sky_contribution(new_value);
}
get ambient_light_energy () {
  return this.get_ambient_light_energy();
}
set ambient_light_energy (new_value) {
  this.set_ambient_light_energy(new_value);
}
get reflected_light_source () {
  return this.get_reflection_source();
}
set reflected_light_source (new_value) {
  this.set_reflection_source(new_value);
}
get tonemap_mode () {
  return this.get_tonemapper();
}
set tonemap_mode (new_value) {
  this.set_tonemapper(new_value);
}
get tonemap_exposure () {
  return this.get_tonemap_exposure();
}
set tonemap_exposure (new_value) {
  this.set_tonemap_exposure(new_value);
}
get tonemap_white () {
  return this.get_tonemap_white();
}
set tonemap_white (new_value) {
  this.set_tonemap_white(new_value);
}
get ssr_enabled () {
  return this.is_ssr_enabled();
}
set ssr_enabled (new_value) {
  this.set_ssr_enabled(new_value);
}
get ssr_max_steps () {
  return this.get_ssr_max_steps();
}
set ssr_max_steps (new_value) {
  this.set_ssr_max_steps(new_value);
}
get ssr_fade_in () {
  return this.get_ssr_fade_in();
}
set ssr_fade_in (new_value) {
  this.set_ssr_fade_in(new_value);
}
get ssr_fade_out () {
  return this.get_ssr_fade_out();
}
set ssr_fade_out (new_value) {
  this.set_ssr_fade_out(new_value);
}
get ssr_depth_tolerance () {
  return this.get_ssr_depth_tolerance();
}
set ssr_depth_tolerance (new_value) {
  this.set_ssr_depth_tolerance(new_value);
}
get ssao_enabled () {
  return this.is_ssao_enabled();
}
set ssao_enabled (new_value) {
  this.set_ssao_enabled(new_value);
}
get ssao_radius () {
  return this.get_ssao_radius();
}
set ssao_radius (new_value) {
  this.set_ssao_radius(new_value);
}
get ssao_intensity () {
  return this.get_ssao_intensity();
}
set ssao_intensity (new_value) {
  this.set_ssao_intensity(new_value);
}
get ssao_power () {
  return this.get_ssao_power();
}
set ssao_power (new_value) {
  this.set_ssao_power(new_value);
}
get ssao_detail () {
  return this.get_ssao_detail();
}
set ssao_detail (new_value) {
  this.set_ssao_detail(new_value);
}
get ssao_horizon () {
  return this.get_ssao_horizon();
}
set ssao_horizon (new_value) {
  this.set_ssao_horizon(new_value);
}
get ssao_sharpness () {
  return this.get_ssao_sharpness();
}
set ssao_sharpness (new_value) {
  this.set_ssao_sharpness(new_value);
}
get ssao_light_affect () {
  return this.get_ssao_direct_light_affect();
}
set ssao_light_affect (new_value) {
  this.set_ssao_direct_light_affect(new_value);
}
get ssao_ao_channel_affect () {
  return this.get_ssao_ao_channel_affect();
}
set ssao_ao_channel_affect (new_value) {
  this.set_ssao_ao_channel_affect(new_value);
}
get ssil_enabled () {
  return this.is_ssil_enabled();
}
set ssil_enabled (new_value) {
  this.set_ssil_enabled(new_value);
}
get ssil_radius () {
  return this.get_ssil_radius();
}
set ssil_radius (new_value) {
  this.set_ssil_radius(new_value);
}
get ssil_intensity () {
  return this.get_ssil_intensity();
}
set ssil_intensity (new_value) {
  this.set_ssil_intensity(new_value);
}
get ssil_sharpness () {
  return this.get_ssil_sharpness();
}
set ssil_sharpness (new_value) {
  this.set_ssil_sharpness(new_value);
}
get ssil_normal_rejection () {
  return this.get_ssil_normal_rejection();
}
set ssil_normal_rejection (new_value) {
  this.set_ssil_normal_rejection(new_value);
}
get sdfgi_enabled () {
  return this.is_sdfgi_enabled();
}
set sdfgi_enabled (new_value) {
  this.set_sdfgi_enabled(new_value);
}
get sdfgi_use_occlusion () {
  return this.is_sdfgi_using_occlusion();
}
set sdfgi_use_occlusion (new_value) {
  this.set_sdfgi_use_occlusion(new_value);
}
get sdfgi_read_sky_light () {
  return this.is_sdfgi_reading_sky_light();
}
set sdfgi_read_sky_light (new_value) {
  this.set_sdfgi_read_sky_light(new_value);
}
get sdfgi_bounce_feedback () {
  return this.get_sdfgi_bounce_feedback();
}
set sdfgi_bounce_feedback (new_value) {
  this.set_sdfgi_bounce_feedback(new_value);
}
get sdfgi_cascades () {
  return this.get_sdfgi_cascades();
}
set sdfgi_cascades (new_value) {
  this.set_sdfgi_cascades(new_value);
}
get sdfgi_min_cell_size () {
  return this.get_sdfgi_min_cell_size();
}
set sdfgi_min_cell_size (new_value) {
  this.set_sdfgi_min_cell_size(new_value);
}
get sdfgi_cascade0_distance () {
  return this.get_sdfgi_cascade0_distance();
}
set sdfgi_cascade0_distance (new_value) {
  this.set_sdfgi_cascade0_distance(new_value);
}
get sdfgi_max_distance () {
  return this.get_sdfgi_max_distance();
}
set sdfgi_max_distance (new_value) {
  this.set_sdfgi_max_distance(new_value);
}
get sdfgi_y_scale () {
  return this.get_sdfgi_y_scale();
}
set sdfgi_y_scale (new_value) {
  this.set_sdfgi_y_scale(new_value);
}
get sdfgi_energy () {
  return this.get_sdfgi_energy();
}
set sdfgi_energy (new_value) {
  this.set_sdfgi_energy(new_value);
}
get sdfgi_normal_bias () {
  return this.get_sdfgi_normal_bias();
}
set sdfgi_normal_bias (new_value) {
  this.set_sdfgi_normal_bias(new_value);
}
get sdfgi_probe_bias () {
  return this.get_sdfgi_probe_bias();
}
set sdfgi_probe_bias (new_value) {
  this.set_sdfgi_probe_bias(new_value);
}
get glow_enabled () {
  return this.is_glow_enabled();
}
set glow_enabled (new_value) {
  this.set_glow_enabled(new_value);
}
get glow_normalized () {
  return this.is_glow_normalized();
}
set glow_normalized (new_value) {
  this.set_glow_normalized(new_value);
}
get glow_intensity () {
  return this.get_glow_intensity();
}
set glow_intensity (new_value) {
  this.set_glow_intensity(new_value);
}
get glow_strength () {
  return this.get_glow_strength();
}
set glow_strength (new_value) {
  this.set_glow_strength(new_value);
}
get glow_mix () {
  return this.get_glow_mix();
}
set glow_mix (new_value) {
  this.set_glow_mix(new_value);
}
get glow_bloom () {
  return this.get_glow_bloom();
}
set glow_bloom (new_value) {
  this.set_glow_bloom(new_value);
}
get glow_blend_mode () {
  return this.get_glow_blend_mode();
}
set glow_blend_mode (new_value) {
  this.set_glow_blend_mode(new_value);
}
get glow_hdr_threshold () {
  return this.get_glow_hdr_bleed_threshold();
}
set glow_hdr_threshold (new_value) {
  this.set_glow_hdr_bleed_threshold(new_value);
}
get glow_hdr_scale () {
  return this.get_glow_hdr_bleed_scale();
}
set glow_hdr_scale (new_value) {
  this.set_glow_hdr_bleed_scale(new_value);
}
get glow_hdr_luminance_cap () {
  return this.get_glow_hdr_luminance_cap();
}
set glow_hdr_luminance_cap (new_value) {
  this.set_glow_hdr_luminance_cap(new_value);
}
get glow_map_strength () {
  return this.get_glow_map_strength();
}
set glow_map_strength (new_value) {
  this.set_glow_map_strength(new_value);
}
get glow_map () {
  return this.get_glow_map();
}
set glow_map (new_value) {
  this.set_glow_map(new_value);
}
get fog_enabled () {
  return this.is_fog_enabled();
}
set fog_enabled (new_value) {
  this.set_fog_enabled(new_value);
}
get fog_mode () {
  return this.get_fog_mode();
}
set fog_mode (new_value) {
  this.set_fog_mode(new_value);
}
get fog_light_color () {
  return this.get_fog_light_color();
}
set fog_light_color (new_value) {
  this.set_fog_light_color(new_value);
}
get fog_light_energy () {
  return this.get_fog_light_energy();
}
set fog_light_energy (new_value) {
  this.set_fog_light_energy(new_value);
}
get fog_sun_scatter () {
  return this.get_fog_sun_scatter();
}
set fog_sun_scatter (new_value) {
  this.set_fog_sun_scatter(new_value);
}
get fog_density () {
  return this.get_fog_density();
}
set fog_density (new_value) {
  this.set_fog_density(new_value);
}
get fog_aerial_perspective () {
  return this.get_fog_aerial_perspective();
}
set fog_aerial_perspective (new_value) {
  this.set_fog_aerial_perspective(new_value);
}
get fog_sky_affect () {
  return this.get_fog_sky_affect();
}
set fog_sky_affect (new_value) {
  this.set_fog_sky_affect(new_value);
}
get fog_height () {
  return this.get_fog_height();
}
set fog_height (new_value) {
  this.set_fog_height(new_value);
}
get fog_height_density () {
  return this.get_fog_height_density();
}
set fog_height_density (new_value) {
  this.set_fog_height_density(new_value);
}
get fog_depth_curve () {
  return this.get_fog_depth_curve();
}
set fog_depth_curve (new_value) {
  this.set_fog_depth_curve(new_value);
}
get fog_depth_begin () {
  return this.get_fog_depth_begin();
}
set fog_depth_begin (new_value) {
  this.set_fog_depth_begin(new_value);
}
get fog_depth_end () {
  return this.get_fog_depth_end();
}
set fog_depth_end (new_value) {
  this.set_fog_depth_end(new_value);
}
get volumetric_fog_enabled () {
  return this.is_volumetric_fog_enabled();
}
set volumetric_fog_enabled (new_value) {
  this.set_volumetric_fog_enabled(new_value);
}
get volumetric_fog_density () {
  return this.get_volumetric_fog_density();
}
set volumetric_fog_density (new_value) {
  this.set_volumetric_fog_density(new_value);
}
get volumetric_fog_albedo () {
  return this.get_volumetric_fog_albedo();
}
set volumetric_fog_albedo (new_value) {
  this.set_volumetric_fog_albedo(new_value);
}
get volumetric_fog_emission () {
  return this.get_volumetric_fog_emission();
}
set volumetric_fog_emission (new_value) {
  this.set_volumetric_fog_emission(new_value);
}
get volumetric_fog_emission_energy () {
  return this.get_volumetric_fog_emission_energy();
}
set volumetric_fog_emission_energy (new_value) {
  this.set_volumetric_fog_emission_energy(new_value);
}
get volumetric_fog_gi_inject () {
  return this.get_volumetric_fog_gi_inject();
}
set volumetric_fog_gi_inject (new_value) {
  this.set_volumetric_fog_gi_inject(new_value);
}
get volumetric_fog_anisotropy () {
  return this.get_volumetric_fog_anisotropy();
}
set volumetric_fog_anisotropy (new_value) {
  this.set_volumetric_fog_anisotropy(new_value);
}
get volumetric_fog_length () {
  return this.get_volumetric_fog_length();
}
set volumetric_fog_length (new_value) {
  this.set_volumetric_fog_length(new_value);
}
get volumetric_fog_detail_spread () {
  return this.get_volumetric_fog_detail_spread();
}
set volumetric_fog_detail_spread (new_value) {
  this.set_volumetric_fog_detail_spread(new_value);
}
get volumetric_fog_ambient_inject () {
  return this.get_volumetric_fog_ambient_inject();
}
set volumetric_fog_ambient_inject (new_value) {
  this.set_volumetric_fog_ambient_inject(new_value);
}
get volumetric_fog_sky_affect () {
  return this.get_volumetric_fog_sky_affect();
}
set volumetric_fog_sky_affect (new_value) {
  this.set_volumetric_fog_sky_affect(new_value);
}
get volumetric_fog_temporal_reprojection_enabled () {
  return this.is_volumetric_fog_temporal_reprojection_enabled();
}
set volumetric_fog_temporal_reprojection_enabled (new_value) {
  this.set_volumetric_fog_temporal_reprojection_enabled(new_value);
}
get volumetric_fog_temporal_reprojection_amount () {
  return this.get_volumetric_fog_temporal_reprojection_amount();
}
set volumetric_fog_temporal_reprojection_amount (new_value) {
  this.set_volumetric_fog_temporal_reprojection_amount(new_value);
}
get adjustment_enabled () {
  return this.is_adjustment_enabled();
}
set adjustment_enabled (new_value) {
  this.set_adjustment_enabled(new_value);
}
get adjustment_brightness () {
  return this.get_adjustment_brightness();
}
set adjustment_brightness (new_value) {
  this.set_adjustment_brightness(new_value);
}
get adjustment_contrast () {
  return this.get_adjustment_contrast();
}
set adjustment_contrast (new_value) {
  this.set_adjustment_contrast(new_value);
}
get adjustment_saturation () {
  return this.get_adjustment_saturation();
}
set adjustment_saturation (new_value) {
  this.set_adjustment_saturation(new_value);
}
get adjustment_color_correction () {
  return this.get_adjustment_color_correction();
}
set adjustment_color_correction (new_value) {
  this.set_adjustment_color_correction(new_value);
}

  static BGMode = {
    BG_CLEAR_COLOR: 0,
    BG_COLOR: 1,
    BG_SKY: 2,
    BG_CANVAS: 3,
    BG_KEEP: 4,
    BG_CAMERA_FEED: 5,
    BG_MAX: 6,
  }
  static AmbientSource = {
    AMBIENT_SOURCE_BG: 0,
    AMBIENT_SOURCE_DISABLED: 1,
    AMBIENT_SOURCE_COLOR: 2,
    AMBIENT_SOURCE_SKY: 3,
  }
  static ReflectionSource = {
    REFLECTION_SOURCE_BG: 0,
    REFLECTION_SOURCE_DISABLED: 1,
    REFLECTION_SOURCE_SKY: 2,
  }
  static ToneMapper = {
    TONE_MAPPER_LINEAR: 0,
    TONE_MAPPER_REINHARDT: 1,
    TONE_MAPPER_FILMIC: 2,
    TONE_MAPPER_ACES: 3,
  }
  static GlowBlendMode = {
    GLOW_BLEND_MODE_ADDITIVE: 0,
    GLOW_BLEND_MODE_SCREEN: 1,
    GLOW_BLEND_MODE_SOFTLIGHT: 2,
    GLOW_BLEND_MODE_REPLACE: 3,
    GLOW_BLEND_MODE_MIX: 4,
  }
  static FogMode = {
    FOG_MODE_EXPONENTIAL: 0,
    FOG_MODE_DEPTH: 1,
  }
  static SDFGIYScale = {
    SDFGI_Y_SCALE_50_PERCENT: 0,
    SDFGI_Y_SCALE_75_PERCENT: 1,
    SDFGI_Y_SCALE_100_PERCENT: 2,
  }
}