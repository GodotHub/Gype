import * as internal from '__internal__';
import { GDString } from 'src/js_godot/variant/gd_string'
import { Variant } from 'src/js_godot/variant/variant'
import { PackedColorArray } from 'src/js_godot/variant/packed_color_array'
import { PackedInt32Array } from 'src/js_godot/variant/packed_int32_array'
import { PackedVector2Array } from 'src/js_godot/variant/packed_vector2_array'
import { GodotObject } from 'src/js_godot/classes/godot_object'
import { Vector2 } from 'src/js_godot/variant/vector2'
import { AABB } from 'src/js_godot/variant/aabb'
import { Transform3D } from 'src/js_godot/variant/transform3d'
import { PackedVector3Array } from 'src/js_godot/variant/packed_vector3_array'
import { PackedInt64Array } from 'src/js_godot/variant/packed_int64_array'
import { Basis } from 'src/js_godot/variant/basis'
import { RID } from 'src/js_godot/variant/rid'
import { Color } from 'src/js_godot/variant/color'
import { PackedFloat32Array } from 'src/js_godot/variant/packed_float32_array'
import { Vector2i } from 'src/js_godot/variant/vector2i'
import { StringName } from 'src/js_godot/variant/string_name'
import { Transform2D } from 'src/js_godot/variant/transform2d'
import { Callable } from 'src/js_godot/variant/callable'
import { Vector3i } from 'src/js_godot/variant/vector3i'
import { Dictionary } from 'src/js_godot/variant/dictionary'
import { Vector3 } from 'src/js_godot/variant/vector3'
import { GDArray } from 'src/js_godot/variant/gd_array'
import { Rect2 } from 'src/js_godot/variant/rect2'
import { PackedByteArray } from 'src/js_godot/variant/packed_byte_array'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

class _MethodBindings {
    method_texture_2d_create;
    method_texture_2d_layered_create;
    method_texture_3d_create;
    method_texture_proxy_create;
    method_texture_2d_update;
    method_texture_3d_update;
    method_texture_proxy_update;
    method_texture_2d_placeholder_create;
    method_texture_2d_layered_placeholder_create;
    method_texture_3d_placeholder_create;
    method_texture_2d_get;
    method_texture_2d_layer_get;
    method_texture_3d_get;
    method_texture_replace;
    method_texture_set_size_override;
    method_texture_set_path;
    method_texture_get_path;
    method_texture_get_format;
    method_texture_set_force_redraw_if_visible;
    method_texture_rd_create;
    method_texture_get_rd_texture;
    method_texture_get_native_handle;
    method_shader_create;
    method_shader_set_code;
    method_shader_set_path_hint;
    method_shader_get_code;
    method_get_shader_parameter_list;
    method_shader_get_parameter_default;
    method_shader_set_default_texture_parameter;
    method_shader_get_default_texture_parameter;
    method_material_create;
    method_material_set_shader;
    method_material_set_param;
    method_material_get_param;
    method_material_set_render_priority;
    method_material_set_next_pass;
    method_mesh_create_from_surfaces;
    method_mesh_create;
    method_mesh_surface_get_format_offset;
    method_mesh_surface_get_format_vertex_stride;
    method_mesh_surface_get_format_normal_tangent_stride;
    method_mesh_surface_get_format_attribute_stride;
    method_mesh_surface_get_format_skin_stride;
    method_mesh_add_surface;
    method_mesh_add_surface_from_arrays;
    method_mesh_get_blend_shape_count;
    method_mesh_set_blend_shape_mode;
    method_mesh_get_blend_shape_mode;
    method_mesh_surface_set_material;
    method_mesh_surface_get_material;
    method_mesh_get_surface;
    method_mesh_surface_get_arrays;
    method_mesh_surface_get_blend_shape_arrays;
    method_mesh_get_surface_count;
    method_mesh_set_custom_aabb;
    method_mesh_get_custom_aabb;
    method_mesh_clear;
    method_mesh_surface_update_vertex_region;
    method_mesh_surface_update_attribute_region;
    method_mesh_surface_update_skin_region;
    method_mesh_set_shadow_mesh;
    method_multimesh_create;
    method_multimesh_allocate_data;
    method_multimesh_get_instance_count;
    method_multimesh_set_mesh;
    method_multimesh_instance_set_transform;
    method_multimesh_instance_set_transform_2d;
    method_multimesh_instance_set_color;
    method_multimesh_instance_set_custom_data;
    method_multimesh_get_mesh;
    method_multimesh_get_aabb;
    method_multimesh_set_custom_aabb;
    method_multimesh_get_custom_aabb;
    method_multimesh_instance_get_transform;
    method_multimesh_instance_get_transform_2d;
    method_multimesh_instance_get_color;
    method_multimesh_instance_get_custom_data;
    method_multimesh_set_visible_instances;
    method_multimesh_get_visible_instances;
    method_multimesh_set_buffer;
    method_multimesh_get_buffer;
    method_skeleton_create;
    method_skeleton_allocate_data;
    method_skeleton_get_bone_count;
    method_skeleton_bone_set_transform;
    method_skeleton_bone_get_transform;
    method_skeleton_bone_set_transform_2d;
    method_skeleton_bone_get_transform_2d;
    method_skeleton_set_base_transform_2d;
    method_directional_light_create;
    method_omni_light_create;
    method_spot_light_create;
    method_light_set_color;
    method_light_set_param;
    method_light_set_shadow;
    method_light_set_projector;
    method_light_set_negative;
    method_light_set_cull_mask;
    method_light_set_distance_fade;
    method_light_set_reverse_cull_face_mode;
    method_light_set_bake_mode;
    method_light_set_max_sdfgi_cascade;
    method_light_omni_set_shadow_mode;
    method_light_directional_set_shadow_mode;
    method_light_directional_set_blend_splits;
    method_light_directional_set_sky_mode;
    method_light_projectors_set_filter;
    method_positional_soft_shadow_filter_set_quality;
    method_directional_soft_shadow_filter_set_quality;
    method_directional_shadow_atlas_set_size;
    method_reflection_probe_create;
    method_reflection_probe_set_update_mode;
    method_reflection_probe_set_intensity;
    method_reflection_probe_set_ambient_mode;
    method_reflection_probe_set_ambient_color;
    method_reflection_probe_set_ambient_energy;
    method_reflection_probe_set_max_distance;
    method_reflection_probe_set_size;
    method_reflection_probe_set_origin_offset;
    method_reflection_probe_set_as_interior;
    method_reflection_probe_set_enable_box_projection;
    method_reflection_probe_set_enable_shadows;
    method_reflection_probe_set_cull_mask;
    method_reflection_probe_set_reflection_mask;
    method_reflection_probe_set_resolution;
    method_reflection_probe_set_mesh_lod_threshold;
    method_decal_create;
    method_decal_set_size;
    method_decal_set_texture;
    method_decal_set_emission_energy;
    method_decal_set_albedo_mix;
    method_decal_set_modulate;
    method_decal_set_cull_mask;
    method_decal_set_distance_fade;
    method_decal_set_fade;
    method_decal_set_normal_fade;
    method_decals_set_filter;
    method_gi_set_use_half_resolution;
    method_voxel_gi_create;
    method_voxel_gi_allocate_data;
    method_voxel_gi_get_octree_size;
    method_voxel_gi_get_octree_cells;
    method_voxel_gi_get_data_cells;
    method_voxel_gi_get_distance_field;
    method_voxel_gi_get_level_counts;
    method_voxel_gi_get_to_cell_xform;
    method_voxel_gi_set_dynamic_range;
    method_voxel_gi_set_propagation;
    method_voxel_gi_set_energy;
    method_voxel_gi_set_baked_exposure_normalization;
    method_voxel_gi_set_bias;
    method_voxel_gi_set_normal_bias;
    method_voxel_gi_set_interior;
    method_voxel_gi_set_use_two_bounces;
    method_voxel_gi_set_quality;
    method_lightmap_create;
    method_lightmap_set_textures;
    method_lightmap_set_probe_bounds;
    method_lightmap_set_probe_interior;
    method_lightmap_set_probe_capture_data;
    method_lightmap_get_probe_capture_points;
    method_lightmap_get_probe_capture_sh;
    method_lightmap_get_probe_capture_tetrahedra;
    method_lightmap_get_probe_capture_bsp_tree;
    method_lightmap_set_baked_exposure_normalization;
    method_lightmap_set_probe_capture_update_speed;
    method_particles_create;
    method_particles_set_mode;
    method_particles_set_emitting;
    method_particles_get_emitting;
    method_particles_set_amount;
    method_particles_set_amount_ratio;
    method_particles_set_lifetime;
    method_particles_set_one_shot;
    method_particles_set_pre_process_time;
    method_particles_set_explosiveness_ratio;
    method_particles_set_randomness_ratio;
    method_particles_set_interp_to_end;
    method_particles_set_emitter_velocity;
    method_particles_set_custom_aabb;
    method_particles_set_speed_scale;
    method_particles_set_use_local_coordinates;
    method_particles_set_process_material;
    method_particles_set_fixed_fps;
    method_particles_set_interpolate;
    method_particles_set_fractional_delta;
    method_particles_set_collision_base_size;
    method_particles_set_transform_align;
    method_particles_set_trails;
    method_particles_set_trail_bind_poses;
    method_particles_is_inactive;
    method_particles_request_process;
    method_particles_restart;
    method_particles_set_subemitter;
    method_particles_emit;
    method_particles_set_draw_order;
    method_particles_set_draw_passes;
    method_particles_set_draw_pass_mesh;
    method_particles_get_current_aabb;
    method_particles_set_emission_transform;
    method_particles_collision_create;
    method_particles_collision_set_collision_type;
    method_particles_collision_set_cull_mask;
    method_particles_collision_set_sphere_radius;
    method_particles_collision_set_box_extents;
    method_particles_collision_set_attractor_strength;
    method_particles_collision_set_attractor_directionality;
    method_particles_collision_set_attractor_attenuation;
    method_particles_collision_set_field_texture;
    method_particles_collision_height_field_update;
    method_particles_collision_set_height_field_resolution;
    method_fog_volume_create;
    method_fog_volume_set_shape;
    method_fog_volume_set_size;
    method_fog_volume_set_material;
    method_visibility_notifier_create;
    method_visibility_notifier_set_aabb;
    method_visibility_notifier_set_callbacks;
    method_occluder_create;
    method_occluder_set_mesh;
    method_camera_create;
    method_camera_set_perspective;
    method_camera_set_orthogonal;
    method_camera_set_frustum;
    method_camera_set_transform;
    method_camera_set_cull_mask;
    method_camera_set_environment;
    method_camera_set_camera_attributes;
    method_camera_set_compositor;
    method_camera_set_use_vertical_aspect;
    method_viewport_create;
    method_viewport_set_use_xr;
    method_viewport_set_size;
    method_viewport_set_active;
    method_viewport_set_parent_viewport;
    method_viewport_attach_to_screen;
    method_viewport_set_render_direct_to_screen;
    method_viewport_set_canvas_cull_mask;
    method_viewport_set_scaling_3d_mode;
    method_viewport_set_scaling_3d_scale;
    method_viewport_set_fsr_sharpness;
    method_viewport_set_texture_mipmap_bias;
    method_viewport_set_update_mode;
    method_viewport_get_update_mode;
    method_viewport_set_clear_mode;
    method_viewport_get_render_target;
    method_viewport_get_texture;
    method_viewport_set_disable_3d;
    method_viewport_set_disable_2d;
    method_viewport_set_environment_mode;
    method_viewport_attach_camera;
    method_viewport_set_scenario;
    method_viewport_attach_canvas;
    method_viewport_remove_canvas;
    method_viewport_set_snap_2d_transforms_to_pixel;
    method_viewport_set_snap_2d_vertices_to_pixel;
    method_viewport_set_default_canvas_item_texture_filter;
    method_viewport_set_default_canvas_item_texture_repeat;
    method_viewport_set_canvas_transform;
    method_viewport_set_canvas_stacking;
    method_viewport_set_transparent_background;
    method_viewport_set_global_canvas_transform;
    method_viewport_set_sdf_oversize_and_scale;
    method_viewport_set_positional_shadow_atlas_size;
    method_viewport_set_positional_shadow_atlas_quadrant_subdivision;
    method_viewport_set_msaa_3d;
    method_viewport_set_msaa_2d;
    method_viewport_set_use_hdr_2d;
    method_viewport_set_screen_space_aa;
    method_viewport_set_use_taa;
    method_viewport_set_use_debanding;
    method_viewport_set_use_occlusion_culling;
    method_viewport_set_occlusion_rays_per_thread;
    method_viewport_set_occlusion_culling_build_quality;
    method_viewport_get_render_info;
    method_viewport_set_debug_draw;
    method_viewport_set_measure_render_time;
    method_viewport_get_measured_render_time_cpu;
    method_viewport_get_measured_render_time_gpu;
    method_viewport_set_vrs_mode;
    method_viewport_set_vrs_update_mode;
    method_viewport_set_vrs_texture;
    method_sky_create;
    method_sky_set_radiance_size;
    method_sky_set_mode;
    method_sky_set_material;
    method_sky_bake_panorama;
    method_compositor_effect_create;
    method_compositor_effect_set_enabled;
    method_compositor_effect_set_callback;
    method_compositor_effect_set_flag;
    method_compositor_create;
    method_compositor_set_compositor_effects;
    method_environment_create;
    method_environment_set_background;
    method_environment_set_sky;
    method_environment_set_sky_custom_fov;
    method_environment_set_sky_orientation;
    method_environment_set_bg_color;
    method_environment_set_bg_energy;
    method_environment_set_canvas_max_layer;
    method_environment_set_ambient_light;
    method_environment_set_glow;
    method_environment_set_tonemap;
    method_environment_set_adjustment;
    method_environment_set_ssr;
    method_environment_set_ssao;
    method_environment_set_fog;
    method_environment_set_sdfgi;
    method_environment_set_volumetric_fog;
    method_environment_glow_set_use_bicubic_upscale;
    method_environment_set_ssr_roughness_quality;
    method_environment_set_ssao_quality;
    method_environment_set_ssil_quality;
    method_environment_set_sdfgi_ray_count;
    method_environment_set_sdfgi_frames_to_converge;
    method_environment_set_sdfgi_frames_to_update_light;
    method_environment_set_volumetric_fog_volume_size;
    method_environment_set_volumetric_fog_filter_active;
    method_environment_bake_panorama;
    method_screen_space_roughness_limiter_set_active;
    method_sub_surface_scattering_set_quality;
    method_sub_surface_scattering_set_scale;
    method_camera_attributes_create;
    method_camera_attributes_set_dof_blur_quality;
    method_camera_attributes_set_dof_blur_bokeh_shape;
    method_camera_attributes_set_dof_blur;
    method_camera_attributes_set_exposure;
    method_camera_attributes_set_auto_exposure;
    method_scenario_create;
    method_scenario_set_environment;
    method_scenario_set_fallback_environment;
    method_scenario_set_camera_attributes;
    method_scenario_set_compositor;
    method_instance_create2;
    method_instance_create;
    method_instance_set_base;
    method_instance_set_scenario;
    method_instance_set_layer_mask;
    method_instance_set_pivot_data;
    method_instance_set_transform;
    method_instance_attach_object_instance_id;
    method_instance_set_blend_shape_weight;
    method_instance_set_surface_override_material;
    method_instance_set_visible;
    method_instance_geometry_set_transparency;
    method_instance_set_custom_aabb;
    method_instance_attach_skeleton;
    method_instance_set_extra_visibility_margin;
    method_instance_set_visibility_parent;
    method_instance_set_ignore_culling;
    method_instance_geometry_set_flag;
    method_instance_geometry_set_cast_shadows_setting;
    method_instance_geometry_set_material_override;
    method_instance_geometry_set_material_overlay;
    method_instance_geometry_set_visibility_range;
    method_instance_geometry_set_lightmap;
    method_instance_geometry_set_lod_bias;
    method_instance_geometry_set_shader_parameter;
    method_instance_geometry_get_shader_parameter;
    method_instance_geometry_get_shader_parameter_default_value;
    method_instance_geometry_get_shader_parameter_list;
    method_instances_cull_aabb;
    method_instances_cull_ray;
    method_instances_cull_convex;
    method_bake_render_uv2;
    method_canvas_create;
    method_canvas_set_item_mirroring;
    method_canvas_set_item_repeat;
    method_canvas_set_modulate;
    method_canvas_set_disable_scale;
    method_canvas_texture_create;
    method_canvas_texture_set_channel;
    method_canvas_texture_set_shading_parameters;
    method_canvas_texture_set_texture_filter;
    method_canvas_texture_set_texture_repeat;
    method_canvas_item_create;
    method_canvas_item_set_parent;
    method_canvas_item_set_default_texture_filter;
    method_canvas_item_set_default_texture_repeat;
    method_canvas_item_set_visible;
    method_canvas_item_set_light_mask;
    method_canvas_item_set_visibility_layer;
    method_canvas_item_set_transform;
    method_canvas_item_set_clip;
    method_canvas_item_set_distance_field_mode;
    method_canvas_item_set_custom_rect;
    method_canvas_item_set_modulate;
    method_canvas_item_set_self_modulate;
    method_canvas_item_set_draw_behind_parent;
    method_canvas_item_set_interpolated;
    method_canvas_item_reset_physics_interpolation;
    method_canvas_item_transform_physics_interpolation;
    method_canvas_item_add_line;
    method_canvas_item_add_polyline;
    method_canvas_item_add_multiline;
    method_canvas_item_add_rect;
    method_canvas_item_add_circle;
    method_canvas_item_add_texture_rect;
    method_canvas_item_add_msdf_texture_rect_region;
    method_canvas_item_add_lcd_texture_rect_region;
    method_canvas_item_add_texture_rect_region;
    method_canvas_item_add_nine_patch;
    method_canvas_item_add_primitive;
    method_canvas_item_add_polygon;
    method_canvas_item_add_triangle_array;
    method_canvas_item_add_mesh;
    method_canvas_item_add_multimesh;
    method_canvas_item_add_particles;
    method_canvas_item_add_set_transform;
    method_canvas_item_add_clip_ignore;
    method_canvas_item_add_animation_slice;
    method_canvas_item_set_sort_children_by_y;
    method_canvas_item_set_z_index;
    method_canvas_item_set_z_as_relative_to_parent;
    method_canvas_item_set_copy_to_backbuffer;
    method_canvas_item_clear;
    method_canvas_item_set_draw_index;
    method_canvas_item_set_material;
    method_canvas_item_set_use_parent_material;
    method_canvas_item_set_visibility_notifier;
    method_canvas_item_set_canvas_group_mode;
    method_debug_canvas_item_get_rect;
    method_canvas_light_create;
    method_canvas_light_attach_to_canvas;
    method_canvas_light_set_enabled;
    method_canvas_light_set_texture_scale;
    method_canvas_light_set_transform;
    method_canvas_light_set_texture;
    method_canvas_light_set_texture_offset;
    method_canvas_light_set_color;
    method_canvas_light_set_height;
    method_canvas_light_set_energy;
    method_canvas_light_set_z_range;
    method_canvas_light_set_layer_range;
    method_canvas_light_set_item_cull_mask;
    method_canvas_light_set_item_shadow_cull_mask;
    method_canvas_light_set_mode;
    method_canvas_light_set_shadow_enabled;
    method_canvas_light_set_shadow_filter;
    method_canvas_light_set_shadow_color;
    method_canvas_light_set_shadow_smooth;
    method_canvas_light_set_blend_mode;
    method_canvas_light_set_interpolated;
    method_canvas_light_reset_physics_interpolation;
    method_canvas_light_transform_physics_interpolation;
    method_canvas_light_occluder_create;
    method_canvas_light_occluder_attach_to_canvas;
    method_canvas_light_occluder_set_enabled;
    method_canvas_light_occluder_set_polygon;
    method_canvas_light_occluder_set_as_sdf_collision;
    method_canvas_light_occluder_set_transform;
    method_canvas_light_occluder_set_light_mask;
    method_canvas_light_occluder_set_interpolated;
    method_canvas_light_occluder_reset_physics_interpolation;
    method_canvas_light_occluder_transform_physics_interpolation;
    method_canvas_occluder_polygon_create;
    method_canvas_occluder_polygon_set_shape;
    method_canvas_occluder_polygon_set_cull_mode;
    method_canvas_set_shadow_texture_size;
    method_global_shader_parameter_add;
    method_global_shader_parameter_remove;
    method_global_shader_parameter_get_list;
    method_global_shader_parameter_set;
    method_global_shader_parameter_set_override;
    method_global_shader_parameter_get;
    method_global_shader_parameter_get_type;
    method_free_rid;
    method_request_frame_drawn_callback;
    method_has_changed;
    method_get_rendering_info;
    method_get_video_adapter_name;
    method_get_video_adapter_vendor;
    method_get_video_adapter_type;
    method_get_video_adapter_api_version;
    method_make_sphere_mesh;
    method_get_test_cube;
    method_get_test_texture;
    method_get_white_texture;
    method_set_boot_image;
    method_get_default_clear_color;
    method_set_default_clear_color;
    method_has_os_feature;
    method_set_debug_generate_wireframes;
    method_is_render_loop_enabled;
    method_set_render_loop_enabled;
    method_get_frame_setup_time_cpu;
    method_force_sync;
    method_force_draw;
    method_get_rendering_device;
    method_create_local_rendering_device;
    method_is_on_render_thread;
    method_call_on_render_thread;
    method_has_feature;
}

export const RenderingServer = new _RenderingServer();

