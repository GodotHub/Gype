
import { Image } from "@godot/classes/image";
import { RenderingDevice } from "@godot/classes/rendering_device";
import { GodotObject } from "@godot/classes/godot_object";
import { Image } from "@godot/classes/image";

export declare class RenderingServer extends GodotObject{
  public texture_2d_create(_image: Image): RID;
  public texture_2d_layered_create(_layers: GDArray, _layered_type: number): RID;
  public texture_3d_create(_format: number, _width: number, _height: number, _depth: number, _mipmaps: boolean, _data: GDArray): RID;
  public texture_proxy_create(_base: RID): RID;
  public texture_2d_update(_texture: RID, _image: Image, _layer: number): void;
  public texture_3d_update(_texture: RID, _data: GDArray): void;
  public texture_proxy_update(_texture: RID, _proxy_to: RID): void;
  public texture_2d_placeholder_create(): RID;
  public texture_2d_layered_placeholder_create(_layered_type: number): RID;
  public texture_3d_placeholder_create(): RID;
  public texture_2d_get(_texture: RID): Image;
  public texture_2d_layer_get(_texture: RID, _layer: number): Image;
  public texture_3d_get(_texture: RID): GDArray;
  public texture_replace(_texture: RID, _by_texture: RID): void;
  public texture_set_size_override(_texture: RID, _width: number, _height: number): void;
  public texture_set_path(_texture: RID, _path: String | StringName | string): void;
  public texture_get_path(_texture: RID): String;
  public texture_get_format(_texture: RID): number;
  public texture_set_force_redraw_if_visible(_texture: RID, _enable: boolean): void;
  public texture_rd_create(_rd_texture: RID, _layer_type: number): RID;
  public texture_get_rd_texture(_texture: RID, _srgb: boolean): RID;
  public texture_get_native_handle(_texture: RID, _srgb: boolean): number;
  public shader_create(): RID;
  public shader_set_code(_shader: RID, _code: String | StringName | string): void;
  public shader_set_path_hint(_shader: RID, _path: String | StringName | string): void;
  public shader_get_code(_shader: RID): String;
  public get_shader_parameter_list(_shader: RID): GDArray;
  public shader_get_parameter_default(_shader: RID, _name: String | StringName | string): any;
  public shader_set_default_texture_parameter(_shader: RID, _name: String | StringName | string, _texture: RID, _index: number): void;
  public shader_get_default_texture_parameter(_shader: RID, _name: String | StringName | string, _index: number): RID;
  public material_create(): RID;
  public material_set_shader(_shader_material: RID, _shader: RID): void;
  public material_set_param(_material: RID, _parameter: String | StringName | string, _value: any): void;
  public material_get_param(_material: RID, _parameter: String | StringName | string): any;
  public material_set_render_priority(_material: RID, _priority: number): void;
  public material_set_next_pass(_material: RID, _next_material: RID): void;
  public mesh_create_from_surfaces(_surfaces: GDArray, _blend_shape_count: number): RID;
  public mesh_create(): RID;
  public mesh_surface_get_format_offset(_format: number, _vertex_count: number, _array_index: number): number;
  public mesh_surface_get_format_vertex_stride(_format: number, _vertex_count: number): number;
  public mesh_surface_get_format_normal_tangent_stride(_format: number, _vertex_count: number): number;
  public mesh_surface_get_format_attribute_stride(_format: number, _vertex_count: number): number;
  public mesh_surface_get_format_skin_stride(_format: number, _vertex_count: number): number;
  public mesh_add_surface(_mesh: RID, _surface: Dictionary): void;
  public mesh_add_surface_from_arrays(_mesh: RID, _primitive: number, _arrays: GDArray, _blend_shapes: GDArray, _lods: Dictionary, _compress_format: number): void;
  public mesh_get_blend_shape_count(_mesh: RID): number;
  public mesh_set_blend_shape_mode(_mesh: RID, _mode: number): void;
  public mesh_get_blend_shape_mode(_mesh: RID): number;
  public mesh_surface_set_material(_mesh: RID, _surface: number, _material: RID): void;
  public mesh_surface_get_material(_mesh: RID, _surface: number): RID;
  public mesh_get_surface(_mesh: RID, _surface: number): Dictionary;
  public mesh_surface_get_arrays(_mesh: RID, _surface: number): GDArray;
  public mesh_surface_get_blend_shape_arrays(_mesh: RID, _surface: number): GDArray;
  public mesh_get_surface_count(_mesh: RID): number;
  public mesh_set_custom_aabb(_mesh: RID, _aabb: AABB): void;
  public mesh_get_custom_aabb(_mesh: RID): AABB;
  public mesh_clear(_mesh: RID): void;
  public mesh_surface_update_vertex_region(_mesh: RID, _surface: number, _offset: number, _data: PackedByteArray): void;
  public mesh_surface_update_attribute_region(_mesh: RID, _surface: number, _offset: number, _data: PackedByteArray): void;
  public mesh_surface_update_skin_region(_mesh: RID, _surface: number, _offset: number, _data: PackedByteArray): void;
  public mesh_set_shadow_mesh(_mesh: RID, _shadow_mesh: RID): void;
  public multimesh_create(): RID;
  public multimesh_allocate_data(_multimesh: RID, _instances: number, _transform_format: number, _color_format: boolean, _custom_data_format: boolean): void;
  public multimesh_get_instance_count(_multimesh: RID): number;
  public multimesh_set_mesh(_multimesh: RID, _mesh: RID): void;
  public multimesh_instance_set_transform(_multimesh: RID, _index: number, _transform: Transform3D): void;
  public multimesh_instance_set_transform_2d(_multimesh: RID, _index: number, _transform: Transform2D): void;
  public multimesh_instance_set_color(_multimesh: RID, _index: number, _color: Color): void;
  public multimesh_instance_set_custom_data(_multimesh: RID, _index: number, _custom_data: Color): void;
  public multimesh_get_mesh(_multimesh: RID): RID;
  public multimesh_get_aabb(_multimesh: RID): AABB;
  public multimesh_set_custom_aabb(_multimesh: RID, _aabb: AABB): void;
  public multimesh_get_custom_aabb(_multimesh: RID): AABB;
  public multimesh_instance_get_transform(_multimesh: RID, _index: number): Transform3D;
  public multimesh_instance_get_transform_2d(_multimesh: RID, _index: number): Transform2D;
  public multimesh_instance_get_color(_multimesh: RID, _index: number): Color;
  public multimesh_instance_get_custom_data(_multimesh: RID, _index: number): Color;
  public multimesh_set_visible_instances(_multimesh: RID, _visible: number): void;
  public multimesh_get_visible_instances(_multimesh: RID): number;
  public multimesh_set_buffer(_multimesh: RID, _buffer: PackedFloat32Array): void;
  public multimesh_get_buffer(_multimesh: RID): PackedFloat32Array;
  public skeleton_create(): RID;
  public skeleton_allocate_data(_skeleton: RID, _bones: number, _is_2d_skeleton: boolean): void;
  public skeleton_get_bone_count(_skeleton: RID): number;
  public skeleton_bone_set_transform(_skeleton: RID, _bone: number, _transform: Transform3D): void;
  public skeleton_bone_get_transform(_skeleton: RID, _bone: number): Transform3D;
  public skeleton_bone_set_transform_2d(_skeleton: RID, _bone: number, _transform: Transform2D): void;
  public skeleton_bone_get_transform_2d(_skeleton: RID, _bone: number): Transform2D;
  public skeleton_set_base_transform_2d(_skeleton: RID, _base_transform: Transform2D): void;
  public directional_light_create(): RID;
  public omni_light_create(): RID;
  public spot_light_create(): RID;
  public light_set_color(_light: RID, _color: Color): void;
  public light_set_param(_light: RID, _param: number, _value: number): void;
  public light_set_shadow(_light: RID, _enabled: boolean): void;
  public light_set_projector(_light: RID, _texture: RID): void;
  public light_set_negative(_light: RID, _enable: boolean): void;
  public light_set_cull_mask(_light: RID, _mask: number): void;
  public light_set_distance_fade(_decal: RID, _enabled: boolean, _begin: number, _shadow: number, _length: number): void;
  public light_set_reverse_cull_face_mode(_light: RID, _enabled: boolean): void;
  public light_set_bake_mode(_light: RID, _bake_mode: number): void;
  public light_set_max_sdfgi_cascade(_light: RID, _cascade: number): void;
  public light_omni_set_shadow_mode(_light: RID, _mode: number): void;
  public light_directional_set_shadow_mode(_light: RID, _mode: number): void;
  public light_directional_set_blend_splits(_light: RID, _enable: boolean): void;
  public light_directional_set_sky_mode(_light: RID, _mode: number): void;
  public light_projectors_set_filter(_filter: number): void;
  public positional_soft_shadow_filter_set_quality(_quality: number): void;
  public directional_soft_shadow_filter_set_quality(_quality: number): void;
  public directional_shadow_atlas_set_size(_size: number, _is_16bits: boolean): void;
  public reflection_probe_create(): RID;
  public reflection_probe_set_update_mode(_probe: RID, _mode: number): void;
  public reflection_probe_set_intensity(_probe: RID, _intensity: number): void;
  public reflection_probe_set_ambient_mode(_probe: RID, _mode: number): void;
  public reflection_probe_set_ambient_color(_probe: RID, _color: Color): void;
  public reflection_probe_set_ambient_energy(_probe: RID, _energy: number): void;
  public reflection_probe_set_max_distance(_probe: RID, _distance: number): void;
  public reflection_probe_set_size(_probe: RID, _size: Vector3): void;
  public reflection_probe_set_origin_offset(_probe: RID, _offset: Vector3): void;
  public reflection_probe_set_as_interior(_probe: RID, _enable: boolean): void;
  public reflection_probe_set_enable_box_projection(_probe: RID, _enable: boolean): void;
  public reflection_probe_set_enable_shadows(_probe: RID, _enable: boolean): void;
  public reflection_probe_set_cull_mask(_probe: RID, _layers: number): void;
  public reflection_probe_set_reflection_mask(_probe: RID, _layers: number): void;
  public reflection_probe_set_resolution(_probe: RID, _resolution: number): void;
  public reflection_probe_set_mesh_lod_threshold(_probe: RID, _pixels: number): void;
  public decal_create(): RID;
  public decal_set_size(_decal: RID, _size: Vector3): void;
  public decal_set_texture(_decal: RID, _type: number, _texture: RID): void;
  public decal_set_emission_energy(_decal: RID, _energy: number): void;
  public decal_set_albedo_mix(_decal: RID, _albedo_mix: number): void;
  public decal_set_modulate(_decal: RID, _color: Color): void;
  public decal_set_cull_mask(_decal: RID, _mask: number): void;
  public decal_set_distance_fade(_decal: RID, _enabled: boolean, _begin: number, _length: number): void;
  public decal_set_fade(_decal: RID, _above: number, _below: number): void;
  public decal_set_normal_fade(_decal: RID, _fade: number): void;
  public decals_set_filter(_filter: number): void;
  public gi_set_use_half_resolution(_half_resolution: boolean): void;
  public voxel_gi_create(): RID;
  public voxel_gi_allocate_data(_voxel_gi: RID, _to_cell_xform: Transform3D, _aabb: AABB, _octree_size: Vector3i, _octree_cells: PackedByteArray, _data_cells: PackedByteArray, _distance_field: PackedByteArray, _level_counts: PackedInt32Array): void;
  public voxel_gi_get_octree_size(_voxel_gi: RID): Vector3i;
  public voxel_gi_get_octree_cells(_voxel_gi: RID): PackedByteArray;
  public voxel_gi_get_data_cells(_voxel_gi: RID): PackedByteArray;
  public voxel_gi_get_distance_field(_voxel_gi: RID): PackedByteArray;
  public voxel_gi_get_level_counts(_voxel_gi: RID): PackedInt32Array;
  public voxel_gi_get_to_cell_xform(_voxel_gi: RID): Transform3D;
  public voxel_gi_set_dynamic_range(_voxel_gi: RID, _range: number): void;
  public voxel_gi_set_propagation(_voxel_gi: RID, _amount: number): void;
  public voxel_gi_set_energy(_voxel_gi: RID, _energy: number): void;
  public voxel_gi_set_baked_exposure_normalization(_voxel_gi: RID, _baked_exposure: number): void;
  public voxel_gi_set_bias(_voxel_gi: RID, _bias: number): void;
  public voxel_gi_set_normal_bias(_voxel_gi: RID, _bias: number): void;
  public voxel_gi_set_interior(_voxel_gi: RID, _enable: boolean): void;
  public voxel_gi_set_use_two_bounces(_voxel_gi: RID, _enable: boolean): void;
  public voxel_gi_set_quality(_quality: number): void;
  public lightmap_create(): RID;
  public lightmap_set_textures(_lightmap: RID, _light: RID, _uses_sh: boolean): void;
  public lightmap_set_probe_bounds(_lightmap: RID, _bounds: AABB): void;
  public lightmap_set_probe_interior(_lightmap: RID, _interior: boolean): void;
  public lightmap_set_probe_capture_data(_lightmap: RID, _points: PackedVector3Array, _point_sh: PackedColorArray, _tetrahedra: PackedInt32Array, _bsp_tree: PackedInt32Array): void;
  public lightmap_get_probe_capture_points(_lightmap: RID): PackedVector3Array;
  public lightmap_get_probe_capture_sh(_lightmap: RID): PackedColorArray;
  public lightmap_get_probe_capture_tetrahedra(_lightmap: RID): PackedInt32Array;
  public lightmap_get_probe_capture_bsp_tree(_lightmap: RID): PackedInt32Array;
  public lightmap_set_baked_exposure_normalization(_lightmap: RID, _baked_exposure: number): void;
  public lightmap_set_probe_capture_update_speed(_speed: number): void;
  public particles_create(): RID;
  public particles_set_mode(_particles: RID, _mode: number): void;
  public particles_set_emitting(_particles: RID, _emitting: boolean): void;
  public particles_get_emitting(_particles: RID): boolean;
  public particles_set_amount(_particles: RID, _amount: number): void;
  public particles_set_amount_ratio(_particles: RID, _ratio: number): void;
  public particles_set_lifetime(_particles: RID, _lifetime: number): void;
  public particles_set_one_shot(_particles: RID, _one_shot: boolean): void;
  public particles_set_pre_process_time(_particles: RID, _time: number): void;
  public particles_set_explosiveness_ratio(_particles: RID, _ratio: number): void;
  public particles_set_randomness_ratio(_particles: RID, _ratio: number): void;
  public particles_set_interp_to_end(_particles: RID, _factor: number): void;
  public particles_set_emitter_velocity(_particles: RID, _velocity: Vector3): void;
  public particles_set_custom_aabb(_particles: RID, _aabb: AABB): void;
  public particles_set_speed_scale(_particles: RID, _scale: number): void;
  public particles_set_use_local_coordinates(_particles: RID, _enable: boolean): void;
  public particles_set_process_material(_particles: RID, _material: RID): void;
  public particles_set_fixed_fps(_particles: RID, _fps: number): void;
  public particles_set_interpolate(_particles: RID, _enable: boolean): void;
  public particles_set_fractional_delta(_particles: RID, _enable: boolean): void;
  public particles_set_collision_base_size(_particles: RID, _size: number): void;
  public particles_set_transform_align(_particles: RID, _align: number): void;
  public particles_set_trails(_particles: RID, _enable: boolean, _length_sec: number): void;
  public particles_set_trail_bind_poses(_particles: RID, _bind_poses: GDArray): void;
  public particles_is_inactive(_particles: RID): boolean;
  public particles_request_process(_particles: RID): void;
  public particles_restart(_particles: RID): void;
  public particles_set_subemitter(_particles: RID, _subemitter_particles: RID): void;
  public particles_emit(_particles: RID, _transform: Transform3D, _velocity: Vector3, _color: Color, _custom: Color, _emit_flags: number): void;
  public particles_set_draw_order(_particles: RID, _order: number): void;
  public particles_set_draw_passes(_particles: RID, _count: number): void;
  public particles_set_draw_pass_mesh(_particles: RID, _pass: number, _mesh: RID): void;
  public particles_get_current_aabb(_particles: RID): AABB;
  public particles_set_emission_transform(_particles: RID, _transform: Transform3D): void;
  public particles_collision_create(): RID;
  public particles_collision_set_collision_type(_particles_collision: RID, _type: number): void;
  public particles_collision_set_cull_mask(_particles_collision: RID, _mask: number): void;
  public particles_collision_set_sphere_radius(_particles_collision: RID, _radius: number): void;
  public particles_collision_set_box_extents(_particles_collision: RID, _extents: Vector3): void;
  public particles_collision_set_attractor_strength(_particles_collision: RID, _strength: number): void;
  public particles_collision_set_attractor_directionality(_particles_collision: RID, _amount: number): void;
  public particles_collision_set_attractor_attenuation(_particles_collision: RID, _curve: number): void;
  public particles_collision_set_field_texture(_particles_collision: RID, _texture: RID): void;
  public particles_collision_height_field_update(_particles_collision: RID): void;
  public particles_collision_set_height_field_resolution(_particles_collision: RID, _resolution: number): void;
  public fog_volume_create(): RID;
  public fog_volume_set_shape(_fog_volume: RID, _shape: number): void;
  public fog_volume_set_size(_fog_volume: RID, _size: Vector3): void;
  public fog_volume_set_material(_fog_volume: RID, _material: RID): void;
  public visibility_notifier_create(): RID;
  public visibility_notifier_set_aabb(_notifier: RID, _aabb: AABB): void;
  public visibility_notifier_set_callbacks(_notifier: RID, _enter_callable: Callable, _exit_callable: Callable): void;
  public occluder_create(): RID;
  public occluder_set_mesh(_occluder: RID, _vertices: PackedVector3Array, _indices: PackedInt32Array): void;
  public camera_create(): RID;
  public camera_set_perspective(_camera: RID, _fovy_degrees: number, _z_near: number, _z_far: number): void;
  public camera_set_orthogonal(_camera: RID, _size: number, _z_near: number, _z_far: number): void;
  public camera_set_frustum(_camera: RID, _size: number, _offset: Vector2, _z_near: number, _z_far: number): void;
  public camera_set_transform(_camera: RID, _transform: Transform3D): void;
  public camera_set_cull_mask(_camera: RID, _layers: number): void;
  public camera_set_environment(_camera: RID, _env: RID): void;
  public camera_set_camera_attributes(_camera: RID, _effects: RID): void;
  public camera_set_compositor(_camera: RID, _compositor: RID): void;
  public camera_set_use_vertical_aspect(_camera: RID, _enable: boolean): void;
  public viewport_create(): RID;
  public viewport_set_use_xr(_viewport: RID, _use_xr: boolean): void;
  public viewport_set_size(_viewport: RID, _width: number, _height: number): void;
  public viewport_set_active(_viewport: RID, _active: boolean): void;
  public viewport_set_parent_viewport(_viewport: RID, _parent_viewport: RID): void;
  public viewport_attach_to_screen(_viewport: RID, _rect: Rect2, _screen: number): void;
  public viewport_set_render_direct_to_screen(_viewport: RID, _enabled: boolean): void;
  public viewport_set_canvas_cull_mask(_viewport: RID, _canvas_cull_mask: number): void;
  public viewport_set_scaling_3d_mode(_viewport: RID, _scaling_3d_mode: number): void;
  public viewport_set_scaling_3d_scale(_viewport: RID, _scale: number): void;
  public viewport_set_fsr_sharpness(_viewport: RID, _sharpness: number): void;
  public viewport_set_texture_mipmap_bias(_viewport: RID, _mipmap_bias: number): void;
  public viewport_set_update_mode(_viewport: RID, _update_mode: number): void;
  public viewport_get_update_mode(_viewport: RID): number;
  public viewport_set_clear_mode(_viewport: RID, _clear_mode: number): void;
  public viewport_get_render_target(_viewport: RID): RID;
  public viewport_get_texture(_viewport: RID): RID;
  public viewport_set_disable_3d(_viewport: RID, _disable: boolean): void;
  public viewport_set_disable_2d(_viewport: RID, _disable: boolean): void;
  public viewport_set_environment_mode(_viewport: RID, _mode: number): void;
  public viewport_attach_camera(_viewport: RID, _camera: RID): void;
  public viewport_set_scenario(_viewport: RID, _scenario: RID): void;
  public viewport_attach_canvas(_viewport: RID, _canvas: RID): void;
  public viewport_remove_canvas(_viewport: RID, _canvas: RID): void;
  public viewport_set_snap_2d_transforms_to_pixel(_viewport: RID, _enabled: boolean): void;
  public viewport_set_snap_2d_vertices_to_pixel(_viewport: RID, _enabled: boolean): void;
  public viewport_set_default_canvas_item_texture_filter(_viewport: RID, _filter: number): void;
  public viewport_set_default_canvas_item_texture_repeat(_viewport: RID, _repeat: number): void;
  public viewport_set_canvas_transform(_viewport: RID, _canvas: RID, _offset: Transform2D): void;
  public viewport_set_canvas_stacking(_viewport: RID, _canvas: RID, _layer: number, _sublayer: number): void;
  public viewport_set_transparent_background(_viewport: RID, _enabled: boolean): void;
  public viewport_set_global_canvas_transform(_viewport: RID, _transform: Transform2D): void;
  public viewport_set_sdf_oversize_and_scale(_viewport: RID, _oversize: number, _scale: number): void;
  public viewport_set_positional_shadow_atlas_size(_viewport: RID, _size: number, _use_16_bits: boolean): void;
  public viewport_set_positional_shadow_atlas_quadrant_subdivision(_viewport: RID, _quadrant: number, _subdivision: number): void;
  public viewport_set_msaa_3d(_viewport: RID, _msaa: number): void;
  public viewport_set_msaa_2d(_viewport: RID, _msaa: number): void;
  public viewport_set_use_hdr_2d(_viewport: RID, _enabled: boolean): void;
  public viewport_set_screen_space_aa(_viewport: RID, _mode: number): void;
  public viewport_set_use_taa(_viewport: RID, _enable: boolean): void;
  public viewport_set_use_debanding(_viewport: RID, _enable: boolean): void;
  public viewport_set_use_occlusion_culling(_viewport: RID, _enable: boolean): void;
  public viewport_set_occlusion_rays_per_thread(_rays_per_thread: number): void;
  public viewport_set_occlusion_culling_build_quality(_quality: number): void;
  public viewport_get_render_info(_viewport: RID, _type: number, _info: number): number;
  public viewport_set_debug_draw(_viewport: RID, _draw: number): void;
  public viewport_set_measure_render_time(_viewport: RID, _enable: boolean): void;
  public viewport_get_measured_render_time_cpu(_viewport: RID): number;
  public viewport_get_measured_render_time_gpu(_viewport: RID): number;
  public viewport_set_vrs_mode(_viewport: RID, _mode: number): void;
  public viewport_set_vrs_update_mode(_viewport: RID, _mode: number): void;
  public viewport_set_vrs_texture(_viewport: RID, _texture: RID): void;
  public sky_create(): RID;
  public sky_set_radiance_size(_sky: RID, _radiance_size: number): void;
  public sky_set_mode(_sky: RID, _mode: number): void;
  public sky_set_material(_sky: RID, _material: RID): void;
  public sky_bake_panorama(_sky: RID, _energy: number, _bake_irradiance: boolean, _size: Vector2i): Image;
  public compositor_effect_create(): RID;
  public compositor_effect_set_enabled(_effect: RID, _enabled: boolean): void;
  public compositor_effect_set_callback(_effect: RID, _callback_type: number, _callback: Callable): void;
  public compositor_effect_set_flag(_effect: RID, _flag: number, _set: boolean): void;
  public compositor_create(): RID;
  public compositor_set_compositor_effects(_compositor: RID, _effects: GDArray): void;
  public environment_create(): RID;
  public environment_set_background(_env: RID, _bg: number): void;
  public environment_set_sky(_env: RID, _sky: RID): void;
  public environment_set_sky_custom_fov(_env: RID, _scale: number): void;
  public environment_set_sky_orientation(_env: RID, _orientation: Basis): void;
  public environment_set_bg_color(_env: RID, _color: Color): void;
  public environment_set_bg_energy(_env: RID, _multiplier: number, _exposure_value: number): void;
  public environment_set_canvas_max_layer(_env: RID, _max_layer: number): void;
  public environment_set_ambient_light(_env: RID, _color: Color, _ambient: number, _energy: number, _sky_contibution: number, _reflection_source: number): void;
  public environment_set_glow(_env: RID, _enable: boolean, _levels: PackedFloat32Array, _intensity: number, _strength: number, _mix: number, _bloom_threshold: number, _blend_mode: number, _hdr_bleed_threshold: number, _hdr_bleed_scale: number, _hdr_luminance_cap: number, _glow_map_strength: number, _glow_map: RID): void;
  public environment_set_tonemap(_env: RID, _tone_mapper: number, _exposure: number, _white: number): void;
  public environment_set_adjustment(_env: RID, _enable: boolean, _brightness: number, _contrast: number, _saturation: number, _use_1d_color_correction: boolean, _color_correction: RID): void;
  public environment_set_ssr(_env: RID, _enable: boolean, _max_steps: number, _fade_in: number, _fade_out: number, _depth_tolerance: number): void;
  public environment_set_ssao(_env: RID, _enable: boolean, _radius: number, _intensity: number, _power: number, _detail: number, _horizon: number, _sharpness: number, _light_affect: number, _ao_channel_affect: number): void;
  public environment_set_fog(_env: RID, _enable: boolean, _light_color: Color, _light_energy: number, _sun_scatter: number, _density: number, _height: number, _height_density: number, _aerial_perspective: number, _sky_affect: number, _fog_mode: number): void;
  public environment_set_sdfgi(_env: RID, _enable: boolean, _cascades: number, _min_cell_size: number, _y_scale: number, _use_occlusion: boolean, _bounce_feedback: number, _read_sky: boolean, _energy: number, _normal_bias: number, _probe_bias: number): void;
  public environment_set_volumetric_fog(_env: RID, _enable: boolean, _density: number, _albedo: Color, _emission: Color, _emission_energy: number, _anisotropy: number, _length: number, _p_detail_spread: number, _gi_inject: number, _temporal_reprojection: boolean, _temporal_reprojection_amount: number, _ambient_inject: number, _sky_affect: number): void;
  public environment_glow_set_use_bicubic_upscale(_enable: boolean): void;
  public environment_set_ssr_roughness_quality(_quality: number): void;
  public environment_set_ssao_quality(_quality: number, _half_size: boolean, _adaptive_target: number, _blur_passes: number, _fadeout_from: number, _fadeout_to: number): void;
  public environment_set_ssil_quality(_quality: number, _half_size: boolean, _adaptive_target: number, _blur_passes: number, _fadeout_from: number, _fadeout_to: number): void;
  public environment_set_sdfgi_ray_count(_ray_count: number): void;
  public environment_set_sdfgi_frames_to_converge(_frames: number): void;
  public environment_set_sdfgi_frames_to_update_light(_frames: number): void;
  public environment_set_volumetric_fog_volume_size(_size: number, _depth: number): void;
  public environment_set_volumetric_fog_filter_active(_active: boolean): void;
  public environment_bake_panorama(_environment: RID, _bake_irradiance: boolean, _size: Vector2i): Image;
  public screen_space_roughness_limiter_set_active(_enable: boolean, _amount: number, _limit: number): void;
  public sub_surface_scattering_set_quality(_quality: number): void;
  public sub_surface_scattering_set_scale(_scale: number, _depth_scale: number): void;
  public camera_attributes_create(): RID;
  public camera_attributes_set_dof_blur_quality(_quality: number, _use_jitter: boolean): void;
  public camera_attributes_set_dof_blur_bokeh_shape(_shape: number): void;
  public camera_attributes_set_dof_blur(_camera_attributes: RID, _far_enable: boolean, _far_distance: number, _far_transition: number, _near_enable: boolean, _near_distance: number, _near_transition: number, _amount: number): void;
  public camera_attributes_set_exposure(_camera_attributes: RID, _multiplier: number, _normalization: number): void;
  public camera_attributes_set_auto_exposure(_camera_attributes: RID, _enable: boolean, _min_sensitivity: number, _max_sensitivity: number, _speed: number, _scale: number): void;
  public scenario_create(): RID;
  public scenario_set_environment(_scenario: RID, _environment: RID): void;
  public scenario_set_fallback_environment(_scenario: RID, _environment: RID): void;
  public scenario_set_camera_attributes(_scenario: RID, _effects: RID): void;
  public scenario_set_compositor(_scenario: RID, _compositor: RID): void;
  public instance_create2(_base: RID, _scenario: RID): RID;
  public instance_create(): RID;
  public instance_set_base(_instance: RID, _base: RID): void;
  public instance_set_scenario(_instance: RID, _scenario: RID): void;
  public instance_set_layer_mask(_instance: RID, _mask: number): void;
  public instance_set_pivot_data(_instance: RID, _sorting_offset: number, _use_aabb_center: boolean): void;
  public instance_set_transform(_instance: RID, _transform: Transform3D): void;
  public instance_attach_object_instance_id(_instance: RID, _id: number): void;
  public instance_set_blend_shape_weight(_instance: RID, _shape: number, _weight: number): void;
  public instance_set_surface_override_material(_instance: RID, _surface: number, _material: RID): void;
  public instance_set_visible(_instance: RID, _visible: boolean): void;
  public instance_geometry_set_transparency(_instance: RID, _transparency: number): void;
  public instance_set_custom_aabb(_instance: RID, _aabb: AABB): void;
  public instance_attach_skeleton(_instance: RID, _skeleton: RID): void;
  public instance_set_extra_visibility_margin(_instance: RID, _margin: number): void;
  public instance_set_visibility_parent(_instance: RID, _parent: RID): void;
  public instance_set_ignore_culling(_instance: RID, _enabled: boolean): void;
  public instance_geometry_set_flag(_instance: RID, _flag: number, _enabled: boolean): void;
  public instance_geometry_set_cast_shadows_setting(_instance: RID, _shadow_casting_setting: number): void;
  public instance_geometry_set_material_override(_instance: RID, _material: RID): void;
  public instance_geometry_set_material_overlay(_instance: RID, _material: RID): void;
  public instance_geometry_set_visibility_range(_instance: RID, _min: number, _max: number, _min_margin: number, _max_margin: number, _fade_mode: number): void;
  public instance_geometry_set_lightmap(_instance: RID, _lightmap: RID, _lightmap_uv_scale: Rect2, _lightmap_slice: number): void;
  public instance_geometry_set_lod_bias(_instance: RID, _lod_bias: number): void;
  public instance_geometry_set_shader_parameter(_instance: RID, _parameter: String | StringName | string, _value: any): void;
  public instance_geometry_get_shader_parameter(_instance: RID, _parameter: String | StringName | string): any;
  public instance_geometry_get_shader_parameter_default_value(_instance: RID, _parameter: String | StringName | string): any;
  public instance_geometry_get_shader_parameter_list(_instance: RID): GDArray;
  public instances_cull_aabb(_aabb: AABB, _scenario: RID): PackedInt64Array;
  public instances_cull_ray(_from: Vector3, _to: Vector3, _scenario: RID): PackedInt64Array;
  public instances_cull_convex(_convex: GDArray, _scenario: RID): PackedInt64Array;
  public bake_render_uv2(_base: RID, _material_overrides: GDArray, _image_size: Vector2i): GDArray;
  public canvas_create(): RID;
  public canvas_set_item_mirroring(_canvas: RID, _item: RID, _mirroring: Vector2): void;
  public canvas_set_item_repeat(_item: RID, _repeat_size: Vector2, _repeat_times: number): void;
  public canvas_set_modulate(_canvas: RID, _color: Color): void;
  public canvas_set_disable_scale(_disable: boolean): void;
  public canvas_texture_create(): RID;
  public canvas_texture_set_channel(_canvas_texture: RID, _channel: number, _texture: RID): void;
  public canvas_texture_set_shading_parameters(_canvas_texture: RID, _base_color: Color, _shininess: number): void;
  public canvas_texture_set_texture_filter(_canvas_texture: RID, _filter: number): void;
  public canvas_texture_set_texture_repeat(_canvas_texture: RID, _repeat: number): void;
  public canvas_item_create(): RID;
  public canvas_item_set_parent(_item: RID, _parent: RID): void;
  public canvas_item_set_default_texture_filter(_item: RID, _filter: number): void;
  public canvas_item_set_default_texture_repeat(_item: RID, _repeat: number): void;
  public canvas_item_set_visible(_item: RID, _visible: boolean): void;
  public canvas_item_set_light_mask(_item: RID, _mask: number): void;
  public canvas_item_set_visibility_layer(_item: RID, _visibility_layer: number): void;
  public canvas_item_set_transform(_item: RID, _transform: Transform2D): void;
  public canvas_item_set_clip(_item: RID, _clip: boolean): void;
  public canvas_item_set_distance_field_mode(_item: RID, _enabled: boolean): void;
  public canvas_item_set_custom_rect(_item: RID, _use_custom_rect: boolean, _rect: Rect2): void;
  public canvas_item_set_modulate(_item: RID, _color: Color): void;
  public canvas_item_set_self_modulate(_item: RID, _color: Color): void;
  public canvas_item_set_draw_behind_parent(_item: RID, _enabled: boolean): void;
  public canvas_item_set_interpolated(_item: RID, _interpolated: boolean): void;
  public canvas_item_reset_physics_interpolation(_item: RID): void;
  public canvas_item_transform_physics_interpolation(_item: RID, _transform: Transform2D): void;
  public canvas_item_add_line(_item: RID, _from: Vector2, _to: Vector2, _color: Color, _width: number, _antialiased: boolean): void;
  public canvas_item_add_polyline(_item: RID, _points: PackedVector2Array, _colors: PackedColorArray, _width: number, _antialiased: boolean): void;
  public canvas_item_add_multiline(_item: RID, _points: PackedVector2Array, _colors: PackedColorArray, _width: number, _antialiased: boolean): void;
  public canvas_item_add_rect(_item: RID, _rect: Rect2, _color: Color, _antialiased: boolean): void;
  public canvas_item_add_circle(_item: RID, _pos: Vector2, _radius: number, _color: Color, _antialiased: boolean): void;
  public canvas_item_add_texture_rect(_item: RID, _rect: Rect2, _texture: RID, _tile: boolean, _modulate: Color, _transpose: boolean): void;
  public canvas_item_add_msdf_texture_rect_region(_item: RID, _rect: Rect2, _texture: RID, _src_rect: Rect2, _modulate: Color, _outline_size: number, _px_range: number, _scale: number): void;
  public canvas_item_add_lcd_texture_rect_region(_item: RID, _rect: Rect2, _texture: RID, _src_rect: Rect2, _modulate: Color): void;
  public canvas_item_add_texture_rect_region(_item: RID, _rect: Rect2, _texture: RID, _src_rect: Rect2, _modulate: Color, _transpose: boolean, _clip_uv: boolean): void;
  public canvas_item_add_nine_patch(_item: RID, _rect: Rect2, _source: Rect2, _texture: RID, _topleft: Vector2, _bottomright: Vector2, _x_axis_mode: number, _y_axis_mode: number, _draw_center: boolean, _modulate: Color): void;
  public canvas_item_add_primitive(_item: RID, _points: PackedVector2Array, _colors: PackedColorArray, _uvs: PackedVector2Array, _texture: RID): void;
  public canvas_item_add_polygon(_item: RID, _points: PackedVector2Array, _colors: PackedColorArray, _uvs: PackedVector2Array, _texture: RID): void;
  public canvas_item_add_triangle_array(_item: RID, _indices: PackedInt32Array, _points: PackedVector2Array, _colors: PackedColorArray, _uvs: PackedVector2Array, _bones: PackedInt32Array, _weights: PackedFloat32Array, _texture: RID, _count: number): void;
  public canvas_item_add_mesh(_item: RID, _mesh: RID, _transform: Transform2D, _modulate: Color, _texture: RID): void;
  public canvas_item_add_multimesh(_item: RID, _mesh: RID, _texture: RID): void;
  public canvas_item_add_particles(_item: RID, _particles: RID, _texture: RID): void;
  public canvas_item_add_set_transform(_item: RID, _transform: Transform2D): void;
  public canvas_item_add_clip_ignore(_item: RID, _ignore: boolean): void;
  public canvas_item_add_animation_slice(_item: RID, _animation_length: number, _slice_begin: number, _slice_end: number, _offset: number): void;
  public canvas_item_set_sort_children_by_y(_item: RID, _enabled: boolean): void;
  public canvas_item_set_z_index(_item: RID, _z_index: number): void;
  public canvas_item_set_z_as_relative_to_parent(_item: RID, _enabled: boolean): void;
  public canvas_item_set_copy_to_backbuffer(_item: RID, _enabled: boolean, _rect: Rect2): void;
  public canvas_item_clear(_item: RID): void;
  public canvas_item_set_draw_index(_item: RID, _index: number): void;
  public canvas_item_set_material(_item: RID, _material: RID): void;
  public canvas_item_set_use_parent_material(_item: RID, _enabled: boolean): void;
  public canvas_item_set_visibility_notifier(_item: RID, _enable: boolean, _area: Rect2, _enter_callable: Callable, _exit_callable: Callable): void;
  public canvas_item_set_canvas_group_mode(_item: RID, _mode: number, _clear_margin: number, _fit_empty: boolean, _fit_margin: number, _blur_mipmaps: boolean): void;
  public debug_canvas_item_get_rect(_item: RID): Rect2;
  public canvas_light_create(): RID;
  public canvas_light_attach_to_canvas(_light: RID, _canvas: RID): void;
  public canvas_light_set_enabled(_light: RID, _enabled: boolean): void;
  public canvas_light_set_texture_scale(_light: RID, _scale: number): void;
  public canvas_light_set_transform(_light: RID, _transform: Transform2D): void;
  public canvas_light_set_texture(_light: RID, _texture: RID): void;
  public canvas_light_set_texture_offset(_light: RID, _offset: Vector2): void;
  public canvas_light_set_color(_light: RID, _color: Color): void;
  public canvas_light_set_height(_light: RID, _height: number): void;
  public canvas_light_set_energy(_light: RID, _energy: number): void;
  public canvas_light_set_z_range(_light: RID, _min_z: number, _max_z: number): void;
  public canvas_light_set_layer_range(_light: RID, _min_layer: number, _max_layer: number): void;
  public canvas_light_set_item_cull_mask(_light: RID, _mask: number): void;
  public canvas_light_set_item_shadow_cull_mask(_light: RID, _mask: number): void;
  public canvas_light_set_mode(_light: RID, _mode: number): void;
  public canvas_light_set_shadow_enabled(_light: RID, _enabled: boolean): void;
  public canvas_light_set_shadow_filter(_light: RID, _filter: number): void;
  public canvas_light_set_shadow_color(_light: RID, _color: Color): void;
  public canvas_light_set_shadow_smooth(_light: RID, _smooth: number): void;
  public canvas_light_set_blend_mode(_light: RID, _mode: number): void;
  public canvas_light_set_interpolated(_light: RID, _interpolated: boolean): void;
  public canvas_light_reset_physics_interpolation(_light: RID): void;
  public canvas_light_transform_physics_interpolation(_light: RID, _transform: Transform2D): void;
  public canvas_light_occluder_create(): RID;
  public canvas_light_occluder_attach_to_canvas(_occluder: RID, _canvas: RID): void;
  public canvas_light_occluder_set_enabled(_occluder: RID, _enabled: boolean): void;
  public canvas_light_occluder_set_polygon(_occluder: RID, _polygon: RID): void;
  public canvas_light_occluder_set_as_sdf_collision(_occluder: RID, _enable: boolean): void;
  public canvas_light_occluder_set_transform(_occluder: RID, _transform: Transform2D): void;
  public canvas_light_occluder_set_light_mask(_occluder: RID, _mask: number): void;
  public canvas_light_occluder_set_interpolated(_occluder: RID, _interpolated: boolean): void;
  public canvas_light_occluder_reset_physics_interpolation(_occluder: RID): void;
  public canvas_light_occluder_transform_physics_interpolation(_occluder: RID, _transform: Transform2D): void;
  public canvas_occluder_polygon_create(): RID;
  public canvas_occluder_polygon_set_shape(_occluder_polygon: RID, _shape: PackedVector2Array, _closed: boolean): void;
  public canvas_occluder_polygon_set_cull_mode(_occluder_polygon: RID, _mode: number): void;
  public canvas_set_shadow_texture_size(_size: number): void;
  public global_shader_parameter_add(_name: String | StringName | string, _type: number, _default_value: any): void;
  public global_shader_parameter_remove(_name: String | StringName | string): void;
  public global_shader_parameter_get_list(): GDArray;
  public global_shader_parameter_set(_name: String | StringName | string, _value: any): void;
  public global_shader_parameter_set_override(_name: String | StringName | string, _value: any): void;
  public global_shader_parameter_get(_name: String | StringName | string): any;
  public global_shader_parameter_get_type(_name: String | StringName | string): number;
  public free_rid(_rid: RID): void;
  public request_frame_drawn_callback(_callable: Callable): void;
  public has_changed(): boolean;
  public get_rendering_info(_info: number): number;
  public get_video_adapter_name(): String;
  public get_video_adapter_vendor(): String;
  public get_video_adapter_type(): number;
  public get_video_adapter_api_version(): String;
  public make_sphere_mesh(_latitudes: number, _longitudes: number, _radius: number): RID;
  public get_test_cube(): RID;
  public get_test_texture(): RID;
  public get_white_texture(): RID;
  public set_boot_image(_image: Image, _color: Color, _scale: boolean, _use_filter: boolean): void;
  public get_default_clear_color(): Color;
  public set_default_clear_color(_color: Color): void;
  public has_os_feature(_feature: String | StringName | string): boolean;
  public set_debug_generate_wireframes(_generate: boolean): void;
  public is_render_loop_enabled(): boolean;
  public set_render_loop_enabled(_enabled: boolean): void;
  public get_frame_setup_time_cpu(): number;
  public force_sync(): void;
  public force_draw(_swap_buffers: boolean, _frame_step: number): void;
  public get_rendering_device(): RenderingDevice;
  public create_local_rendering_device(): RenderingDevice;
  public is_on_render_thread(): boolean;
  public call_on_render_thread(_callable: Callable): void;
  public has_feature(_feature: number): boolean;
  public get render_loop_enabled(): boolean {
    is_render_loop_enabled();
  }
  public set render_loop_enabled(value): void {
    set_render_loop_enabled(value);
  }
  static TextureLayeredType = {
    TEXTURE_LAYERED_2D_ARRAY = 0,
    TEXTURE_LAYERED_CUBEMAP = 1,
    TEXTURE_LAYERED_CUBEMAP_ARRAY = 2,
  }
  static CubeMapLayer = {
    CUBEMAP_LAYER_LEFT = 0,
    CUBEMAP_LAYER_RIGHT = 1,
    CUBEMAP_LAYER_BOTTOM = 2,
    CUBEMAP_LAYER_TOP = 3,
    CUBEMAP_LAYER_FRONT = 4,
    CUBEMAP_LAYER_BACK = 5,
  }
  static ShaderMode = {
    SHADER_SPATIAL = 0,
    SHADER_CANVAS_ITEM = 1,
    SHADER_PARTICLES = 2,
    SHADER_SKY = 3,
    SHADER_FOG = 4,
    SHADER_MAX = 5,
  }
  static ArrayType = {
    ARRAY_VERTEX = 0,
    ARRAY_NORMAL = 1,
    ARRAY_TANGENT = 2,
    ARRAY_COLOR = 3,
    ARRAY_TEX_UV = 4,
    ARRAY_TEX_UV2 = 5,
    ARRAY_CUSTOM0 = 6,
    ARRAY_CUSTOM1 = 7,
    ARRAY_CUSTOM2 = 8,
    ARRAY_CUSTOM3 = 9,
    ARRAY_BONES = 10,
    ARRAY_WEIGHTS = 11,
    ARRAY_INDEX = 12,
    ARRAY_MAX = 13,
  }
  static ArrayCustomFormat = {
    ARRAY_CUSTOM_RGBA8_UNORM = 0,
    ARRAY_CUSTOM_RGBA8_SNORM = 1,
    ARRAY_CUSTOM_RG_HALF = 2,
    ARRAY_CUSTOM_RGBA_HALF = 3,
    ARRAY_CUSTOM_R_FLOAT = 4,
    ARRAY_CUSTOM_RG_FLOAT = 5,
    ARRAY_CUSTOM_RGB_FLOAT = 6,
    ARRAY_CUSTOM_RGBA_FLOAT = 7,
    ARRAY_CUSTOM_MAX = 8,
  }
  static ArrayFormat = {
    ARRAY_FORMAT_VERTEX = 1,
    ARRAY_FORMAT_NORMAL = 2,
    ARRAY_FORMAT_TANGENT = 4,
    ARRAY_FORMAT_COLOR = 8,
    ARRAY_FORMAT_TEX_UV = 16,
    ARRAY_FORMAT_TEX_UV2 = 32,
    ARRAY_FORMAT_CUSTOM0 = 64,
    ARRAY_FORMAT_CUSTOM1 = 128,
    ARRAY_FORMAT_CUSTOM2 = 256,
    ARRAY_FORMAT_CUSTOM3 = 512,
    ARRAY_FORMAT_BONES = 1024,
    ARRAY_FORMAT_WEIGHTS = 2048,
    ARRAY_FORMAT_INDEX = 4096,
    ARRAY_FORMAT_BLEND_SHAPE_MASK = 7,
    ARRAY_FORMAT_CUSTOM_BASE = 13,
    ARRAY_FORMAT_CUSTOM_BITS = 3,
    ARRAY_FORMAT_CUSTOM0_SHIFT = 13,
    ARRAY_FORMAT_CUSTOM1_SHIFT = 16,
    ARRAY_FORMAT_CUSTOM2_SHIFT = 19,
    ARRAY_FORMAT_CUSTOM3_SHIFT = 22,
    ARRAY_FORMAT_CUSTOM_MASK = 7,
    ARRAY_COMPRESS_FLAGS_BASE = 25,
    ARRAY_FLAG_USE_2D_VERTICES = 33554432,
    ARRAY_FLAG_USE_DYNAMIC_UPDATE = 67108864,
    ARRAY_FLAG_USE_8_BONE_WEIGHTS = 134217728,
    ARRAY_FLAG_USES_EMPTY_VERTEX_ARRAY = 268435456,
    ARRAY_FLAG_COMPRESS_ATTRIBUTES = 536870912,
    ARRAY_FLAG_FORMAT_VERSION_BASE = 35,
    ARRAY_FLAG_FORMAT_VERSION_SHIFT = 35,
    ARRAY_FLAG_FORMAT_VERSION_1 = 0,
    ARRAY_FLAG_FORMAT_VERSION_2 = 34359738368,
    ARRAY_FLAG_FORMAT_CURRENT_VERSION = 34359738368,
    ARRAY_FLAG_FORMAT_VERSION_MASK = 255,
  }
  static PrimitiveType = {
    PRIMITIVE_POINTS = 0,
    PRIMITIVE_LINES = 1,
    PRIMITIVE_LINE_STRIP = 2,
    PRIMITIVE_TRIANGLES = 3,
    PRIMITIVE_TRIANGLE_STRIP = 4,
    PRIMITIVE_MAX = 5,
  }
  static BlendShapeMode = {
    BLEND_SHAPE_MODE_NORMALIZED = 0,
    BLEND_SHAPE_MODE_RELATIVE = 1,
  }
  static MultimeshTransformFormat = {
    MULTIMESH_TRANSFORM_2D = 0,
    MULTIMESH_TRANSFORM_3D = 1,
  }
  static LightProjectorFilter = {
    LIGHT_PROJECTOR_FILTER_NEAREST = 0,
    LIGHT_PROJECTOR_FILTER_LINEAR = 1,
    LIGHT_PROJECTOR_FILTER_NEAREST_MIPMAPS = 2,
    LIGHT_PROJECTOR_FILTER_LINEAR_MIPMAPS = 3,
    LIGHT_PROJECTOR_FILTER_NEAREST_MIPMAPS_ANISOTROPIC = 4,
    LIGHT_PROJECTOR_FILTER_LINEAR_MIPMAPS_ANISOTROPIC = 5,
  }
  static LightType = {
    LIGHT_DIRECTIONAL = 0,
    LIGHT_OMNI = 1,
    LIGHT_SPOT = 2,
  }
  static LightParam = {
    LIGHT_PARAM_ENERGY = 0,
    LIGHT_PARAM_INDIRECT_ENERGY = 1,
    LIGHT_PARAM_VOLUMETRIC_FOG_ENERGY = 2,
    LIGHT_PARAM_SPECULAR = 3,
    LIGHT_PARAM_RANGE = 4,
    LIGHT_PARAM_SIZE = 5,
    LIGHT_PARAM_ATTENUATION = 6,
    LIGHT_PARAM_SPOT_ANGLE = 7,
    LIGHT_PARAM_SPOT_ATTENUATION = 8,
    LIGHT_PARAM_SHADOW_MAX_DISTANCE = 9,
    LIGHT_PARAM_SHADOW_SPLIT_1_OFFSET = 10,
    LIGHT_PARAM_SHADOW_SPLIT_2_OFFSET = 11,
    LIGHT_PARAM_SHADOW_SPLIT_3_OFFSET = 12,
    LIGHT_PARAM_SHADOW_FADE_START = 13,
    LIGHT_PARAM_SHADOW_NORMAL_BIAS = 14,
    LIGHT_PARAM_SHADOW_BIAS = 15,
    LIGHT_PARAM_SHADOW_PANCAKE_SIZE = 16,
    LIGHT_PARAM_SHADOW_OPACITY = 17,
    LIGHT_PARAM_SHADOW_BLUR = 18,
    LIGHT_PARAM_TRANSMITTANCE_BIAS = 19,
    LIGHT_PARAM_INTENSITY = 20,
    LIGHT_PARAM_MAX = 21,
  }
  static LightBakeMode = {
    LIGHT_BAKE_DISABLED = 0,
    LIGHT_BAKE_STATIC = 1,
    LIGHT_BAKE_DYNAMIC = 2,
  }
  static LightOmniShadowMode = {
    LIGHT_OMNI_SHADOW_DUAL_PARABOLOID = 0,
    LIGHT_OMNI_SHADOW_CUBE = 1,
  }
  static LightDirectionalShadowMode = {
    LIGHT_DIRECTIONAL_SHADOW_ORTHOGONAL = 0,
    LIGHT_DIRECTIONAL_SHADOW_PARALLEL_2_SPLITS = 1,
    LIGHT_DIRECTIONAL_SHADOW_PARALLEL_4_SPLITS = 2,
  }
  static LightDirectionalSkyMode = {
    LIGHT_DIRECTIONAL_SKY_MODE_LIGHT_AND_SKY = 0,
    LIGHT_DIRECTIONAL_SKY_MODE_LIGHT_ONLY = 1,
    LIGHT_DIRECTIONAL_SKY_MODE_SKY_ONLY = 2,
  }
  static ShadowQuality = {
    SHADOW_QUALITY_HARD = 0,
    SHADOW_QUALITY_SOFT_VERY_LOW = 1,
    SHADOW_QUALITY_SOFT_LOW = 2,
    SHADOW_QUALITY_SOFT_MEDIUM = 3,
    SHADOW_QUALITY_SOFT_HIGH = 4,
    SHADOW_QUALITY_SOFT_ULTRA = 5,
    SHADOW_QUALITY_MAX = 6,
  }
  static ReflectionProbeUpdateMode = {
    REFLECTION_PROBE_UPDATE_ONCE = 0,
    REFLECTION_PROBE_UPDATE_ALWAYS = 1,
  }
  static ReflectionProbeAmbientMode = {
    REFLECTION_PROBE_AMBIENT_DISABLED = 0,
    REFLECTION_PROBE_AMBIENT_ENVIRONMENT = 1,
    REFLECTION_PROBE_AMBIENT_COLOR = 2,
  }
  static DecalTexture = {
    DECAL_TEXTURE_ALBEDO = 0,
    DECAL_TEXTURE_NORMAL = 1,
    DECAL_TEXTURE_ORM = 2,
    DECAL_TEXTURE_EMISSION = 3,
    DECAL_TEXTURE_MAX = 4,
  }
  static DecalFilter = {
    DECAL_FILTER_NEAREST = 0,
    DECAL_FILTER_LINEAR = 1,
    DECAL_FILTER_NEAREST_MIPMAPS = 2,
    DECAL_FILTER_LINEAR_MIPMAPS = 3,
    DECAL_FILTER_NEAREST_MIPMAPS_ANISOTROPIC = 4,
    DECAL_FILTER_LINEAR_MIPMAPS_ANISOTROPIC = 5,
  }
  static VoxelGIQuality = {
    VOXEL_GI_QUALITY_LOW = 0,
    VOXEL_GI_QUALITY_HIGH = 1,
  }
  static ParticlesMode = {
    PARTICLES_MODE_2D = 0,
    PARTICLES_MODE_3D = 1,
  }
  static ParticlesTransformAlign = {
    PARTICLES_TRANSFORM_ALIGN_DISABLED = 0,
    PARTICLES_TRANSFORM_ALIGN_Z_BILLBOARD = 1,
    PARTICLES_TRANSFORM_ALIGN_Y_TO_VELOCITY = 2,
    PARTICLES_TRANSFORM_ALIGN_Z_BILLBOARD_Y_TO_VELOCITY = 3,
  }
  static ParticlesDrawOrder = {
    PARTICLES_DRAW_ORDER_INDEX = 0,
    PARTICLES_DRAW_ORDER_LIFETIME = 1,
    PARTICLES_DRAW_ORDER_REVERSE_LIFETIME = 2,
    PARTICLES_DRAW_ORDER_VIEW_DEPTH = 3,
  }
  static ParticlesCollisionType = {
    PARTICLES_COLLISION_TYPE_SPHERE_ATTRACT = 0,
    PARTICLES_COLLISION_TYPE_BOX_ATTRACT = 1,
    PARTICLES_COLLISION_TYPE_VECTOR_FIELD_ATTRACT = 2,
    PARTICLES_COLLISION_TYPE_SPHERE_COLLIDE = 3,
    PARTICLES_COLLISION_TYPE_BOX_COLLIDE = 4,
    PARTICLES_COLLISION_TYPE_SDF_COLLIDE = 5,
    PARTICLES_COLLISION_TYPE_HEIGHTFIELD_COLLIDE = 6,
  }
  static ParticlesCollisionHeightfieldResolution = {
    PARTICLES_COLLISION_HEIGHTFIELD_RESOLUTION_256 = 0,
    PARTICLES_COLLISION_HEIGHTFIELD_RESOLUTION_512 = 1,
    PARTICLES_COLLISION_HEIGHTFIELD_RESOLUTION_1024 = 2,
    PARTICLES_COLLISION_HEIGHTFIELD_RESOLUTION_2048 = 3,
    PARTICLES_COLLISION_HEIGHTFIELD_RESOLUTION_4096 = 4,
    PARTICLES_COLLISION_HEIGHTFIELD_RESOLUTION_8192 = 5,
    PARTICLES_COLLISION_HEIGHTFIELD_RESOLUTION_MAX = 6,
  }
  static FogVolumeShape = {
    FOG_VOLUME_SHAPE_ELLIPSOID = 0,
    FOG_VOLUME_SHAPE_CONE = 1,
    FOG_VOLUME_SHAPE_CYLINDER = 2,
    FOG_VOLUME_SHAPE_BOX = 3,
    FOG_VOLUME_SHAPE_WORLD = 4,
    FOG_VOLUME_SHAPE_MAX = 5,
  }
  static ViewportScaling3DMode = {
    VIEWPORT_SCALING_3D_MODE_BILINEAR = 0,
    VIEWPORT_SCALING_3D_MODE_FSR = 1,
    VIEWPORT_SCALING_3D_MODE_FSR2 = 2,
    VIEWPORT_SCALING_3D_MODE_MAX = 3,
  }
  static ViewportUpdateMode = {
    VIEWPORT_UPDATE_DISABLED = 0,
    VIEWPORT_UPDATE_ONCE = 1,
    VIEWPORT_UPDATE_WHEN_VISIBLE = 2,
    VIEWPORT_UPDATE_WHEN_PARENT_VISIBLE = 3,
    VIEWPORT_UPDATE_ALWAYS = 4,
  }
  static ViewportClearMode = {
    VIEWPORT_CLEAR_ALWAYS = 0,
    VIEWPORT_CLEAR_NEVER = 1,
    VIEWPORT_CLEAR_ONLY_NEXT_FRAME = 2,
  }
  static ViewportEnvironmentMode = {
    VIEWPORT_ENVIRONMENT_DISABLED = 0,
    VIEWPORT_ENVIRONMENT_ENABLED = 1,
    VIEWPORT_ENVIRONMENT_INHERIT = 2,
    VIEWPORT_ENVIRONMENT_MAX = 3,
  }
  static ViewportSDFOversize = {
    VIEWPORT_SDF_OVERSIZE_100_PERCENT = 0,
    VIEWPORT_SDF_OVERSIZE_120_PERCENT = 1,
    VIEWPORT_SDF_OVERSIZE_150_PERCENT = 2,
    VIEWPORT_SDF_OVERSIZE_200_PERCENT = 3,
    VIEWPORT_SDF_OVERSIZE_MAX = 4,
  }
  static ViewportSDFScale = {
    VIEWPORT_SDF_SCALE_100_PERCENT = 0,
    VIEWPORT_SDF_SCALE_50_PERCENT = 1,
    VIEWPORT_SDF_SCALE_25_PERCENT = 2,
    VIEWPORT_SDF_SCALE_MAX = 3,
  }
  static ViewportMSAA = {
    VIEWPORT_MSAA_DISABLED = 0,
    VIEWPORT_MSAA_2X = 1,
    VIEWPORT_MSAA_4X = 2,
    VIEWPORT_MSAA_8X = 3,
    VIEWPORT_MSAA_MAX = 4,
  }
  static ViewportScreenSpaceAA = {
    VIEWPORT_SCREEN_SPACE_AA_DISABLED = 0,
    VIEWPORT_SCREEN_SPACE_AA_FXAA = 1,
    VIEWPORT_SCREEN_SPACE_AA_MAX = 2,
  }
  static ViewportOcclusionCullingBuildQuality = {
    VIEWPORT_OCCLUSION_BUILD_QUALITY_LOW = 0,
    VIEWPORT_OCCLUSION_BUILD_QUALITY_MEDIUM = 1,
    VIEWPORT_OCCLUSION_BUILD_QUALITY_HIGH = 2,
  }
  static ViewportRenderInfo = {
    VIEWPORT_RENDER_INFO_OBJECTS_IN_FRAME = 0,
    VIEWPORT_RENDER_INFO_PRIMITIVES_IN_FRAME = 1,
    VIEWPORT_RENDER_INFO_DRAW_CALLS_IN_FRAME = 2,
    VIEWPORT_RENDER_INFO_MAX = 3,
  }
  static ViewportRenderInfoType = {
    VIEWPORT_RENDER_INFO_TYPE_VISIBLE = 0,
    VIEWPORT_RENDER_INFO_TYPE_SHADOW = 1,
    VIEWPORT_RENDER_INFO_TYPE_CANVAS = 2,
    VIEWPORT_RENDER_INFO_TYPE_MAX = 3,
  }
  static ViewportDebugDraw = {
    VIEWPORT_DEBUG_DRAW_DISABLED = 0,
    VIEWPORT_DEBUG_DRAW_UNSHADED = 1,
    VIEWPORT_DEBUG_DRAW_LIGHTING = 2,
    VIEWPORT_DEBUG_DRAW_OVERDRAW = 3,
    VIEWPORT_DEBUG_DRAW_WIREFRAME = 4,
    VIEWPORT_DEBUG_DRAW_NORMAL_BUFFER = 5,
    VIEWPORT_DEBUG_DRAW_VOXEL_GI_ALBEDO = 6,
    VIEWPORT_DEBUG_DRAW_VOXEL_GI_LIGHTING = 7,
    VIEWPORT_DEBUG_DRAW_VOXEL_GI_EMISSION = 8,
    VIEWPORT_DEBUG_DRAW_SHADOW_ATLAS = 9,
    VIEWPORT_DEBUG_DRAW_DIRECTIONAL_SHADOW_ATLAS = 10,
    VIEWPORT_DEBUG_DRAW_SCENE_LUMINANCE = 11,
    VIEWPORT_DEBUG_DRAW_SSAO = 12,
    VIEWPORT_DEBUG_DRAW_SSIL = 13,
    VIEWPORT_DEBUG_DRAW_PSSM_SPLITS = 14,
    VIEWPORT_DEBUG_DRAW_DECAL_ATLAS = 15,
    VIEWPORT_DEBUG_DRAW_SDFGI = 16,
    VIEWPORT_DEBUG_DRAW_SDFGI_PROBES = 17,
    VIEWPORT_DEBUG_DRAW_GI_BUFFER = 18,
    VIEWPORT_DEBUG_DRAW_DISABLE_LOD = 19,
    VIEWPORT_DEBUG_DRAW_CLUSTER_OMNI_LIGHTS = 20,
    VIEWPORT_DEBUG_DRAW_CLUSTER_SPOT_LIGHTS = 21,
    VIEWPORT_DEBUG_DRAW_CLUSTER_DECALS = 22,
    VIEWPORT_DEBUG_DRAW_CLUSTER_REFLECTION_PROBES = 23,
    VIEWPORT_DEBUG_DRAW_OCCLUDERS = 24,
    VIEWPORT_DEBUG_DRAW_MOTION_VECTORS = 25,
    VIEWPORT_DEBUG_DRAW_INTERNAL_BUFFER = 26,
  }
  static ViewportVRSMode = {
    VIEWPORT_VRS_DISABLED = 0,
    VIEWPORT_VRS_TEXTURE = 1,
    VIEWPORT_VRS_XR = 2,
    VIEWPORT_VRS_MAX = 3,
  }
  static ViewportVRSUpdateMode = {
    VIEWPORT_VRS_UPDATE_DISABLED = 0,
    VIEWPORT_VRS_UPDATE_ONCE = 1,
    VIEWPORT_VRS_UPDATE_ALWAYS = 2,
    VIEWPORT_VRS_UPDATE_MAX = 3,
  }
  static SkyMode = {
    SKY_MODE_AUTOMATIC = 0,
    SKY_MODE_QUALITY = 1,
    SKY_MODE_INCREMENTAL = 2,
    SKY_MODE_REALTIME = 3,
  }
  static CompositorEffectFlags = {
    COMPOSITOR_EFFECT_FLAG_ACCESS_RESOLVED_COLOR = 1,
    COMPOSITOR_EFFECT_FLAG_ACCESS_RESOLVED_DEPTH = 2,
    COMPOSITOR_EFFECT_FLAG_NEEDS_MOTION_VECTORS = 4,
    COMPOSITOR_EFFECT_FLAG_NEEDS_ROUGHNESS = 8,
    COMPOSITOR_EFFECT_FLAG_NEEDS_SEPARATE_SPECULAR = 16,
  }
  static CompositorEffectCallbackType = {
    COMPOSITOR_EFFECT_CALLBACK_TYPE_PRE_OPAQUE = 0,
    COMPOSITOR_EFFECT_CALLBACK_TYPE_POST_OPAQUE = 1,
    COMPOSITOR_EFFECT_CALLBACK_TYPE_POST_SKY = 2,
    COMPOSITOR_EFFECT_CALLBACK_TYPE_PRE_TRANSPARENT = 3,
    COMPOSITOR_EFFECT_CALLBACK_TYPE_POST_TRANSPARENT = 4,
    COMPOSITOR_EFFECT_CALLBACK_TYPE_ANY = -1,
  }
  static EnvironmentBG = {
    ENV_BG_CLEAR_COLOR = 0,
    ENV_BG_COLOR = 1,
    ENV_BG_SKY = 2,
    ENV_BG_CANVAS = 3,
    ENV_BG_KEEP = 4,
    ENV_BG_CAMERA_FEED = 5,
    ENV_BG_MAX = 6,
  }
  static EnvironmentAmbientSource = {
    ENV_AMBIENT_SOURCE_BG = 0,
    ENV_AMBIENT_SOURCE_DISABLED = 1,
    ENV_AMBIENT_SOURCE_COLOR = 2,
    ENV_AMBIENT_SOURCE_SKY = 3,
  }
  static EnvironmentReflectionSource = {
    ENV_REFLECTION_SOURCE_BG = 0,
    ENV_REFLECTION_SOURCE_DISABLED = 1,
    ENV_REFLECTION_SOURCE_SKY = 2,
  }
  static EnvironmentGlowBlendMode = {
    ENV_GLOW_BLEND_MODE_ADDITIVE = 0,
    ENV_GLOW_BLEND_MODE_SCREEN = 1,
    ENV_GLOW_BLEND_MODE_SOFTLIGHT = 2,
    ENV_GLOW_BLEND_MODE_REPLACE = 3,
    ENV_GLOW_BLEND_MODE_MIX = 4,
  }
  static EnvironmentFogMode = {
    ENV_FOG_MODE_EXPONENTIAL = 0,
    ENV_FOG_MODE_DEPTH = 1,
  }
  static EnvironmentToneMapper = {
    ENV_TONE_MAPPER_LINEAR = 0,
    ENV_TONE_MAPPER_REINHARD = 1,
    ENV_TONE_MAPPER_FILMIC = 2,
    ENV_TONE_MAPPER_ACES = 3,
  }
  static EnvironmentSSRRoughnessQuality = {
    ENV_SSR_ROUGHNESS_QUALITY_DISABLED = 0,
    ENV_SSR_ROUGHNESS_QUALITY_LOW = 1,
    ENV_SSR_ROUGHNESS_QUALITY_MEDIUM = 2,
    ENV_SSR_ROUGHNESS_QUALITY_HIGH = 3,
  }
  static EnvironmentSSAOQuality = {
    ENV_SSAO_QUALITY_VERY_LOW = 0,
    ENV_SSAO_QUALITY_LOW = 1,
    ENV_SSAO_QUALITY_MEDIUM = 2,
    ENV_SSAO_QUALITY_HIGH = 3,
    ENV_SSAO_QUALITY_ULTRA = 4,
  }
  static EnvironmentSSILQuality = {
    ENV_SSIL_QUALITY_VERY_LOW = 0,
    ENV_SSIL_QUALITY_LOW = 1,
    ENV_SSIL_QUALITY_MEDIUM = 2,
    ENV_SSIL_QUALITY_HIGH = 3,
    ENV_SSIL_QUALITY_ULTRA = 4,
  }
  static EnvironmentSDFGIYScale = {
    ENV_SDFGI_Y_SCALE_50_PERCENT = 0,
    ENV_SDFGI_Y_SCALE_75_PERCENT = 1,
    ENV_SDFGI_Y_SCALE_100_PERCENT = 2,
  }
  static EnvironmentSDFGIRayCount = {
    ENV_SDFGI_RAY_COUNT_4 = 0,
    ENV_SDFGI_RAY_COUNT_8 = 1,
    ENV_SDFGI_RAY_COUNT_16 = 2,
    ENV_SDFGI_RAY_COUNT_32 = 3,
    ENV_SDFGI_RAY_COUNT_64 = 4,
    ENV_SDFGI_RAY_COUNT_96 = 5,
    ENV_SDFGI_RAY_COUNT_128 = 6,
    ENV_SDFGI_RAY_COUNT_MAX = 7,
  }
  static EnvironmentSDFGIFramesToConverge = {
    ENV_SDFGI_CONVERGE_IN_5_FRAMES = 0,
    ENV_SDFGI_CONVERGE_IN_10_FRAMES = 1,
    ENV_SDFGI_CONVERGE_IN_15_FRAMES = 2,
    ENV_SDFGI_CONVERGE_IN_20_FRAMES = 3,
    ENV_SDFGI_CONVERGE_IN_25_FRAMES = 4,
    ENV_SDFGI_CONVERGE_IN_30_FRAMES = 5,
    ENV_SDFGI_CONVERGE_MAX = 6,
  }
  static EnvironmentSDFGIFramesToUpdateLight = {
    ENV_SDFGI_UPDATE_LIGHT_IN_1_FRAME = 0,
    ENV_SDFGI_UPDATE_LIGHT_IN_2_FRAMES = 1,
    ENV_SDFGI_UPDATE_LIGHT_IN_4_FRAMES = 2,
    ENV_SDFGI_UPDATE_LIGHT_IN_8_FRAMES = 3,
    ENV_SDFGI_UPDATE_LIGHT_IN_16_FRAMES = 4,
    ENV_SDFGI_UPDATE_LIGHT_MAX = 5,
  }
  static SubSurfaceScatteringQuality = {
    SUB_SURFACE_SCATTERING_QUALITY_DISABLED = 0,
    SUB_SURFACE_SCATTERING_QUALITY_LOW = 1,
    SUB_SURFACE_SCATTERING_QUALITY_MEDIUM = 2,
    SUB_SURFACE_SCATTERING_QUALITY_HIGH = 3,
  }
  static DOFBokehShape = {
    DOF_BOKEH_BOX = 0,
    DOF_BOKEH_HEXAGON = 1,
    DOF_BOKEH_CIRCLE = 2,
  }
  static DOFBlurQuality = {
    DOF_BLUR_QUALITY_VERY_LOW = 0,
    DOF_BLUR_QUALITY_LOW = 1,
    DOF_BLUR_QUALITY_MEDIUM = 2,
    DOF_BLUR_QUALITY_HIGH = 3,
  }
  static InstanceType = {
    INSTANCE_NONE = 0,
    INSTANCE_MESH = 1,
    INSTANCE_MULTIMESH = 2,
    INSTANCE_PARTICLES = 3,
    INSTANCE_PARTICLES_COLLISION = 4,
    INSTANCE_LIGHT = 5,
    INSTANCE_REFLECTION_PROBE = 6,
    INSTANCE_DECAL = 7,
    INSTANCE_VOXEL_GI = 8,
    INSTANCE_LIGHTMAP = 9,
    INSTANCE_OCCLUDER = 10,
    INSTANCE_VISIBLITY_NOTIFIER = 11,
    INSTANCE_FOG_VOLUME = 12,
    INSTANCE_MAX = 13,
    INSTANCE_GEOMETRY_MASK = 14,
  }
  static InstanceFlags = {
    INSTANCE_FLAG_USE_BAKED_LIGHT = 0,
    INSTANCE_FLAG_USE_DYNAMIC_GI = 1,
    INSTANCE_FLAG_DRAW_NEXT_FRAME_IF_VISIBLE = 2,
    INSTANCE_FLAG_IGNORE_OCCLUSION_CULLING = 3,
    INSTANCE_FLAG_MAX = 4,
  }
  static ShadowCastingSetting = {
    SHADOW_CASTING_SETTING_OFF = 0,
    SHADOW_CASTING_SETTING_ON = 1,
    SHADOW_CASTING_SETTING_DOUBLE_SIDED = 2,
    SHADOW_CASTING_SETTING_SHADOWS_ONLY = 3,
  }
  static VisibilityRangeFadeMode = {
    VISIBILITY_RANGE_FADE_DISABLED = 0,
    VISIBILITY_RANGE_FADE_SELF = 1,
    VISIBILITY_RANGE_FADE_DEPENDENCIES = 2,
  }
  static BakeChannels = {
    BAKE_CHANNEL_ALBEDO_ALPHA = 0,
    BAKE_CHANNEL_NORMAL = 1,
    BAKE_CHANNEL_ORM = 2,
    BAKE_CHANNEL_EMISSION = 3,
  }
  static CanvasTextureChannel = {
    CANVAS_TEXTURE_CHANNEL_DIFFUSE = 0,
    CANVAS_TEXTURE_CHANNEL_NORMAL = 1,
    CANVAS_TEXTURE_CHANNEL_SPECULAR = 2,
  }
  static NinePatchAxisMode = {
    NINE_PATCH_STRETCH = 0,
    NINE_PATCH_TILE = 1,
    NINE_PATCH_TILE_FIT = 2,
  }
  static CanvasItemTextureFilter = {
    CANVAS_ITEM_TEXTURE_FILTER_DEFAULT = 0,
    CANVAS_ITEM_TEXTURE_FILTER_NEAREST = 1,
    CANVAS_ITEM_TEXTURE_FILTER_LINEAR = 2,
    CANVAS_ITEM_TEXTURE_FILTER_NEAREST_WITH_MIPMAPS = 3,
    CANVAS_ITEM_TEXTURE_FILTER_LINEAR_WITH_MIPMAPS = 4,
    CANVAS_ITEM_TEXTURE_FILTER_NEAREST_WITH_MIPMAPS_ANISOTROPIC = 5,
    CANVAS_ITEM_TEXTURE_FILTER_LINEAR_WITH_MIPMAPS_ANISOTROPIC = 6,
    CANVAS_ITEM_TEXTURE_FILTER_MAX = 7,
  }
  static CanvasItemTextureRepeat = {
    CANVAS_ITEM_TEXTURE_REPEAT_DEFAULT = 0,
    CANVAS_ITEM_TEXTURE_REPEAT_DISABLED = 1,
    CANVAS_ITEM_TEXTURE_REPEAT_ENABLED = 2,
    CANVAS_ITEM_TEXTURE_REPEAT_MIRROR = 3,
    CANVAS_ITEM_TEXTURE_REPEAT_MAX = 4,
  }
  static CanvasGroupMode = {
    CANVAS_GROUP_MODE_DISABLED = 0,
    CANVAS_GROUP_MODE_CLIP_ONLY = 1,
    CANVAS_GROUP_MODE_CLIP_AND_DRAW = 2,
    CANVAS_GROUP_MODE_TRANSPARENT = 3,
  }
  static CanvasLightMode = {
    CANVAS_LIGHT_MODE_POINT = 0,
    CANVAS_LIGHT_MODE_DIRECTIONAL = 1,
  }
  static CanvasLightBlendMode = {
    CANVAS_LIGHT_BLEND_MODE_ADD = 0,
    CANVAS_LIGHT_BLEND_MODE_SUB = 1,
    CANVAS_LIGHT_BLEND_MODE_MIX = 2,
  }
  static CanvasLightShadowFilter = {
    CANVAS_LIGHT_FILTER_NONE = 0,
    CANVAS_LIGHT_FILTER_PCF5 = 1,
    CANVAS_LIGHT_FILTER_PCF13 = 2,
    CANVAS_LIGHT_FILTER_MAX = 3,
  }
  static CanvasOccluderPolygonCullMode = {
    CANVAS_OCCLUDER_POLYGON_CULL_DISABLED = 0,
    CANVAS_OCCLUDER_POLYGON_CULL_CLOCKWISE = 1,
    CANVAS_OCCLUDER_POLYGON_CULL_COUNTER_CLOCKWISE = 2,
  }
  static GlobalShaderParameterType = {
    GLOBAL_VAR_TYPE_BOOL = 0,
    GLOBAL_VAR_TYPE_BVEC2 = 1,
    GLOBAL_VAR_TYPE_BVEC3 = 2,
    GLOBAL_VAR_TYPE_BVEC4 = 3,
    GLOBAL_VAR_TYPE_INT = 4,
    GLOBAL_VAR_TYPE_IVEC2 = 5,
    GLOBAL_VAR_TYPE_IVEC3 = 6,
    GLOBAL_VAR_TYPE_IVEC4 = 7,
    GLOBAL_VAR_TYPE_RECT2I = 8,
    GLOBAL_VAR_TYPE_UINT = 9,
    GLOBAL_VAR_TYPE_UVEC2 = 10,
    GLOBAL_VAR_TYPE_UVEC3 = 11,
    GLOBAL_VAR_TYPE_UVEC4 = 12,
    GLOBAL_VAR_TYPE_FLOAT = 13,
    GLOBAL_VAR_TYPE_VEC2 = 14,
    GLOBAL_VAR_TYPE_VEC3 = 15,
    GLOBAL_VAR_TYPE_VEC4 = 16,
    GLOBAL_VAR_TYPE_COLOR = 17,
    GLOBAL_VAR_TYPE_RECT2 = 18,
    GLOBAL_VAR_TYPE_MAT2 = 19,
    GLOBAL_VAR_TYPE_MAT3 = 20,
    GLOBAL_VAR_TYPE_MAT4 = 21,
    GLOBAL_VAR_TYPE_TRANSFORM_2D = 22,
    GLOBAL_VAR_TYPE_TRANSFORM = 23,
    GLOBAL_VAR_TYPE_SAMPLER2D = 24,
    GLOBAL_VAR_TYPE_SAMPLER2DARRAY = 25,
    GLOBAL_VAR_TYPE_SAMPLER3D = 26,
    GLOBAL_VAR_TYPE_SAMPLERCUBE = 27,
    GLOBAL_VAR_TYPE_MAX = 28,
  }
  static RenderingInfo = {
    RENDERING_INFO_TOTAL_OBJECTS_IN_FRAME = 0,
    RENDERING_INFO_TOTAL_PRIMITIVES_IN_FRAME = 1,
    RENDERING_INFO_TOTAL_DRAW_CALLS_IN_FRAME = 2,
    RENDERING_INFO_TEXTURE_MEM_USED = 3,
    RENDERING_INFO_BUFFER_MEM_USED = 4,
    RENDERING_INFO_VIDEO_MEM_USED = 5,
  }
  static Features = {
    FEATURE_SHADERS = 0,
    FEATURE_MULTITHREADED = 1,
  }
  public get frame_pre_draw(): Signal;
  public get frame_post_draw(): Signal;
}