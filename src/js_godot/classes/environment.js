import * as internal from '__internal__';
import { Resource } from 'src/js_godot/classesresource'
import { Color } from 'src/js_godot/variant/color'
import { Vector3 } from 'src/js_godot/variant/vector3'
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

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("Environment");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_background");
      this._bindings.method_set_background = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4071623990
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("get_background");
      this._bindings.method_get_background = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1843210413
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_sky");
      this._bindings.method_set_sky = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3336722921
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("get_sky");
      this._bindings.method_get_sky = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1177136966
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_sky_custom_fov");
      this._bindings.method_set_sky_custom_fov = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("get_sky_custom_fov");
      this._bindings.method_get_sky_custom_fov = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_sky_rotation");
      this._bindings.method_set_sky_rotation = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3460891852
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("get_sky_rotation");
      this._bindings.method_get_sky_rotation = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3360562783
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_bg_color");
      this._bindings.method_set_bg_color = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2920490490
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("get_bg_color");
      this._bindings.method_get_bg_color = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3444240500
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_bg_energy_multiplier");
      this._bindings.method_set_bg_energy_multiplier = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("get_bg_energy_multiplier");
      this._bindings.method_get_bg_energy_multiplier = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_bg_intensity");
      this._bindings.method_set_bg_intensity = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("get_bg_intensity");
      this._bindings.method_get_bg_intensity = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_canvas_max_layer");
      this._bindings.method_set_canvas_max_layer = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("get_canvas_max_layer");
      this._bindings.method_get_canvas_max_layer = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_camera_feed_id");
      this._bindings.method_set_camera_feed_id = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("get_camera_feed_id");
      this._bindings.method_get_camera_feed_id = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_ambient_light_color");
      this._bindings.method_set_ambient_light_color = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2920490490
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("get_ambient_light_color");
      this._bindings.method_get_ambient_light_color = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3444240500
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_ambient_source");
      this._bindings.method_set_ambient_source = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2607780160
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("get_ambient_source");
      this._bindings.method_get_ambient_source = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        67453933
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_ambient_light_energy");
      this._bindings.method_set_ambient_light_energy = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("get_ambient_light_energy");
      this._bindings.method_get_ambient_light_energy = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_ambient_light_sky_contribution");
      this._bindings.method_set_ambient_light_sky_contribution = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("get_ambient_light_sky_contribution");
      this._bindings.method_get_ambient_light_sky_contribution = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_reflection_source");
      this._bindings.method_set_reflection_source = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        299673197
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("get_reflection_source");
      this._bindings.method_get_reflection_source = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        777700713
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_tonemapper");
      this._bindings.method_set_tonemapper = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1509116664
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("get_tonemapper");
      this._bindings.method_get_tonemapper = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2908408137
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_tonemap_exposure");
      this._bindings.method_set_tonemap_exposure = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("get_tonemap_exposure");
      this._bindings.method_get_tonemap_exposure = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_tonemap_white");
      this._bindings.method_set_tonemap_white = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("get_tonemap_white");
      this._bindings.method_get_tonemap_white = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_ssr_enabled");
      this._bindings.method_set_ssr_enabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("is_ssr_enabled");
      this._bindings.method_is_ssr_enabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_ssr_max_steps");
      this._bindings.method_set_ssr_max_steps = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("get_ssr_max_steps");
      this._bindings.method_get_ssr_max_steps = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_ssr_fade_in");
      this._bindings.method_set_ssr_fade_in = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("get_ssr_fade_in");
      this._bindings.method_get_ssr_fade_in = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_ssr_fade_out");
      this._bindings.method_set_ssr_fade_out = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("get_ssr_fade_out");
      this._bindings.method_get_ssr_fade_out = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_ssr_depth_tolerance");
      this._bindings.method_set_ssr_depth_tolerance = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("get_ssr_depth_tolerance");
      this._bindings.method_get_ssr_depth_tolerance = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_ssao_enabled");
      this._bindings.method_set_ssao_enabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("is_ssao_enabled");
      this._bindings.method_is_ssao_enabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_ssao_radius");
      this._bindings.method_set_ssao_radius = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("get_ssao_radius");
      this._bindings.method_get_ssao_radius = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_ssao_intensity");
      this._bindings.method_set_ssao_intensity = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("get_ssao_intensity");
      this._bindings.method_get_ssao_intensity = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_ssao_power");
      this._bindings.method_set_ssao_power = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("get_ssao_power");
      this._bindings.method_get_ssao_power = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_ssao_detail");
      this._bindings.method_set_ssao_detail = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("get_ssao_detail");
      this._bindings.method_get_ssao_detail = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_ssao_horizon");
      this._bindings.method_set_ssao_horizon = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("get_ssao_horizon");
      this._bindings.method_get_ssao_horizon = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_ssao_sharpness");
      this._bindings.method_set_ssao_sharpness = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("get_ssao_sharpness");
      this._bindings.method_get_ssao_sharpness = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_ssao_direct_light_affect");
      this._bindings.method_set_ssao_direct_light_affect = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("get_ssao_direct_light_affect");
      this._bindings.method_get_ssao_direct_light_affect = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_ssao_ao_channel_affect");
      this._bindings.method_set_ssao_ao_channel_affect = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("get_ssao_ao_channel_affect");
      this._bindings.method_get_ssao_ao_channel_affect = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_ssil_enabled");
      this._bindings.method_set_ssil_enabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("is_ssil_enabled");
      this._bindings.method_is_ssil_enabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_ssil_radius");
      this._bindings.method_set_ssil_radius = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("get_ssil_radius");
      this._bindings.method_get_ssil_radius = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_ssil_intensity");
      this._bindings.method_set_ssil_intensity = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("get_ssil_intensity");
      this._bindings.method_get_ssil_intensity = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_ssil_sharpness");
      this._bindings.method_set_ssil_sharpness = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("get_ssil_sharpness");
      this._bindings.method_get_ssil_sharpness = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_ssil_normal_rejection");
      this._bindings.method_set_ssil_normal_rejection = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("get_ssil_normal_rejection");
      this._bindings.method_get_ssil_normal_rejection = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_sdfgi_enabled");
      this._bindings.method_set_sdfgi_enabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("is_sdfgi_enabled");
      this._bindings.method_is_sdfgi_enabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_sdfgi_cascades");
      this._bindings.method_set_sdfgi_cascades = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("get_sdfgi_cascades");
      this._bindings.method_get_sdfgi_cascades = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_sdfgi_min_cell_size");
      this._bindings.method_set_sdfgi_min_cell_size = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("get_sdfgi_min_cell_size");
      this._bindings.method_get_sdfgi_min_cell_size = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_sdfgi_max_distance");
      this._bindings.method_set_sdfgi_max_distance = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("get_sdfgi_max_distance");
      this._bindings.method_get_sdfgi_max_distance = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_sdfgi_cascade0_distance");
      this._bindings.method_set_sdfgi_cascade0_distance = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("get_sdfgi_cascade0_distance");
      this._bindings.method_get_sdfgi_cascade0_distance = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_sdfgi_y_scale");
      this._bindings.method_set_sdfgi_y_scale = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3608608372
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("get_sdfgi_y_scale");
      this._bindings.method_get_sdfgi_y_scale = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2568002245
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_sdfgi_use_occlusion");
      this._bindings.method_set_sdfgi_use_occlusion = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("is_sdfgi_using_occlusion");
      this._bindings.method_is_sdfgi_using_occlusion = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_sdfgi_bounce_feedback");
      this._bindings.method_set_sdfgi_bounce_feedback = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("get_sdfgi_bounce_feedback");
      this._bindings.method_get_sdfgi_bounce_feedback = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_sdfgi_read_sky_light");
      this._bindings.method_set_sdfgi_read_sky_light = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("is_sdfgi_reading_sky_light");
      this._bindings.method_is_sdfgi_reading_sky_light = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_sdfgi_energy");
      this._bindings.method_set_sdfgi_energy = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("get_sdfgi_energy");
      this._bindings.method_get_sdfgi_energy = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_sdfgi_normal_bias");
      this._bindings.method_set_sdfgi_normal_bias = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("get_sdfgi_normal_bias");
      this._bindings.method_get_sdfgi_normal_bias = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_sdfgi_probe_bias");
      this._bindings.method_set_sdfgi_probe_bias = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("get_sdfgi_probe_bias");
      this._bindings.method_get_sdfgi_probe_bias = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_glow_enabled");
      this._bindings.method_set_glow_enabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("is_glow_enabled");
      this._bindings.method_is_glow_enabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_glow_level");
      this._bindings.method_set_glow_level = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1602489585
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("get_glow_level");
      this._bindings.method_get_glow_level = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2339986948
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_glow_normalized");
      this._bindings.method_set_glow_normalized = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("is_glow_normalized");
      this._bindings.method_is_glow_normalized = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_glow_intensity");
      this._bindings.method_set_glow_intensity = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("get_glow_intensity");
      this._bindings.method_get_glow_intensity = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_glow_strength");
      this._bindings.method_set_glow_strength = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("get_glow_strength");
      this._bindings.method_get_glow_strength = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_glow_mix");
      this._bindings.method_set_glow_mix = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("get_glow_mix");
      this._bindings.method_get_glow_mix = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_glow_bloom");
      this._bindings.method_set_glow_bloom = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("get_glow_bloom");
      this._bindings.method_get_glow_bloom = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_glow_blend_mode");
      this._bindings.method_set_glow_blend_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2561587761
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("get_glow_blend_mode");
      this._bindings.method_get_glow_blend_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1529667332
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_glow_hdr_bleed_threshold");
      this._bindings.method_set_glow_hdr_bleed_threshold = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("get_glow_hdr_bleed_threshold");
      this._bindings.method_get_glow_hdr_bleed_threshold = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_glow_hdr_bleed_scale");
      this._bindings.method_set_glow_hdr_bleed_scale = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("get_glow_hdr_bleed_scale");
      this._bindings.method_get_glow_hdr_bleed_scale = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_glow_hdr_luminance_cap");
      this._bindings.method_set_glow_hdr_luminance_cap = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("get_glow_hdr_luminance_cap");
      this._bindings.method_get_glow_hdr_luminance_cap = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_glow_map_strength");
      this._bindings.method_set_glow_map_strength = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("get_glow_map_strength");
      this._bindings.method_get_glow_map_strength = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_glow_map");
      this._bindings.method_set_glow_map = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1790811099
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("get_glow_map");
      this._bindings.method_get_glow_map = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4037048985
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_fog_enabled");
      this._bindings.method_set_fog_enabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("is_fog_enabled");
      this._bindings.method_is_fog_enabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_fog_mode");
      this._bindings.method_set_fog_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3059806579
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("get_fog_mode");
      this._bindings.method_get_fog_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2456062483
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_fog_light_color");
      this._bindings.method_set_fog_light_color = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2920490490
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("get_fog_light_color");
      this._bindings.method_get_fog_light_color = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3444240500
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_fog_light_energy");
      this._bindings.method_set_fog_light_energy = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("get_fog_light_energy");
      this._bindings.method_get_fog_light_energy = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_fog_sun_scatter");
      this._bindings.method_set_fog_sun_scatter = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("get_fog_sun_scatter");
      this._bindings.method_get_fog_sun_scatter = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_fog_density");
      this._bindings.method_set_fog_density = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("get_fog_density");
      this._bindings.method_get_fog_density = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_fog_height");
      this._bindings.method_set_fog_height = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("get_fog_height");
      this._bindings.method_get_fog_height = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_fog_height_density");
      this._bindings.method_set_fog_height_density = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("get_fog_height_density");
      this._bindings.method_get_fog_height_density = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_fog_aerial_perspective");
      this._bindings.method_set_fog_aerial_perspective = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("get_fog_aerial_perspective");
      this._bindings.method_get_fog_aerial_perspective = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_fog_sky_affect");
      this._bindings.method_set_fog_sky_affect = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("get_fog_sky_affect");
      this._bindings.method_get_fog_sky_affect = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_fog_depth_curve");
      this._bindings.method_set_fog_depth_curve = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("get_fog_depth_curve");
      this._bindings.method_get_fog_depth_curve = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_fog_depth_begin");
      this._bindings.method_set_fog_depth_begin = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("get_fog_depth_begin");
      this._bindings.method_get_fog_depth_begin = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_fog_depth_end");
      this._bindings.method_set_fog_depth_end = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("get_fog_depth_end");
      this._bindings.method_get_fog_depth_end = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_volumetric_fog_enabled");
      this._bindings.method_set_volumetric_fog_enabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("is_volumetric_fog_enabled");
      this._bindings.method_is_volumetric_fog_enabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_volumetric_fog_emission");
      this._bindings.method_set_volumetric_fog_emission = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2920490490
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("get_volumetric_fog_emission");
      this._bindings.method_get_volumetric_fog_emission = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3444240500
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_volumetric_fog_albedo");
      this._bindings.method_set_volumetric_fog_albedo = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2920490490
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("get_volumetric_fog_albedo");
      this._bindings.method_get_volumetric_fog_albedo = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3444240500
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_volumetric_fog_density");
      this._bindings.method_set_volumetric_fog_density = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("get_volumetric_fog_density");
      this._bindings.method_get_volumetric_fog_density = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_volumetric_fog_emission_energy");
      this._bindings.method_set_volumetric_fog_emission_energy = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("get_volumetric_fog_emission_energy");
      this._bindings.method_get_volumetric_fog_emission_energy = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_volumetric_fog_anisotropy");
      this._bindings.method_set_volumetric_fog_anisotropy = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("get_volumetric_fog_anisotropy");
      this._bindings.method_get_volumetric_fog_anisotropy = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_volumetric_fog_length");
      this._bindings.method_set_volumetric_fog_length = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("get_volumetric_fog_length");
      this._bindings.method_get_volumetric_fog_length = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_volumetric_fog_detail_spread");
      this._bindings.method_set_volumetric_fog_detail_spread = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("get_volumetric_fog_detail_spread");
      this._bindings.method_get_volumetric_fog_detail_spread = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_volumetric_fog_gi_inject");
      this._bindings.method_set_volumetric_fog_gi_inject = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("get_volumetric_fog_gi_inject");
      this._bindings.method_get_volumetric_fog_gi_inject = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_volumetric_fog_ambient_inject");
      this._bindings.method_set_volumetric_fog_ambient_inject = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("get_volumetric_fog_ambient_inject");
      this._bindings.method_get_volumetric_fog_ambient_inject = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_volumetric_fog_sky_affect");
      this._bindings.method_set_volumetric_fog_sky_affect = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("get_volumetric_fog_sky_affect");
      this._bindings.method_get_volumetric_fog_sky_affect = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_volumetric_fog_temporal_reprojection_enabled");
      this._bindings.method_set_volumetric_fog_temporal_reprojection_enabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("is_volumetric_fog_temporal_reprojection_enabled");
      this._bindings.method_is_volumetric_fog_temporal_reprojection_enabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_volumetric_fog_temporal_reprojection_amount");
      this._bindings.method_set_volumetric_fog_temporal_reprojection_amount = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("get_volumetric_fog_temporal_reprojection_amount");
      this._bindings.method_get_volumetric_fog_temporal_reprojection_amount = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_adjustment_enabled");
      this._bindings.method_set_adjustment_enabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("is_adjustment_enabled");
      this._bindings.method_is_adjustment_enabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_adjustment_brightness");
      this._bindings.method_set_adjustment_brightness = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("get_adjustment_brightness");
      this._bindings.method_get_adjustment_brightness = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_adjustment_contrast");
      this._bindings.method_set_adjustment_contrast = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("get_adjustment_contrast");
      this._bindings.method_get_adjustment_contrast = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_adjustment_saturation");
      this._bindings.method_set_adjustment_saturation = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("get_adjustment_saturation");
      this._bindings.method_get_adjustment_saturation = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("set_adjustment_color_correction");
      this._bindings.method_set_adjustment_color_correction = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1790811099
      );
    }
    {
      let classname = new StringName("Environment");
      let methodname = new StringName("get_adjustment_color_correction");
      this._bindings.method_get_adjustment_color_correction = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4037048985
      );
    }
  }
  set_background(_mode) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_background,
      this._owner,
      _mode
    );
  }
  get_background() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_background,
      this._owner,
			Variant.INT,
      
    );
  }
  set_sky(_sky) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_sky,
      this._owner,
      _sky
    );
  }
  get_sky() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_sky,
      this._owner,
			Variant.INT,
      
    );
  }
  set_sky_custom_fov(_scale) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_sky_custom_fov,
      this._owner,
      _scale
    );
  }
  get_sky_custom_fov() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_sky_custom_fov,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_sky_rotation(_euler_radians) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_sky_rotation,
      this._owner,
      _euler_radians
    );
  }
  get_sky_rotation() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_sky_rotation,
      this._owner,
			Variant.Type.VECTOR3
    ,
      
    );
  }
  set_bg_color(_color) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_bg_color,
      this._owner,
      _color
    );
  }
  get_bg_color() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_bg_color,
      this._owner,
			Variant.Type.COLOR
    ,
      
    );
  }
  set_bg_energy_multiplier(_energy) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_bg_energy_multiplier,
      this._owner,
      _energy
    );
  }
  get_bg_energy_multiplier() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_bg_energy_multiplier,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_bg_intensity(_energy) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_bg_intensity,
      this._owner,
      _energy
    );
  }
  get_bg_intensity() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_bg_intensity,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_canvas_max_layer(_layer) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_canvas_max_layer,
      this._owner,
      _layer
    );
  }
  get_canvas_max_layer() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_canvas_max_layer,
      this._owner,
			Variant.Type.INT,
      
    );
  }
  set_camera_feed_id(_id) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_camera_feed_id,
      this._owner,
      _id
    );
  }
  get_camera_feed_id() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_camera_feed_id,
      this._owner,
			Variant.Type.INT,
      
    );
  }
  set_ambient_light_color(_color) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_ambient_light_color,
      this._owner,
      _color
    );
  }
  get_ambient_light_color() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_ambient_light_color,
      this._owner,
			Variant.Type.COLOR
    ,
      
    );
  }
  set_ambient_source(_source) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_ambient_source,
      this._owner,
      _source
    );
  }
  get_ambient_source() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_ambient_source,
      this._owner,
			Variant.INT,
      
    );
  }
  set_ambient_light_energy(_energy) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_ambient_light_energy,
      this._owner,
      _energy
    );
  }
  get_ambient_light_energy() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_ambient_light_energy,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_ambient_light_sky_contribution(_ratio) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_ambient_light_sky_contribution,
      this._owner,
      _ratio
    );
  }
  get_ambient_light_sky_contribution() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_ambient_light_sky_contribution,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_reflection_source(_source) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_reflection_source,
      this._owner,
      _source
    );
  }
  get_reflection_source() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_reflection_source,
      this._owner,
			Variant.INT,
      
    );
  }
  set_tonemapper(_mode) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_tonemapper,
      this._owner,
      _mode
    );
  }
  get_tonemapper() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_tonemapper,
      this._owner,
			Variant.INT,
      
    );
  }
  set_tonemap_exposure(_exposure) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_tonemap_exposure,
      this._owner,
      _exposure
    );
  }
  get_tonemap_exposure() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_tonemap_exposure,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_tonemap_white(_white) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_tonemap_white,
      this._owner,
      _white
    );
  }
  get_tonemap_white() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_tonemap_white,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_ssr_enabled(_enabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_ssr_enabled,
      this._owner,
      _enabled
    );
  }
  is_ssr_enabled() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_ssr_enabled,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  set_ssr_max_steps(_max_steps) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_ssr_max_steps,
      this._owner,
      _max_steps
    );
  }
  get_ssr_max_steps() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_ssr_max_steps,
      this._owner,
			Variant.Type.INT,
      
    );
  }
  set_ssr_fade_in(_fade_in) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_ssr_fade_in,
      this._owner,
      _fade_in
    );
  }
  get_ssr_fade_in() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_ssr_fade_in,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_ssr_fade_out(_fade_out) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_ssr_fade_out,
      this._owner,
      _fade_out
    );
  }
  get_ssr_fade_out() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_ssr_fade_out,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_ssr_depth_tolerance(_depth_tolerance) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_ssr_depth_tolerance,
      this._owner,
      _depth_tolerance
    );
  }
  get_ssr_depth_tolerance() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_ssr_depth_tolerance,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_ssao_enabled(_enabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_ssao_enabled,
      this._owner,
      _enabled
    );
  }
  is_ssao_enabled() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_ssao_enabled,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  set_ssao_radius(_radius) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_ssao_radius,
      this._owner,
      _radius
    );
  }
  get_ssao_radius() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_ssao_radius,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_ssao_intensity(_intensity) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_ssao_intensity,
      this._owner,
      _intensity
    );
  }
  get_ssao_intensity() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_ssao_intensity,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_ssao_power(_power) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_ssao_power,
      this._owner,
      _power
    );
  }
  get_ssao_power() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_ssao_power,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_ssao_detail(_detail) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_ssao_detail,
      this._owner,
      _detail
    );
  }
  get_ssao_detail() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_ssao_detail,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_ssao_horizon(_horizon) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_ssao_horizon,
      this._owner,
      _horizon
    );
  }
  get_ssao_horizon() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_ssao_horizon,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_ssao_sharpness(_sharpness) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_ssao_sharpness,
      this._owner,
      _sharpness
    );
  }
  get_ssao_sharpness() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_ssao_sharpness,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_ssao_direct_light_affect(_amount) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_ssao_direct_light_affect,
      this._owner,
      _amount
    );
  }
  get_ssao_direct_light_affect() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_ssao_direct_light_affect,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_ssao_ao_channel_affect(_amount) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_ssao_ao_channel_affect,
      this._owner,
      _amount
    );
  }
  get_ssao_ao_channel_affect() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_ssao_ao_channel_affect,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_ssil_enabled(_enabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_ssil_enabled,
      this._owner,
      _enabled
    );
  }
  is_ssil_enabled() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_ssil_enabled,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  set_ssil_radius(_radius) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_ssil_radius,
      this._owner,
      _radius
    );
  }
  get_ssil_radius() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_ssil_radius,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_ssil_intensity(_intensity) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_ssil_intensity,
      this._owner,
      _intensity
    );
  }
  get_ssil_intensity() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_ssil_intensity,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_ssil_sharpness(_sharpness) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_ssil_sharpness,
      this._owner,
      _sharpness
    );
  }
  get_ssil_sharpness() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_ssil_sharpness,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_ssil_normal_rejection(_normal_rejection) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_ssil_normal_rejection,
      this._owner,
      _normal_rejection
    );
  }
  get_ssil_normal_rejection() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_ssil_normal_rejection,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_sdfgi_enabled(_enabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_sdfgi_enabled,
      this._owner,
      _enabled
    );
  }
  is_sdfgi_enabled() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_sdfgi_enabled,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  set_sdfgi_cascades(_amount) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_sdfgi_cascades,
      this._owner,
      _amount
    );
  }
  get_sdfgi_cascades() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_sdfgi_cascades,
      this._owner,
			Variant.Type.INT,
      
    );
  }
  set_sdfgi_min_cell_size(_size) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_sdfgi_min_cell_size,
      this._owner,
      _size
    );
  }
  get_sdfgi_min_cell_size() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_sdfgi_min_cell_size,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_sdfgi_max_distance(_distance) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_sdfgi_max_distance,
      this._owner,
      _distance
    );
  }
  get_sdfgi_max_distance() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_sdfgi_max_distance,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_sdfgi_cascade0_distance(_distance) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_sdfgi_cascade0_distance,
      this._owner,
      _distance
    );
  }
  get_sdfgi_cascade0_distance() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_sdfgi_cascade0_distance,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_sdfgi_y_scale(_scale) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_sdfgi_y_scale,
      this._owner,
      _scale
    );
  }
  get_sdfgi_y_scale() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_sdfgi_y_scale,
      this._owner,
			Variant.INT,
      
    );
  }
  set_sdfgi_use_occlusion(_enable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_sdfgi_use_occlusion,
      this._owner,
      _enable
    );
  }
  is_sdfgi_using_occlusion() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_sdfgi_using_occlusion,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  set_sdfgi_bounce_feedback(_amount) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_sdfgi_bounce_feedback,
      this._owner,
      _amount
    );
  }
  get_sdfgi_bounce_feedback() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_sdfgi_bounce_feedback,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_sdfgi_read_sky_light(_enable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_sdfgi_read_sky_light,
      this._owner,
      _enable
    );
  }
  is_sdfgi_reading_sky_light() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_sdfgi_reading_sky_light,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  set_sdfgi_energy(_amount) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_sdfgi_energy,
      this._owner,
      _amount
    );
  }
  get_sdfgi_energy() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_sdfgi_energy,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_sdfgi_normal_bias(_bias) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_sdfgi_normal_bias,
      this._owner,
      _bias
    );
  }
  get_sdfgi_normal_bias() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_sdfgi_normal_bias,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_sdfgi_probe_bias(_bias) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_sdfgi_probe_bias,
      this._owner,
      _bias
    );
  }
  get_sdfgi_probe_bias() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_sdfgi_probe_bias,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_glow_enabled(_enabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_glow_enabled,
      this._owner,
      _enabled
    );
  }
  is_glow_enabled() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_glow_enabled,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  set_glow_level(_idx, _intensity) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_glow_level,
      this._owner,
      _idx, _intensity
    );
  }
  get_glow_level(_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_glow_level,
      this._owner,
			Variant.Type.FLOAT,
      _idx
    );
  }
  set_glow_normalized(_normalize) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_glow_normalized,
      this._owner,
      _normalize
    );
  }
  is_glow_normalized() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_glow_normalized,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  set_glow_intensity(_intensity) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_glow_intensity,
      this._owner,
      _intensity
    );
  }
  get_glow_intensity() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_glow_intensity,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_glow_strength(_strength) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_glow_strength,
      this._owner,
      _strength
    );
  }
  get_glow_strength() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_glow_strength,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_glow_mix(_mix) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_glow_mix,
      this._owner,
      _mix
    );
  }
  get_glow_mix() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_glow_mix,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_glow_bloom(_amount) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_glow_bloom,
      this._owner,
      _amount
    );
  }
  get_glow_bloom() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_glow_bloom,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_glow_blend_mode(_mode) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_glow_blend_mode,
      this._owner,
      _mode
    );
  }
  get_glow_blend_mode() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_glow_blend_mode,
      this._owner,
			Variant.INT,
      
    );
  }
  set_glow_hdr_bleed_threshold(_threshold) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_glow_hdr_bleed_threshold,
      this._owner,
      _threshold
    );
  }
  get_glow_hdr_bleed_threshold() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_glow_hdr_bleed_threshold,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_glow_hdr_bleed_scale(_scale) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_glow_hdr_bleed_scale,
      this._owner,
      _scale
    );
  }
  get_glow_hdr_bleed_scale() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_glow_hdr_bleed_scale,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_glow_hdr_luminance_cap(_amount) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_glow_hdr_luminance_cap,
      this._owner,
      _amount
    );
  }
  get_glow_hdr_luminance_cap() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_glow_hdr_luminance_cap,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_glow_map_strength(_strength) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_glow_map_strength,
      this._owner,
      _strength
    );
  }
  get_glow_map_strength() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_glow_map_strength,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_glow_map(_mode) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_glow_map,
      this._owner,
      _mode
    );
  }
  get_glow_map() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_glow_map,
      this._owner,
			Variant.INT,
      
    );
  }
  set_fog_enabled(_enabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_fog_enabled,
      this._owner,
      _enabled
    );
  }
  is_fog_enabled() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_fog_enabled,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  set_fog_mode(_mode) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_fog_mode,
      this._owner,
      _mode
    );
  }
  get_fog_mode() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_fog_mode,
      this._owner,
			Variant.INT,
      
    );
  }
  set_fog_light_color(_light_color) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_fog_light_color,
      this._owner,
      _light_color
    );
  }
  get_fog_light_color() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_fog_light_color,
      this._owner,
			Variant.Type.COLOR
    ,
      
    );
  }
  set_fog_light_energy(_light_energy) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_fog_light_energy,
      this._owner,
      _light_energy
    );
  }
  get_fog_light_energy() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_fog_light_energy,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_fog_sun_scatter(_sun_scatter) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_fog_sun_scatter,
      this._owner,
      _sun_scatter
    );
  }
  get_fog_sun_scatter() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_fog_sun_scatter,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_fog_density(_density) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_fog_density,
      this._owner,
      _density
    );
  }
  get_fog_density() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_fog_density,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_fog_height(_height) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_fog_height,
      this._owner,
      _height
    );
  }
  get_fog_height() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_fog_height,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_fog_height_density(_height_density) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_fog_height_density,
      this._owner,
      _height_density
    );
  }
  get_fog_height_density() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_fog_height_density,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_fog_aerial_perspective(_aerial_perspective) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_fog_aerial_perspective,
      this._owner,
      _aerial_perspective
    );
  }
  get_fog_aerial_perspective() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_fog_aerial_perspective,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_fog_sky_affect(_sky_affect) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_fog_sky_affect,
      this._owner,
      _sky_affect
    );
  }
  get_fog_sky_affect() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_fog_sky_affect,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_fog_depth_curve(_curve) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_fog_depth_curve,
      this._owner,
      _curve
    );
  }
  get_fog_depth_curve() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_fog_depth_curve,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_fog_depth_begin(_begin) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_fog_depth_begin,
      this._owner,
      _begin
    );
  }
  get_fog_depth_begin() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_fog_depth_begin,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_fog_depth_end(_end) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_fog_depth_end,
      this._owner,
      _end
    );
  }
  get_fog_depth_end() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_fog_depth_end,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_volumetric_fog_enabled(_enabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_volumetric_fog_enabled,
      this._owner,
      _enabled
    );
  }
  is_volumetric_fog_enabled() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_volumetric_fog_enabled,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  set_volumetric_fog_emission(_color) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_volumetric_fog_emission,
      this._owner,
      _color
    );
  }
  get_volumetric_fog_emission() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_volumetric_fog_emission,
      this._owner,
			Variant.Type.COLOR
    ,
      
    );
  }
  set_volumetric_fog_albedo(_color) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_volumetric_fog_albedo,
      this._owner,
      _color
    );
  }
  get_volumetric_fog_albedo() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_volumetric_fog_albedo,
      this._owner,
			Variant.Type.COLOR
    ,
      
    );
  }
  set_volumetric_fog_density(_density) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_volumetric_fog_density,
      this._owner,
      _density
    );
  }
  get_volumetric_fog_density() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_volumetric_fog_density,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_volumetric_fog_emission_energy(_begin) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_volumetric_fog_emission_energy,
      this._owner,
      _begin
    );
  }
  get_volumetric_fog_emission_energy() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_volumetric_fog_emission_energy,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_volumetric_fog_anisotropy(_anisotropy) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_volumetric_fog_anisotropy,
      this._owner,
      _anisotropy
    );
  }
  get_volumetric_fog_anisotropy() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_volumetric_fog_anisotropy,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_volumetric_fog_length(_length) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_volumetric_fog_length,
      this._owner,
      _length
    );
  }
  get_volumetric_fog_length() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_volumetric_fog_length,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_volumetric_fog_detail_spread(_detail_spread) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_volumetric_fog_detail_spread,
      this._owner,
      _detail_spread
    );
  }
  get_volumetric_fog_detail_spread() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_volumetric_fog_detail_spread,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_volumetric_fog_gi_inject(_gi_inject) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_volumetric_fog_gi_inject,
      this._owner,
      _gi_inject
    );
  }
  get_volumetric_fog_gi_inject() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_volumetric_fog_gi_inject,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_volumetric_fog_ambient_inject(_enabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_volumetric_fog_ambient_inject,
      this._owner,
      _enabled
    );
  }
  get_volumetric_fog_ambient_inject() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_volumetric_fog_ambient_inject,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_volumetric_fog_sky_affect(_sky_affect) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_volumetric_fog_sky_affect,
      this._owner,
      _sky_affect
    );
  }
  get_volumetric_fog_sky_affect() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_volumetric_fog_sky_affect,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_volumetric_fog_temporal_reprojection_enabled(_enabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_volumetric_fog_temporal_reprojection_enabled,
      this._owner,
      _enabled
    );
  }
  is_volumetric_fog_temporal_reprojection_enabled() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_volumetric_fog_temporal_reprojection_enabled,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  set_volumetric_fog_temporal_reprojection_amount(_temporal_reprojection_amount) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_volumetric_fog_temporal_reprojection_amount,
      this._owner,
      _temporal_reprojection_amount
    );
  }
  get_volumetric_fog_temporal_reprojection_amount() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_volumetric_fog_temporal_reprojection_amount,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_adjustment_enabled(_enabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_adjustment_enabled,
      this._owner,
      _enabled
    );
  }
  is_adjustment_enabled() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_adjustment_enabled,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  set_adjustment_brightness(_brightness) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_adjustment_brightness,
      this._owner,
      _brightness
    );
  }
  get_adjustment_brightness() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_adjustment_brightness,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_adjustment_contrast(_contrast) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_adjustment_contrast,
      this._owner,
      _contrast
    );
  }
  get_adjustment_contrast() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_adjustment_contrast,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_adjustment_saturation(_saturation) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_adjustment_saturation,
      this._owner,
      _saturation
    );
  }
  get_adjustment_saturation() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_adjustment_saturation,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_adjustment_color_correction(_color_correction) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_adjustment_color_correction,
      this._owner,
      _color_correction
    );
  }
  get_adjustment_color_correction() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_adjustment_color_correction,
      this._owner,
			Variant.INT,
      
    );
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