class _RenderingServer extends GodotObject{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("RenderingServer");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("texture_2d_create");
        this._bindings.method_texture_2d_create = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2010018390
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("texture_2d_layered_create");
        this._bindings.method_texture_2d_layered_create = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          913689023
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("texture_3d_create");
        this._bindings.method_texture_3d_create = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          4036838706
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("texture_proxy_create");
        this._bindings.method_texture_proxy_create = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          41030802
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("texture_2d_update");
        this._bindings.method_texture_2d_update = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          999539803
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("texture_3d_update");
        this._bindings.method_texture_3d_update = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          684822712
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("texture_proxy_update");
        this._bindings.method_texture_proxy_update = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          395945892
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("texture_2d_placeholder_create");
        this._bindings.method_texture_2d_placeholder_create = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          529393457
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("texture_2d_layered_placeholder_create");
        this._bindings.method_texture_2d_layered_placeholder_create = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1394585590
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("texture_3d_placeholder_create");
        this._bindings.method_texture_3d_placeholder_create = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          529393457
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("texture_2d_get");
        this._bindings.method_texture_2d_get = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          4206205781
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("texture_2d_layer_get");
        this._bindings.method_texture_2d_layer_get = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2705440895
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("texture_3d_get");
        this._bindings.method_texture_3d_get = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2684255073
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("texture_replace");
        this._bindings.method_texture_replace = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          395945892
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("texture_set_size_override");
        this._bindings.method_texture_set_size_override = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          4288446313
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("texture_set_path");
        this._bindings.method_texture_set_path = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2726140452
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("texture_get_path");
        this._bindings.method_texture_get_path = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          642473191
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("texture_get_format");
        this._bindings.method_texture_get_format = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1932918979
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("texture_set_force_redraw_if_visible");
        this._bindings.method_texture_set_force_redraw_if_visible = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1265174801
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("texture_rd_create");
        this._bindings.method_texture_rd_create = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1434128712
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("texture_get_rd_texture");
        this._bindings.method_texture_get_rd_texture = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2790148051
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("texture_get_native_handle");
        this._bindings.method_texture_get_native_handle = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1834114100
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("shader_create");
        this._bindings.method_shader_create = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          529393457
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("shader_set_code");
        this._bindings.method_shader_set_code = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2726140452
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("shader_set_path_hint");
        this._bindings.method_shader_set_path_hint = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2726140452
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("shader_get_code");
        this._bindings.method_shader_get_code = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          642473191
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("get_shader_parameter_list");
        this._bindings.method_get_shader_parameter_list = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2684255073
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("shader_get_parameter_default");
        this._bindings.method_shader_get_parameter_default = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2621281810
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("shader_set_default_texture_parameter");
        this._bindings.method_shader_set_default_texture_parameter = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          4094001817
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("shader_get_default_texture_parameter");
        this._bindings.method_shader_get_default_texture_parameter = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1464608890
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("material_create");
        this._bindings.method_material_create = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          529393457
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("material_set_shader");
        this._bindings.method_material_set_shader = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          395945892
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("material_set_param");
        this._bindings.method_material_set_param = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3477296213
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("material_get_param");
        this._bindings.method_material_get_param = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2621281810
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("material_set_render_priority");
        this._bindings.method_material_set_render_priority = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3411492887
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("material_set_next_pass");
        this._bindings.method_material_set_next_pass = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          395945892
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("mesh_create_from_surfaces");
        this._bindings.method_mesh_create_from_surfaces = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          4291747531
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("mesh_create");
        this._bindings.method_mesh_create = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          529393457
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("mesh_surface_get_format_offset");
        this._bindings.method_mesh_surface_get_format_offset = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2981368685
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("mesh_surface_get_format_vertex_stride");
        this._bindings.method_mesh_surface_get_format_vertex_stride = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3188363337
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("mesh_surface_get_format_normal_tangent_stride");
        this._bindings.method_mesh_surface_get_format_normal_tangent_stride = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3188363337
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("mesh_surface_get_format_attribute_stride");
        this._bindings.method_mesh_surface_get_format_attribute_stride = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3188363337
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("mesh_surface_get_format_skin_stride");
        this._bindings.method_mesh_surface_get_format_skin_stride = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3188363337
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("mesh_add_surface");
        this._bindings.method_mesh_add_surface = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1217542888
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("mesh_add_surface_from_arrays");
        this._bindings.method_mesh_add_surface_from_arrays = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2342446560
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("mesh_get_blend_shape_count");
        this._bindings.method_mesh_get_blend_shape_count = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2198884583
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("mesh_set_blend_shape_mode");
        this._bindings.method_mesh_set_blend_shape_mode = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1294662092
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("mesh_get_blend_shape_mode");
        this._bindings.method_mesh_get_blend_shape_mode = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          4282291819
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("mesh_surface_set_material");
        this._bindings.method_mesh_surface_set_material = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2310537182
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("mesh_surface_get_material");
        this._bindings.method_mesh_surface_get_material = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1066463050
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("mesh_get_surface");
        this._bindings.method_mesh_get_surface = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          186674697
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("mesh_surface_get_arrays");
        this._bindings.method_mesh_surface_get_arrays = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1778388067
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("mesh_surface_get_blend_shape_arrays");
        this._bindings.method_mesh_surface_get_blend_shape_arrays = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1778388067
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("mesh_get_surface_count");
        this._bindings.method_mesh_get_surface_count = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2198884583
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("mesh_set_custom_aabb");
        this._bindings.method_mesh_set_custom_aabb = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3696536120
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("mesh_get_custom_aabb");
        this._bindings.method_mesh_get_custom_aabb = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          974181306
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("mesh_clear");
        this._bindings.method_mesh_clear = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2722037293
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("mesh_surface_update_vertex_region");
        this._bindings.method_mesh_surface_update_vertex_region = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2900195149
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("mesh_surface_update_attribute_region");
        this._bindings.method_mesh_surface_update_attribute_region = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2900195149
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("mesh_surface_update_skin_region");
        this._bindings.method_mesh_surface_update_skin_region = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2900195149
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("mesh_set_shadow_mesh");
        this._bindings.method_mesh_set_shadow_mesh = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          395945892
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("multimesh_create");
        this._bindings.method_multimesh_create = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          529393457
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("multimesh_allocate_data");
        this._bindings.method_multimesh_allocate_data = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          283685892
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("multimesh_get_instance_count");
        this._bindings.method_multimesh_get_instance_count = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2198884583
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("multimesh_set_mesh");
        this._bindings.method_multimesh_set_mesh = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          395945892
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("multimesh_instance_set_transform");
        this._bindings.method_multimesh_instance_set_transform = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          675327471
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("multimesh_instance_set_transform_2d");
        this._bindings.method_multimesh_instance_set_transform_2d = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          736082694
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("multimesh_instance_set_color");
        this._bindings.method_multimesh_instance_set_color = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          176975443
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("multimesh_instance_set_custom_data");
        this._bindings.method_multimesh_instance_set_custom_data = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          176975443
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("multimesh_get_mesh");
        this._bindings.method_multimesh_get_mesh = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3814569979
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("multimesh_get_aabb");
        this._bindings.method_multimesh_get_aabb = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          974181306
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("multimesh_set_custom_aabb");
        this._bindings.method_multimesh_set_custom_aabb = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3696536120
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("multimesh_get_custom_aabb");
        this._bindings.method_multimesh_get_custom_aabb = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          974181306
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("multimesh_instance_get_transform");
        this._bindings.method_multimesh_instance_get_transform = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1050775521
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("multimesh_instance_get_transform_2d");
        this._bindings.method_multimesh_instance_get_transform_2d = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1324854622
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("multimesh_instance_get_color");
        this._bindings.method_multimesh_instance_get_color = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2946315076
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("multimesh_instance_get_custom_data");
        this._bindings.method_multimesh_instance_get_custom_data = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2946315076
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("multimesh_set_visible_instances");
        this._bindings.method_multimesh_set_visible_instances = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3411492887
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("multimesh_get_visible_instances");
        this._bindings.method_multimesh_get_visible_instances = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2198884583
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("multimesh_set_buffer");
        this._bindings.method_multimesh_set_buffer = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2960552364
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("multimesh_get_buffer");
        this._bindings.method_multimesh_get_buffer = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3964669176
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("skeleton_create");
        this._bindings.method_skeleton_create = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          529393457
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("skeleton_allocate_data");
        this._bindings.method_skeleton_allocate_data = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1904426712
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("skeleton_get_bone_count");
        this._bindings.method_skeleton_get_bone_count = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2198884583
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("skeleton_bone_set_transform");
        this._bindings.method_skeleton_bone_set_transform = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          675327471
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("skeleton_bone_get_transform");
        this._bindings.method_skeleton_bone_get_transform = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1050775521
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("skeleton_bone_set_transform_2d");
        this._bindings.method_skeleton_bone_set_transform_2d = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          736082694
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("skeleton_bone_get_transform_2d");
        this._bindings.method_skeleton_bone_get_transform_2d = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1324854622
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("skeleton_set_base_transform_2d");
        this._bindings.method_skeleton_set_base_transform_2d = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1246044741
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("directional_light_create");
        this._bindings.method_directional_light_create = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          529393457
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("omni_light_create");
        this._bindings.method_omni_light_create = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          529393457
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("spot_light_create");
        this._bindings.method_spot_light_create = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          529393457
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("light_set_color");
        this._bindings.method_light_set_color = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2948539648
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("light_set_param");
        this._bindings.method_light_set_param = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          501936875
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("light_set_shadow");
        this._bindings.method_light_set_shadow = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1265174801
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("light_set_projector");
        this._bindings.method_light_set_projector = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          395945892
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("light_set_negative");
        this._bindings.method_light_set_negative = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1265174801
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("light_set_cull_mask");
        this._bindings.method_light_set_cull_mask = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3411492887
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("light_set_distance_fade");
        this._bindings.method_light_set_distance_fade = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1622292572
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("light_set_reverse_cull_face_mode");
        this._bindings.method_light_set_reverse_cull_face_mode = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1265174801
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("light_set_bake_mode");
        this._bindings.method_light_set_bake_mode = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1048525260
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("light_set_max_sdfgi_cascade");
        this._bindings.method_light_set_max_sdfgi_cascade = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3411492887
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("light_omni_set_shadow_mode");
        this._bindings.method_light_omni_set_shadow_mode = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2552677200
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("light_directional_set_shadow_mode");
        this._bindings.method_light_directional_set_shadow_mode = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          380462970
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("light_directional_set_blend_splits");
        this._bindings.method_light_directional_set_blend_splits = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1265174801
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("light_directional_set_sky_mode");
        this._bindings.method_light_directional_set_sky_mode = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2559740754
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("light_projectors_set_filter");
        this._bindings.method_light_projectors_set_filter = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          43944325
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("positional_soft_shadow_filter_set_quality");
        this._bindings.method_positional_soft_shadow_filter_set_quality = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3613045266
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("directional_soft_shadow_filter_set_quality");
        this._bindings.method_directional_soft_shadow_filter_set_quality = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3613045266
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("directional_shadow_atlas_set_size");
        this._bindings.method_directional_shadow_atlas_set_size = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          300928843
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("reflection_probe_create");
        this._bindings.method_reflection_probe_create = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          529393457
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("reflection_probe_set_update_mode");
        this._bindings.method_reflection_probe_set_update_mode = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3853670147
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("reflection_probe_set_intensity");
        this._bindings.method_reflection_probe_set_intensity = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1794382983
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("reflection_probe_set_ambient_mode");
        this._bindings.method_reflection_probe_set_ambient_mode = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          184163074
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("reflection_probe_set_ambient_color");
        this._bindings.method_reflection_probe_set_ambient_color = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2948539648
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("reflection_probe_set_ambient_energy");
        this._bindings.method_reflection_probe_set_ambient_energy = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1794382983
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("reflection_probe_set_max_distance");
        this._bindings.method_reflection_probe_set_max_distance = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1794382983
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("reflection_probe_set_size");
        this._bindings.method_reflection_probe_set_size = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3227306858
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("reflection_probe_set_origin_offset");
        this._bindings.method_reflection_probe_set_origin_offset = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3227306858
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("reflection_probe_set_as_interior");
        this._bindings.method_reflection_probe_set_as_interior = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1265174801
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("reflection_probe_set_enable_box_projection");
        this._bindings.method_reflection_probe_set_enable_box_projection = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1265174801
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("reflection_probe_set_enable_shadows");
        this._bindings.method_reflection_probe_set_enable_shadows = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1265174801
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("reflection_probe_set_cull_mask");
        this._bindings.method_reflection_probe_set_cull_mask = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3411492887
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("reflection_probe_set_reflection_mask");
        this._bindings.method_reflection_probe_set_reflection_mask = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3411492887
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("reflection_probe_set_resolution");
        this._bindings.method_reflection_probe_set_resolution = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3411492887
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("reflection_probe_set_mesh_lod_threshold");
        this._bindings.method_reflection_probe_set_mesh_lod_threshold = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1794382983
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("decal_create");
        this._bindings.method_decal_create = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          529393457
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("decal_set_size");
        this._bindings.method_decal_set_size = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3227306858
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("decal_set_texture");
        this._bindings.method_decal_set_texture = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3953344054
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("decal_set_emission_energy");
        this._bindings.method_decal_set_emission_energy = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1794382983
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("decal_set_albedo_mix");
        this._bindings.method_decal_set_albedo_mix = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1794382983
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("decal_set_modulate");
        this._bindings.method_decal_set_modulate = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2948539648
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("decal_set_cull_mask");
        this._bindings.method_decal_set_cull_mask = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3411492887
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("decal_set_distance_fade");
        this._bindings.method_decal_set_distance_fade = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2972769666
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("decal_set_fade");
        this._bindings.method_decal_set_fade = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2513314492
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("decal_set_normal_fade");
        this._bindings.method_decal_set_normal_fade = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1794382983
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("decals_set_filter");
        this._bindings.method_decals_set_filter = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3519875702
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("gi_set_use_half_resolution");
        this._bindings.method_gi_set_use_half_resolution = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("voxel_gi_create");
        this._bindings.method_voxel_gi_create = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          529393457
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("voxel_gi_allocate_data");
        this._bindings.method_voxel_gi_allocate_data = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          4108223027
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("voxel_gi_get_octree_size");
        this._bindings.method_voxel_gi_get_octree_size = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2607699645
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("voxel_gi_get_octree_cells");
        this._bindings.method_voxel_gi_get_octree_cells = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3348040486
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("voxel_gi_get_data_cells");
        this._bindings.method_voxel_gi_get_data_cells = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3348040486
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("voxel_gi_get_distance_field");
        this._bindings.method_voxel_gi_get_distance_field = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3348040486
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("voxel_gi_get_level_counts");
        this._bindings.method_voxel_gi_get_level_counts = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          788230395
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("voxel_gi_get_to_cell_xform");
        this._bindings.method_voxel_gi_get_to_cell_xform = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1128465797
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("voxel_gi_set_dynamic_range");
        this._bindings.method_voxel_gi_set_dynamic_range = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1794382983
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("voxel_gi_set_propagation");
        this._bindings.method_voxel_gi_set_propagation = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1794382983
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("voxel_gi_set_energy");
        this._bindings.method_voxel_gi_set_energy = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1794382983
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("voxel_gi_set_baked_exposure_normalization");
        this._bindings.method_voxel_gi_set_baked_exposure_normalization = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1794382983
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("voxel_gi_set_bias");
        this._bindings.method_voxel_gi_set_bias = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1794382983
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("voxel_gi_set_normal_bias");
        this._bindings.method_voxel_gi_set_normal_bias = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1794382983
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("voxel_gi_set_interior");
        this._bindings.method_voxel_gi_set_interior = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1265174801
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("voxel_gi_set_use_two_bounces");
        this._bindings.method_voxel_gi_set_use_two_bounces = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1265174801
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("voxel_gi_set_quality");
        this._bindings.method_voxel_gi_set_quality = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1538689978
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("lightmap_create");
        this._bindings.method_lightmap_create = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          529393457
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("lightmap_set_textures");
        this._bindings.method_lightmap_set_textures = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2646464759
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("lightmap_set_probe_bounds");
        this._bindings.method_lightmap_set_probe_bounds = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3696536120
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("lightmap_set_probe_interior");
        this._bindings.method_lightmap_set_probe_interior = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1265174801
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("lightmap_set_probe_capture_data");
        this._bindings.method_lightmap_set_probe_capture_data = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3217845880
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("lightmap_get_probe_capture_points");
        this._bindings.method_lightmap_get_probe_capture_points = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          808965560
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("lightmap_get_probe_capture_sh");
        this._bindings.method_lightmap_get_probe_capture_sh = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1569415609
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("lightmap_get_probe_capture_tetrahedra");
        this._bindings.method_lightmap_get_probe_capture_tetrahedra = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          788230395
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("lightmap_get_probe_capture_bsp_tree");
        this._bindings.method_lightmap_get_probe_capture_bsp_tree = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          788230395
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("lightmap_set_baked_exposure_normalization");
        this._bindings.method_lightmap_set_baked_exposure_normalization = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1794382983
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("lightmap_set_probe_capture_update_speed");
        this._bindings.method_lightmap_set_probe_capture_update_speed = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("particles_create");
        this._bindings.method_particles_create = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          529393457
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("particles_set_mode");
        this._bindings.method_particles_set_mode = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3492270028
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("particles_set_emitting");
        this._bindings.method_particles_set_emitting = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1265174801
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("particles_get_emitting");
        this._bindings.method_particles_get_emitting = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3521089500
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("particles_set_amount");
        this._bindings.method_particles_set_amount = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3411492887
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("particles_set_amount_ratio");
        this._bindings.method_particles_set_amount_ratio = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1794382983
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("particles_set_lifetime");
        this._bindings.method_particles_set_lifetime = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1794382983
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("particles_set_one_shot");
        this._bindings.method_particles_set_one_shot = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1265174801
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("particles_set_pre_process_time");
        this._bindings.method_particles_set_pre_process_time = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1794382983
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("particles_set_explosiveness_ratio");
        this._bindings.method_particles_set_explosiveness_ratio = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1794382983
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("particles_set_randomness_ratio");
        this._bindings.method_particles_set_randomness_ratio = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1794382983
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("particles_set_interp_to_end");
        this._bindings.method_particles_set_interp_to_end = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1794382983
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("particles_set_emitter_velocity");
        this._bindings.method_particles_set_emitter_velocity = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3227306858
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("particles_set_custom_aabb");
        this._bindings.method_particles_set_custom_aabb = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3696536120
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("particles_set_speed_scale");
        this._bindings.method_particles_set_speed_scale = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1794382983
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("particles_set_use_local_coordinates");
        this._bindings.method_particles_set_use_local_coordinates = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1265174801
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("particles_set_process_material");
        this._bindings.method_particles_set_process_material = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          395945892
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("particles_set_fixed_fps");
        this._bindings.method_particles_set_fixed_fps = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3411492887
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("particles_set_interpolate");
        this._bindings.method_particles_set_interpolate = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1265174801
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("particles_set_fractional_delta");
        this._bindings.method_particles_set_fractional_delta = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1265174801
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("particles_set_collision_base_size");
        this._bindings.method_particles_set_collision_base_size = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1794382983
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("particles_set_transform_align");
        this._bindings.method_particles_set_transform_align = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3264971368
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("particles_set_trails");
        this._bindings.method_particles_set_trails = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2010054925
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("particles_set_trail_bind_poses");
        this._bindings.method_particles_set_trail_bind_poses = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          684822712
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("particles_is_inactive");
        this._bindings.method_particles_is_inactive = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3521089500
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("particles_request_process");
        this._bindings.method_particles_request_process = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2722037293
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("particles_restart");
        this._bindings.method_particles_restart = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2722037293
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("particles_set_subemitter");
        this._bindings.method_particles_set_subemitter = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          395945892
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("particles_emit");
        this._bindings.method_particles_emit = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          4043136117
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("particles_set_draw_order");
        this._bindings.method_particles_set_draw_order = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          935028487
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("particles_set_draw_passes");
        this._bindings.method_particles_set_draw_passes = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3411492887
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("particles_set_draw_pass_mesh");
        this._bindings.method_particles_set_draw_pass_mesh = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2310537182
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("particles_get_current_aabb");
        this._bindings.method_particles_get_current_aabb = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3952830260
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("particles_set_emission_transform");
        this._bindings.method_particles_set_emission_transform = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3935195649
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("particles_collision_create");
        this._bindings.method_particles_collision_create = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          529393457
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("particles_collision_set_collision_type");
        this._bindings.method_particles_collision_set_collision_type = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1497044930
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("particles_collision_set_cull_mask");
        this._bindings.method_particles_collision_set_cull_mask = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3411492887
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("particles_collision_set_sphere_radius");
        this._bindings.method_particles_collision_set_sphere_radius = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1794382983
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("particles_collision_set_box_extents");
        this._bindings.method_particles_collision_set_box_extents = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3227306858
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("particles_collision_set_attractor_strength");
        this._bindings.method_particles_collision_set_attractor_strength = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1794382983
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("particles_collision_set_attractor_directionality");
        this._bindings.method_particles_collision_set_attractor_directionality = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1794382983
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("particles_collision_set_attractor_attenuation");
        this._bindings.method_particles_collision_set_attractor_attenuation = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1794382983
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("particles_collision_set_field_texture");
        this._bindings.method_particles_collision_set_field_texture = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          395945892
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("particles_collision_height_field_update");
        this._bindings.method_particles_collision_height_field_update = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2722037293
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("particles_collision_set_height_field_resolution");
        this._bindings.method_particles_collision_set_height_field_resolution = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          962977297
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("fog_volume_create");
        this._bindings.method_fog_volume_create = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          529393457
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("fog_volume_set_shape");
        this._bindings.method_fog_volume_set_shape = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3818703106
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("fog_volume_set_size");
        this._bindings.method_fog_volume_set_size = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3227306858
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("fog_volume_set_material");
        this._bindings.method_fog_volume_set_material = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          395945892
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("visibility_notifier_create");
        this._bindings.method_visibility_notifier_create = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          529393457
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("visibility_notifier_set_aabb");
        this._bindings.method_visibility_notifier_set_aabb = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3696536120
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("visibility_notifier_set_callbacks");
        this._bindings.method_visibility_notifier_set_callbacks = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2689735388
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("occluder_create");
        this._bindings.method_occluder_create = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          529393457
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("occluder_set_mesh");
        this._bindings.method_occluder_set_mesh = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3854404263
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("camera_create");
        this._bindings.method_camera_create = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          529393457
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("camera_set_perspective");
        this._bindings.method_camera_set_perspective = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          157498339
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("camera_set_orthogonal");
        this._bindings.method_camera_set_orthogonal = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          157498339
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("camera_set_frustum");
        this._bindings.method_camera_set_frustum = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1889878953
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("camera_set_transform");
        this._bindings.method_camera_set_transform = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3935195649
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("camera_set_cull_mask");
        this._bindings.method_camera_set_cull_mask = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3411492887
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("camera_set_environment");
        this._bindings.method_camera_set_environment = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          395945892
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("camera_set_camera_attributes");
        this._bindings.method_camera_set_camera_attributes = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          395945892
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("camera_set_compositor");
        this._bindings.method_camera_set_compositor = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          395945892
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("camera_set_use_vertical_aspect");
        this._bindings.method_camera_set_use_vertical_aspect = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1265174801
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("viewport_create");
        this._bindings.method_viewport_create = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          529393457
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("viewport_set_use_xr");
        this._bindings.method_viewport_set_use_xr = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1265174801
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("viewport_set_size");
        this._bindings.method_viewport_set_size = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          4288446313
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("viewport_set_active");
        this._bindings.method_viewport_set_active = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1265174801
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("viewport_set_parent_viewport");
        this._bindings.method_viewport_set_parent_viewport = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          395945892
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("viewport_attach_to_screen");
        this._bindings.method_viewport_attach_to_screen = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1062245816
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("viewport_set_render_direct_to_screen");
        this._bindings.method_viewport_set_render_direct_to_screen = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1265174801
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("viewport_set_canvas_cull_mask");
        this._bindings.method_viewport_set_canvas_cull_mask = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3411492887
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("viewport_set_scaling_3d_mode");
        this._bindings.method_viewport_set_scaling_3d_mode = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2386524376
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("viewport_set_scaling_3d_scale");
        this._bindings.method_viewport_set_scaling_3d_scale = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1794382983
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("viewport_set_fsr_sharpness");
        this._bindings.method_viewport_set_fsr_sharpness = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1794382983
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("viewport_set_texture_mipmap_bias");
        this._bindings.method_viewport_set_texture_mipmap_bias = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1794382983
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("viewport_set_update_mode");
        this._bindings.method_viewport_set_update_mode = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3161116010
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("viewport_get_update_mode");
        this._bindings.method_viewport_get_update_mode = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3803901472
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("viewport_set_clear_mode");
        this._bindings.method_viewport_set_clear_mode = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3628367896
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("viewport_get_render_target");
        this._bindings.method_viewport_get_render_target = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3814569979
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("viewport_get_texture");
        this._bindings.method_viewport_get_texture = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3814569979
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("viewport_set_disable_3d");
        this._bindings.method_viewport_set_disable_3d = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1265174801
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("viewport_set_disable_2d");
        this._bindings.method_viewport_set_disable_2d = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1265174801
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("viewport_set_environment_mode");
        this._bindings.method_viewport_set_environment_mode = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2196892182
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("viewport_attach_camera");
        this._bindings.method_viewport_attach_camera = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          395945892
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("viewport_set_scenario");
        this._bindings.method_viewport_set_scenario = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          395945892
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("viewport_attach_canvas");
        this._bindings.method_viewport_attach_canvas = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          395945892
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("viewport_remove_canvas");
        this._bindings.method_viewport_remove_canvas = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          395945892
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("viewport_set_snap_2d_transforms_to_pixel");
        this._bindings.method_viewport_set_snap_2d_transforms_to_pixel = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1265174801
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("viewport_set_snap_2d_vertices_to_pixel");
        this._bindings.method_viewport_set_snap_2d_vertices_to_pixel = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1265174801
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("viewport_set_default_canvas_item_texture_filter");
        this._bindings.method_viewport_set_default_canvas_item_texture_filter = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1155129294
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("viewport_set_default_canvas_item_texture_repeat");
        this._bindings.method_viewport_set_default_canvas_item_texture_repeat = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1652956681
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("viewport_set_canvas_transform");
        this._bindings.method_viewport_set_canvas_transform = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3608606053
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("viewport_set_canvas_stacking");
        this._bindings.method_viewport_set_canvas_stacking = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3713930247
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("viewport_set_transparent_background");
        this._bindings.method_viewport_set_transparent_background = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1265174801
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("viewport_set_global_canvas_transform");
        this._bindings.method_viewport_set_global_canvas_transform = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1246044741
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("viewport_set_sdf_oversize_and_scale");
        this._bindings.method_viewport_set_sdf_oversize_and_scale = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1329198632
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("viewport_set_positional_shadow_atlas_size");
        this._bindings.method_viewport_set_positional_shadow_atlas_size = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1904426712
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("viewport_set_positional_shadow_atlas_quadrant_subdivision");
        this._bindings.method_viewport_set_positional_shadow_atlas_quadrant_subdivision = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          4288446313
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("viewport_set_msaa_3d");
        this._bindings.method_viewport_set_msaa_3d = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3764433340
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("viewport_set_msaa_2d");
        this._bindings.method_viewport_set_msaa_2d = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3764433340
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("viewport_set_use_hdr_2d");
        this._bindings.method_viewport_set_use_hdr_2d = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1265174801
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("viewport_set_screen_space_aa");
        this._bindings.method_viewport_set_screen_space_aa = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1447279591
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("viewport_set_use_taa");
        this._bindings.method_viewport_set_use_taa = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1265174801
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("viewport_set_use_debanding");
        this._bindings.method_viewport_set_use_debanding = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1265174801
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("viewport_set_use_occlusion_culling");
        this._bindings.method_viewport_set_use_occlusion_culling = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1265174801
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("viewport_set_occlusion_rays_per_thread");
        this._bindings.method_viewport_set_occlusion_rays_per_thread = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1286410249
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("viewport_set_occlusion_culling_build_quality");
        this._bindings.method_viewport_set_occlusion_culling_build_quality = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2069725696
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("viewport_get_render_info");
        this._bindings.method_viewport_get_render_info = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2041262392
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("viewport_set_debug_draw");
        this._bindings.method_viewport_set_debug_draw = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2089420930
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("viewport_set_measure_render_time");
        this._bindings.method_viewport_set_measure_render_time = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1265174801
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("viewport_get_measured_render_time_cpu");
        this._bindings.method_viewport_get_measured_render_time_cpu = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          866169185
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("viewport_get_measured_render_time_gpu");
        this._bindings.method_viewport_get_measured_render_time_gpu = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          866169185
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("viewport_set_vrs_mode");
        this._bindings.method_viewport_set_vrs_mode = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          398809874
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("viewport_set_vrs_update_mode");
        this._bindings.method_viewport_set_vrs_update_mode = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2696154815
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("viewport_set_vrs_texture");
        this._bindings.method_viewport_set_vrs_texture = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          395945892
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("sky_create");
        this._bindings.method_sky_create = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          529393457
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("sky_set_radiance_size");
        this._bindings.method_sky_set_radiance_size = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3411492887
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("sky_set_mode");
        this._bindings.method_sky_set_mode = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3279019937
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("sky_set_material");
        this._bindings.method_sky_set_material = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          395945892
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("sky_bake_panorama");
        this._bindings.method_sky_bake_panorama = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3875285818
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("compositor_effect_create");
        this._bindings.method_compositor_effect_create = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          529393457
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("compositor_effect_set_enabled");
        this._bindings.method_compositor_effect_set_enabled = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1265174801
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("compositor_effect_set_callback");
        this._bindings.method_compositor_effect_set_callback = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          487412485
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("compositor_effect_set_flag");
        this._bindings.method_compositor_effect_set_flag = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3659527075
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("compositor_create");
        this._bindings.method_compositor_create = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          529393457
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("compositor_set_compositor_effects");
        this._bindings.method_compositor_set_compositor_effects = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          684822712
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("environment_create");
        this._bindings.method_environment_create = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          529393457
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("environment_set_background");
        this._bindings.method_environment_set_background = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3937328877
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("environment_set_sky");
        this._bindings.method_environment_set_sky = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          395945892
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("environment_set_sky_custom_fov");
        this._bindings.method_environment_set_sky_custom_fov = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1794382983
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("environment_set_sky_orientation");
        this._bindings.method_environment_set_sky_orientation = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1735850857
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("environment_set_bg_color");
        this._bindings.method_environment_set_bg_color = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2948539648
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("environment_set_bg_energy");
        this._bindings.method_environment_set_bg_energy = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2513314492
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("environment_set_canvas_max_layer");
        this._bindings.method_environment_set_canvas_max_layer = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3411492887
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("environment_set_ambient_light");
        this._bindings.method_environment_set_ambient_light = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1214961493
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("environment_set_glow");
        this._bindings.method_environment_set_glow = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2421724940
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("environment_set_tonemap");
        this._bindings.method_environment_set_tonemap = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2914312638
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("environment_set_adjustment");
        this._bindings.method_environment_set_adjustment = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          876799838
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("environment_set_ssr");
        this._bindings.method_environment_set_ssr = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3607294374
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("environment_set_ssao");
        this._bindings.method_environment_set_ssao = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3994732740
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("environment_set_fog");
        this._bindings.method_environment_set_fog = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          105051629
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("environment_set_sdfgi");
        this._bindings.method_environment_set_sdfgi = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3519144388
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("environment_set_volumetric_fog");
        this._bindings.method_environment_set_volumetric_fog = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1553633833
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("environment_glow_set_use_bicubic_upscale");
        this._bindings.method_environment_glow_set_use_bicubic_upscale = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("environment_set_ssr_roughness_quality");
        this._bindings.method_environment_set_ssr_roughness_quality = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1190026788
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("environment_set_ssao_quality");
        this._bindings.method_environment_set_ssao_quality = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          189753569
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("environment_set_ssil_quality");
        this._bindings.method_environment_set_ssil_quality = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1713836683
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("environment_set_sdfgi_ray_count");
        this._bindings.method_environment_set_sdfgi_ray_count = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          340137951
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("environment_set_sdfgi_frames_to_converge");
        this._bindings.method_environment_set_sdfgi_frames_to_converge = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2182444374
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("environment_set_sdfgi_frames_to_update_light");
        this._bindings.method_environment_set_sdfgi_frames_to_update_light = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1251144068
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("environment_set_volumetric_fog_volume_size");
        this._bindings.method_environment_set_volumetric_fog_volume_size = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3937882851
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("environment_set_volumetric_fog_filter_active");
        this._bindings.method_environment_set_volumetric_fog_filter_active = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("environment_bake_panorama");
        this._bindings.method_environment_bake_panorama = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2452908646
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("screen_space_roughness_limiter_set_active");
        this._bindings.method_screen_space_roughness_limiter_set_active = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          916716790
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("sub_surface_scattering_set_quality");
        this._bindings.method_sub_surface_scattering_set_quality = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          64571803
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("sub_surface_scattering_set_scale");
        this._bindings.method_sub_surface_scattering_set_scale = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1017552074
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("camera_attributes_create");
        this._bindings.method_camera_attributes_create = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          529393457
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("camera_attributes_set_dof_blur_quality");
        this._bindings.method_camera_attributes_set_dof_blur_quality = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2220136795
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("camera_attributes_set_dof_blur_bokeh_shape");
        this._bindings.method_camera_attributes_set_dof_blur_bokeh_shape = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1205058394
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("camera_attributes_set_dof_blur");
        this._bindings.method_camera_attributes_set_dof_blur = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          316272616
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("camera_attributes_set_exposure");
        this._bindings.method_camera_attributes_set_exposure = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2513314492
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("camera_attributes_set_auto_exposure");
        this._bindings.method_camera_attributes_set_auto_exposure = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          4266986332
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("scenario_create");
        this._bindings.method_scenario_create = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          529393457
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("scenario_set_environment");
        this._bindings.method_scenario_set_environment = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          395945892
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("scenario_set_fallback_environment");
        this._bindings.method_scenario_set_fallback_environment = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          395945892
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("scenario_set_camera_attributes");
        this._bindings.method_scenario_set_camera_attributes = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          395945892
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("scenario_set_compositor");
        this._bindings.method_scenario_set_compositor = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          395945892
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("instance_create2");
        this._bindings.method_instance_create2 = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          746547085
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("instance_create");
        this._bindings.method_instance_create = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          529393457
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("instance_set_base");
        this._bindings.method_instance_set_base = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          395945892
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("instance_set_scenario");
        this._bindings.method_instance_set_scenario = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          395945892
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("instance_set_layer_mask");
        this._bindings.method_instance_set_layer_mask = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3411492887
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("instance_set_pivot_data");
        this._bindings.method_instance_set_pivot_data = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1280615259
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("instance_set_transform");
        this._bindings.method_instance_set_transform = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3935195649
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("instance_attach_object_instance_id");
        this._bindings.method_instance_attach_object_instance_id = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3411492887
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("instance_set_blend_shape_weight");
        this._bindings.method_instance_set_blend_shape_weight = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1892459533
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("instance_set_surface_override_material");
        this._bindings.method_instance_set_surface_override_material = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2310537182
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("instance_set_visible");
        this._bindings.method_instance_set_visible = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1265174801
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("instance_geometry_set_transparency");
        this._bindings.method_instance_geometry_set_transparency = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1794382983
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("instance_set_custom_aabb");
        this._bindings.method_instance_set_custom_aabb = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3696536120
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("instance_attach_skeleton");
        this._bindings.method_instance_attach_skeleton = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          395945892
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("instance_set_extra_visibility_margin");
        this._bindings.method_instance_set_extra_visibility_margin = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1794382983
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("instance_set_visibility_parent");
        this._bindings.method_instance_set_visibility_parent = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          395945892
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("instance_set_ignore_culling");
        this._bindings.method_instance_set_ignore_culling = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1265174801
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("instance_geometry_set_flag");
        this._bindings.method_instance_geometry_set_flag = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1014989537
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("instance_geometry_set_cast_shadows_setting");
        this._bindings.method_instance_geometry_set_cast_shadows_setting = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3768836020
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("instance_geometry_set_material_override");
        this._bindings.method_instance_geometry_set_material_override = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          395945892
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("instance_geometry_set_material_overlay");
        this._bindings.method_instance_geometry_set_material_overlay = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          395945892
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("instance_geometry_set_visibility_range");
        this._bindings.method_instance_geometry_set_visibility_range = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          4263925858
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("instance_geometry_set_lightmap");
        this._bindings.method_instance_geometry_set_lightmap = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          536974962
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("instance_geometry_set_lod_bias");
        this._bindings.method_instance_geometry_set_lod_bias = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1794382983
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("instance_geometry_set_shader_parameter");
        this._bindings.method_instance_geometry_set_shader_parameter = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3477296213
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("instance_geometry_get_shader_parameter");
        this._bindings.method_instance_geometry_get_shader_parameter = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2621281810
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("instance_geometry_get_shader_parameter_default_value");
        this._bindings.method_instance_geometry_get_shader_parameter_default_value = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2621281810
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("instance_geometry_get_shader_parameter_list");
        this._bindings.method_instance_geometry_get_shader_parameter_list = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2684255073
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("instances_cull_aabb");
        this._bindings.method_instances_cull_aabb = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2570105777
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("instances_cull_ray");
        this._bindings.method_instances_cull_ray = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2208759584
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("instances_cull_convex");
        this._bindings.method_instances_cull_convex = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2488539944
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("bake_render_uv2");
        this._bindings.method_bake_render_uv2 = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1904608558
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("canvas_create");
        this._bindings.method_canvas_create = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          529393457
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("canvas_set_item_mirroring");
        this._bindings.method_canvas_set_item_mirroring = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2343975398
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("canvas_set_item_repeat");
        this._bindings.method_canvas_set_item_repeat = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1739512717
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("canvas_set_modulate");
        this._bindings.method_canvas_set_modulate = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2948539648
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("canvas_set_disable_scale");
        this._bindings.method_canvas_set_disable_scale = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("canvas_texture_create");
        this._bindings.method_canvas_texture_create = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          529393457
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("canvas_texture_set_channel");
        this._bindings.method_canvas_texture_set_channel = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3822119138
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("canvas_texture_set_shading_parameters");
        this._bindings.method_canvas_texture_set_shading_parameters = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2124967469
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("canvas_texture_set_texture_filter");
        this._bindings.method_canvas_texture_set_texture_filter = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1155129294
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("canvas_texture_set_texture_repeat");
        this._bindings.method_canvas_texture_set_texture_repeat = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1652956681
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("canvas_item_create");
        this._bindings.method_canvas_item_create = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          529393457
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("canvas_item_set_parent");
        this._bindings.method_canvas_item_set_parent = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          395945892
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("canvas_item_set_default_texture_filter");
        this._bindings.method_canvas_item_set_default_texture_filter = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1155129294
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("canvas_item_set_default_texture_repeat");
        this._bindings.method_canvas_item_set_default_texture_repeat = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1652956681
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("canvas_item_set_visible");
        this._bindings.method_canvas_item_set_visible = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1265174801
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("canvas_item_set_light_mask");
        this._bindings.method_canvas_item_set_light_mask = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3411492887
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("canvas_item_set_visibility_layer");
        this._bindings.method_canvas_item_set_visibility_layer = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3411492887
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("canvas_item_set_transform");
        this._bindings.method_canvas_item_set_transform = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1246044741
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("canvas_item_set_clip");
        this._bindings.method_canvas_item_set_clip = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1265174801
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("canvas_item_set_distance_field_mode");
        this._bindings.method_canvas_item_set_distance_field_mode = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1265174801
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("canvas_item_set_custom_rect");
        this._bindings.method_canvas_item_set_custom_rect = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1333997032
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("canvas_item_set_modulate");
        this._bindings.method_canvas_item_set_modulate = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2948539648
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("canvas_item_set_self_modulate");
        this._bindings.method_canvas_item_set_self_modulate = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2948539648
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("canvas_item_set_draw_behind_parent");
        this._bindings.method_canvas_item_set_draw_behind_parent = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1265174801
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("canvas_item_set_interpolated");
        this._bindings.method_canvas_item_set_interpolated = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1265174801
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("canvas_item_reset_physics_interpolation");
        this._bindings.method_canvas_item_reset_physics_interpolation = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2722037293
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("canvas_item_transform_physics_interpolation");
        this._bindings.method_canvas_item_transform_physics_interpolation = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1246044741
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("canvas_item_add_line");
        this._bindings.method_canvas_item_add_line = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1819681853
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("canvas_item_add_polyline");
        this._bindings.method_canvas_item_add_polyline = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3098767073
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("canvas_item_add_multiline");
        this._bindings.method_canvas_item_add_multiline = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3098767073
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("canvas_item_add_rect");
        this._bindings.method_canvas_item_add_rect = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3523446176
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("canvas_item_add_circle");
        this._bindings.method_canvas_item_add_circle = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          333077949
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("canvas_item_add_texture_rect");
        this._bindings.method_canvas_item_add_texture_rect = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          324864032
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("canvas_item_add_msdf_texture_rect_region");
        this._bindings.method_canvas_item_add_msdf_texture_rect_region = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          97408773
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("canvas_item_add_lcd_texture_rect_region");
        this._bindings.method_canvas_item_add_lcd_texture_rect_region = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          359793297
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("canvas_item_add_texture_rect_region");
        this._bindings.method_canvas_item_add_texture_rect_region = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          485157892
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("canvas_item_add_nine_patch");
        this._bindings.method_canvas_item_add_nine_patch = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          389957886
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("canvas_item_add_primitive");
        this._bindings.method_canvas_item_add_primitive = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3731601077
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("canvas_item_add_polygon");
        this._bindings.method_canvas_item_add_polygon = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3580000528
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("canvas_item_add_triangle_array");
        this._bindings.method_canvas_item_add_triangle_array = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          660261329
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("canvas_item_add_mesh");
        this._bindings.method_canvas_item_add_mesh = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          316450961
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("canvas_item_add_multimesh");
        this._bindings.method_canvas_item_add_multimesh = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2131855138
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("canvas_item_add_particles");
        this._bindings.method_canvas_item_add_particles = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2575754278
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("canvas_item_add_set_transform");
        this._bindings.method_canvas_item_add_set_transform = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1246044741
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("canvas_item_add_clip_ignore");
        this._bindings.method_canvas_item_add_clip_ignore = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1265174801
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("canvas_item_add_animation_slice");
        this._bindings.method_canvas_item_add_animation_slice = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2646834499
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("canvas_item_set_sort_children_by_y");
        this._bindings.method_canvas_item_set_sort_children_by_y = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1265174801
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("canvas_item_set_z_index");
        this._bindings.method_canvas_item_set_z_index = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3411492887
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("canvas_item_set_z_as_relative_to_parent");
        this._bindings.method_canvas_item_set_z_as_relative_to_parent = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1265174801
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("canvas_item_set_copy_to_backbuffer");
        this._bindings.method_canvas_item_set_copy_to_backbuffer = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2429202503
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("canvas_item_clear");
        this._bindings.method_canvas_item_clear = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2722037293
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("canvas_item_set_draw_index");
        this._bindings.method_canvas_item_set_draw_index = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3411492887
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("canvas_item_set_material");
        this._bindings.method_canvas_item_set_material = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          395945892
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("canvas_item_set_use_parent_material");
        this._bindings.method_canvas_item_set_use_parent_material = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1265174801
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("canvas_item_set_visibility_notifier");
        this._bindings.method_canvas_item_set_visibility_notifier = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3568945579
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("canvas_item_set_canvas_group_mode");
        this._bindings.method_canvas_item_set_canvas_group_mode = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3973586316
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("debug_canvas_item_get_rect");
        this._bindings.method_debug_canvas_item_get_rect = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          624227424
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("canvas_light_create");
        this._bindings.method_canvas_light_create = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          529393457
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("canvas_light_attach_to_canvas");
        this._bindings.method_canvas_light_attach_to_canvas = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          395945892
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("canvas_light_set_enabled");
        this._bindings.method_canvas_light_set_enabled = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1265174801
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("canvas_light_set_texture_scale");
        this._bindings.method_canvas_light_set_texture_scale = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1794382983
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("canvas_light_set_transform");
        this._bindings.method_canvas_light_set_transform = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1246044741
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("canvas_light_set_texture");
        this._bindings.method_canvas_light_set_texture = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          395945892
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("canvas_light_set_texture_offset");
        this._bindings.method_canvas_light_set_texture_offset = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3201125042
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("canvas_light_set_color");
        this._bindings.method_canvas_light_set_color = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2948539648
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("canvas_light_set_height");
        this._bindings.method_canvas_light_set_height = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1794382983
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("canvas_light_set_energy");
        this._bindings.method_canvas_light_set_energy = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1794382983
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("canvas_light_set_z_range");
        this._bindings.method_canvas_light_set_z_range = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          4288446313
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("canvas_light_set_layer_range");
        this._bindings.method_canvas_light_set_layer_range = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          4288446313
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("canvas_light_set_item_cull_mask");
        this._bindings.method_canvas_light_set_item_cull_mask = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3411492887
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("canvas_light_set_item_shadow_cull_mask");
        this._bindings.method_canvas_light_set_item_shadow_cull_mask = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3411492887
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("canvas_light_set_mode");
        this._bindings.method_canvas_light_set_mode = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2957564891
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("canvas_light_set_shadow_enabled");
        this._bindings.method_canvas_light_set_shadow_enabled = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1265174801
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("canvas_light_set_shadow_filter");
        this._bindings.method_canvas_light_set_shadow_filter = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          393119659
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("canvas_light_set_shadow_color");
        this._bindings.method_canvas_light_set_shadow_color = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2948539648
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("canvas_light_set_shadow_smooth");
        this._bindings.method_canvas_light_set_shadow_smooth = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1794382983
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("canvas_light_set_blend_mode");
        this._bindings.method_canvas_light_set_blend_mode = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          804895945
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("canvas_light_set_interpolated");
        this._bindings.method_canvas_light_set_interpolated = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1265174801
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("canvas_light_reset_physics_interpolation");
        this._bindings.method_canvas_light_reset_physics_interpolation = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2722037293
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("canvas_light_transform_physics_interpolation");
        this._bindings.method_canvas_light_transform_physics_interpolation = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1246044741
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("canvas_light_occluder_create");
        this._bindings.method_canvas_light_occluder_create = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          529393457
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("canvas_light_occluder_attach_to_canvas");
        this._bindings.method_canvas_light_occluder_attach_to_canvas = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          395945892
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("canvas_light_occluder_set_enabled");
        this._bindings.method_canvas_light_occluder_set_enabled = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1265174801
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("canvas_light_occluder_set_polygon");
        this._bindings.method_canvas_light_occluder_set_polygon = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          395945892
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("canvas_light_occluder_set_as_sdf_collision");
        this._bindings.method_canvas_light_occluder_set_as_sdf_collision = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1265174801
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("canvas_light_occluder_set_transform");
        this._bindings.method_canvas_light_occluder_set_transform = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1246044741
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("canvas_light_occluder_set_light_mask");
        this._bindings.method_canvas_light_occluder_set_light_mask = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3411492887
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("canvas_light_occluder_set_interpolated");
        this._bindings.method_canvas_light_occluder_set_interpolated = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1265174801
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("canvas_light_occluder_reset_physics_interpolation");
        this._bindings.method_canvas_light_occluder_reset_physics_interpolation = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2722037293
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("canvas_light_occluder_transform_physics_interpolation");
        this._bindings.method_canvas_light_occluder_transform_physics_interpolation = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1246044741
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("canvas_occluder_polygon_create");
        this._bindings.method_canvas_occluder_polygon_create = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          529393457
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("canvas_occluder_polygon_set_shape");
        this._bindings.method_canvas_occluder_polygon_set_shape = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2103882027
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("canvas_occluder_polygon_set_cull_mode");
        this._bindings.method_canvas_occluder_polygon_set_cull_mode = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1839404663
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("canvas_set_shadow_texture_size");
        this._bindings.method_canvas_set_shadow_texture_size = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1286410249
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("global_shader_parameter_add");
        this._bindings.method_global_shader_parameter_add = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          463390080
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("global_shader_parameter_remove");
        this._bindings.method_global_shader_parameter_remove = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3304788590
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("global_shader_parameter_get_list");
        this._bindings.method_global_shader_parameter_get_list = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3995934104
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("global_shader_parameter_set");
        this._bindings.method_global_shader_parameter_set = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3776071444
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("global_shader_parameter_set_override");
        this._bindings.method_global_shader_parameter_set_override = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3776071444
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("global_shader_parameter_get");
        this._bindings.method_global_shader_parameter_get = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2760726917
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("global_shader_parameter_get_type");
        this._bindings.method_global_shader_parameter_get_type = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1601414142
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("free_rid");
        this._bindings.method_free_rid = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2722037293
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("request_frame_drawn_callback");
        this._bindings.method_request_frame_drawn_callback = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1611583062
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("has_changed");
        this._bindings.method_has_changed = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("get_rendering_info");
        this._bindings.method_get_rendering_info = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3763192241
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("get_video_adapter_name");
        this._bindings.method_get_video_adapter_name = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          201670096
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("get_video_adapter_vendor");
        this._bindings.method_get_video_adapter_vendor = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          201670096
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("get_video_adapter_type");
        this._bindings.method_get_video_adapter_type = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3099547011
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("get_video_adapter_api_version");
        this._bindings.method_get_video_adapter_api_version = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          201670096
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("make_sphere_mesh");
        this._bindings.method_make_sphere_mesh = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2251015897
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("get_test_cube");
        this._bindings.method_get_test_cube = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          529393457
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("get_test_texture");
        this._bindings.method_get_test_texture = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          529393457
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("get_white_texture");
        this._bindings.method_get_white_texture = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          529393457
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("set_boot_image");
        this._bindings.method_set_boot_image = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3759744527
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("get_default_clear_color");
        this._bindings.method_get_default_clear_color = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3200896285
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("set_default_clear_color");
        this._bindings.method_set_default_clear_color = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2920490490
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("has_os_feature");
        this._bindings.method_has_os_feature = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3927539163
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("set_debug_generate_wireframes");
        this._bindings.method_set_debug_generate_wireframes = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("is_render_loop_enabled");
        this._bindings.method_is_render_loop_enabled = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("set_render_loop_enabled");
        this._bindings.method_set_render_loop_enabled = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("get_frame_setup_time_cpu");
        this._bindings.method_get_frame_setup_time_cpu = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1740695150
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("force_sync");
        this._bindings.method_force_sync = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3218959716
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("force_draw");
        this._bindings.method_force_draw = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1076185472
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("get_rendering_device");
        this._bindings.method_get_rendering_device = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1405107940
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("create_local_rendering_device");
        this._bindings.method_create_local_rendering_device = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1405107940
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("is_on_render_thread");
        this._bindings.method_is_on_render_thread = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2240911060
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("call_on_render_thread");
        this._bindings.method_call_on_render_thread = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1611583062
        );
      }
      {
        let classname = new StringName("RenderingServer");
        let methodname = new StringName("has_feature");
        this._bindings.method_has_feature = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          598462696
        );
      }
  }
  texture_2d_create(_image) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_texture_2d_create,
      this._owner,
			Variant.Type.RID
    ,
      _image
    );
    
  }
  texture_2d_layered_create(_layers, _layered_type) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_texture_2d_layered_create,
      this._owner,
			Variant.Type.RID
    ,
      _layers, _layered_type
    );
    
  }
  texture_3d_create(_format, _width, _height, _depth, _mipmaps, _data) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_texture_3d_create,
      this._owner,
			Variant.Type.RID
    ,
      _format, _width, _height, _depth, _mipmaps, _data
    );
    
  }
  texture_proxy_create(_base) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_texture_proxy_create,
      this._owner,
			Variant.Type.RID
    ,
      _base
    );
    
  }
  texture_2d_update(_texture, _image, _layer) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_texture_2d_update,
      this._owner,
      _texture, _image, _layer
    );
    
  }
  texture_3d_update(_texture, _data) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_texture_3d_update,
      this._owner,
      _texture, _data
    );
    
  }
  texture_proxy_update(_texture, _proxy_to) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_texture_proxy_update,
      this._owner,
      _texture, _proxy_to
    );
    
  }
  texture_2d_placeholder_create() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_texture_2d_placeholder_create,
      this._owner,
			Variant.Type.RID
    ,
      
    );
    
  }
  texture_2d_layered_placeholder_create(_layered_type) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_texture_2d_layered_placeholder_create,
      this._owner,
			Variant.Type.RID
    ,
      _layered_type
    );
    
  }
  texture_3d_placeholder_create() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_texture_3d_placeholder_create,
      this._owner,
			Variant.Type.RID
    ,
      
    );
    
  }
  texture_2d_get(_texture) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_texture_2d_get,
      this._owner,
			Variant.INT,
      _texture
    );
    
  }
  texture_2d_layer_get(_texture, _layer) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_texture_2d_layer_get,
      this._owner,
			Variant.INT,
      _texture, _layer
    );
    
  }
  texture_3d_get(_texture) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_texture_3d_get,
      this._owner,
			Variant.INT,
      _texture
    );
    
  }
  texture_replace(_texture, _by_texture) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_texture_replace,
      this._owner,
      _texture, _by_texture
    );
    
  }
  texture_set_size_override(_texture, _width, _height) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_texture_set_size_override,
      this._owner,
      _texture, _width, _height
    );
    
  }
  texture_set_path(_texture, _path) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_texture_set_path,
      this._owner,
      _texture, _path
    );
    
  }
  texture_get_path(_texture) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_texture_get_path,
      this._owner,
			Variant.Type.STRING
    ,
      _texture
    );
    
  }
  texture_get_format(_texture) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_texture_get_format,
      this._owner,
			Variant.INT,
      _texture
    );
    
  }
  texture_set_force_redraw_if_visible(_texture, _enable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_texture_set_force_redraw_if_visible,
      this._owner,
      _texture, _enable
    );
    
  }
  texture_rd_create(_rd_texture, _layer_type) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_texture_rd_create,
      this._owner,
			Variant.Type.RID
    ,
      _rd_texture, _layer_type
    );
    
  }
  texture_get_rd_texture(_texture, _srgb) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_texture_get_rd_texture,
      this._owner,
			Variant.Type.RID
    ,
      _texture, _srgb
    );
    
  }
  texture_get_native_handle(_texture, _srgb) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_texture_get_native_handle,
      this._owner,
			Variant.Type.INT,
      _texture, _srgb
    );
    
  }
  shader_create() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_shader_create,
      this._owner,
			Variant.Type.RID
    ,
      
    );
    
  }
  shader_set_code(_shader, _code) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_shader_set_code,
      this._owner,
      _shader, _code
    );
    
  }
  shader_set_path_hint(_shader, _path) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_shader_set_path_hint,
      this._owner,
      _shader, _path
    );
    
  }
  shader_get_code(_shader) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_shader_get_code,
      this._owner,
			Variant.Type.STRING
    ,
      _shader
    );
    
  }
  get_shader_parameter_list(_shader) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_shader_parameter_list,
      this._owner,
			Variant.INT,
      _shader
    );
    
  }
  shader_get_parameter_default(_shader, _name) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_shader_get_parameter_default,
      this._owner,
			Variant.Type.VARIANT
    ,
      _shader, _name
    );
    
  }
  shader_set_default_texture_parameter(_shader, _name, _texture, _index) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_shader_set_default_texture_parameter,
      this._owner,
      _shader, _name, _texture, _index
    );
    
  }
  shader_get_default_texture_parameter(_shader, _name, _index) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_shader_get_default_texture_parameter,
      this._owner,
			Variant.Type.RID
    ,
      _shader, _name, _index
    );
    
  }
  material_create() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_material_create,
      this._owner,
			Variant.Type.RID
    ,
      
    );
    
  }
  material_set_shader(_shader_material, _shader) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_material_set_shader,
      this._owner,
      _shader_material, _shader
    );
    
  }
  material_set_param(_material, _parameter, _value) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_material_set_param,
      this._owner,
      _material, _parameter, _value
    );
    
  }
  material_get_param(_material, _parameter) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_material_get_param,
      this._owner,
			Variant.Type.VARIANT
    ,
      _material, _parameter
    );
    
  }
  material_set_render_priority(_material, _priority) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_material_set_render_priority,
      this._owner,
      _material, _priority
    );
    
  }
  material_set_next_pass(_material, _next_material) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_material_set_next_pass,
      this._owner,
      _material, _next_material
    );
    
  }
  mesh_create_from_surfaces(_surfaces, _blend_shape_count) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_mesh_create_from_surfaces,
      this._owner,
			Variant.Type.RID
    ,
      _surfaces, _blend_shape_count
    );
    
  }
  mesh_create() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_mesh_create,
      this._owner,
			Variant.Type.RID
    ,
      
    );
    
  }
  mesh_surface_get_format_offset(_format, _vertex_count, _array_index) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_mesh_surface_get_format_offset,
      this._owner,
			Variant.Type.INT,
      _format, _vertex_count, _array_index
    );
    
  }
  mesh_surface_get_format_vertex_stride(_format, _vertex_count) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_mesh_surface_get_format_vertex_stride,
      this._owner,
			Variant.Type.INT,
      _format, _vertex_count
    );
    
  }
  mesh_surface_get_format_normal_tangent_stride(_format, _vertex_count) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_mesh_surface_get_format_normal_tangent_stride,
      this._owner,
			Variant.Type.INT,
      _format, _vertex_count
    );
    
  }
  mesh_surface_get_format_attribute_stride(_format, _vertex_count) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_mesh_surface_get_format_attribute_stride,
      this._owner,
			Variant.Type.INT,
      _format, _vertex_count
    );
    
  }
  mesh_surface_get_format_skin_stride(_format, _vertex_count) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_mesh_surface_get_format_skin_stride,
      this._owner,
			Variant.Type.INT,
      _format, _vertex_count
    );
    
  }
  mesh_add_surface(_mesh, _surface) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_mesh_add_surface,
      this._owner,
      _mesh, _surface
    );
    
  }
  mesh_add_surface_from_arrays(_mesh, _primitive, _arrays, _blend_shapes, _lods, _compress_format) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_mesh_add_surface_from_arrays,
      this._owner,
      _mesh, _primitive, _arrays, _blend_shapes, _lods, _compress_format
    );
    
  }
  mesh_get_blend_shape_count(_mesh) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_mesh_get_blend_shape_count,
      this._owner,
			Variant.Type.INT,
      _mesh
    );
    
  }
  mesh_set_blend_shape_mode(_mesh, _mode) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_mesh_set_blend_shape_mode,
      this._owner,
      _mesh, _mode
    );
    
  }
  mesh_get_blend_shape_mode(_mesh) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_mesh_get_blend_shape_mode,
      this._owner,
			Variant.INT,
      _mesh
    );
    
  }
  mesh_surface_set_material(_mesh, _surface, _material) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_mesh_surface_set_material,
      this._owner,
      _mesh, _surface, _material
    );
    
  }
  mesh_surface_get_material(_mesh, _surface) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_mesh_surface_get_material,
      this._owner,
			Variant.Type.RID
    ,
      _mesh, _surface
    );
    
  }
  mesh_get_surface(_mesh, _surface) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_mesh_get_surface,
      this._owner,
			Variant.Type.DICTIONARY
    ,
      _mesh, _surface
    );
    
  }
  mesh_surface_get_arrays(_mesh, _surface) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_mesh_surface_get_arrays,
      this._owner,
			Variant.Type.ARRAY
    ,
      _mesh, _surface
    );
    
  }
  mesh_surface_get_blend_shape_arrays(_mesh, _surface) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_mesh_surface_get_blend_shape_arrays,
      this._owner,
			Variant.INT,
      _mesh, _surface
    );
    
  }
  mesh_get_surface_count(_mesh) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_mesh_get_surface_count,
      this._owner,
			Variant.Type.INT,
      _mesh
    );
    
  }
  mesh_set_custom_aabb(_mesh, _aabb) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_mesh_set_custom_aabb,
      this._owner,
      _mesh, _aabb
    );
    
  }
  mesh_get_custom_aabb(_mesh) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_mesh_get_custom_aabb,
      this._owner,
			Variant.Type.AABB
    ,
      _mesh
    );
    
  }
  mesh_clear(_mesh) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_mesh_clear,
      this._owner,
      _mesh
    );
    
  }
  mesh_surface_update_vertex_region(_mesh, _surface, _offset, _data) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_mesh_surface_update_vertex_region,
      this._owner,
      _mesh, _surface, _offset, _data
    );
    
  }
  mesh_surface_update_attribute_region(_mesh, _surface, _offset, _data) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_mesh_surface_update_attribute_region,
      this._owner,
      _mesh, _surface, _offset, _data
    );
    
  }
  mesh_surface_update_skin_region(_mesh, _surface, _offset, _data) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_mesh_surface_update_skin_region,
      this._owner,
      _mesh, _surface, _offset, _data
    );
    
  }
  mesh_set_shadow_mesh(_mesh, _shadow_mesh) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_mesh_set_shadow_mesh,
      this._owner,
      _mesh, _shadow_mesh
    );
    
  }
  multimesh_create() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_multimesh_create,
      this._owner,
			Variant.Type.RID
    ,
      
    );
    
  }
  multimesh_allocate_data(_multimesh, _instances, _transform_format, _color_format, _custom_data_format) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_multimesh_allocate_data,
      this._owner,
      _multimesh, _instances, _transform_format, _color_format, _custom_data_format
    );
    
  }
  multimesh_get_instance_count(_multimesh) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_multimesh_get_instance_count,
      this._owner,
			Variant.Type.INT,
      _multimesh
    );
    
  }
  multimesh_set_mesh(_multimesh, _mesh) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_multimesh_set_mesh,
      this._owner,
      _multimesh, _mesh
    );
    
  }
  multimesh_instance_set_transform(_multimesh, _index, _transform) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_multimesh_instance_set_transform,
      this._owner,
      _multimesh, _index, _transform
    );
    
  }
  multimesh_instance_set_transform_2d(_multimesh, _index, _transform) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_multimesh_instance_set_transform_2d,
      this._owner,
      _multimesh, _index, _transform
    );
    
  }
  multimesh_instance_set_color(_multimesh, _index, _color) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_multimesh_instance_set_color,
      this._owner,
      _multimesh, _index, _color
    );
    
  }
  multimesh_instance_set_custom_data(_multimesh, _index, _custom_data) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_multimesh_instance_set_custom_data,
      this._owner,
      _multimesh, _index, _custom_data
    );
    
  }
  multimesh_get_mesh(_multimesh) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_multimesh_get_mesh,
      this._owner,
			Variant.Type.RID
    ,
      _multimesh
    );
    
  }
  multimesh_get_aabb(_multimesh) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_multimesh_get_aabb,
      this._owner,
			Variant.Type.AABB
    ,
      _multimesh
    );
    
  }
  multimesh_set_custom_aabb(_multimesh, _aabb) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_multimesh_set_custom_aabb,
      this._owner,
      _multimesh, _aabb
    );
    
  }
  multimesh_get_custom_aabb(_multimesh) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_multimesh_get_custom_aabb,
      this._owner,
			Variant.Type.AABB
    ,
      _multimesh
    );
    
  }
  multimesh_instance_get_transform(_multimesh, _index) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_multimesh_instance_get_transform,
      this._owner,
			Variant.Type.TRANSFORM3D
    ,
      _multimesh, _index
    );
    
  }
  multimesh_instance_get_transform_2d(_multimesh, _index) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_multimesh_instance_get_transform_2d,
      this._owner,
			Variant.Type.TRANSFORM2D
    ,
      _multimesh, _index
    );
    
  }
  multimesh_instance_get_color(_multimesh, _index) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_multimesh_instance_get_color,
      this._owner,
			Variant.Type.COLOR
    ,
      _multimesh, _index
    );
    
  }
  multimesh_instance_get_custom_data(_multimesh, _index) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_multimesh_instance_get_custom_data,
      this._owner,
			Variant.Type.COLOR
    ,
      _multimesh, _index
    );
    
  }
  multimesh_set_visible_instances(_multimesh, _visible) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_multimesh_set_visible_instances,
      this._owner,
      _multimesh, _visible
    );
    
  }
  multimesh_get_visible_instances(_multimesh) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_multimesh_get_visible_instances,
      this._owner,
			Variant.Type.INT,
      _multimesh
    );
    
  }
  multimesh_set_buffer(_multimesh, _buffer) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_multimesh_set_buffer,
      this._owner,
      _multimesh, _buffer
    );
    
  }
  multimesh_get_buffer(_multimesh) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_multimesh_get_buffer,
      this._owner,
			Variant.Type.PACKED_FLOAT32_ARRAY
    ,
      _multimesh
    );
    
  }
  skeleton_create() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_skeleton_create,
      this._owner,
			Variant.Type.RID
    ,
      
    );
    
  }
  skeleton_allocate_data(_skeleton, _bones, _is_2d_skeleton) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_skeleton_allocate_data,
      this._owner,
      _skeleton, _bones, _is_2d_skeleton
    );
    
  }
  skeleton_get_bone_count(_skeleton) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_skeleton_get_bone_count,
      this._owner,
			Variant.Type.INT,
      _skeleton
    );
    
  }
  skeleton_bone_set_transform(_skeleton, _bone, _transform) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_skeleton_bone_set_transform,
      this._owner,
      _skeleton, _bone, _transform
    );
    
  }
  skeleton_bone_get_transform(_skeleton, _bone) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_skeleton_bone_get_transform,
      this._owner,
			Variant.Type.TRANSFORM3D
    ,
      _skeleton, _bone
    );
    
  }
  skeleton_bone_set_transform_2d(_skeleton, _bone, _transform) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_skeleton_bone_set_transform_2d,
      this._owner,
      _skeleton, _bone, _transform
    );
    
  }
  skeleton_bone_get_transform_2d(_skeleton, _bone) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_skeleton_bone_get_transform_2d,
      this._owner,
			Variant.Type.TRANSFORM2D
    ,
      _skeleton, _bone
    );
    
  }
  skeleton_set_base_transform_2d(_skeleton, _base_transform) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_skeleton_set_base_transform_2d,
      this._owner,
      _skeleton, _base_transform
    );
    
  }
  directional_light_create() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_directional_light_create,
      this._owner,
			Variant.Type.RID
    ,
      
    );
    
  }
  omni_light_create() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_omni_light_create,
      this._owner,
			Variant.Type.RID
    ,
      
    );
    
  }
  spot_light_create() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_spot_light_create,
      this._owner,
			Variant.Type.RID
    ,
      
    );
    
  }
  light_set_color(_light, _color) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_light_set_color,
      this._owner,
      _light, _color
    );
    
  }
  light_set_param(_light, _param, _value) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_light_set_param,
      this._owner,
      _light, _param, _value
    );
    
  }
  light_set_shadow(_light, _enabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_light_set_shadow,
      this._owner,
      _light, _enabled
    );
    
  }
  light_set_projector(_light, _texture) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_light_set_projector,
      this._owner,
      _light, _texture
    );
    
  }
  light_set_negative(_light, _enable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_light_set_negative,
      this._owner,
      _light, _enable
    );
    
  }
  light_set_cull_mask(_light, _mask) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_light_set_cull_mask,
      this._owner,
      _light, _mask
    );
    
  }
  light_set_distance_fade(_decal, _enabled, _begin, _shadow, _length) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_light_set_distance_fade,
      this._owner,
      _decal, _enabled, _begin, _shadow, _length
    );
    
  }
  light_set_reverse_cull_face_mode(_light, _enabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_light_set_reverse_cull_face_mode,
      this._owner,
      _light, _enabled
    );
    
  }
  light_set_bake_mode(_light, _bake_mode) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_light_set_bake_mode,
      this._owner,
      _light, _bake_mode
    );
    
  }
  light_set_max_sdfgi_cascade(_light, _cascade) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_light_set_max_sdfgi_cascade,
      this._owner,
      _light, _cascade
    );
    
  }
  light_omni_set_shadow_mode(_light, _mode) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_light_omni_set_shadow_mode,
      this._owner,
      _light, _mode
    );
    
  }
  light_directional_set_shadow_mode(_light, _mode) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_light_directional_set_shadow_mode,
      this._owner,
      _light, _mode
    );
    
  }
  light_directional_set_blend_splits(_light, _enable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_light_directional_set_blend_splits,
      this._owner,
      _light, _enable
    );
    
  }
  light_directional_set_sky_mode(_light, _mode) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_light_directional_set_sky_mode,
      this._owner,
      _light, _mode
    );
    
  }
  light_projectors_set_filter(_filter) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_light_projectors_set_filter,
      this._owner,
      _filter
    );
    
  }
  positional_soft_shadow_filter_set_quality(_quality) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_positional_soft_shadow_filter_set_quality,
      this._owner,
      _quality
    );
    
  }
  directional_soft_shadow_filter_set_quality(_quality) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_directional_soft_shadow_filter_set_quality,
      this._owner,
      _quality
    );
    
  }
  directional_shadow_atlas_set_size(_size, _is_16bits) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_directional_shadow_atlas_set_size,
      this._owner,
      _size, _is_16bits
    );
    
  }
  reflection_probe_create() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_reflection_probe_create,
      this._owner,
			Variant.Type.RID
    ,
      
    );
    
  }
  reflection_probe_set_update_mode(_probe, _mode) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_reflection_probe_set_update_mode,
      this._owner,
      _probe, _mode
    );
    
  }
  reflection_probe_set_intensity(_probe, _intensity) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_reflection_probe_set_intensity,
      this._owner,
      _probe, _intensity
    );
    
  }
  reflection_probe_set_ambient_mode(_probe, _mode) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_reflection_probe_set_ambient_mode,
      this._owner,
      _probe, _mode
    );
    
  }
  reflection_probe_set_ambient_color(_probe, _color) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_reflection_probe_set_ambient_color,
      this._owner,
      _probe, _color
    );
    
  }
  reflection_probe_set_ambient_energy(_probe, _energy) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_reflection_probe_set_ambient_energy,
      this._owner,
      _probe, _energy
    );
    
  }
  reflection_probe_set_max_distance(_probe, _distance) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_reflection_probe_set_max_distance,
      this._owner,
      _probe, _distance
    );
    
  }
  reflection_probe_set_size(_probe, _size) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_reflection_probe_set_size,
      this._owner,
      _probe, _size
    );
    
  }
  reflection_probe_set_origin_offset(_probe, _offset) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_reflection_probe_set_origin_offset,
      this._owner,
      _probe, _offset
    );
    
  }
  reflection_probe_set_as_interior(_probe, _enable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_reflection_probe_set_as_interior,
      this._owner,
      _probe, _enable
    );
    
  }
  reflection_probe_set_enable_box_projection(_probe, _enable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_reflection_probe_set_enable_box_projection,
      this._owner,
      _probe, _enable
    );
    
  }
  reflection_probe_set_enable_shadows(_probe, _enable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_reflection_probe_set_enable_shadows,
      this._owner,
      _probe, _enable
    );
    
  }
  reflection_probe_set_cull_mask(_probe, _layers) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_reflection_probe_set_cull_mask,
      this._owner,
      _probe, _layers
    );
    
  }
  reflection_probe_set_reflection_mask(_probe, _layers) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_reflection_probe_set_reflection_mask,
      this._owner,
      _probe, _layers
    );
    
  }
  reflection_probe_set_resolution(_probe, _resolution) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_reflection_probe_set_resolution,
      this._owner,
      _probe, _resolution
    );
    
  }
  reflection_probe_set_mesh_lod_threshold(_probe, _pixels) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_reflection_probe_set_mesh_lod_threshold,
      this._owner,
      _probe, _pixels
    );
    
  }
  decal_create() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_decal_create,
      this._owner,
			Variant.Type.RID
    ,
      
    );
    
  }
  decal_set_size(_decal, _size) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_decal_set_size,
      this._owner,
      _decal, _size
    );
    
  }
  decal_set_texture(_decal, _type, _texture) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_decal_set_texture,
      this._owner,
      _decal, _type, _texture
    );
    
  }
  decal_set_emission_energy(_decal, _energy) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_decal_set_emission_energy,
      this._owner,
      _decal, _energy
    );
    
  }
  decal_set_albedo_mix(_decal, _albedo_mix) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_decal_set_albedo_mix,
      this._owner,
      _decal, _albedo_mix
    );
    
  }
  decal_set_modulate(_decal, _color) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_decal_set_modulate,
      this._owner,
      _decal, _color
    );
    
  }
  decal_set_cull_mask(_decal, _mask) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_decal_set_cull_mask,
      this._owner,
      _decal, _mask
    );
    
  }
  decal_set_distance_fade(_decal, _enabled, _begin, _length) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_decal_set_distance_fade,
      this._owner,
      _decal, _enabled, _begin, _length
    );
    
  }
  decal_set_fade(_decal, _above, _below) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_decal_set_fade,
      this._owner,
      _decal, _above, _below
    );
    
  }
  decal_set_normal_fade(_decal, _fade) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_decal_set_normal_fade,
      this._owner,
      _decal, _fade
    );
    
  }
  decals_set_filter(_filter) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_decals_set_filter,
      this._owner,
      _filter
    );
    
  }
  gi_set_use_half_resolution(_half_resolution) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_gi_set_use_half_resolution,
      this._owner,
      _half_resolution
    );
    
  }
  voxel_gi_create() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_voxel_gi_create,
      this._owner,
			Variant.Type.RID
    ,
      
    );
    
  }
  voxel_gi_allocate_data(_voxel_gi, _to_cell_xform, _aabb, _octree_size, _octree_cells, _data_cells, _distance_field, _level_counts) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_voxel_gi_allocate_data,
      this._owner,
      _voxel_gi, _to_cell_xform, _aabb, _octree_size, _octree_cells, _data_cells, _distance_field, _level_counts
    );
    
  }
  voxel_gi_get_octree_size(_voxel_gi) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_voxel_gi_get_octree_size,
      this._owner,
			Variant.Type.VECTOR3I
    ,
      _voxel_gi
    );
    
  }
  voxel_gi_get_octree_cells(_voxel_gi) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_voxel_gi_get_octree_cells,
      this._owner,
			Variant.Type.PACKED_BYTE_ARRAY
    ,
      _voxel_gi
    );
    
  }
  voxel_gi_get_data_cells(_voxel_gi) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_voxel_gi_get_data_cells,
      this._owner,
			Variant.Type.PACKED_BYTE_ARRAY
    ,
      _voxel_gi
    );
    
  }
  voxel_gi_get_distance_field(_voxel_gi) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_voxel_gi_get_distance_field,
      this._owner,
			Variant.Type.PACKED_BYTE_ARRAY
    ,
      _voxel_gi
    );
    
  }
  voxel_gi_get_level_counts(_voxel_gi) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_voxel_gi_get_level_counts,
      this._owner,
			Variant.Type.PACKED_INT32_ARRAY
    ,
      _voxel_gi
    );
    
  }
  voxel_gi_get_to_cell_xform(_voxel_gi) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_voxel_gi_get_to_cell_xform,
      this._owner,
			Variant.Type.TRANSFORM3D
    ,
      _voxel_gi
    );
    
  }
  voxel_gi_set_dynamic_range(_voxel_gi, _range) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_voxel_gi_set_dynamic_range,
      this._owner,
      _voxel_gi, _range
    );
    
  }
  voxel_gi_set_propagation(_voxel_gi, _amount) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_voxel_gi_set_propagation,
      this._owner,
      _voxel_gi, _amount
    );
    
  }
  voxel_gi_set_energy(_voxel_gi, _energy) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_voxel_gi_set_energy,
      this._owner,
      _voxel_gi, _energy
    );
    
  }
  voxel_gi_set_baked_exposure_normalization(_voxel_gi, _baked_exposure) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_voxel_gi_set_baked_exposure_normalization,
      this._owner,
      _voxel_gi, _baked_exposure
    );
    
  }
  voxel_gi_set_bias(_voxel_gi, _bias) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_voxel_gi_set_bias,
      this._owner,
      _voxel_gi, _bias
    );
    
  }
  voxel_gi_set_normal_bias(_voxel_gi, _bias) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_voxel_gi_set_normal_bias,
      this._owner,
      _voxel_gi, _bias
    );
    
  }
  voxel_gi_set_interior(_voxel_gi, _enable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_voxel_gi_set_interior,
      this._owner,
      _voxel_gi, _enable
    );
    
  }
  voxel_gi_set_use_two_bounces(_voxel_gi, _enable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_voxel_gi_set_use_two_bounces,
      this._owner,
      _voxel_gi, _enable
    );
    
  }
  voxel_gi_set_quality(_quality) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_voxel_gi_set_quality,
      this._owner,
      _quality
    );
    
  }
  lightmap_create() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_lightmap_create,
      this._owner,
			Variant.Type.RID
    ,
      
    );
    
  }
  lightmap_set_textures(_lightmap, _light, _uses_sh) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_lightmap_set_textures,
      this._owner,
      _lightmap, _light, _uses_sh
    );
    
  }
  lightmap_set_probe_bounds(_lightmap, _bounds) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_lightmap_set_probe_bounds,
      this._owner,
      _lightmap, _bounds
    );
    
  }
  lightmap_set_probe_interior(_lightmap, _interior) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_lightmap_set_probe_interior,
      this._owner,
      _lightmap, _interior
    );
    
  }
  lightmap_set_probe_capture_data(_lightmap, _points, _point_sh, _tetrahedra, _bsp_tree) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_lightmap_set_probe_capture_data,
      this._owner,
      _lightmap, _points, _point_sh, _tetrahedra, _bsp_tree
    );
    
  }
  lightmap_get_probe_capture_points(_lightmap) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_lightmap_get_probe_capture_points,
      this._owner,
			Variant.Type.PACKED_VECTOR3_ARRAY
    ,
      _lightmap
    );
    
  }
  lightmap_get_probe_capture_sh(_lightmap) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_lightmap_get_probe_capture_sh,
      this._owner,
			Variant.Type.PACKED_COLOR_ARRAY
    ,
      _lightmap
    );
    
  }
  lightmap_get_probe_capture_tetrahedra(_lightmap) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_lightmap_get_probe_capture_tetrahedra,
      this._owner,
			Variant.Type.PACKED_INT32_ARRAY
    ,
      _lightmap
    );
    
  }
  lightmap_get_probe_capture_bsp_tree(_lightmap) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_lightmap_get_probe_capture_bsp_tree,
      this._owner,
			Variant.Type.PACKED_INT32_ARRAY
    ,
      _lightmap
    );
    
  }
  lightmap_set_baked_exposure_normalization(_lightmap, _baked_exposure) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_lightmap_set_baked_exposure_normalization,
      this._owner,
      _lightmap, _baked_exposure
    );
    
  }
  lightmap_set_probe_capture_update_speed(_speed) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_lightmap_set_probe_capture_update_speed,
      this._owner,
      _speed
    );
    
  }
  particles_create() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_particles_create,
      this._owner,
			Variant.Type.RID
    ,
      
    );
    
  }
  particles_set_mode(_particles, _mode) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_particles_set_mode,
      this._owner,
      _particles, _mode
    );
    
  }
  particles_set_emitting(_particles, _emitting) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_particles_set_emitting,
      this._owner,
      _particles, _emitting
    );
    
  }
  particles_get_emitting(_particles) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_particles_get_emitting,
      this._owner,
			Variant.Type.BOOL,
      _particles
    );
    
  }
  particles_set_amount(_particles, _amount) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_particles_set_amount,
      this._owner,
      _particles, _amount
    );
    
  }
  particles_set_amount_ratio(_particles, _ratio) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_particles_set_amount_ratio,
      this._owner,
      _particles, _ratio
    );
    
  }
  particles_set_lifetime(_particles, _lifetime) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_particles_set_lifetime,
      this._owner,
      _particles, _lifetime
    );
    
  }
  particles_set_one_shot(_particles, _one_shot) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_particles_set_one_shot,
      this._owner,
      _particles, _one_shot
    );
    
  }
  particles_set_pre_process_time(_particles, _time) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_particles_set_pre_process_time,
      this._owner,
      _particles, _time
    );
    
  }
  particles_set_explosiveness_ratio(_particles, _ratio) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_particles_set_explosiveness_ratio,
      this._owner,
      _particles, _ratio
    );
    
  }
  particles_set_randomness_ratio(_particles, _ratio) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_particles_set_randomness_ratio,
      this._owner,
      _particles, _ratio
    );
    
  }
  particles_set_interp_to_end(_particles, _factor) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_particles_set_interp_to_end,
      this._owner,
      _particles, _factor
    );
    
  }
  particles_set_emitter_velocity(_particles, _velocity) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_particles_set_emitter_velocity,
      this._owner,
      _particles, _velocity
    );
    
  }
  particles_set_custom_aabb(_particles, _aabb) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_particles_set_custom_aabb,
      this._owner,
      _particles, _aabb
    );
    
  }
  particles_set_speed_scale(_particles, _scale) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_particles_set_speed_scale,
      this._owner,
      _particles, _scale
    );
    
  }
  particles_set_use_local_coordinates(_particles, _enable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_particles_set_use_local_coordinates,
      this._owner,
      _particles, _enable
    );
    
  }
  particles_set_process_material(_particles, _material) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_particles_set_process_material,
      this._owner,
      _particles, _material
    );
    
  }
  particles_set_fixed_fps(_particles, _fps) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_particles_set_fixed_fps,
      this._owner,
      _particles, _fps
    );
    
  }
  particles_set_interpolate(_particles, _enable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_particles_set_interpolate,
      this._owner,
      _particles, _enable
    );
    
  }
  particles_set_fractional_delta(_particles, _enable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_particles_set_fractional_delta,
      this._owner,
      _particles, _enable
    );
    
  }
  particles_set_collision_base_size(_particles, _size) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_particles_set_collision_base_size,
      this._owner,
      _particles, _size
    );
    
  }
  particles_set_transform_align(_particles, _align) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_particles_set_transform_align,
      this._owner,
      _particles, _align
    );
    
  }
  particles_set_trails(_particles, _enable, _length_sec) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_particles_set_trails,
      this._owner,
      _particles, _enable, _length_sec
    );
    
  }
  particles_set_trail_bind_poses(_particles, _bind_poses) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_particles_set_trail_bind_poses,
      this._owner,
      _particles, _bind_poses
    );
    
  }
  particles_is_inactive(_particles) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_particles_is_inactive,
      this._owner,
			Variant.Type.BOOL,
      _particles
    );
    
  }
  particles_request_process(_particles) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_particles_request_process,
      this._owner,
      _particles
    );
    
  }
  particles_restart(_particles) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_particles_restart,
      this._owner,
      _particles
    );
    
  }
  particles_set_subemitter(_particles, _subemitter_particles) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_particles_set_subemitter,
      this._owner,
      _particles, _subemitter_particles
    );
    
  }
  particles_emit(_particles, _transform, _velocity, _color, _custom, _emit_flags) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_particles_emit,
      this._owner,
      _particles, _transform, _velocity, _color, _custom, _emit_flags
    );
    
  }
  particles_set_draw_order(_particles, _order) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_particles_set_draw_order,
      this._owner,
      _particles, _order
    );
    
  }
  particles_set_draw_passes(_particles, _count) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_particles_set_draw_passes,
      this._owner,
      _particles, _count
    );
    
  }
  particles_set_draw_pass_mesh(_particles, _pass, _mesh) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_particles_set_draw_pass_mesh,
      this._owner,
      _particles, _pass, _mesh
    );
    
  }
  particles_get_current_aabb(_particles) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_particles_get_current_aabb,
      this._owner,
			Variant.Type.AABB
    ,
      _particles
    );
    
  }
  particles_set_emission_transform(_particles, _transform) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_particles_set_emission_transform,
      this._owner,
      _particles, _transform
    );
    
  }
  particles_collision_create() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_particles_collision_create,
      this._owner,
			Variant.Type.RID
    ,
      
    );
    
  }
  particles_collision_set_collision_type(_particles_collision, _type) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_particles_collision_set_collision_type,
      this._owner,
      _particles_collision, _type
    );
    
  }
  particles_collision_set_cull_mask(_particles_collision, _mask) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_particles_collision_set_cull_mask,
      this._owner,
      _particles_collision, _mask
    );
    
  }
  particles_collision_set_sphere_radius(_particles_collision, _radius) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_particles_collision_set_sphere_radius,
      this._owner,
      _particles_collision, _radius
    );
    
  }
  particles_collision_set_box_extents(_particles_collision, _extents) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_particles_collision_set_box_extents,
      this._owner,
      _particles_collision, _extents
    );
    
  }
  particles_collision_set_attractor_strength(_particles_collision, _strength) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_particles_collision_set_attractor_strength,
      this._owner,
      _particles_collision, _strength
    );
    
  }
  particles_collision_set_attractor_directionality(_particles_collision, _amount) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_particles_collision_set_attractor_directionality,
      this._owner,
      _particles_collision, _amount
    );
    
  }
  particles_collision_set_attractor_attenuation(_particles_collision, _curve) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_particles_collision_set_attractor_attenuation,
      this._owner,
      _particles_collision, _curve
    );
    
  }
  particles_collision_set_field_texture(_particles_collision, _texture) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_particles_collision_set_field_texture,
      this._owner,
      _particles_collision, _texture
    );
    
  }
  particles_collision_height_field_update(_particles_collision) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_particles_collision_height_field_update,
      this._owner,
      _particles_collision
    );
    
  }
  particles_collision_set_height_field_resolution(_particles_collision, _resolution) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_particles_collision_set_height_field_resolution,
      this._owner,
      _particles_collision, _resolution
    );
    
  }
  fog_volume_create() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_fog_volume_create,
      this._owner,
			Variant.Type.RID
    ,
      
    );
    
  }
  fog_volume_set_shape(_fog_volume, _shape) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_fog_volume_set_shape,
      this._owner,
      _fog_volume, _shape
    );
    
  }
  fog_volume_set_size(_fog_volume, _size) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_fog_volume_set_size,
      this._owner,
      _fog_volume, _size
    );
    
  }
  fog_volume_set_material(_fog_volume, _material) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_fog_volume_set_material,
      this._owner,
      _fog_volume, _material
    );
    
  }
  visibility_notifier_create() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_visibility_notifier_create,
      this._owner,
			Variant.Type.RID
    ,
      
    );
    
  }
  visibility_notifier_set_aabb(_notifier, _aabb) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_visibility_notifier_set_aabb,
      this._owner,
      _notifier, _aabb
    );
    
  }
  visibility_notifier_set_callbacks(_notifier, _enter_callable, _exit_callable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_visibility_notifier_set_callbacks,
      this._owner,
      _notifier, _enter_callable, _exit_callable
    );
    
  }
  occluder_create() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_occluder_create,
      this._owner,
			Variant.Type.RID
    ,
      
    );
    
  }
  occluder_set_mesh(_occluder, _vertices, _indices) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_occluder_set_mesh,
      this._owner,
      _occluder, _vertices, _indices
    );
    
  }
  camera_create() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_camera_create,
      this._owner,
			Variant.Type.RID
    ,
      
    );
    
  }
  camera_set_perspective(_camera, _fovy_degrees, _z_near, _z_far) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_camera_set_perspective,
      this._owner,
      _camera, _fovy_degrees, _z_near, _z_far
    );
    
  }
  camera_set_orthogonal(_camera, _size, _z_near, _z_far) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_camera_set_orthogonal,
      this._owner,
      _camera, _size, _z_near, _z_far
    );
    
  }
  camera_set_frustum(_camera, _size, _offset, _z_near, _z_far) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_camera_set_frustum,
      this._owner,
      _camera, _size, _offset, _z_near, _z_far
    );
    
  }
  camera_set_transform(_camera, _transform) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_camera_set_transform,
      this._owner,
      _camera, _transform
    );
    
  }
  camera_set_cull_mask(_camera, _layers) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_camera_set_cull_mask,
      this._owner,
      _camera, _layers
    );
    
  }
  camera_set_environment(_camera, _env) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_camera_set_environment,
      this._owner,
      _camera, _env
    );
    
  }
  camera_set_camera_attributes(_camera, _effects) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_camera_set_camera_attributes,
      this._owner,
      _camera, _effects
    );
    
  }
  camera_set_compositor(_camera, _compositor) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_camera_set_compositor,
      this._owner,
      _camera, _compositor
    );
    
  }
  camera_set_use_vertical_aspect(_camera, _enable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_camera_set_use_vertical_aspect,
      this._owner,
      _camera, _enable
    );
    
  }
  viewport_create() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_viewport_create,
      this._owner,
			Variant.Type.RID
    ,
      
    );
    
  }
  viewport_set_use_xr(_viewport, _use_xr) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_viewport_set_use_xr,
      this._owner,
      _viewport, _use_xr
    );
    
  }
  viewport_set_size(_viewport, _width, _height) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_viewport_set_size,
      this._owner,
      _viewport, _width, _height
    );
    
  }
  viewport_set_active(_viewport, _active) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_viewport_set_active,
      this._owner,
      _viewport, _active
    );
    
  }
  viewport_set_parent_viewport(_viewport, _parent_viewport) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_viewport_set_parent_viewport,
      this._owner,
      _viewport, _parent_viewport
    );
    
  }
  viewport_attach_to_screen(_viewport, _rect, _screen) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_viewport_attach_to_screen,
      this._owner,
      _viewport, _rect, _screen
    );
    
  }
  viewport_set_render_direct_to_screen(_viewport, _enabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_viewport_set_render_direct_to_screen,
      this._owner,
      _viewport, _enabled
    );
    
  }
  viewport_set_canvas_cull_mask(_viewport, _canvas_cull_mask) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_viewport_set_canvas_cull_mask,
      this._owner,
      _viewport, _canvas_cull_mask
    );
    
  }
  viewport_set_scaling_3d_mode(_viewport, _scaling_3d_mode) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_viewport_set_scaling_3d_mode,
      this._owner,
      _viewport, _scaling_3d_mode
    );
    
  }
  viewport_set_scaling_3d_scale(_viewport, _scale) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_viewport_set_scaling_3d_scale,
      this._owner,
      _viewport, _scale
    );
    
  }
  viewport_set_fsr_sharpness(_viewport, _sharpness) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_viewport_set_fsr_sharpness,
      this._owner,
      _viewport, _sharpness
    );
    
  }
  viewport_set_texture_mipmap_bias(_viewport, _mipmap_bias) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_viewport_set_texture_mipmap_bias,
      this._owner,
      _viewport, _mipmap_bias
    );
    
  }
  viewport_set_update_mode(_viewport, _update_mode) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_viewport_set_update_mode,
      this._owner,
      _viewport, _update_mode
    );
    
  }
  viewport_get_update_mode(_viewport) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_viewport_get_update_mode,
      this._owner,
			Variant.INT,
      _viewport
    );
    
  }
  viewport_set_clear_mode(_viewport, _clear_mode) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_viewport_set_clear_mode,
      this._owner,
      _viewport, _clear_mode
    );
    
  }
  viewport_get_render_target(_viewport) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_viewport_get_render_target,
      this._owner,
			Variant.Type.RID
    ,
      _viewport
    );
    
  }
  viewport_get_texture(_viewport) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_viewport_get_texture,
      this._owner,
			Variant.Type.RID
    ,
      _viewport
    );
    
  }
  viewport_set_disable_3d(_viewport, _disable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_viewport_set_disable_3d,
      this._owner,
      _viewport, _disable
    );
    
  }
  viewport_set_disable_2d(_viewport, _disable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_viewport_set_disable_2d,
      this._owner,
      _viewport, _disable
    );
    
  }
  viewport_set_environment_mode(_viewport, _mode) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_viewport_set_environment_mode,
      this._owner,
      _viewport, _mode
    );
    
  }
  viewport_attach_camera(_viewport, _camera) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_viewport_attach_camera,
      this._owner,
      _viewport, _camera
    );
    
  }
  viewport_set_scenario(_viewport, _scenario) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_viewport_set_scenario,
      this._owner,
      _viewport, _scenario
    );
    
  }
  viewport_attach_canvas(_viewport, _canvas) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_viewport_attach_canvas,
      this._owner,
      _viewport, _canvas
    );
    
  }
  viewport_remove_canvas(_viewport, _canvas) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_viewport_remove_canvas,
      this._owner,
      _viewport, _canvas
    );
    
  }
  viewport_set_snap_2d_transforms_to_pixel(_viewport, _enabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_viewport_set_snap_2d_transforms_to_pixel,
      this._owner,
      _viewport, _enabled
    );
    
  }
  viewport_set_snap_2d_vertices_to_pixel(_viewport, _enabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_viewport_set_snap_2d_vertices_to_pixel,
      this._owner,
      _viewport, _enabled
    );
    
  }
  viewport_set_default_canvas_item_texture_filter(_viewport, _filter) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_viewport_set_default_canvas_item_texture_filter,
      this._owner,
      _viewport, _filter
    );
    
  }
  viewport_set_default_canvas_item_texture_repeat(_viewport, _repeat) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_viewport_set_default_canvas_item_texture_repeat,
      this._owner,
      _viewport, _repeat
    );
    
  }
  viewport_set_canvas_transform(_viewport, _canvas, _offset) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_viewport_set_canvas_transform,
      this._owner,
      _viewport, _canvas, _offset
    );
    
  }
  viewport_set_canvas_stacking(_viewport, _canvas, _layer, _sublayer) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_viewport_set_canvas_stacking,
      this._owner,
      _viewport, _canvas, _layer, _sublayer
    );
    
  }
  viewport_set_transparent_background(_viewport, _enabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_viewport_set_transparent_background,
      this._owner,
      _viewport, _enabled
    );
    
  }
  viewport_set_global_canvas_transform(_viewport, _transform) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_viewport_set_global_canvas_transform,
      this._owner,
      _viewport, _transform
    );
    
  }
  viewport_set_sdf_oversize_and_scale(_viewport, _oversize, _scale) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_viewport_set_sdf_oversize_and_scale,
      this._owner,
      _viewport, _oversize, _scale
    );
    
  }
  viewport_set_positional_shadow_atlas_size(_viewport, _size, _use_16_bits) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_viewport_set_positional_shadow_atlas_size,
      this._owner,
      _viewport, _size, _use_16_bits
    );
    
  }
  viewport_set_positional_shadow_atlas_quadrant_subdivision(_viewport, _quadrant, _subdivision) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_viewport_set_positional_shadow_atlas_quadrant_subdivision,
      this._owner,
      _viewport, _quadrant, _subdivision
    );
    
  }
  viewport_set_msaa_3d(_viewport, _msaa) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_viewport_set_msaa_3d,
      this._owner,
      _viewport, _msaa
    );
    
  }
  viewport_set_msaa_2d(_viewport, _msaa) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_viewport_set_msaa_2d,
      this._owner,
      _viewport, _msaa
    );
    
  }
  viewport_set_use_hdr_2d(_viewport, _enabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_viewport_set_use_hdr_2d,
      this._owner,
      _viewport, _enabled
    );
    
  }
  viewport_set_screen_space_aa(_viewport, _mode) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_viewport_set_screen_space_aa,
      this._owner,
      _viewport, _mode
    );
    
  }
  viewport_set_use_taa(_viewport, _enable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_viewport_set_use_taa,
      this._owner,
      _viewport, _enable
    );
    
  }
  viewport_set_use_debanding(_viewport, _enable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_viewport_set_use_debanding,
      this._owner,
      _viewport, _enable
    );
    
  }
  viewport_set_use_occlusion_culling(_viewport, _enable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_viewport_set_use_occlusion_culling,
      this._owner,
      _viewport, _enable
    );
    
  }
  viewport_set_occlusion_rays_per_thread(_rays_per_thread) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_viewport_set_occlusion_rays_per_thread,
      this._owner,
      _rays_per_thread
    );
    
  }
  viewport_set_occlusion_culling_build_quality(_quality) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_viewport_set_occlusion_culling_build_quality,
      this._owner,
      _quality
    );
    
  }
  viewport_get_render_info(_viewport, _type, _info) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_viewport_get_render_info,
      this._owner,
			Variant.Type.INT,
      _viewport, _type, _info
    );
    
  }
  viewport_set_debug_draw(_viewport, _draw) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_viewport_set_debug_draw,
      this._owner,
      _viewport, _draw
    );
    
  }
  viewport_set_measure_render_time(_viewport, _enable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_viewport_set_measure_render_time,
      this._owner,
      _viewport, _enable
    );
    
  }
  viewport_get_measured_render_time_cpu(_viewport) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_viewport_get_measured_render_time_cpu,
      this._owner,
			Variant.Type.FLOAT,
      _viewport
    );
    
  }
  viewport_get_measured_render_time_gpu(_viewport) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_viewport_get_measured_render_time_gpu,
      this._owner,
			Variant.Type.FLOAT,
      _viewport
    );
    
  }
  viewport_set_vrs_mode(_viewport, _mode) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_viewport_set_vrs_mode,
      this._owner,
      _viewport, _mode
    );
    
  }
  viewport_set_vrs_update_mode(_viewport, _mode) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_viewport_set_vrs_update_mode,
      this._owner,
      _viewport, _mode
    );
    
  }
  viewport_set_vrs_texture(_viewport, _texture) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_viewport_set_vrs_texture,
      this._owner,
      _viewport, _texture
    );
    
  }
  sky_create() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_sky_create,
      this._owner,
			Variant.Type.RID
    ,
      
    );
    
  }
  sky_set_radiance_size(_sky, _radiance_size) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_sky_set_radiance_size,
      this._owner,
      _sky, _radiance_size
    );
    
  }
  sky_set_mode(_sky, _mode) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_sky_set_mode,
      this._owner,
      _sky, _mode
    );
    
  }
  sky_set_material(_sky, _material) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_sky_set_material,
      this._owner,
      _sky, _material
    );
    
  }
  sky_bake_panorama(_sky, _energy, _bake_irradiance, _size) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_sky_bake_panorama,
      this._owner,
			Variant.INT,
      _sky, _energy, _bake_irradiance, _size
    );
    
  }
  compositor_effect_create() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_compositor_effect_create,
      this._owner,
			Variant.Type.RID
    ,
      
    );
    
  }
  compositor_effect_set_enabled(_effect, _enabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_compositor_effect_set_enabled,
      this._owner,
      _effect, _enabled
    );
    
  }
  compositor_effect_set_callback(_effect, _callback_type, _callback) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_compositor_effect_set_callback,
      this._owner,
      _effect, _callback_type, _callback
    );
    
  }
  compositor_effect_set_flag(_effect, _flag, _set) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_compositor_effect_set_flag,
      this._owner,
      _effect, _flag, _set
    );
    
  }
  compositor_create() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_compositor_create,
      this._owner,
			Variant.Type.RID
    ,
      
    );
    
  }
  compositor_set_compositor_effects(_compositor, _effects) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_compositor_set_compositor_effects,
      this._owner,
      _compositor, _effects
    );
    
  }
  environment_create() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_environment_create,
      this._owner,
			Variant.Type.RID
    ,
      
    );
    
  }
  environment_set_background(_env, _bg) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_environment_set_background,
      this._owner,
      _env, _bg
    );
    
  }
  environment_set_sky(_env, _sky) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_environment_set_sky,
      this._owner,
      _env, _sky
    );
    
  }
  environment_set_sky_custom_fov(_env, _scale) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_environment_set_sky_custom_fov,
      this._owner,
      _env, _scale
    );
    
  }
  environment_set_sky_orientation(_env, _orientation) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_environment_set_sky_orientation,
      this._owner,
      _env, _orientation
    );
    
  }
  environment_set_bg_color(_env, _color) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_environment_set_bg_color,
      this._owner,
      _env, _color
    );
    
  }
  environment_set_bg_energy(_env, _multiplier, _exposure_value) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_environment_set_bg_energy,
      this._owner,
      _env, _multiplier, _exposure_value
    );
    
  }
  environment_set_canvas_max_layer(_env, _max_layer) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_environment_set_canvas_max_layer,
      this._owner,
      _env, _max_layer
    );
    
  }
  environment_set_ambient_light(_env, _color, _ambient, _energy, _sky_contibution, _reflection_source) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_environment_set_ambient_light,
      this._owner,
      _env, _color, _ambient, _energy, _sky_contibution, _reflection_source
    );
    
  }
  environment_set_glow(_env, _enable, _levels, _intensity, _strength, _mix, _bloom_threshold, _blend_mode, _hdr_bleed_threshold, _hdr_bleed_scale, _hdr_luminance_cap, _glow_map_strength, _glow_map) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_environment_set_glow,
      this._owner,
      _env, _enable, _levels, _intensity, _strength, _mix, _bloom_threshold, _blend_mode, _hdr_bleed_threshold, _hdr_bleed_scale, _hdr_luminance_cap, _glow_map_strength, _glow_map
    );
    
  }
  environment_set_tonemap(_env, _tone_mapper, _exposure, _white) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_environment_set_tonemap,
      this._owner,
      _env, _tone_mapper, _exposure, _white
    );
    
  }
  environment_set_adjustment(_env, _enable, _brightness, _contrast, _saturation, _use_1d_color_correction, _color_correction) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_environment_set_adjustment,
      this._owner,
      _env, _enable, _brightness, _contrast, _saturation, _use_1d_color_correction, _color_correction
    );
    
  }
  environment_set_ssr(_env, _enable, _max_steps, _fade_in, _fade_out, _depth_tolerance) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_environment_set_ssr,
      this._owner,
      _env, _enable, _max_steps, _fade_in, _fade_out, _depth_tolerance
    );
    
  }
  environment_set_ssao(_env, _enable, _radius, _intensity, _power, _detail, _horizon, _sharpness, _light_affect, _ao_channel_affect) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_environment_set_ssao,
      this._owner,
      _env, _enable, _radius, _intensity, _power, _detail, _horizon, _sharpness, _light_affect, _ao_channel_affect
    );
    
  }
  environment_set_fog(_env, _enable, _light_color, _light_energy, _sun_scatter, _density, _height, _height_density, _aerial_perspective, _sky_affect, _fog_mode) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_environment_set_fog,
      this._owner,
      _env, _enable, _light_color, _light_energy, _sun_scatter, _density, _height, _height_density, _aerial_perspective, _sky_affect, _fog_mode
    );
    
  }
  environment_set_sdfgi(_env, _enable, _cascades, _min_cell_size, _y_scale, _use_occlusion, _bounce_feedback, _read_sky, _energy, _normal_bias, _probe_bias) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_environment_set_sdfgi,
      this._owner,
      _env, _enable, _cascades, _min_cell_size, _y_scale, _use_occlusion, _bounce_feedback, _read_sky, _energy, _normal_bias, _probe_bias
    );
    
  }
  environment_set_volumetric_fog(_env, _enable, _density, _albedo, _emission, _emission_energy, _anisotropy, _length, _p_detail_spread, _gi_inject, _temporal_reprojection, _temporal_reprojection_amount, _ambient_inject, _sky_affect) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_environment_set_volumetric_fog,
      this._owner,
      _env, _enable, _density, _albedo, _emission, _emission_energy, _anisotropy, _length, _p_detail_spread, _gi_inject, _temporal_reprojection, _temporal_reprojection_amount, _ambient_inject, _sky_affect
    );
    
  }
  environment_glow_set_use_bicubic_upscale(_enable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_environment_glow_set_use_bicubic_upscale,
      this._owner,
      _enable
    );
    
  }
  environment_set_ssr_roughness_quality(_quality) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_environment_set_ssr_roughness_quality,
      this._owner,
      _quality
    );
    
  }
  environment_set_ssao_quality(_quality, _half_size, _adaptive_target, _blur_passes, _fadeout_from, _fadeout_to) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_environment_set_ssao_quality,
      this._owner,
      _quality, _half_size, _adaptive_target, _blur_passes, _fadeout_from, _fadeout_to
    );
    
  }
  environment_set_ssil_quality(_quality, _half_size, _adaptive_target, _blur_passes, _fadeout_from, _fadeout_to) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_environment_set_ssil_quality,
      this._owner,
      _quality, _half_size, _adaptive_target, _blur_passes, _fadeout_from, _fadeout_to
    );
    
  }
  environment_set_sdfgi_ray_count(_ray_count) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_environment_set_sdfgi_ray_count,
      this._owner,
      _ray_count
    );
    
  }
  environment_set_sdfgi_frames_to_converge(_frames) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_environment_set_sdfgi_frames_to_converge,
      this._owner,
      _frames
    );
    
  }
  environment_set_sdfgi_frames_to_update_light(_frames) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_environment_set_sdfgi_frames_to_update_light,
      this._owner,
      _frames
    );
    
  }
  environment_set_volumetric_fog_volume_size(_size, _depth) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_environment_set_volumetric_fog_volume_size,
      this._owner,
      _size, _depth
    );
    
  }
  environment_set_volumetric_fog_filter_active(_active) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_environment_set_volumetric_fog_filter_active,
      this._owner,
      _active
    );
    
  }
  environment_bake_panorama(_environment, _bake_irradiance, _size) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_environment_bake_panorama,
      this._owner,
			Variant.INT,
      _environment, _bake_irradiance, _size
    );
    
  }
  screen_space_roughness_limiter_set_active(_enable, _amount, _limit) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_screen_space_roughness_limiter_set_active,
      this._owner,
      _enable, _amount, _limit
    );
    
  }
  sub_surface_scattering_set_quality(_quality) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_sub_surface_scattering_set_quality,
      this._owner,
      _quality
    );
    
  }
  sub_surface_scattering_set_scale(_scale, _depth_scale) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_sub_surface_scattering_set_scale,
      this._owner,
      _scale, _depth_scale
    );
    
  }
  camera_attributes_create() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_camera_attributes_create,
      this._owner,
			Variant.Type.RID
    ,
      
    );
    
  }
  camera_attributes_set_dof_blur_quality(_quality, _use_jitter) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_camera_attributes_set_dof_blur_quality,
      this._owner,
      _quality, _use_jitter
    );
    
  }
  camera_attributes_set_dof_blur_bokeh_shape(_shape) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_camera_attributes_set_dof_blur_bokeh_shape,
      this._owner,
      _shape
    );
    
  }
  camera_attributes_set_dof_blur(_camera_attributes, _far_enable, _far_distance, _far_transition, _near_enable, _near_distance, _near_transition, _amount) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_camera_attributes_set_dof_blur,
      this._owner,
      _camera_attributes, _far_enable, _far_distance, _far_transition, _near_enable, _near_distance, _near_transition, _amount
    );
    
  }
  camera_attributes_set_exposure(_camera_attributes, _multiplier, _normalization) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_camera_attributes_set_exposure,
      this._owner,
      _camera_attributes, _multiplier, _normalization
    );
    
  }
  camera_attributes_set_auto_exposure(_camera_attributes, _enable, _min_sensitivity, _max_sensitivity, _speed, _scale) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_camera_attributes_set_auto_exposure,
      this._owner,
      _camera_attributes, _enable, _min_sensitivity, _max_sensitivity, _speed, _scale
    );
    
  }
  scenario_create() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_scenario_create,
      this._owner,
			Variant.Type.RID
    ,
      
    );
    
  }
  scenario_set_environment(_scenario, _environment) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_scenario_set_environment,
      this._owner,
      _scenario, _environment
    );
    
  }
  scenario_set_fallback_environment(_scenario, _environment) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_scenario_set_fallback_environment,
      this._owner,
      _scenario, _environment
    );
    
  }
  scenario_set_camera_attributes(_scenario, _effects) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_scenario_set_camera_attributes,
      this._owner,
      _scenario, _effects
    );
    
  }
  scenario_set_compositor(_scenario, _compositor) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_scenario_set_compositor,
      this._owner,
      _scenario, _compositor
    );
    
  }
  instance_create2(_base, _scenario) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_instance_create2,
      this._owner,
			Variant.Type.RID
    ,
      _base, _scenario
    );
    
  }
  instance_create() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_instance_create,
      this._owner,
			Variant.Type.RID
    ,
      
    );
    
  }
  instance_set_base(_instance, _base) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_instance_set_base,
      this._owner,
      _instance, _base
    );
    
  }
  instance_set_scenario(_instance, _scenario) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_instance_set_scenario,
      this._owner,
      _instance, _scenario
    );
    
  }
  instance_set_layer_mask(_instance, _mask) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_instance_set_layer_mask,
      this._owner,
      _instance, _mask
    );
    
  }
  instance_set_pivot_data(_instance, _sorting_offset, _use_aabb_center) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_instance_set_pivot_data,
      this._owner,
      _instance, _sorting_offset, _use_aabb_center
    );
    
  }
  instance_set_transform(_instance, _transform) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_instance_set_transform,
      this._owner,
      _instance, _transform
    );
    
  }
  instance_attach_object_instance_id(_instance, _id) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_instance_attach_object_instance_id,
      this._owner,
      _instance, _id
    );
    
  }
  instance_set_blend_shape_weight(_instance, _shape, _weight) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_instance_set_blend_shape_weight,
      this._owner,
      _instance, _shape, _weight
    );
    
  }
  instance_set_surface_override_material(_instance, _surface, _material) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_instance_set_surface_override_material,
      this._owner,
      _instance, _surface, _material
    );
    
  }
  instance_set_visible(_instance, _visible) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_instance_set_visible,
      this._owner,
      _instance, _visible
    );
    
  }
  instance_geometry_set_transparency(_instance, _transparency) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_instance_geometry_set_transparency,
      this._owner,
      _instance, _transparency
    );
    
  }
  instance_set_custom_aabb(_instance, _aabb) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_instance_set_custom_aabb,
      this._owner,
      _instance, _aabb
    );
    
  }
  instance_attach_skeleton(_instance, _skeleton) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_instance_attach_skeleton,
      this._owner,
      _instance, _skeleton
    );
    
  }
  instance_set_extra_visibility_margin(_instance, _margin) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_instance_set_extra_visibility_margin,
      this._owner,
      _instance, _margin
    );
    
  }
  instance_set_visibility_parent(_instance, _parent) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_instance_set_visibility_parent,
      this._owner,
      _instance, _parent
    );
    
  }
  instance_set_ignore_culling(_instance, _enabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_instance_set_ignore_culling,
      this._owner,
      _instance, _enabled
    );
    
  }
  instance_geometry_set_flag(_instance, _flag, _enabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_instance_geometry_set_flag,
      this._owner,
      _instance, _flag, _enabled
    );
    
  }
  instance_geometry_set_cast_shadows_setting(_instance, _shadow_casting_setting) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_instance_geometry_set_cast_shadows_setting,
      this._owner,
      _instance, _shadow_casting_setting
    );
    
  }
  instance_geometry_set_material_override(_instance, _material) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_instance_geometry_set_material_override,
      this._owner,
      _instance, _material
    );
    
  }
  instance_geometry_set_material_overlay(_instance, _material) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_instance_geometry_set_material_overlay,
      this._owner,
      _instance, _material
    );
    
  }
  instance_geometry_set_visibility_range(_instance, _min, _max, _min_margin, _max_margin, _fade_mode) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_instance_geometry_set_visibility_range,
      this._owner,
      _instance, _min, _max, _min_margin, _max_margin, _fade_mode
    );
    
  }
  instance_geometry_set_lightmap(_instance, _lightmap, _lightmap_uv_scale, _lightmap_slice) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_instance_geometry_set_lightmap,
      this._owner,
      _instance, _lightmap, _lightmap_uv_scale, _lightmap_slice
    );
    
  }
  instance_geometry_set_lod_bias(_instance, _lod_bias) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_instance_geometry_set_lod_bias,
      this._owner,
      _instance, _lod_bias
    );
    
  }
  instance_geometry_set_shader_parameter(_instance, _parameter, _value) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_instance_geometry_set_shader_parameter,
      this._owner,
      _instance, _parameter, _value
    );
    
  }
  instance_geometry_get_shader_parameter(_instance, _parameter) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_instance_geometry_get_shader_parameter,
      this._owner,
			Variant.Type.VARIANT
    ,
      _instance, _parameter
    );
    
  }
  instance_geometry_get_shader_parameter_default_value(_instance, _parameter) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_instance_geometry_get_shader_parameter_default_value,
      this._owner,
			Variant.Type.VARIANT
    ,
      _instance, _parameter
    );
    
  }
  instance_geometry_get_shader_parameter_list(_instance) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_instance_geometry_get_shader_parameter_list,
      this._owner,
			Variant.INT,
      _instance
    );
    
  }
  instances_cull_aabb(_aabb, _scenario) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_instances_cull_aabb,
      this._owner,
			Variant.Type.PACKED_INT64_ARRAY
    ,
      _aabb, _scenario
    );
    
  }
  instances_cull_ray(_from, _to, _scenario) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_instances_cull_ray,
      this._owner,
			Variant.Type.PACKED_INT64_ARRAY
    ,
      _from, _to, _scenario
    );
    
  }
  instances_cull_convex(_convex, _scenario) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_instances_cull_convex,
      this._owner,
			Variant.Type.PACKED_INT64_ARRAY
    ,
      _convex, _scenario
    );
    
  }
  bake_render_uv2(_base, _material_overrides, _image_size) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_bake_render_uv2,
      this._owner,
			Variant.INT,
      _base, _material_overrides, _image_size
    );
    
  }
  canvas_create() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_canvas_create,
      this._owner,
			Variant.Type.RID
    ,
      
    );
    
  }
  canvas_set_item_mirroring(_canvas, _item, _mirroring) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_canvas_set_item_mirroring,
      this._owner,
      _canvas, _item, _mirroring
    );
    
  }
  canvas_set_item_repeat(_item, _repeat_size, _repeat_times) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_canvas_set_item_repeat,
      this._owner,
      _item, _repeat_size, _repeat_times
    );
    
  }
  canvas_set_modulate(_canvas, _color) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_canvas_set_modulate,
      this._owner,
      _canvas, _color
    );
    
  }
  canvas_set_disable_scale(_disable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_canvas_set_disable_scale,
      this._owner,
      _disable
    );
    
  }
  canvas_texture_create() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_canvas_texture_create,
      this._owner,
			Variant.Type.RID
    ,
      
    );
    
  }
  canvas_texture_set_channel(_canvas_texture, _channel, _texture) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_canvas_texture_set_channel,
      this._owner,
      _canvas_texture, _channel, _texture
    );
    
  }
  canvas_texture_set_shading_parameters(_canvas_texture, _base_color, _shininess) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_canvas_texture_set_shading_parameters,
      this._owner,
      _canvas_texture, _base_color, _shininess
    );
    
  }
  canvas_texture_set_texture_filter(_canvas_texture, _filter) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_canvas_texture_set_texture_filter,
      this._owner,
      _canvas_texture, _filter
    );
    
  }
  canvas_texture_set_texture_repeat(_canvas_texture, _repeat) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_canvas_texture_set_texture_repeat,
      this._owner,
      _canvas_texture, _repeat
    );
    
  }
  canvas_item_create() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_canvas_item_create,
      this._owner,
			Variant.Type.RID
    ,
      
    );
    
  }
  canvas_item_set_parent(_item, _parent) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_canvas_item_set_parent,
      this._owner,
      _item, _parent
    );
    
  }
  canvas_item_set_default_texture_filter(_item, _filter) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_canvas_item_set_default_texture_filter,
      this._owner,
      _item, _filter
    );
    
  }
  canvas_item_set_default_texture_repeat(_item, _repeat) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_canvas_item_set_default_texture_repeat,
      this._owner,
      _item, _repeat
    );
    
  }
  canvas_item_set_visible(_item, _visible) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_canvas_item_set_visible,
      this._owner,
      _item, _visible
    );
    
  }
  canvas_item_set_light_mask(_item, _mask) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_canvas_item_set_light_mask,
      this._owner,
      _item, _mask
    );
    
  }
  canvas_item_set_visibility_layer(_item, _visibility_layer) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_canvas_item_set_visibility_layer,
      this._owner,
      _item, _visibility_layer
    );
    
  }
  canvas_item_set_transform(_item, _transform) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_canvas_item_set_transform,
      this._owner,
      _item, _transform
    );
    
  }
  canvas_item_set_clip(_item, _clip) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_canvas_item_set_clip,
      this._owner,
      _item, _clip
    );
    
  }
  canvas_item_set_distance_field_mode(_item, _enabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_canvas_item_set_distance_field_mode,
      this._owner,
      _item, _enabled
    );
    
  }
  canvas_item_set_custom_rect(_item, _use_custom_rect, _rect) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_canvas_item_set_custom_rect,
      this._owner,
      _item, _use_custom_rect, _rect
    );
    
  }
  canvas_item_set_modulate(_item, _color) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_canvas_item_set_modulate,
      this._owner,
      _item, _color
    );
    
  }
  canvas_item_set_self_modulate(_item, _color) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_canvas_item_set_self_modulate,
      this._owner,
      _item, _color
    );
    
  }
  canvas_item_set_draw_behind_parent(_item, _enabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_canvas_item_set_draw_behind_parent,
      this._owner,
      _item, _enabled
    );
    
  }
  canvas_item_set_interpolated(_item, _interpolated) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_canvas_item_set_interpolated,
      this._owner,
      _item, _interpolated
    );
    
  }
  canvas_item_reset_physics_interpolation(_item) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_canvas_item_reset_physics_interpolation,
      this._owner,
      _item
    );
    
  }
  canvas_item_transform_physics_interpolation(_item, _transform) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_canvas_item_transform_physics_interpolation,
      this._owner,
      _item, _transform
    );
    
  }
  canvas_item_add_line(_item, _from, _to, _color, _width, _antialiased) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_canvas_item_add_line,
      this._owner,
      _item, _from, _to, _color, _width, _antialiased
    );
    
  }
  canvas_item_add_polyline(_item, _points, _colors, _width, _antialiased) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_canvas_item_add_polyline,
      this._owner,
      _item, _points, _colors, _width, _antialiased
    );
    
  }
  canvas_item_add_multiline(_item, _points, _colors, _width, _antialiased) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_canvas_item_add_multiline,
      this._owner,
      _item, _points, _colors, _width, _antialiased
    );
    
  }
  canvas_item_add_rect(_item, _rect, _color, _antialiased) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_canvas_item_add_rect,
      this._owner,
      _item, _rect, _color, _antialiased
    );
    
  }
  canvas_item_add_circle(_item, _pos, _radius, _color, _antialiased) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_canvas_item_add_circle,
      this._owner,
      _item, _pos, _radius, _color, _antialiased
    );
    
  }
  canvas_item_add_texture_rect(_item, _rect, _texture, _tile, _modulate, _transpose) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_canvas_item_add_texture_rect,
      this._owner,
      _item, _rect, _texture, _tile, _modulate, _transpose
    );
    
  }
  canvas_item_add_msdf_texture_rect_region(_item, _rect, _texture, _src_rect, _modulate, _outline_size, _px_range, _scale) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_canvas_item_add_msdf_texture_rect_region,
      this._owner,
      _item, _rect, _texture, _src_rect, _modulate, _outline_size, _px_range, _scale
    );
    
  }
  canvas_item_add_lcd_texture_rect_region(_item, _rect, _texture, _src_rect, _modulate) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_canvas_item_add_lcd_texture_rect_region,
      this._owner,
      _item, _rect, _texture, _src_rect, _modulate
    );
    
  }
  canvas_item_add_texture_rect_region(_item, _rect, _texture, _src_rect, _modulate, _transpose, _clip_uv) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_canvas_item_add_texture_rect_region,
      this._owner,
      _item, _rect, _texture, _src_rect, _modulate, _transpose, _clip_uv
    );
    
  }
  canvas_item_add_nine_patch(_item, _rect, _source, _texture, _topleft, _bottomright, _x_axis_mode, _y_axis_mode, _draw_center, _modulate) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_canvas_item_add_nine_patch,
      this._owner,
      _item, _rect, _source, _texture, _topleft, _bottomright, _x_axis_mode, _y_axis_mode, _draw_center, _modulate
    );
    
  }
  canvas_item_add_primitive(_item, _points, _colors, _uvs, _texture) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_canvas_item_add_primitive,
      this._owner,
      _item, _points, _colors, _uvs, _texture
    );
    
  }
  canvas_item_add_polygon(_item, _points, _colors, _uvs, _texture) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_canvas_item_add_polygon,
      this._owner,
      _item, _points, _colors, _uvs, _texture
    );
    
  }
  canvas_item_add_triangle_array(_item, _indices, _points, _colors, _uvs, _bones, _weights, _texture, _count) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_canvas_item_add_triangle_array,
      this._owner,
      _item, _indices, _points, _colors, _uvs, _bones, _weights, _texture, _count
    );
    
  }
  canvas_item_add_mesh(_item, _mesh, _transform, _modulate, _texture) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_canvas_item_add_mesh,
      this._owner,
      _item, _mesh, _transform, _modulate, _texture
    );
    
  }
  canvas_item_add_multimesh(_item, _mesh, _texture) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_canvas_item_add_multimesh,
      this._owner,
      _item, _mesh, _texture
    );
    
  }
  canvas_item_add_particles(_item, _particles, _texture) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_canvas_item_add_particles,
      this._owner,
      _item, _particles, _texture
    );
    
  }
  canvas_item_add_set_transform(_item, _transform) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_canvas_item_add_set_transform,
      this._owner,
      _item, _transform
    );
    
  }
  canvas_item_add_clip_ignore(_item, _ignore) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_canvas_item_add_clip_ignore,
      this._owner,
      _item, _ignore
    );
    
  }
  canvas_item_add_animation_slice(_item, _animation_length, _slice_begin, _slice_end, _offset) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_canvas_item_add_animation_slice,
      this._owner,
      _item, _animation_length, _slice_begin, _slice_end, _offset
    );
    
  }
  canvas_item_set_sort_children_by_y(_item, _enabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_canvas_item_set_sort_children_by_y,
      this._owner,
      _item, _enabled
    );
    
  }
  canvas_item_set_z_index(_item, _z_index) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_canvas_item_set_z_index,
      this._owner,
      _item, _z_index
    );
    
  }
  canvas_item_set_z_as_relative_to_parent(_item, _enabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_canvas_item_set_z_as_relative_to_parent,
      this._owner,
      _item, _enabled
    );
    
  }
  canvas_item_set_copy_to_backbuffer(_item, _enabled, _rect) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_canvas_item_set_copy_to_backbuffer,
      this._owner,
      _item, _enabled, _rect
    );
    
  }
  canvas_item_clear(_item) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_canvas_item_clear,
      this._owner,
      _item
    );
    
  }
  canvas_item_set_draw_index(_item, _index) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_canvas_item_set_draw_index,
      this._owner,
      _item, _index
    );
    
  }
  canvas_item_set_material(_item, _material) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_canvas_item_set_material,
      this._owner,
      _item, _material
    );
    
  }
  canvas_item_set_use_parent_material(_item, _enabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_canvas_item_set_use_parent_material,
      this._owner,
      _item, _enabled
    );
    
  }
  canvas_item_set_visibility_notifier(_item, _enable, _area, _enter_callable, _exit_callable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_canvas_item_set_visibility_notifier,
      this._owner,
      _item, _enable, _area, _enter_callable, _exit_callable
    );
    
  }
  canvas_item_set_canvas_group_mode(_item, _mode, _clear_margin, _fit_empty, _fit_margin, _blur_mipmaps) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_canvas_item_set_canvas_group_mode,
      this._owner,
      _item, _mode, _clear_margin, _fit_empty, _fit_margin, _blur_mipmaps
    );
    
  }
  debug_canvas_item_get_rect(_item) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_debug_canvas_item_get_rect,
      this._owner,
			Variant.Type.RECT2
    ,
      _item
    );
    
  }
  canvas_light_create() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_canvas_light_create,
      this._owner,
			Variant.Type.RID
    ,
      
    );
    
  }
  canvas_light_attach_to_canvas(_light, _canvas) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_canvas_light_attach_to_canvas,
      this._owner,
      _light, _canvas
    );
    
  }
  canvas_light_set_enabled(_light, _enabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_canvas_light_set_enabled,
      this._owner,
      _light, _enabled
    );
    
  }
  canvas_light_set_texture_scale(_light, _scale) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_canvas_light_set_texture_scale,
      this._owner,
      _light, _scale
    );
    
  }
  canvas_light_set_transform(_light, _transform) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_canvas_light_set_transform,
      this._owner,
      _light, _transform
    );
    
  }
  canvas_light_set_texture(_light, _texture) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_canvas_light_set_texture,
      this._owner,
      _light, _texture
    );
    
  }
  canvas_light_set_texture_offset(_light, _offset) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_canvas_light_set_texture_offset,
      this._owner,
      _light, _offset
    );
    
  }
  canvas_light_set_color(_light, _color) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_canvas_light_set_color,
      this._owner,
      _light, _color
    );
    
  }
  canvas_light_set_height(_light, _height) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_canvas_light_set_height,
      this._owner,
      _light, _height
    );
    
  }
  canvas_light_set_energy(_light, _energy) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_canvas_light_set_energy,
      this._owner,
      _light, _energy
    );
    
  }
  canvas_light_set_z_range(_light, _min_z, _max_z) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_canvas_light_set_z_range,
      this._owner,
      _light, _min_z, _max_z
    );
    
  }
  canvas_light_set_layer_range(_light, _min_layer, _max_layer) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_canvas_light_set_layer_range,
      this._owner,
      _light, _min_layer, _max_layer
    );
    
  }
  canvas_light_set_item_cull_mask(_light, _mask) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_canvas_light_set_item_cull_mask,
      this._owner,
      _light, _mask
    );
    
  }
  canvas_light_set_item_shadow_cull_mask(_light, _mask) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_canvas_light_set_item_shadow_cull_mask,
      this._owner,
      _light, _mask
    );
    
  }
  canvas_light_set_mode(_light, _mode) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_canvas_light_set_mode,
      this._owner,
      _light, _mode
    );
    
  }
  canvas_light_set_shadow_enabled(_light, _enabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_canvas_light_set_shadow_enabled,
      this._owner,
      _light, _enabled
    );
    
  }
  canvas_light_set_shadow_filter(_light, _filter) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_canvas_light_set_shadow_filter,
      this._owner,
      _light, _filter
    );
    
  }
  canvas_light_set_shadow_color(_light, _color) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_canvas_light_set_shadow_color,
      this._owner,
      _light, _color
    );
    
  }
  canvas_light_set_shadow_smooth(_light, _smooth) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_canvas_light_set_shadow_smooth,
      this._owner,
      _light, _smooth
    );
    
  }
  canvas_light_set_blend_mode(_light, _mode) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_canvas_light_set_blend_mode,
      this._owner,
      _light, _mode
    );
    
  }
  canvas_light_set_interpolated(_light, _interpolated) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_canvas_light_set_interpolated,
      this._owner,
      _light, _interpolated
    );
    
  }
  canvas_light_reset_physics_interpolation(_light) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_canvas_light_reset_physics_interpolation,
      this._owner,
      _light
    );
    
  }
  canvas_light_transform_physics_interpolation(_light, _transform) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_canvas_light_transform_physics_interpolation,
      this._owner,
      _light, _transform
    );
    
  }
  canvas_light_occluder_create() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_canvas_light_occluder_create,
      this._owner,
			Variant.Type.RID
    ,
      
    );
    
  }
  canvas_light_occluder_attach_to_canvas(_occluder, _canvas) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_canvas_light_occluder_attach_to_canvas,
      this._owner,
      _occluder, _canvas
    );
    
  }
  canvas_light_occluder_set_enabled(_occluder, _enabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_canvas_light_occluder_set_enabled,
      this._owner,
      _occluder, _enabled
    );
    
  }
  canvas_light_occluder_set_polygon(_occluder, _polygon) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_canvas_light_occluder_set_polygon,
      this._owner,
      _occluder, _polygon
    );
    
  }
  canvas_light_occluder_set_as_sdf_collision(_occluder, _enable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_canvas_light_occluder_set_as_sdf_collision,
      this._owner,
      _occluder, _enable
    );
    
  }
  canvas_light_occluder_set_transform(_occluder, _transform) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_canvas_light_occluder_set_transform,
      this._owner,
      _occluder, _transform
    );
    
  }
  canvas_light_occluder_set_light_mask(_occluder, _mask) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_canvas_light_occluder_set_light_mask,
      this._owner,
      _occluder, _mask
    );
    
  }
  canvas_light_occluder_set_interpolated(_occluder, _interpolated) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_canvas_light_occluder_set_interpolated,
      this._owner,
      _occluder, _interpolated
    );
    
  }
  canvas_light_occluder_reset_physics_interpolation(_occluder) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_canvas_light_occluder_reset_physics_interpolation,
      this._owner,
      _occluder
    );
    
  }
  canvas_light_occluder_transform_physics_interpolation(_occluder, _transform) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_canvas_light_occluder_transform_physics_interpolation,
      this._owner,
      _occluder, _transform
    );
    
  }
  canvas_occluder_polygon_create() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_canvas_occluder_polygon_create,
      this._owner,
			Variant.Type.RID
    ,
      
    );
    
  }
  canvas_occluder_polygon_set_shape(_occluder_polygon, _shape, _closed) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_canvas_occluder_polygon_set_shape,
      this._owner,
      _occluder_polygon, _shape, _closed
    );
    
  }
  canvas_occluder_polygon_set_cull_mode(_occluder_polygon, _mode) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_canvas_occluder_polygon_set_cull_mode,
      this._owner,
      _occluder_polygon, _mode
    );
    
  }
  canvas_set_shadow_texture_size(_size) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_canvas_set_shadow_texture_size,
      this._owner,
      _size
    );
    
  }
  global_shader_parameter_add(_name, _type, _default_value) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_global_shader_parameter_add,
      this._owner,
      _name, _type, _default_value
    );
    
  }
  global_shader_parameter_remove(_name) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_global_shader_parameter_remove,
      this._owner,
      _name
    );
    
  }
  global_shader_parameter_get_list() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_global_shader_parameter_get_list,
      this._owner,
			Variant.INT,
      
    );
    
  }
  global_shader_parameter_set(_name, _value) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_global_shader_parameter_set,
      this._owner,
      _name, _value
    );
    
  }
  global_shader_parameter_set_override(_name, _value) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_global_shader_parameter_set_override,
      this._owner,
      _name, _value
    );
    
  }
  global_shader_parameter_get(_name) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_global_shader_parameter_get,
      this._owner,
			Variant.Type.VARIANT
    ,
      _name
    );
    
  }
  global_shader_parameter_get_type(_name) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_global_shader_parameter_get_type,
      this._owner,
			Variant.INT,
      _name
    );
    
  }
  free_rid(_rid) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_free_rid,
      this._owner,
      _rid
    );
    
  }
  request_frame_drawn_callback(_callable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_request_frame_drawn_callback,
      this._owner,
      _callable
    );
    
  }
  has_changed() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_has_changed,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  get_rendering_info(_info) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_rendering_info,
      this._owner,
			Variant.Type.INT,
      _info
    );
    
  }
  get_video_adapter_name() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_video_adapter_name,
      this._owner,
			Variant.Type.STRING
    ,
      
    );
    
  }
  get_video_adapter_vendor() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_video_adapter_vendor,
      this._owner,
			Variant.Type.STRING
    ,
      
    );
    
  }
  get_video_adapter_type() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_video_adapter_type,
      this._owner,
			Variant.INT,
      
    );
    
  }
  get_video_adapter_api_version() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_video_adapter_api_version,
      this._owner,
			Variant.Type.STRING
    ,
      
    );
    
  }
  make_sphere_mesh(_latitudes, _longitudes, _radius) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_make_sphere_mesh,
      this._owner,
			Variant.Type.RID
    ,
      _latitudes, _longitudes, _radius
    );
    
  }
  get_test_cube() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_test_cube,
      this._owner,
			Variant.Type.RID
    ,
      
    );
    
  }
  get_test_texture() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_test_texture,
      this._owner,
			Variant.Type.RID
    ,
      
    );
    
  }
  get_white_texture() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_white_texture,
      this._owner,
			Variant.Type.RID
    ,
      
    );
    
  }
  set_boot_image(_image, _color, _scale, _use_filter) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_boot_image,
      this._owner,
      _image, _color, _scale, _use_filter
    );
    
  }
  get_default_clear_color() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_default_clear_color,
      this._owner,
			Variant.Type.COLOR
    ,
      
    );
    
  }
  set_default_clear_color(_color) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_default_clear_color,
      this._owner,
      _color
    );
    
  }
  has_os_feature(_feature) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_has_os_feature,
      this._owner,
			Variant.Type.BOOL,
      _feature
    );
    
  }
  set_debug_generate_wireframes(_generate) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_debug_generate_wireframes,
      this._owner,
      _generate
    );
    
  }
  is_render_loop_enabled() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_render_loop_enabled,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_render_loop_enabled(_enabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_render_loop_enabled,
      this._owner,
      _enabled
    );
    
  }
  get_frame_setup_time_cpu() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_frame_setup_time_cpu,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  force_sync() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_force_sync,
      this._owner,
      
    );
    
  }
  force_draw(_swap_buffers, _frame_step) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_force_draw,
      this._owner,
      _swap_buffers, _frame_step
    );
    
  }
  get_rendering_device() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_rendering_device,
      this._owner,
			Variant.INT,
      
    );
    
  }
  create_local_rendering_device() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_create_local_rendering_device,
      this._owner,
			Variant.INT,
      
    );
    
  }
  is_on_render_thread() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_on_render_thread,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  call_on_render_thread(_callable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_call_on_render_thread,
      this._owner,
      _callable
    );
    
  }
  has_feature(_feature) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_has_feature,
      this._owner,
			Variant.Type.BOOL,
      _feature
    );
    
  }
  static TextureLayeredType = {
    TEXTURE_LAYERED_2D_ARRAY: 0,
    TEXTURE_LAYERED_CUBEMAP: 1,
    TEXTURE_LAYERED_CUBEMAP_ARRAY: 2,
  }
  static CubeMapLayer = {
    CUBEMAP_LAYER_LEFT: 0,
    CUBEMAP_LAYER_RIGHT: 1,
    CUBEMAP_LAYER_BOTTOM: 2,
    CUBEMAP_LAYER_TOP: 3,
    CUBEMAP_LAYER_FRONT: 4,
    CUBEMAP_LAYER_BACK: 5,
  }
  static ShaderMode = {
    SHADER_SPATIAL: 0,
    SHADER_CANVAS_ITEM: 1,
    SHADER_PARTICLES: 2,
    SHADER_SKY: 3,
    SHADER_FOG: 4,
    SHADER_MAX: 5,
  }
  static ArrayType = {
    ARRAY_VERTEX: 0,
    ARRAY_NORMAL: 1,
    ARRAY_TANGENT: 2,
    ARRAY_COLOR: 3,
    ARRAY_TEX_UV: 4,
    ARRAY_TEX_UV2: 5,
    ARRAY_CUSTOM0: 6,
    ARRAY_CUSTOM1: 7,
    ARRAY_CUSTOM2: 8,
    ARRAY_CUSTOM3: 9,
    ARRAY_BONES: 10,
    ARRAY_WEIGHTS: 11,
    ARRAY_INDEX: 12,
    ARRAY_MAX: 13,
  }
  static ArrayCustomFormat = {
    ARRAY_CUSTOM_RGBA8_UNORM: 0,
    ARRAY_CUSTOM_RGBA8_SNORM: 1,
    ARRAY_CUSTOM_RG_HALF: 2,
    ARRAY_CUSTOM_RGBA_HALF: 3,
    ARRAY_CUSTOM_R_FLOAT: 4,
    ARRAY_CUSTOM_RG_FLOAT: 5,
    ARRAY_CUSTOM_RGB_FLOAT: 6,
    ARRAY_CUSTOM_RGBA_FLOAT: 7,
    ARRAY_CUSTOM_MAX: 8,
  }
  static ArrayFormat = {
    ARRAY_FORMAT_VERTEX: 1,
    ARRAY_FORMAT_NORMAL: 2,
    ARRAY_FORMAT_TANGENT: 4,
    ARRAY_FORMAT_COLOR: 8,
    ARRAY_FORMAT_TEX_UV: 16,
    ARRAY_FORMAT_TEX_UV2: 32,
    ARRAY_FORMAT_CUSTOM0: 64,
    ARRAY_FORMAT_CUSTOM1: 128,
    ARRAY_FORMAT_CUSTOM2: 256,
    ARRAY_FORMAT_CUSTOM3: 512,
    ARRAY_FORMAT_BONES: 1024,
    ARRAY_FORMAT_WEIGHTS: 2048,
    ARRAY_FORMAT_INDEX: 4096,
    ARRAY_FORMAT_BLEND_SHAPE_MASK: 7,
    ARRAY_FORMAT_CUSTOM_BASE: 13,
    ARRAY_FORMAT_CUSTOM_BITS: 3,
    ARRAY_FORMAT_CUSTOM0_SHIFT: 13,
    ARRAY_FORMAT_CUSTOM1_SHIFT: 16,
    ARRAY_FORMAT_CUSTOM2_SHIFT: 19,
    ARRAY_FORMAT_CUSTOM3_SHIFT: 22,
    ARRAY_FORMAT_CUSTOM_MASK: 7,
    ARRAY_COMPRESS_FLAGS_BASE: 25,
    ARRAY_FLAG_USE_2D_VERTICES: 33554432,
    ARRAY_FLAG_USE_DYNAMIC_UPDATE: 67108864,
    ARRAY_FLAG_USE_8_BONE_WEIGHTS: 134217728,
    ARRAY_FLAG_USES_EMPTY_VERTEX_ARRAY: 268435456,
    ARRAY_FLAG_COMPRESS_ATTRIBUTES: 536870912,
    ARRAY_FLAG_FORMAT_VERSION_BASE: 35,
    ARRAY_FLAG_FORMAT_VERSION_SHIFT: 35,
    ARRAY_FLAG_FORMAT_VERSION_1: 0,
    ARRAY_FLAG_FORMAT_VERSION_2: 34359738368,
    ARRAY_FLAG_FORMAT_CURRENT_VERSION: 34359738368,
    ARRAY_FLAG_FORMAT_VERSION_MASK: 255,
  }
  static PrimitiveType = {
    PRIMITIVE_POINTS: 0,
    PRIMITIVE_LINES: 1,
    PRIMITIVE_LINE_STRIP: 2,
    PRIMITIVE_TRIANGLES: 3,
    PRIMITIVE_TRIANGLE_STRIP: 4,
    PRIMITIVE_MAX: 5,
  }
  static BlendShapeMode = {
    BLEND_SHAPE_MODE_NORMALIZED: 0,
    BLEND_SHAPE_MODE_RELATIVE: 1,
  }
  static MultimeshTransformFormat = {
    MULTIMESH_TRANSFORM_2D: 0,
    MULTIMESH_TRANSFORM_3D: 1,
  }
  static LightProjectorFilter = {
    LIGHT_PROJECTOR_FILTER_NEAREST: 0,
    LIGHT_PROJECTOR_FILTER_LINEAR: 1,
    LIGHT_PROJECTOR_FILTER_NEAREST_MIPMAPS: 2,
    LIGHT_PROJECTOR_FILTER_LINEAR_MIPMAPS: 3,
    LIGHT_PROJECTOR_FILTER_NEAREST_MIPMAPS_ANISOTROPIC: 4,
    LIGHT_PROJECTOR_FILTER_LINEAR_MIPMAPS_ANISOTROPIC: 5,
  }
  static LightType = {
    LIGHT_DIRECTIONAL: 0,
    LIGHT_OMNI: 1,
    LIGHT_SPOT: 2,
  }
  static LightParam = {
    LIGHT_PARAM_ENERGY: 0,
    LIGHT_PARAM_INDIRECT_ENERGY: 1,
    LIGHT_PARAM_VOLUMETRIC_FOG_ENERGY: 2,
    LIGHT_PARAM_SPECULAR: 3,
    LIGHT_PARAM_RANGE: 4,
    LIGHT_PARAM_SIZE: 5,
    LIGHT_PARAM_ATTENUATION: 6,
    LIGHT_PARAM_SPOT_ANGLE: 7,
    LIGHT_PARAM_SPOT_ATTENUATION: 8,
    LIGHT_PARAM_SHADOW_MAX_DISTANCE: 9,
    LIGHT_PARAM_SHADOW_SPLIT_1_OFFSET: 10,
    LIGHT_PARAM_SHADOW_SPLIT_2_OFFSET: 11,
    LIGHT_PARAM_SHADOW_SPLIT_3_OFFSET: 12,
    LIGHT_PARAM_SHADOW_FADE_START: 13,
    LIGHT_PARAM_SHADOW_NORMAL_BIAS: 14,
    LIGHT_PARAM_SHADOW_BIAS: 15,
    LIGHT_PARAM_SHADOW_PANCAKE_SIZE: 16,
    LIGHT_PARAM_SHADOW_OPACITY: 17,
    LIGHT_PARAM_SHADOW_BLUR: 18,
    LIGHT_PARAM_TRANSMITTANCE_BIAS: 19,
    LIGHT_PARAM_INTENSITY: 20,
    LIGHT_PARAM_MAX: 21,
  }
  static LightBakeMode = {
    LIGHT_BAKE_DISABLED: 0,
    LIGHT_BAKE_STATIC: 1,
    LIGHT_BAKE_DYNAMIC: 2,
  }
  static LightOmniShadowMode = {
    LIGHT_OMNI_SHADOW_DUAL_PARABOLOID: 0,
    LIGHT_OMNI_SHADOW_CUBE: 1,
  }
  static LightDirectionalShadowMode = {
    LIGHT_DIRECTIONAL_SHADOW_ORTHOGONAL: 0,
    LIGHT_DIRECTIONAL_SHADOW_PARALLEL_2_SPLITS: 1,
    LIGHT_DIRECTIONAL_SHADOW_PARALLEL_4_SPLITS: 2,
  }
  static LightDirectionalSkyMode = {
    LIGHT_DIRECTIONAL_SKY_MODE_LIGHT_AND_SKY: 0,
    LIGHT_DIRECTIONAL_SKY_MODE_LIGHT_ONLY: 1,
    LIGHT_DIRECTIONAL_SKY_MODE_SKY_ONLY: 2,
  }
  static ShadowQuality = {
    SHADOW_QUALITY_HARD: 0,
    SHADOW_QUALITY_SOFT_VERY_LOW: 1,
    SHADOW_QUALITY_SOFT_LOW: 2,
    SHADOW_QUALITY_SOFT_MEDIUM: 3,
    SHADOW_QUALITY_SOFT_HIGH: 4,
    SHADOW_QUALITY_SOFT_ULTRA: 5,
    SHADOW_QUALITY_MAX: 6,
  }
  static ReflectionProbeUpdateMode = {
    REFLECTION_PROBE_UPDATE_ONCE: 0,
    REFLECTION_PROBE_UPDATE_ALWAYS: 1,
  }
  static ReflectionProbeAmbientMode = {
    REFLECTION_PROBE_AMBIENT_DISABLED: 0,
    REFLECTION_PROBE_AMBIENT_ENVIRONMENT: 1,
    REFLECTION_PROBE_AMBIENT_COLOR: 2,
  }
  static DecalTexture = {
    DECAL_TEXTURE_ALBEDO: 0,
    DECAL_TEXTURE_NORMAL: 1,
    DECAL_TEXTURE_ORM: 2,
    DECAL_TEXTURE_EMISSION: 3,
    DECAL_TEXTURE_MAX: 4,
  }
  static DecalFilter = {
    DECAL_FILTER_NEAREST: 0,
    DECAL_FILTER_LINEAR: 1,
    DECAL_FILTER_NEAREST_MIPMAPS: 2,
    DECAL_FILTER_LINEAR_MIPMAPS: 3,
    DECAL_FILTER_NEAREST_MIPMAPS_ANISOTROPIC: 4,
    DECAL_FILTER_LINEAR_MIPMAPS_ANISOTROPIC: 5,
  }
  static VoxelGIQuality = {
    VOXEL_GI_QUALITY_LOW: 0,
    VOXEL_GI_QUALITY_HIGH: 1,
  }
  static ParticlesMode = {
    PARTICLES_MODE_2D: 0,
    PARTICLES_MODE_3D: 1,
  }
  static ParticlesTransformAlign = {
    PARTICLES_TRANSFORM_ALIGN_DISABLED: 0,
    PARTICLES_TRANSFORM_ALIGN_Z_BILLBOARD: 1,
    PARTICLES_TRANSFORM_ALIGN_Y_TO_VELOCITY: 2,
    PARTICLES_TRANSFORM_ALIGN_Z_BILLBOARD_Y_TO_VELOCITY: 3,
  }
  static ParticlesDrawOrder = {
    PARTICLES_DRAW_ORDER_INDEX: 0,
    PARTICLES_DRAW_ORDER_LIFETIME: 1,
    PARTICLES_DRAW_ORDER_REVERSE_LIFETIME: 2,
    PARTICLES_DRAW_ORDER_VIEW_DEPTH: 3,
  }
  static ParticlesCollisionType = {
    PARTICLES_COLLISION_TYPE_SPHERE_ATTRACT: 0,
    PARTICLES_COLLISION_TYPE_BOX_ATTRACT: 1,
    PARTICLES_COLLISION_TYPE_VECTOR_FIELD_ATTRACT: 2,
    PARTICLES_COLLISION_TYPE_SPHERE_COLLIDE: 3,
    PARTICLES_COLLISION_TYPE_BOX_COLLIDE: 4,
    PARTICLES_COLLISION_TYPE_SDF_COLLIDE: 5,
    PARTICLES_COLLISION_TYPE_HEIGHTFIELD_COLLIDE: 6,
  }
  static ParticlesCollisionHeightfieldResolution = {
    PARTICLES_COLLISION_HEIGHTFIELD_RESOLUTION_256: 0,
    PARTICLES_COLLISION_HEIGHTFIELD_RESOLUTION_512: 1,
    PARTICLES_COLLISION_HEIGHTFIELD_RESOLUTION_1024: 2,
    PARTICLES_COLLISION_HEIGHTFIELD_RESOLUTION_2048: 3,
    PARTICLES_COLLISION_HEIGHTFIELD_RESOLUTION_4096: 4,
    PARTICLES_COLLISION_HEIGHTFIELD_RESOLUTION_8192: 5,
    PARTICLES_COLLISION_HEIGHTFIELD_RESOLUTION_MAX: 6,
  }
  static FogVolumeShape = {
    FOG_VOLUME_SHAPE_ELLIPSOID: 0,
    FOG_VOLUME_SHAPE_CONE: 1,
    FOG_VOLUME_SHAPE_CYLINDER: 2,
    FOG_VOLUME_SHAPE_BOX: 3,
    FOG_VOLUME_SHAPE_WORLD: 4,
    FOG_VOLUME_SHAPE_MAX: 5,
  }
  static ViewportScaling3DMode = {
    VIEWPORT_SCALING_3D_MODE_BILINEAR: 0,
    VIEWPORT_SCALING_3D_MODE_FSR: 1,
    VIEWPORT_SCALING_3D_MODE_FSR2: 2,
    VIEWPORT_SCALING_3D_MODE_MAX: 3,
  }
  static ViewportUpdateMode = {
    VIEWPORT_UPDATE_DISABLED: 0,
    VIEWPORT_UPDATE_ONCE: 1,
    VIEWPORT_UPDATE_WHEN_VISIBLE: 2,
    VIEWPORT_UPDATE_WHEN_PARENT_VISIBLE: 3,
    VIEWPORT_UPDATE_ALWAYS: 4,
  }
  static ViewportClearMode = {
    VIEWPORT_CLEAR_ALWAYS: 0,
    VIEWPORT_CLEAR_NEVER: 1,
    VIEWPORT_CLEAR_ONLY_NEXT_FRAME: 2,
  }
  static ViewportEnvironmentMode = {
    VIEWPORT_ENVIRONMENT_DISABLED: 0,
    VIEWPORT_ENVIRONMENT_ENABLED: 1,
    VIEWPORT_ENVIRONMENT_INHERIT: 2,
    VIEWPORT_ENVIRONMENT_MAX: 3,
  }
  static ViewportSDFOversize = {
    VIEWPORT_SDF_OVERSIZE_100_PERCENT: 0,
    VIEWPORT_SDF_OVERSIZE_120_PERCENT: 1,
    VIEWPORT_SDF_OVERSIZE_150_PERCENT: 2,
    VIEWPORT_SDF_OVERSIZE_200_PERCENT: 3,
    VIEWPORT_SDF_OVERSIZE_MAX: 4,
  }
  static ViewportSDFScale = {
    VIEWPORT_SDF_SCALE_100_PERCENT: 0,
    VIEWPORT_SDF_SCALE_50_PERCENT: 1,
    VIEWPORT_SDF_SCALE_25_PERCENT: 2,
    VIEWPORT_SDF_SCALE_MAX: 3,
  }
  static ViewportMSAA = {
    VIEWPORT_MSAA_DISABLED: 0,
    VIEWPORT_MSAA_2X: 1,
    VIEWPORT_MSAA_4X: 2,
    VIEWPORT_MSAA_8X: 3,
    VIEWPORT_MSAA_MAX: 4,
  }
  static ViewportScreenSpaceAA = {
    VIEWPORT_SCREEN_SPACE_AA_DISABLED: 0,
    VIEWPORT_SCREEN_SPACE_AA_FXAA: 1,
    VIEWPORT_SCREEN_SPACE_AA_MAX: 2,
  }
  static ViewportOcclusionCullingBuildQuality = {
    VIEWPORT_OCCLUSION_BUILD_QUALITY_LOW: 0,
    VIEWPORT_OCCLUSION_BUILD_QUALITY_MEDIUM: 1,
    VIEWPORT_OCCLUSION_BUILD_QUALITY_HIGH: 2,
  }
  static ViewportRenderInfo = {
    VIEWPORT_RENDER_INFO_OBJECTS_IN_FRAME: 0,
    VIEWPORT_RENDER_INFO_PRIMITIVES_IN_FRAME: 1,
    VIEWPORT_RENDER_INFO_DRAW_CALLS_IN_FRAME: 2,
    VIEWPORT_RENDER_INFO_MAX: 3,
  }
  static ViewportRenderInfoType = {
    VIEWPORT_RENDER_INFO_TYPE_VISIBLE: 0,
    VIEWPORT_RENDER_INFO_TYPE_SHADOW: 1,
    VIEWPORT_RENDER_INFO_TYPE_CANVAS: 2,
    VIEWPORT_RENDER_INFO_TYPE_MAX: 3,
  }
  static ViewportDebugDraw = {
    VIEWPORT_DEBUG_DRAW_DISABLED: 0,
    VIEWPORT_DEBUG_DRAW_UNSHADED: 1,
    VIEWPORT_DEBUG_DRAW_LIGHTING: 2,
    VIEWPORT_DEBUG_DRAW_OVERDRAW: 3,
    VIEWPORT_DEBUG_DRAW_WIREFRAME: 4,
    VIEWPORT_DEBUG_DRAW_NORMAL_BUFFER: 5,
    VIEWPORT_DEBUG_DRAW_VOXEL_GI_ALBEDO: 6,
    VIEWPORT_DEBUG_DRAW_VOXEL_GI_LIGHTING: 7,
    VIEWPORT_DEBUG_DRAW_VOXEL_GI_EMISSION: 8,
    VIEWPORT_DEBUG_DRAW_SHADOW_ATLAS: 9,
    VIEWPORT_DEBUG_DRAW_DIRECTIONAL_SHADOW_ATLAS: 10,
    VIEWPORT_DEBUG_DRAW_SCENE_LUMINANCE: 11,
    VIEWPORT_DEBUG_DRAW_SSAO: 12,
    VIEWPORT_DEBUG_DRAW_SSIL: 13,
    VIEWPORT_DEBUG_DRAW_PSSM_SPLITS: 14,
    VIEWPORT_DEBUG_DRAW_DECAL_ATLAS: 15,
    VIEWPORT_DEBUG_DRAW_SDFGI: 16,
    VIEWPORT_DEBUG_DRAW_SDFGI_PROBES: 17,
    VIEWPORT_DEBUG_DRAW_GI_BUFFER: 18,
    VIEWPORT_DEBUG_DRAW_DISABLE_LOD: 19,
    VIEWPORT_DEBUG_DRAW_CLUSTER_OMNI_LIGHTS: 20,
    VIEWPORT_DEBUG_DRAW_CLUSTER_SPOT_LIGHTS: 21,
    VIEWPORT_DEBUG_DRAW_CLUSTER_DECALS: 22,
    VIEWPORT_DEBUG_DRAW_CLUSTER_REFLECTION_PROBES: 23,
    VIEWPORT_DEBUG_DRAW_OCCLUDERS: 24,
    VIEWPORT_DEBUG_DRAW_MOTION_VECTORS: 25,
    VIEWPORT_DEBUG_DRAW_INTERNAL_BUFFER: 26,
  }
  static ViewportVRSMode = {
    VIEWPORT_VRS_DISABLED: 0,
    VIEWPORT_VRS_TEXTURE: 1,
    VIEWPORT_VRS_XR: 2,
    VIEWPORT_VRS_MAX: 3,
  }
  static ViewportVRSUpdateMode = {
    VIEWPORT_VRS_UPDATE_DISABLED: 0,
    VIEWPORT_VRS_UPDATE_ONCE: 1,
    VIEWPORT_VRS_UPDATE_ALWAYS: 2,
    VIEWPORT_VRS_UPDATE_MAX: 3,
  }
  static SkyMode = {
    SKY_MODE_AUTOMATIC: 0,
    SKY_MODE_QUALITY: 1,
    SKY_MODE_INCREMENTAL: 2,
    SKY_MODE_REALTIME: 3,
  }
  static CompositorEffectFlags = {
    COMPOSITOR_EFFECT_FLAG_ACCESS_RESOLVED_COLOR: 1,
    COMPOSITOR_EFFECT_FLAG_ACCESS_RESOLVED_DEPTH: 2,
    COMPOSITOR_EFFECT_FLAG_NEEDS_MOTION_VECTORS: 4,
    COMPOSITOR_EFFECT_FLAG_NEEDS_ROUGHNESS: 8,
    COMPOSITOR_EFFECT_FLAG_NEEDS_SEPARATE_SPECULAR: 16,
  }
  static CompositorEffectCallbackType = {
    COMPOSITOR_EFFECT_CALLBACK_TYPE_PRE_OPAQUE: 0,
    COMPOSITOR_EFFECT_CALLBACK_TYPE_POST_OPAQUE: 1,
    COMPOSITOR_EFFECT_CALLBACK_TYPE_POST_SKY: 2,
    COMPOSITOR_EFFECT_CALLBACK_TYPE_PRE_TRANSPARENT: 3,
    COMPOSITOR_EFFECT_CALLBACK_TYPE_POST_TRANSPARENT: 4,
    COMPOSITOR_EFFECT_CALLBACK_TYPE_ANY: -1,
  }
  static EnvironmentBG = {
    ENV_BG_CLEAR_COLOR: 0,
    ENV_BG_COLOR: 1,
    ENV_BG_SKY: 2,
    ENV_BG_CANVAS: 3,
    ENV_BG_KEEP: 4,
    ENV_BG_CAMERA_FEED: 5,
    ENV_BG_MAX: 6,
  }
  static EnvironmentAmbientSource = {
    ENV_AMBIENT_SOURCE_BG: 0,
    ENV_AMBIENT_SOURCE_DISABLED: 1,
    ENV_AMBIENT_SOURCE_COLOR: 2,
    ENV_AMBIENT_SOURCE_SKY: 3,
  }
  static EnvironmentReflectionSource = {
    ENV_REFLECTION_SOURCE_BG: 0,
    ENV_REFLECTION_SOURCE_DISABLED: 1,
    ENV_REFLECTION_SOURCE_SKY: 2,
  }
  static EnvironmentGlowBlendMode = {
    ENV_GLOW_BLEND_MODE_ADDITIVE: 0,
    ENV_GLOW_BLEND_MODE_SCREEN: 1,
    ENV_GLOW_BLEND_MODE_SOFTLIGHT: 2,
    ENV_GLOW_BLEND_MODE_REPLACE: 3,
    ENV_GLOW_BLEND_MODE_MIX: 4,
  }
  static EnvironmentFogMode = {
    ENV_FOG_MODE_EXPONENTIAL: 0,
    ENV_FOG_MODE_DEPTH: 1,
  }
  static EnvironmentToneMapper = {
    ENV_TONE_MAPPER_LINEAR: 0,
    ENV_TONE_MAPPER_REINHARD: 1,
    ENV_TONE_MAPPER_FILMIC: 2,
    ENV_TONE_MAPPER_ACES: 3,
  }
  static EnvironmentSSRRoughnessQuality = {
    ENV_SSR_ROUGHNESS_QUALITY_DISABLED: 0,
    ENV_SSR_ROUGHNESS_QUALITY_LOW: 1,
    ENV_SSR_ROUGHNESS_QUALITY_MEDIUM: 2,
    ENV_SSR_ROUGHNESS_QUALITY_HIGH: 3,
  }
  static EnvironmentSSAOQuality = {
    ENV_SSAO_QUALITY_VERY_LOW: 0,
    ENV_SSAO_QUALITY_LOW: 1,
    ENV_SSAO_QUALITY_MEDIUM: 2,
    ENV_SSAO_QUALITY_HIGH: 3,
    ENV_SSAO_QUALITY_ULTRA: 4,
  }
  static EnvironmentSSILQuality = {
    ENV_SSIL_QUALITY_VERY_LOW: 0,
    ENV_SSIL_QUALITY_LOW: 1,
    ENV_SSIL_QUALITY_MEDIUM: 2,
    ENV_SSIL_QUALITY_HIGH: 3,
    ENV_SSIL_QUALITY_ULTRA: 4,
  }
  static EnvironmentSDFGIYScale = {
    ENV_SDFGI_Y_SCALE_50_PERCENT: 0,
    ENV_SDFGI_Y_SCALE_75_PERCENT: 1,
    ENV_SDFGI_Y_SCALE_100_PERCENT: 2,
  }
  static EnvironmentSDFGIRayCount = {
    ENV_SDFGI_RAY_COUNT_4: 0,
    ENV_SDFGI_RAY_COUNT_8: 1,
    ENV_SDFGI_RAY_COUNT_16: 2,
    ENV_SDFGI_RAY_COUNT_32: 3,
    ENV_SDFGI_RAY_COUNT_64: 4,
    ENV_SDFGI_RAY_COUNT_96: 5,
    ENV_SDFGI_RAY_COUNT_128: 6,
    ENV_SDFGI_RAY_COUNT_MAX: 7,
  }
  static EnvironmentSDFGIFramesToConverge = {
    ENV_SDFGI_CONVERGE_IN_5_FRAMES: 0,
    ENV_SDFGI_CONVERGE_IN_10_FRAMES: 1,
    ENV_SDFGI_CONVERGE_IN_15_FRAMES: 2,
    ENV_SDFGI_CONVERGE_IN_20_FRAMES: 3,
    ENV_SDFGI_CONVERGE_IN_25_FRAMES: 4,
    ENV_SDFGI_CONVERGE_IN_30_FRAMES: 5,
    ENV_SDFGI_CONVERGE_MAX: 6,
  }
  static EnvironmentSDFGIFramesToUpdateLight = {
    ENV_SDFGI_UPDATE_LIGHT_IN_1_FRAME: 0,
    ENV_SDFGI_UPDATE_LIGHT_IN_2_FRAMES: 1,
    ENV_SDFGI_UPDATE_LIGHT_IN_4_FRAMES: 2,
    ENV_SDFGI_UPDATE_LIGHT_IN_8_FRAMES: 3,
    ENV_SDFGI_UPDATE_LIGHT_IN_16_FRAMES: 4,
    ENV_SDFGI_UPDATE_LIGHT_MAX: 5,
  }
  static SubSurfaceScatteringQuality = {
    SUB_SURFACE_SCATTERING_QUALITY_DISABLED: 0,
    SUB_SURFACE_SCATTERING_QUALITY_LOW: 1,
    SUB_SURFACE_SCATTERING_QUALITY_MEDIUM: 2,
    SUB_SURFACE_SCATTERING_QUALITY_HIGH: 3,
  }
  static DOFBokehShape = {
    DOF_BOKEH_BOX: 0,
    DOF_BOKEH_HEXAGON: 1,
    DOF_BOKEH_CIRCLE: 2,
  }
  static DOFBlurQuality = {
    DOF_BLUR_QUALITY_VERY_LOW: 0,
    DOF_BLUR_QUALITY_LOW: 1,
    DOF_BLUR_QUALITY_MEDIUM: 2,
    DOF_BLUR_QUALITY_HIGH: 3,
  }
  static InstanceType = {
    INSTANCE_NONE: 0,
    INSTANCE_MESH: 1,
    INSTANCE_MULTIMESH: 2,
    INSTANCE_PARTICLES: 3,
    INSTANCE_PARTICLES_COLLISION: 4,
    INSTANCE_LIGHT: 5,
    INSTANCE_REFLECTION_PROBE: 6,
    INSTANCE_DECAL: 7,
    INSTANCE_VOXEL_GI: 8,
    INSTANCE_LIGHTMAP: 9,
    INSTANCE_OCCLUDER: 10,
    INSTANCE_VISIBLITY_NOTIFIER: 11,
    INSTANCE_FOG_VOLUME: 12,
    INSTANCE_MAX: 13,
    INSTANCE_GEOMETRY_MASK: 14,
  }
  static InstanceFlags = {
    INSTANCE_FLAG_USE_BAKED_LIGHT: 0,
    INSTANCE_FLAG_USE_DYNAMIC_GI: 1,
    INSTANCE_FLAG_DRAW_NEXT_FRAME_IF_VISIBLE: 2,
    INSTANCE_FLAG_IGNORE_OCCLUSION_CULLING: 3,
    INSTANCE_FLAG_MAX: 4,
  }
  static ShadowCastingSetting = {
    SHADOW_CASTING_SETTING_OFF: 0,
    SHADOW_CASTING_SETTING_ON: 1,
    SHADOW_CASTING_SETTING_DOUBLE_SIDED: 2,
    SHADOW_CASTING_SETTING_SHADOWS_ONLY: 3,
  }
  static VisibilityRangeFadeMode = {
    VISIBILITY_RANGE_FADE_DISABLED: 0,
    VISIBILITY_RANGE_FADE_SELF: 1,
    VISIBILITY_RANGE_FADE_DEPENDENCIES: 2,
  }
  static BakeChannels = {
    BAKE_CHANNEL_ALBEDO_ALPHA: 0,
    BAKE_CHANNEL_NORMAL: 1,
    BAKE_CHANNEL_ORM: 2,
    BAKE_CHANNEL_EMISSION: 3,
  }
  static CanvasTextureChannel = {
    CANVAS_TEXTURE_CHANNEL_DIFFUSE: 0,
    CANVAS_TEXTURE_CHANNEL_NORMAL: 1,
    CANVAS_TEXTURE_CHANNEL_SPECULAR: 2,
  }
  static NinePatchAxisMode = {
    NINE_PATCH_STRETCH: 0,
    NINE_PATCH_TILE: 1,
    NINE_PATCH_TILE_FIT: 2,
  }
  static CanvasItemTextureFilter = {
    CANVAS_ITEM_TEXTURE_FILTER_DEFAULT: 0,
    CANVAS_ITEM_TEXTURE_FILTER_NEAREST: 1,
    CANVAS_ITEM_TEXTURE_FILTER_LINEAR: 2,
    CANVAS_ITEM_TEXTURE_FILTER_NEAREST_WITH_MIPMAPS: 3,
    CANVAS_ITEM_TEXTURE_FILTER_LINEAR_WITH_MIPMAPS: 4,
    CANVAS_ITEM_TEXTURE_FILTER_NEAREST_WITH_MIPMAPS_ANISOTROPIC: 5,
    CANVAS_ITEM_TEXTURE_FILTER_LINEAR_WITH_MIPMAPS_ANISOTROPIC: 6,
    CANVAS_ITEM_TEXTURE_FILTER_MAX: 7,
  }
  static CanvasItemTextureRepeat = {
    CANVAS_ITEM_TEXTURE_REPEAT_DEFAULT: 0,
    CANVAS_ITEM_TEXTURE_REPEAT_DISABLED: 1,
    CANVAS_ITEM_TEXTURE_REPEAT_ENABLED: 2,
    CANVAS_ITEM_TEXTURE_REPEAT_MIRROR: 3,
    CANVAS_ITEM_TEXTURE_REPEAT_MAX: 4,
  }
  static CanvasGroupMode = {
    CANVAS_GROUP_MODE_DISABLED: 0,
    CANVAS_GROUP_MODE_CLIP_ONLY: 1,
    CANVAS_GROUP_MODE_CLIP_AND_DRAW: 2,
    CANVAS_GROUP_MODE_TRANSPARENT: 3,
  }
  static CanvasLightMode = {
    CANVAS_LIGHT_MODE_POINT: 0,
    CANVAS_LIGHT_MODE_DIRECTIONAL: 1,
  }
  static CanvasLightBlendMode = {
    CANVAS_LIGHT_BLEND_MODE_ADD: 0,
    CANVAS_LIGHT_BLEND_MODE_SUB: 1,
    CANVAS_LIGHT_BLEND_MODE_MIX: 2,
  }
  static CanvasLightShadowFilter = {
    CANVAS_LIGHT_FILTER_NONE: 0,
    CANVAS_LIGHT_FILTER_PCF5: 1,
    CANVAS_LIGHT_FILTER_PCF13: 2,
    CANVAS_LIGHT_FILTER_MAX: 3,
  }
  static CanvasOccluderPolygonCullMode = {
    CANVAS_OCCLUDER_POLYGON_CULL_DISABLED: 0,
    CANVAS_OCCLUDER_POLYGON_CULL_CLOCKWISE: 1,
    CANVAS_OCCLUDER_POLYGON_CULL_COUNTER_CLOCKWISE: 2,
  }
  static GlobalShaderParameterType = {
    GLOBAL_VAR_TYPE_BOOL: 0,
    GLOBAL_VAR_TYPE_BVEC2: 1,
    GLOBAL_VAR_TYPE_BVEC3: 2,
    GLOBAL_VAR_TYPE_BVEC4: 3,
    GLOBAL_VAR_TYPE_INT: 4,
    GLOBAL_VAR_TYPE_IVEC2: 5,
    GLOBAL_VAR_TYPE_IVEC3: 6,
    GLOBAL_VAR_TYPE_IVEC4: 7,
    GLOBAL_VAR_TYPE_RECT2I: 8,
    GLOBAL_VAR_TYPE_UINT: 9,
    GLOBAL_VAR_TYPE_UVEC2: 10,
    GLOBAL_VAR_TYPE_UVEC3: 11,
    GLOBAL_VAR_TYPE_UVEC4: 12,
    GLOBAL_VAR_TYPE_FLOAT: 13,
    GLOBAL_VAR_TYPE_VEC2: 14,
    GLOBAL_VAR_TYPE_VEC3: 15,
    GLOBAL_VAR_TYPE_VEC4: 16,
    GLOBAL_VAR_TYPE_COLOR: 17,
    GLOBAL_VAR_TYPE_RECT2: 18,
    GLOBAL_VAR_TYPE_MAT2: 19,
    GLOBAL_VAR_TYPE_MAT3: 20,
    GLOBAL_VAR_TYPE_MAT4: 21,
    GLOBAL_VAR_TYPE_TRANSFORM_2D: 22,
    GLOBAL_VAR_TYPE_TRANSFORM: 23,
    GLOBAL_VAR_TYPE_SAMPLER2D: 24,
    GLOBAL_VAR_TYPE_SAMPLER2DARRAY: 25,
    GLOBAL_VAR_TYPE_SAMPLER3D: 26,
    GLOBAL_VAR_TYPE_SAMPLERCUBE: 27,
    GLOBAL_VAR_TYPE_MAX: 28,
  }
  static RenderingInfo = {
    RENDERING_INFO_TOTAL_OBJECTS_IN_FRAME: 0,
    RENDERING_INFO_TOTAL_PRIMITIVES_IN_FRAME: 1,
    RENDERING_INFO_TOTAL_DRAW_CALLS_IN_FRAME: 2,
    RENDERING_INFO_TEXTURE_MEM_USED: 3,
    RENDERING_INFO_BUFFER_MEM_USED: 4,
    RENDERING_INFO_VIDEO_MEM_USED: 5,
  }
  static Features = {
    FEATURE_SHADERS: 0,
    FEATURE_MULTITHREADED: 1,
  }
}