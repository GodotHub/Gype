import * as internal from '__internal__';
import { StringName } from 'src/js_godot/variant/string_name'
import { Material } from 'src/js_godot/classes/material'
import { Vector3 } from 'src/js_godot/variant/vector3'
import { Color } from 'src/js_godot/variant/color'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

class _MethodBindings {
    method_set_albedo;
    method_get_albedo;
    method_set_transparency;
    method_get_transparency;
    method_set_alpha_antialiasing;
    method_get_alpha_antialiasing;
    method_set_alpha_antialiasing_edge;
    method_get_alpha_antialiasing_edge;
    method_set_shading_mode;
    method_get_shading_mode;
    method_set_specular;
    method_get_specular;
    method_set_metallic;
    method_get_metallic;
    method_set_roughness;
    method_get_roughness;
    method_set_emission;
    method_get_emission;
    method_set_emission_energy_multiplier;
    method_get_emission_energy_multiplier;
    method_set_emission_intensity;
    method_get_emission_intensity;
    method_set_normal_scale;
    method_get_normal_scale;
    method_set_rim;
    method_get_rim;
    method_set_rim_tint;
    method_get_rim_tint;
    method_set_clearcoat;
    method_get_clearcoat;
    method_set_clearcoat_roughness;
    method_get_clearcoat_roughness;
    method_set_anisotropy;
    method_get_anisotropy;
    method_set_heightmap_scale;
    method_get_heightmap_scale;
    method_set_subsurface_scattering_strength;
    method_get_subsurface_scattering_strength;
    method_set_transmittance_color;
    method_get_transmittance_color;
    method_set_transmittance_depth;
    method_get_transmittance_depth;
    method_set_transmittance_boost;
    method_get_transmittance_boost;
    method_set_backlight;
    method_get_backlight;
    method_set_refraction;
    method_get_refraction;
    method_set_point_size;
    method_get_point_size;
    method_set_detail_uv;
    method_get_detail_uv;
    method_set_blend_mode;
    method_get_blend_mode;
    method_set_depth_draw_mode;
    method_get_depth_draw_mode;
    method_set_cull_mode;
    method_get_cull_mode;
    method_set_diffuse_mode;
    method_get_diffuse_mode;
    method_set_specular_mode;
    method_get_specular_mode;
    method_set_flag;
    method_get_flag;
    method_set_texture_filter;
    method_get_texture_filter;
    method_set_feature;
    method_get_feature;
    method_set_texture;
    method_get_texture;
    method_set_detail_blend_mode;
    method_get_detail_blend_mode;
    method_set_uv1_scale;
    method_get_uv1_scale;
    method_set_uv1_offset;
    method_get_uv1_offset;
    method_set_uv1_triplanar_blend_sharpness;
    method_get_uv1_triplanar_blend_sharpness;
    method_set_uv2_scale;
    method_get_uv2_scale;
    method_set_uv2_offset;
    method_get_uv2_offset;
    method_set_uv2_triplanar_blend_sharpness;
    method_get_uv2_triplanar_blend_sharpness;
    method_set_billboard_mode;
    method_get_billboard_mode;
    method_set_particles_anim_h_frames;
    method_get_particles_anim_h_frames;
    method_set_particles_anim_v_frames;
    method_get_particles_anim_v_frames;
    method_set_particles_anim_loop;
    method_get_particles_anim_loop;
    method_set_heightmap_deep_parallax;
    method_is_heightmap_deep_parallax_enabled;
    method_set_heightmap_deep_parallax_min_layers;
    method_get_heightmap_deep_parallax_min_layers;
    method_set_heightmap_deep_parallax_max_layers;
    method_get_heightmap_deep_parallax_max_layers;
    method_set_heightmap_deep_parallax_flip_tangent;
    method_get_heightmap_deep_parallax_flip_tangent;
    method_set_heightmap_deep_parallax_flip_binormal;
    method_get_heightmap_deep_parallax_flip_binormal;
    method_set_grow;
    method_get_grow;
    method_set_emission_operator;
    method_get_emission_operator;
    method_set_ao_light_affect;
    method_get_ao_light_affect;
    method_set_alpha_scissor_threshold;
    method_get_alpha_scissor_threshold;
    method_set_alpha_hash_scale;
    method_get_alpha_hash_scale;
    method_set_grow_enabled;
    method_is_grow_enabled;
    method_set_metallic_texture_channel;
    method_get_metallic_texture_channel;
    method_set_roughness_texture_channel;
    method_get_roughness_texture_channel;
    method_set_ao_texture_channel;
    method_get_ao_texture_channel;
    method_set_refraction_texture_channel;
    method_get_refraction_texture_channel;
    method_set_proximity_fade_enabled;
    method_is_proximity_fade_enabled;
    method_set_proximity_fade_distance;
    method_get_proximity_fade_distance;
    method_set_msdf_pixel_range;
    method_get_msdf_pixel_range;
    method_set_msdf_outline_size;
    method_get_msdf_outline_size;
    method_set_distance_fade;
    method_get_distance_fade;
    method_set_distance_fade_max_distance;
    method_get_distance_fade_max_distance;
    method_set_distance_fade_min_distance;
    method_get_distance_fade_min_distance;
}


export class BaseMaterial3D extends Material{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("BaseMaterial3D");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("BaseMaterial3D");
        let methodname = new StringName("set_albedo");
        this._bindings.method_set_albedo = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2920490490
        );
      }
      {
        let classname = new StringName("BaseMaterial3D");
        let methodname = new StringName("get_albedo");
        this._bindings.method_get_albedo = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3444240500
        );
      }
      {
        let classname = new StringName("BaseMaterial3D");
        let methodname = new StringName("set_transparency");
        this._bindings.method_set_transparency = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3435651667
        );
      }
      {
        let classname = new StringName("BaseMaterial3D");
        let methodname = new StringName("get_transparency");
        this._bindings.method_get_transparency = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          990903061
        );
      }
      {
        let classname = new StringName("BaseMaterial3D");
        let methodname = new StringName("set_alpha_antialiasing");
        this._bindings.method_set_alpha_antialiasing = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3212649852
        );
      }
      {
        let classname = new StringName("BaseMaterial3D");
        let methodname = new StringName("get_alpha_antialiasing");
        this._bindings.method_get_alpha_antialiasing = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2889939400
        );
      }
      {
        let classname = new StringName("BaseMaterial3D");
        let methodname = new StringName("set_alpha_antialiasing_edge");
        this._bindings.method_set_alpha_antialiasing_edge = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
        let classname = new StringName("BaseMaterial3D");
        let methodname = new StringName("get_alpha_antialiasing_edge");
        this._bindings.method_get_alpha_antialiasing_edge = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1740695150
        );
      }
      {
        let classname = new StringName("BaseMaterial3D");
        let methodname = new StringName("set_shading_mode");
        this._bindings.method_set_shading_mode = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3368750322
        );
      }
      {
        let classname = new StringName("BaseMaterial3D");
        let methodname = new StringName("get_shading_mode");
        this._bindings.method_get_shading_mode = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2132070559
        );
      }
      {
        let classname = new StringName("BaseMaterial3D");
        let methodname = new StringName("set_specular");
        this._bindings.method_set_specular = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
        let classname = new StringName("BaseMaterial3D");
        let methodname = new StringName("get_specular");
        this._bindings.method_get_specular = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1740695150
        );
      }
      {
        let classname = new StringName("BaseMaterial3D");
        let methodname = new StringName("set_metallic");
        this._bindings.method_set_metallic = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
        let classname = new StringName("BaseMaterial3D");
        let methodname = new StringName("get_metallic");
        this._bindings.method_get_metallic = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1740695150
        );
      }
      {
        let classname = new StringName("BaseMaterial3D");
        let methodname = new StringName("set_roughness");
        this._bindings.method_set_roughness = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
        let classname = new StringName("BaseMaterial3D");
        let methodname = new StringName("get_roughness");
        this._bindings.method_get_roughness = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1740695150
        );
      }
      {
        let classname = new StringName("BaseMaterial3D");
        let methodname = new StringName("set_emission");
        this._bindings.method_set_emission = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2920490490
        );
      }
      {
        let classname = new StringName("BaseMaterial3D");
        let methodname = new StringName("get_emission");
        this._bindings.method_get_emission = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3444240500
        );
      }
      {
        let classname = new StringName("BaseMaterial3D");
        let methodname = new StringName("set_emission_energy_multiplier");
        this._bindings.method_set_emission_energy_multiplier = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
        let classname = new StringName("BaseMaterial3D");
        let methodname = new StringName("get_emission_energy_multiplier");
        this._bindings.method_get_emission_energy_multiplier = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1740695150
        );
      }
      {
        let classname = new StringName("BaseMaterial3D");
        let methodname = new StringName("set_emission_intensity");
        this._bindings.method_set_emission_intensity = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
        let classname = new StringName("BaseMaterial3D");
        let methodname = new StringName("get_emission_intensity");
        this._bindings.method_get_emission_intensity = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1740695150
        );
      }
      {
        let classname = new StringName("BaseMaterial3D");
        let methodname = new StringName("set_normal_scale");
        this._bindings.method_set_normal_scale = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
        let classname = new StringName("BaseMaterial3D");
        let methodname = new StringName("get_normal_scale");
        this._bindings.method_get_normal_scale = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1740695150
        );
      }
      {
        let classname = new StringName("BaseMaterial3D");
        let methodname = new StringName("set_rim");
        this._bindings.method_set_rim = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
        let classname = new StringName("BaseMaterial3D");
        let methodname = new StringName("get_rim");
        this._bindings.method_get_rim = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1740695150
        );
      }
      {
        let classname = new StringName("BaseMaterial3D");
        let methodname = new StringName("set_rim_tint");
        this._bindings.method_set_rim_tint = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
        let classname = new StringName("BaseMaterial3D");
        let methodname = new StringName("get_rim_tint");
        this._bindings.method_get_rim_tint = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1740695150
        );
      }
      {
        let classname = new StringName("BaseMaterial3D");
        let methodname = new StringName("set_clearcoat");
        this._bindings.method_set_clearcoat = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
        let classname = new StringName("BaseMaterial3D");
        let methodname = new StringName("get_clearcoat");
        this._bindings.method_get_clearcoat = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1740695150
        );
      }
      {
        let classname = new StringName("BaseMaterial3D");
        let methodname = new StringName("set_clearcoat_roughness");
        this._bindings.method_set_clearcoat_roughness = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
        let classname = new StringName("BaseMaterial3D");
        let methodname = new StringName("get_clearcoat_roughness");
        this._bindings.method_get_clearcoat_roughness = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1740695150
        );
      }
      {
        let classname = new StringName("BaseMaterial3D");
        let methodname = new StringName("set_anisotropy");
        this._bindings.method_set_anisotropy = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
        let classname = new StringName("BaseMaterial3D");
        let methodname = new StringName("get_anisotropy");
        this._bindings.method_get_anisotropy = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1740695150
        );
      }
      {
        let classname = new StringName("BaseMaterial3D");
        let methodname = new StringName("set_heightmap_scale");
        this._bindings.method_set_heightmap_scale = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
        let classname = new StringName("BaseMaterial3D");
        let methodname = new StringName("get_heightmap_scale");
        this._bindings.method_get_heightmap_scale = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1740695150
        );
      }
      {
        let classname = new StringName("BaseMaterial3D");
        let methodname = new StringName("set_subsurface_scattering_strength");
        this._bindings.method_set_subsurface_scattering_strength = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
        let classname = new StringName("BaseMaterial3D");
        let methodname = new StringName("get_subsurface_scattering_strength");
        this._bindings.method_get_subsurface_scattering_strength = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1740695150
        );
      }
      {
        let classname = new StringName("BaseMaterial3D");
        let methodname = new StringName("set_transmittance_color");
        this._bindings.method_set_transmittance_color = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2920490490
        );
      }
      {
        let classname = new StringName("BaseMaterial3D");
        let methodname = new StringName("get_transmittance_color");
        this._bindings.method_get_transmittance_color = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3444240500
        );
      }
      {
        let classname = new StringName("BaseMaterial3D");
        let methodname = new StringName("set_transmittance_depth");
        this._bindings.method_set_transmittance_depth = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
        let classname = new StringName("BaseMaterial3D");
        let methodname = new StringName("get_transmittance_depth");
        this._bindings.method_get_transmittance_depth = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1740695150
        );
      }
      {
        let classname = new StringName("BaseMaterial3D");
        let methodname = new StringName("set_transmittance_boost");
        this._bindings.method_set_transmittance_boost = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
        let classname = new StringName("BaseMaterial3D");
        let methodname = new StringName("get_transmittance_boost");
        this._bindings.method_get_transmittance_boost = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1740695150
        );
      }
      {
        let classname = new StringName("BaseMaterial3D");
        let methodname = new StringName("set_backlight");
        this._bindings.method_set_backlight = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2920490490
        );
      }
      {
        let classname = new StringName("BaseMaterial3D");
        let methodname = new StringName("get_backlight");
        this._bindings.method_get_backlight = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3444240500
        );
      }
      {
        let classname = new StringName("BaseMaterial3D");
        let methodname = new StringName("set_refraction");
        this._bindings.method_set_refraction = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
        let classname = new StringName("BaseMaterial3D");
        let methodname = new StringName("get_refraction");
        this._bindings.method_get_refraction = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1740695150
        );
      }
      {
        let classname = new StringName("BaseMaterial3D");
        let methodname = new StringName("set_point_size");
        this._bindings.method_set_point_size = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
        let classname = new StringName("BaseMaterial3D");
        let methodname = new StringName("get_point_size");
        this._bindings.method_get_point_size = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1740695150
        );
      }
      {
        let classname = new StringName("BaseMaterial3D");
        let methodname = new StringName("set_detail_uv");
        this._bindings.method_set_detail_uv = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          456801921
        );
      }
      {
        let classname = new StringName("BaseMaterial3D");
        let methodname = new StringName("get_detail_uv");
        this._bindings.method_get_detail_uv = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2306920512
        );
      }
      {
        let classname = new StringName("BaseMaterial3D");
        let methodname = new StringName("set_blend_mode");
        this._bindings.method_set_blend_mode = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2830186259
        );
      }
      {
        let classname = new StringName("BaseMaterial3D");
        let methodname = new StringName("get_blend_mode");
        this._bindings.method_get_blend_mode = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          4022690962
        );
      }
      {
        let classname = new StringName("BaseMaterial3D");
        let methodname = new StringName("set_depth_draw_mode");
        this._bindings.method_set_depth_draw_mode = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1456584748
        );
      }
      {
        let classname = new StringName("BaseMaterial3D");
        let methodname = new StringName("get_depth_draw_mode");
        this._bindings.method_get_depth_draw_mode = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2578197639
        );
      }
      {
        let classname = new StringName("BaseMaterial3D");
        let methodname = new StringName("set_cull_mode");
        this._bindings.method_set_cull_mode = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2338909218
        );
      }
      {
        let classname = new StringName("BaseMaterial3D");
        let methodname = new StringName("get_cull_mode");
        this._bindings.method_get_cull_mode = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1941499586
        );
      }
      {
        let classname = new StringName("BaseMaterial3D");
        let methodname = new StringName("set_diffuse_mode");
        this._bindings.method_set_diffuse_mode = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1045299638
        );
      }
      {
        let classname = new StringName("BaseMaterial3D");
        let methodname = new StringName("get_diffuse_mode");
        this._bindings.method_get_diffuse_mode = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3973617136
        );
      }
      {
        let classname = new StringName("BaseMaterial3D");
        let methodname = new StringName("set_specular_mode");
        this._bindings.method_set_specular_mode = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          584737147
        );
      }
      {
        let classname = new StringName("BaseMaterial3D");
        let methodname = new StringName("get_specular_mode");
        this._bindings.method_get_specular_mode = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2569953298
        );
      }
      {
        let classname = new StringName("BaseMaterial3D");
        let methodname = new StringName("set_flag");
        this._bindings.method_set_flag = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3070159527
        );
      }
      {
        let classname = new StringName("BaseMaterial3D");
        let methodname = new StringName("get_flag");
        this._bindings.method_get_flag = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1286410065
        );
      }
      {
        let classname = new StringName("BaseMaterial3D");
        let methodname = new StringName("set_texture_filter");
        this._bindings.method_set_texture_filter = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          22904437
        );
      }
      {
        let classname = new StringName("BaseMaterial3D");
        let methodname = new StringName("get_texture_filter");
        this._bindings.method_get_texture_filter = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3289213076
        );
      }
      {
        let classname = new StringName("BaseMaterial3D");
        let methodname = new StringName("set_feature");
        this._bindings.method_set_feature = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2819288693
        );
      }
      {
        let classname = new StringName("BaseMaterial3D");
        let methodname = new StringName("get_feature");
        this._bindings.method_get_feature = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1965241794
        );
      }
      {
        let classname = new StringName("BaseMaterial3D");
        let methodname = new StringName("set_texture");
        this._bindings.method_set_texture = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          464208135
        );
      }
      {
        let classname = new StringName("BaseMaterial3D");
        let methodname = new StringName("get_texture");
        this._bindings.method_get_texture = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          329605813
        );
      }
      {
        let classname = new StringName("BaseMaterial3D");
        let methodname = new StringName("set_detail_blend_mode");
        this._bindings.method_set_detail_blend_mode = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2830186259
        );
      }
      {
        let classname = new StringName("BaseMaterial3D");
        let methodname = new StringName("get_detail_blend_mode");
        this._bindings.method_get_detail_blend_mode = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          4022690962
        );
      }
      {
        let classname = new StringName("BaseMaterial3D");
        let methodname = new StringName("set_uv1_scale");
        this._bindings.method_set_uv1_scale = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3460891852
        );
      }
      {
        let classname = new StringName("BaseMaterial3D");
        let methodname = new StringName("get_uv1_scale");
        this._bindings.method_get_uv1_scale = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3360562783
        );
      }
      {
        let classname = new StringName("BaseMaterial3D");
        let methodname = new StringName("set_uv1_offset");
        this._bindings.method_set_uv1_offset = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3460891852
        );
      }
      {
        let classname = new StringName("BaseMaterial3D");
        let methodname = new StringName("get_uv1_offset");
        this._bindings.method_get_uv1_offset = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3360562783
        );
      }
      {
        let classname = new StringName("BaseMaterial3D");
        let methodname = new StringName("set_uv1_triplanar_blend_sharpness");
        this._bindings.method_set_uv1_triplanar_blend_sharpness = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
        let classname = new StringName("BaseMaterial3D");
        let methodname = new StringName("get_uv1_triplanar_blend_sharpness");
        this._bindings.method_get_uv1_triplanar_blend_sharpness = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1740695150
        );
      }
      {
        let classname = new StringName("BaseMaterial3D");
        let methodname = new StringName("set_uv2_scale");
        this._bindings.method_set_uv2_scale = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3460891852
        );
      }
      {
        let classname = new StringName("BaseMaterial3D");
        let methodname = new StringName("get_uv2_scale");
        this._bindings.method_get_uv2_scale = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3360562783
        );
      }
      {
        let classname = new StringName("BaseMaterial3D");
        let methodname = new StringName("set_uv2_offset");
        this._bindings.method_set_uv2_offset = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3460891852
        );
      }
      {
        let classname = new StringName("BaseMaterial3D");
        let methodname = new StringName("get_uv2_offset");
        this._bindings.method_get_uv2_offset = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3360562783
        );
      }
      {
        let classname = new StringName("BaseMaterial3D");
        let methodname = new StringName("set_uv2_triplanar_blend_sharpness");
        this._bindings.method_set_uv2_triplanar_blend_sharpness = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
        let classname = new StringName("BaseMaterial3D");
        let methodname = new StringName("get_uv2_triplanar_blend_sharpness");
        this._bindings.method_get_uv2_triplanar_blend_sharpness = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1740695150
        );
      }
      {
        let classname = new StringName("BaseMaterial3D");
        let methodname = new StringName("set_billboard_mode");
        this._bindings.method_set_billboard_mode = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          4202036497
        );
      }
      {
        let classname = new StringName("BaseMaterial3D");
        let methodname = new StringName("get_billboard_mode");
        this._bindings.method_get_billboard_mode = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1283840139
        );
      }
      {
        let classname = new StringName("BaseMaterial3D");
        let methodname = new StringName("set_particles_anim_h_frames");
        this._bindings.method_set_particles_anim_h_frames = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1286410249
        );
      }
      {
        let classname = new StringName("BaseMaterial3D");
        let methodname = new StringName("get_particles_anim_h_frames");
        this._bindings.method_get_particles_anim_h_frames = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3905245786
        );
      }
      {
        let classname = new StringName("BaseMaterial3D");
        let methodname = new StringName("set_particles_anim_v_frames");
        this._bindings.method_set_particles_anim_v_frames = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1286410249
        );
      }
      {
        let classname = new StringName("BaseMaterial3D");
        let methodname = new StringName("get_particles_anim_v_frames");
        this._bindings.method_get_particles_anim_v_frames = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3905245786
        );
      }
      {
        let classname = new StringName("BaseMaterial3D");
        let methodname = new StringName("set_particles_anim_loop");
        this._bindings.method_set_particles_anim_loop = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("BaseMaterial3D");
        let methodname = new StringName("get_particles_anim_loop");
        this._bindings.method_get_particles_anim_loop = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("BaseMaterial3D");
        let methodname = new StringName("set_heightmap_deep_parallax");
        this._bindings.method_set_heightmap_deep_parallax = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("BaseMaterial3D");
        let methodname = new StringName("is_heightmap_deep_parallax_enabled");
        this._bindings.method_is_heightmap_deep_parallax_enabled = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("BaseMaterial3D");
        let methodname = new StringName("set_heightmap_deep_parallax_min_layers");
        this._bindings.method_set_heightmap_deep_parallax_min_layers = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1286410249
        );
      }
      {
        let classname = new StringName("BaseMaterial3D");
        let methodname = new StringName("get_heightmap_deep_parallax_min_layers");
        this._bindings.method_get_heightmap_deep_parallax_min_layers = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3905245786
        );
      }
      {
        let classname = new StringName("BaseMaterial3D");
        let methodname = new StringName("set_heightmap_deep_parallax_max_layers");
        this._bindings.method_set_heightmap_deep_parallax_max_layers = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1286410249
        );
      }
      {
        let classname = new StringName("BaseMaterial3D");
        let methodname = new StringName("get_heightmap_deep_parallax_max_layers");
        this._bindings.method_get_heightmap_deep_parallax_max_layers = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3905245786
        );
      }
      {
        let classname = new StringName("BaseMaterial3D");
        let methodname = new StringName("set_heightmap_deep_parallax_flip_tangent");
        this._bindings.method_set_heightmap_deep_parallax_flip_tangent = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("BaseMaterial3D");
        let methodname = new StringName("get_heightmap_deep_parallax_flip_tangent");
        this._bindings.method_get_heightmap_deep_parallax_flip_tangent = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("BaseMaterial3D");
        let methodname = new StringName("set_heightmap_deep_parallax_flip_binormal");
        this._bindings.method_set_heightmap_deep_parallax_flip_binormal = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("BaseMaterial3D");
        let methodname = new StringName("get_heightmap_deep_parallax_flip_binormal");
        this._bindings.method_get_heightmap_deep_parallax_flip_binormal = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("BaseMaterial3D");
        let methodname = new StringName("set_grow");
        this._bindings.method_set_grow = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
        let classname = new StringName("BaseMaterial3D");
        let methodname = new StringName("get_grow");
        this._bindings.method_get_grow = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1740695150
        );
      }
      {
        let classname = new StringName("BaseMaterial3D");
        let methodname = new StringName("set_emission_operator");
        this._bindings.method_set_emission_operator = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3825128922
        );
      }
      {
        let classname = new StringName("BaseMaterial3D");
        let methodname = new StringName("get_emission_operator");
        this._bindings.method_get_emission_operator = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          974205018
        );
      }
      {
        let classname = new StringName("BaseMaterial3D");
        let methodname = new StringName("set_ao_light_affect");
        this._bindings.method_set_ao_light_affect = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
        let classname = new StringName("BaseMaterial3D");
        let methodname = new StringName("get_ao_light_affect");
        this._bindings.method_get_ao_light_affect = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1740695150
        );
      }
      {
        let classname = new StringName("BaseMaterial3D");
        let methodname = new StringName("set_alpha_scissor_threshold");
        this._bindings.method_set_alpha_scissor_threshold = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
        let classname = new StringName("BaseMaterial3D");
        let methodname = new StringName("get_alpha_scissor_threshold");
        this._bindings.method_get_alpha_scissor_threshold = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1740695150
        );
      }
      {
        let classname = new StringName("BaseMaterial3D");
        let methodname = new StringName("set_alpha_hash_scale");
        this._bindings.method_set_alpha_hash_scale = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
        let classname = new StringName("BaseMaterial3D");
        let methodname = new StringName("get_alpha_hash_scale");
        this._bindings.method_get_alpha_hash_scale = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1740695150
        );
      }
      {
        let classname = new StringName("BaseMaterial3D");
        let methodname = new StringName("set_grow_enabled");
        this._bindings.method_set_grow_enabled = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("BaseMaterial3D");
        let methodname = new StringName("is_grow_enabled");
        this._bindings.method_is_grow_enabled = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("BaseMaterial3D");
        let methodname = new StringName("set_metallic_texture_channel");
        this._bindings.method_set_metallic_texture_channel = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          744167988
        );
      }
      {
        let classname = new StringName("BaseMaterial3D");
        let methodname = new StringName("get_metallic_texture_channel");
        this._bindings.method_get_metallic_texture_channel = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          568133867
        );
      }
      {
        let classname = new StringName("BaseMaterial3D");
        let methodname = new StringName("set_roughness_texture_channel");
        this._bindings.method_set_roughness_texture_channel = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          744167988
        );
      }
      {
        let classname = new StringName("BaseMaterial3D");
        let methodname = new StringName("get_roughness_texture_channel");
        this._bindings.method_get_roughness_texture_channel = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          568133867
        );
      }
      {
        let classname = new StringName("BaseMaterial3D");
        let methodname = new StringName("set_ao_texture_channel");
        this._bindings.method_set_ao_texture_channel = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          744167988
        );
      }
      {
        let classname = new StringName("BaseMaterial3D");
        let methodname = new StringName("get_ao_texture_channel");
        this._bindings.method_get_ao_texture_channel = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          568133867
        );
      }
      {
        let classname = new StringName("BaseMaterial3D");
        let methodname = new StringName("set_refraction_texture_channel");
        this._bindings.method_set_refraction_texture_channel = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          744167988
        );
      }
      {
        let classname = new StringName("BaseMaterial3D");
        let methodname = new StringName("get_refraction_texture_channel");
        this._bindings.method_get_refraction_texture_channel = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          568133867
        );
      }
      {
        let classname = new StringName("BaseMaterial3D");
        let methodname = new StringName("set_proximity_fade_enabled");
        this._bindings.method_set_proximity_fade_enabled = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("BaseMaterial3D");
        let methodname = new StringName("is_proximity_fade_enabled");
        this._bindings.method_is_proximity_fade_enabled = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("BaseMaterial3D");
        let methodname = new StringName("set_proximity_fade_distance");
        this._bindings.method_set_proximity_fade_distance = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
        let classname = new StringName("BaseMaterial3D");
        let methodname = new StringName("get_proximity_fade_distance");
        this._bindings.method_get_proximity_fade_distance = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1740695150
        );
      }
      {
        let classname = new StringName("BaseMaterial3D");
        let methodname = new StringName("set_msdf_pixel_range");
        this._bindings.method_set_msdf_pixel_range = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
        let classname = new StringName("BaseMaterial3D");
        let methodname = new StringName("get_msdf_pixel_range");
        this._bindings.method_get_msdf_pixel_range = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1740695150
        );
      }
      {
        let classname = new StringName("BaseMaterial3D");
        let methodname = new StringName("set_msdf_outline_size");
        this._bindings.method_set_msdf_outline_size = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
        let classname = new StringName("BaseMaterial3D");
        let methodname = new StringName("get_msdf_outline_size");
        this._bindings.method_get_msdf_outline_size = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1740695150
        );
      }
      {
        let classname = new StringName("BaseMaterial3D");
        let methodname = new StringName("set_distance_fade");
        this._bindings.method_set_distance_fade = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1379478617
        );
      }
      {
        let classname = new StringName("BaseMaterial3D");
        let methodname = new StringName("get_distance_fade");
        this._bindings.method_get_distance_fade = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2694575734
        );
      }
      {
        let classname = new StringName("BaseMaterial3D");
        let methodname = new StringName("set_distance_fade_max_distance");
        this._bindings.method_set_distance_fade_max_distance = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
        let classname = new StringName("BaseMaterial3D");
        let methodname = new StringName("get_distance_fade_max_distance");
        this._bindings.method_get_distance_fade_max_distance = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1740695150
        );
      }
      {
        let classname = new StringName("BaseMaterial3D");
        let methodname = new StringName("set_distance_fade_min_distance");
        this._bindings.method_set_distance_fade_min_distance = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
        let classname = new StringName("BaseMaterial3D");
        let methodname = new StringName("get_distance_fade_min_distance");
        this._bindings.method_get_distance_fade_min_distance = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1740695150
        );
      }
  }
  set_albedo(_albedo) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_albedo,
      this._owner,
      _albedo
    );
    
  }
  get_albedo() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_albedo,
      this._owner,
			Variant.Type.COLOR
    ,
      
    );
    
  }
  set_transparency(_transparency) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_transparency,
      this._owner,
      _transparency
    );
    
  }
  get_transparency() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_transparency,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_alpha_antialiasing(_alpha_aa) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_alpha_antialiasing,
      this._owner,
      _alpha_aa
    );
    
  }
  get_alpha_antialiasing() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_alpha_antialiasing,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_alpha_antialiasing_edge(_edge) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_alpha_antialiasing_edge,
      this._owner,
      _edge
    );
    
  }
  get_alpha_antialiasing_edge() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_alpha_antialiasing_edge,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_shading_mode(_shading_mode) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_shading_mode,
      this._owner,
      _shading_mode
    );
    
  }
  get_shading_mode() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_shading_mode,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_specular(_specular) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_specular,
      this._owner,
      _specular
    );
    
  }
  get_specular() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_specular,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_metallic(_metallic) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_metallic,
      this._owner,
      _metallic
    );
    
  }
  get_metallic() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_metallic,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_roughness(_roughness) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_roughness,
      this._owner,
      _roughness
    );
    
  }
  get_roughness() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_roughness,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_emission(_emission) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_emission,
      this._owner,
      _emission
    );
    
  }
  get_emission() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_emission,
      this._owner,
			Variant.Type.COLOR
    ,
      
    );
    
  }
  set_emission_energy_multiplier(_emission_energy_multiplier) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_emission_energy_multiplier,
      this._owner,
      _emission_energy_multiplier
    );
    
  }
  get_emission_energy_multiplier() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_emission_energy_multiplier,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_emission_intensity(_emission_energy_multiplier) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_emission_intensity,
      this._owner,
      _emission_energy_multiplier
    );
    
  }
  get_emission_intensity() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_emission_intensity,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_normal_scale(_normal_scale) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_normal_scale,
      this._owner,
      _normal_scale
    );
    
  }
  get_normal_scale() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_normal_scale,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_rim(_rim) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_rim,
      this._owner,
      _rim
    );
    
  }
  get_rim() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_rim,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_rim_tint(_rim_tint) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_rim_tint,
      this._owner,
      _rim_tint
    );
    
  }
  get_rim_tint() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_rim_tint,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_clearcoat(_clearcoat) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_clearcoat,
      this._owner,
      _clearcoat
    );
    
  }
  get_clearcoat() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_clearcoat,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_clearcoat_roughness(_clearcoat_roughness) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_clearcoat_roughness,
      this._owner,
      _clearcoat_roughness
    );
    
  }
  get_clearcoat_roughness() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_clearcoat_roughness,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_anisotropy(_anisotropy) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_anisotropy,
      this._owner,
      _anisotropy
    );
    
  }
  get_anisotropy() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_anisotropy,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_heightmap_scale(_heightmap_scale) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_heightmap_scale,
      this._owner,
      _heightmap_scale
    );
    
  }
  get_heightmap_scale() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_heightmap_scale,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_subsurface_scattering_strength(_strength) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_subsurface_scattering_strength,
      this._owner,
      _strength
    );
    
  }
  get_subsurface_scattering_strength() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_subsurface_scattering_strength,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_transmittance_color(_color) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_transmittance_color,
      this._owner,
      _color
    );
    
  }
  get_transmittance_color() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_transmittance_color,
      this._owner,
			Variant.Type.COLOR
    ,
      
    );
    
  }
  set_transmittance_depth(_depth) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_transmittance_depth,
      this._owner,
      _depth
    );
    
  }
  get_transmittance_depth() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_transmittance_depth,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_transmittance_boost(_boost) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_transmittance_boost,
      this._owner,
      _boost
    );
    
  }
  get_transmittance_boost() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_transmittance_boost,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_backlight(_backlight) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_backlight,
      this._owner,
      _backlight
    );
    
  }
  get_backlight() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_backlight,
      this._owner,
			Variant.Type.COLOR
    ,
      
    );
    
  }
  set_refraction(_refraction) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_refraction,
      this._owner,
      _refraction
    );
    
  }
  get_refraction() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_refraction,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_point_size(_point_size) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_point_size,
      this._owner,
      _point_size
    );
    
  }
  get_point_size() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_point_size,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_detail_uv(_detail_uv) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_detail_uv,
      this._owner,
      _detail_uv
    );
    
  }
  get_detail_uv() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_detail_uv,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_blend_mode(_blend_mode) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_blend_mode,
      this._owner,
      _blend_mode
    );
    
  }
  get_blend_mode() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_blend_mode,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_depth_draw_mode(_depth_draw_mode) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_depth_draw_mode,
      this._owner,
      _depth_draw_mode
    );
    
  }
  get_depth_draw_mode() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_depth_draw_mode,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_cull_mode(_cull_mode) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_cull_mode,
      this._owner,
      _cull_mode
    );
    
  }
  get_cull_mode() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_cull_mode,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_diffuse_mode(_diffuse_mode) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_diffuse_mode,
      this._owner,
      _diffuse_mode
    );
    
  }
  get_diffuse_mode() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_diffuse_mode,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_specular_mode(_specular_mode) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_specular_mode,
      this._owner,
      _specular_mode
    );
    
  }
  get_specular_mode() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_specular_mode,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_flag(_flag, _enable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_flag,
      this._owner,
      _flag, _enable
    );
    
  }
  get_flag(_flag) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_flag,
      this._owner,
			Variant.Type.BOOL,
      _flag
    );
    
  }
  set_texture_filter(_mode) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_texture_filter,
      this._owner,
      _mode
    );
    
  }
  get_texture_filter() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_texture_filter,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_feature(_feature, _enable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_feature,
      this._owner,
      _feature, _enable
    );
    
  }
  get_feature(_feature) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_feature,
      this._owner,
			Variant.Type.BOOL,
      _feature
    );
    
  }
  set_texture(_param, _texture) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_texture,
      this._owner,
      _param, _texture
    );
    
  }
  get_texture(_param) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_texture,
      this._owner,
			Variant.INT,
      _param
    );
    
  }
  set_detail_blend_mode(_detail_blend_mode) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_detail_blend_mode,
      this._owner,
      _detail_blend_mode
    );
    
  }
  get_detail_blend_mode() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_detail_blend_mode,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_uv1_scale(_scale) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_uv1_scale,
      this._owner,
      _scale
    );
    
  }
  get_uv1_scale() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_uv1_scale,
      this._owner,
			Variant.Type.VECTOR3
    ,
      
    );
    
  }
  set_uv1_offset(_offset) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_uv1_offset,
      this._owner,
      _offset
    );
    
  }
  get_uv1_offset() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_uv1_offset,
      this._owner,
			Variant.Type.VECTOR3
    ,
      
    );
    
  }
  set_uv1_triplanar_blend_sharpness(_sharpness) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_uv1_triplanar_blend_sharpness,
      this._owner,
      _sharpness
    );
    
  }
  get_uv1_triplanar_blend_sharpness() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_uv1_triplanar_blend_sharpness,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_uv2_scale(_scale) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_uv2_scale,
      this._owner,
      _scale
    );
    
  }
  get_uv2_scale() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_uv2_scale,
      this._owner,
			Variant.Type.VECTOR3
    ,
      
    );
    
  }
  set_uv2_offset(_offset) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_uv2_offset,
      this._owner,
      _offset
    );
    
  }
  get_uv2_offset() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_uv2_offset,
      this._owner,
			Variant.Type.VECTOR3
    ,
      
    );
    
  }
  set_uv2_triplanar_blend_sharpness(_sharpness) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_uv2_triplanar_blend_sharpness,
      this._owner,
      _sharpness
    );
    
  }
  get_uv2_triplanar_blend_sharpness() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_uv2_triplanar_blend_sharpness,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_billboard_mode(_mode) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_billboard_mode,
      this._owner,
      _mode
    );
    
  }
  get_billboard_mode() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_billboard_mode,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_particles_anim_h_frames(_frames) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_particles_anim_h_frames,
      this._owner,
      _frames
    );
    
  }
  get_particles_anim_h_frames() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_particles_anim_h_frames,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  set_particles_anim_v_frames(_frames) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_particles_anim_v_frames,
      this._owner,
      _frames
    );
    
  }
  get_particles_anim_v_frames() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_particles_anim_v_frames,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  set_particles_anim_loop(_loop) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_particles_anim_loop,
      this._owner,
      _loop
    );
    
  }
  get_particles_anim_loop() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_particles_anim_loop,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_heightmap_deep_parallax(_enable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_heightmap_deep_parallax,
      this._owner,
      _enable
    );
    
  }
  is_heightmap_deep_parallax_enabled() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_heightmap_deep_parallax_enabled,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_heightmap_deep_parallax_min_layers(_layer) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_heightmap_deep_parallax_min_layers,
      this._owner,
      _layer
    );
    
  }
  get_heightmap_deep_parallax_min_layers() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_heightmap_deep_parallax_min_layers,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  set_heightmap_deep_parallax_max_layers(_layer) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_heightmap_deep_parallax_max_layers,
      this._owner,
      _layer
    );
    
  }
  get_heightmap_deep_parallax_max_layers() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_heightmap_deep_parallax_max_layers,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  set_heightmap_deep_parallax_flip_tangent(_flip) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_heightmap_deep_parallax_flip_tangent,
      this._owner,
      _flip
    );
    
  }
  get_heightmap_deep_parallax_flip_tangent() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_heightmap_deep_parallax_flip_tangent,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_heightmap_deep_parallax_flip_binormal(_flip) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_heightmap_deep_parallax_flip_binormal,
      this._owner,
      _flip
    );
    
  }
  get_heightmap_deep_parallax_flip_binormal() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_heightmap_deep_parallax_flip_binormal,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_grow(_amount) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_grow,
      this._owner,
      _amount
    );
    
  }
  get_grow() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_grow,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_emission_operator(_operator) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_emission_operator,
      this._owner,
      _operator
    );
    
  }
  get_emission_operator() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_emission_operator,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_ao_light_affect(_amount) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_ao_light_affect,
      this._owner,
      _amount
    );
    
  }
  get_ao_light_affect() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_ao_light_affect,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_alpha_scissor_threshold(_threshold) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_alpha_scissor_threshold,
      this._owner,
      _threshold
    );
    
  }
  get_alpha_scissor_threshold() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_alpha_scissor_threshold,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_alpha_hash_scale(_threshold) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_alpha_hash_scale,
      this._owner,
      _threshold
    );
    
  }
  get_alpha_hash_scale() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_alpha_hash_scale,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_grow_enabled(_enable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_grow_enabled,
      this._owner,
      _enable
    );
    
  }
  is_grow_enabled() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_grow_enabled,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_metallic_texture_channel(_channel) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_metallic_texture_channel,
      this._owner,
      _channel
    );
    
  }
  get_metallic_texture_channel() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_metallic_texture_channel,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_roughness_texture_channel(_channel) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_roughness_texture_channel,
      this._owner,
      _channel
    );
    
  }
  get_roughness_texture_channel() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_roughness_texture_channel,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_ao_texture_channel(_channel) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_ao_texture_channel,
      this._owner,
      _channel
    );
    
  }
  get_ao_texture_channel() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_ao_texture_channel,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_refraction_texture_channel(_channel) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_refraction_texture_channel,
      this._owner,
      _channel
    );
    
  }
  get_refraction_texture_channel() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_refraction_texture_channel,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_proximity_fade_enabled(_enabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_proximity_fade_enabled,
      this._owner,
      _enabled
    );
    
  }
  is_proximity_fade_enabled() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_proximity_fade_enabled,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_proximity_fade_distance(_distance) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_proximity_fade_distance,
      this._owner,
      _distance
    );
    
  }
  get_proximity_fade_distance() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_proximity_fade_distance,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_msdf_pixel_range(_range) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_msdf_pixel_range,
      this._owner,
      _range
    );
    
  }
  get_msdf_pixel_range() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_msdf_pixel_range,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_msdf_outline_size(_size) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_msdf_outline_size,
      this._owner,
      _size
    );
    
  }
  get_msdf_outline_size() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_msdf_outline_size,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_distance_fade(_mode) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_distance_fade,
      this._owner,
      _mode
    );
    
  }
  get_distance_fade() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_distance_fade,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_distance_fade_max_distance(_distance) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_distance_fade_max_distance,
      this._owner,
      _distance
    );
    
  }
  get_distance_fade_max_distance() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_distance_fade_max_distance,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_distance_fade_min_distance(_distance) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_distance_fade_min_distance,
      this._owner,
      _distance
    );
    
  }
  get_distance_fade_min_distance() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_distance_fade_min_distance,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  static TextureParam = {
    TEXTURE_ALBEDO: 0,
    TEXTURE_METALLIC: 1,
    TEXTURE_ROUGHNESS: 2,
    TEXTURE_EMISSION: 3,
    TEXTURE_NORMAL: 4,
    TEXTURE_RIM: 5,
    TEXTURE_CLEARCOAT: 6,
    TEXTURE_FLOWMAP: 7,
    TEXTURE_AMBIENT_OCCLUSION: 8,
    TEXTURE_HEIGHTMAP: 9,
    TEXTURE_SUBSURFACE_SCATTERING: 10,
    TEXTURE_SUBSURFACE_TRANSMITTANCE: 11,
    TEXTURE_BACKLIGHT: 12,
    TEXTURE_REFRACTION: 13,
    TEXTURE_DETAIL_MASK: 14,
    TEXTURE_DETAIL_ALBEDO: 15,
    TEXTURE_DETAIL_NORMAL: 16,
    TEXTURE_ORM: 17,
    TEXTURE_MAX: 18,
  }
  static TextureFilter = {
    TEXTURE_FILTER_NEAREST: 0,
    TEXTURE_FILTER_LINEAR: 1,
    TEXTURE_FILTER_NEAREST_WITH_MIPMAPS: 2,
    TEXTURE_FILTER_LINEAR_WITH_MIPMAPS: 3,
    TEXTURE_FILTER_NEAREST_WITH_MIPMAPS_ANISOTROPIC: 4,
    TEXTURE_FILTER_LINEAR_WITH_MIPMAPS_ANISOTROPIC: 5,
    TEXTURE_FILTER_MAX: 6,
  }
  static DetailUV = {
    DETAIL_UV_1: 0,
    DETAIL_UV_2: 1,
  }
  static Transparency = {
    TRANSPARENCY_DISABLED: 0,
    TRANSPARENCY_ALPHA: 1,
    TRANSPARENCY_ALPHA_SCISSOR: 2,
    TRANSPARENCY_ALPHA_HASH: 3,
    TRANSPARENCY_ALPHA_DEPTH_PRE_PASS: 4,
    TRANSPARENCY_MAX: 5,
  }
  static ShadingMode = {
    SHADING_MODE_UNSHADED: 0,
    SHADING_MODE_PER_PIXEL: 1,
    SHADING_MODE_PER_VERTEX: 2,
    SHADING_MODE_MAX: 3,
  }
  static Feature = {
    FEATURE_EMISSION: 0,
    FEATURE_NORMAL_MAPPING: 1,
    FEATURE_RIM: 2,
    FEATURE_CLEARCOAT: 3,
    FEATURE_ANISOTROPY: 4,
    FEATURE_AMBIENT_OCCLUSION: 5,
    FEATURE_HEIGHT_MAPPING: 6,
    FEATURE_SUBSURFACE_SCATTERING: 7,
    FEATURE_SUBSURFACE_TRANSMITTANCE: 8,
    FEATURE_BACKLIGHT: 9,
    FEATURE_REFRACTION: 10,
    FEATURE_DETAIL: 11,
    FEATURE_MAX: 12,
  }
  static BlendMode = {
    BLEND_MODE_MIX: 0,
    BLEND_MODE_ADD: 1,
    BLEND_MODE_SUB: 2,
    BLEND_MODE_MUL: 3,
    BLEND_MODE_PREMULT_ALPHA: 4,
  }
  static AlphaAntiAliasing = {
    ALPHA_ANTIALIASING_OFF: 0,
    ALPHA_ANTIALIASING_ALPHA_TO_COVERAGE: 1,
    ALPHA_ANTIALIASING_ALPHA_TO_COVERAGE_AND_TO_ONE: 2,
  }
  static DepthDrawMode = {
    DEPTH_DRAW_OPAQUE_ONLY: 0,
    DEPTH_DRAW_ALWAYS: 1,
    DEPTH_DRAW_DISABLED: 2,
  }
  static CullMode = {
    CULL_BACK: 0,
    CULL_FRONT: 1,
    CULL_DISABLED: 2,
  }
  static Flags = {
    FLAG_DISABLE_DEPTH_TEST: 0,
    FLAG_ALBEDO_FROM_VERTEX_COLOR: 1,
    FLAG_SRGB_VERTEX_COLOR: 2,
    FLAG_USE_POINT_SIZE: 3,
    FLAG_FIXED_SIZE: 4,
    FLAG_BILLBOARD_KEEP_SCALE: 5,
    FLAG_UV1_USE_TRIPLANAR: 6,
    FLAG_UV2_USE_TRIPLANAR: 7,
    FLAG_UV1_USE_WORLD_TRIPLANAR: 8,
    FLAG_UV2_USE_WORLD_TRIPLANAR: 9,
    FLAG_AO_ON_UV2: 10,
    FLAG_EMISSION_ON_UV2: 11,
    FLAG_ALBEDO_TEXTURE_FORCE_SRGB: 12,
    FLAG_DONT_RECEIVE_SHADOWS: 13,
    FLAG_DISABLE_AMBIENT_LIGHT: 14,
    FLAG_USE_SHADOW_TO_OPACITY: 15,
    FLAG_USE_TEXTURE_REPEAT: 16,
    FLAG_INVERT_HEIGHTMAP: 17,
    FLAG_SUBSURFACE_MODE_SKIN: 18,
    FLAG_PARTICLE_TRAILS_MODE: 19,
    FLAG_ALBEDO_TEXTURE_MSDF: 20,
    FLAG_DISABLE_FOG: 21,
    FLAG_MAX: 22,
  }
  static DiffuseMode = {
    DIFFUSE_BURLEY: 0,
    DIFFUSE_LAMBERT: 1,
    DIFFUSE_LAMBERT_WRAP: 2,
    DIFFUSE_TOON: 3,
  }
  static SpecularMode = {
    SPECULAR_SCHLICK_GGX: 0,
    SPECULAR_TOON: 1,
    SPECULAR_DISABLED: 2,
  }
  static BillboardMode = {
    BILLBOARD_DISABLED: 0,
    BILLBOARD_ENABLED: 1,
    BILLBOARD_FIXED_Y: 2,
    BILLBOARD_PARTICLES: 3,
  }
  static TextureChannel = {
    TEXTURE_CHANNEL_RED: 0,
    TEXTURE_CHANNEL_GREEN: 1,
    TEXTURE_CHANNEL_BLUE: 2,
    TEXTURE_CHANNEL_ALPHA: 3,
    TEXTURE_CHANNEL_GRAYSCALE: 4,
  }
  static EmissionOperator = {
    EMISSION_OP_ADD: 0,
    EMISSION_OP_MULTIPLY: 1,
  }
  static DistanceFadeMode = {
    DISTANCE_FADE_DISABLED: 0,
    DISTANCE_FADE_PIXEL_ALPHA: 1,
    DISTANCE_FADE_PIXEL_DITHER: 2,
    DISTANCE_FADE_OBJECT_DITHER: 3,
  }
}