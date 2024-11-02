
import { Material } from "@godot/classes/material";
import { Texture2D } from "@godot/classes/texture2d";


export declare class BaseMaterial3D extends Material{
  public set_albedo(_albedo: Color): void;
  public get_albedo(): Color;
  public set_transparency(_transparency: number): void;
  public get_transparency(): number;
  public set_alpha_antialiasing(_alpha_aa: number): void;
  public get_alpha_antialiasing(): number;
  public set_alpha_antialiasing_edge(_edge: number): void;
  public get_alpha_antialiasing_edge(): number;
  public set_shading_mode(_shading_mode: number): void;
  public get_shading_mode(): number;
  public set_specular(_specular: number): void;
  public get_specular(): number;
  public set_metallic(_metallic: number): void;
  public get_metallic(): number;
  public set_roughness(_roughness: number): void;
  public get_roughness(): number;
  public set_emission(_emission: Color): void;
  public get_emission(): Color;
  public set_emission_energy_multiplier(_emission_energy_multiplier: number): void;
  public get_emission_energy_multiplier(): number;
  public set_emission_intensity(_emission_energy_multiplier: number): void;
  public get_emission_intensity(): number;
  public set_normal_scale(_normal_scale: number): void;
  public get_normal_scale(): number;
  public set_rim(_rim: number): void;
  public get_rim(): number;
  public set_rim_tint(_rim_tint: number): void;
  public get_rim_tint(): number;
  public set_clearcoat(_clearcoat: number): void;
  public get_clearcoat(): number;
  public set_clearcoat_roughness(_clearcoat_roughness: number): void;
  public get_clearcoat_roughness(): number;
  public set_anisotropy(_anisotropy: number): void;
  public get_anisotropy(): number;
  public set_heightmap_scale(_heightmap_scale: number): void;
  public get_heightmap_scale(): number;
  public set_subsurface_scattering_strength(_strength: number): void;
  public get_subsurface_scattering_strength(): number;
  public set_transmittance_color(_color: Color): void;
  public get_transmittance_color(): Color;
  public set_transmittance_depth(_depth: number): void;
  public get_transmittance_depth(): number;
  public set_transmittance_boost(_boost: number): void;
  public get_transmittance_boost(): number;
  public set_backlight(_backlight: Color): void;
  public get_backlight(): Color;
  public set_refraction(_refraction: number): void;
  public get_refraction(): number;
  public set_point_size(_point_size: number): void;
  public get_point_size(): number;
  public set_detail_uv(_detail_uv: number): void;
  public get_detail_uv(): number;
  public set_blend_mode(_blend_mode: number): void;
  public get_blend_mode(): number;
  public set_depth_draw_mode(_depth_draw_mode: number): void;
  public get_depth_draw_mode(): number;
  public set_cull_mode(_cull_mode: number): void;
  public get_cull_mode(): number;
  public set_diffuse_mode(_diffuse_mode: number): void;
  public get_diffuse_mode(): number;
  public set_specular_mode(_specular_mode: number): void;
  public get_specular_mode(): number;
  public set_flag(_flag: number, _enable: boolean): void;
  public get_flag(_flag: number): boolean;
  public set_texture_filter(_mode: number): void;
  public get_texture_filter(): number;
  public set_feature(_feature: number, _enable: boolean): void;
  public get_feature(_feature: number): boolean;
  public set_texture(_param: number, _texture: Texture2D): void;
  public get_texture(_param: number): Texture2D;
  public set_detail_blend_mode(_detail_blend_mode: number): void;
  public get_detail_blend_mode(): number;
  public set_uv1_scale(_scale: Vector3): void;
  public get_uv1_scale(): Vector3;
  public set_uv1_offset(_offset: Vector3): void;
  public get_uv1_offset(): Vector3;
  public set_uv1_triplanar_blend_sharpness(_sharpness: number): void;
  public get_uv1_triplanar_blend_sharpness(): number;
  public set_uv2_scale(_scale: Vector3): void;
  public get_uv2_scale(): Vector3;
  public set_uv2_offset(_offset: Vector3): void;
  public get_uv2_offset(): Vector3;
  public set_uv2_triplanar_blend_sharpness(_sharpness: number): void;
  public get_uv2_triplanar_blend_sharpness(): number;
  public set_billboard_mode(_mode: number): void;
  public get_billboard_mode(): number;
  public set_particles_anim_h_frames(_frames: number): void;
  public get_particles_anim_h_frames(): number;
  public set_particles_anim_v_frames(_frames: number): void;
  public get_particles_anim_v_frames(): number;
  public set_particles_anim_loop(_loop: boolean): void;
  public get_particles_anim_loop(): boolean;
  public set_heightmap_deep_parallax(_enable: boolean): void;
  public is_heightmap_deep_parallax_enabled(): boolean;
  public set_heightmap_deep_parallax_min_layers(_layer: number): void;
  public get_heightmap_deep_parallax_min_layers(): number;
  public set_heightmap_deep_parallax_max_layers(_layer: number): void;
  public get_heightmap_deep_parallax_max_layers(): number;
  public set_heightmap_deep_parallax_flip_tangent(_flip: boolean): void;
  public get_heightmap_deep_parallax_flip_tangent(): boolean;
  public set_heightmap_deep_parallax_flip_binormal(_flip: boolean): void;
  public get_heightmap_deep_parallax_flip_binormal(): boolean;
  public set_grow(_amount: number): void;
  public get_grow(): number;
  public set_emission_operator(_operator: number): void;
  public get_emission_operator(): number;
  public set_ao_light_affect(_amount: number): void;
  public get_ao_light_affect(): number;
  public set_alpha_scissor_threshold(_threshold: number): void;
  public get_alpha_scissor_threshold(): number;
  public set_alpha_hash_scale(_threshold: number): void;
  public get_alpha_hash_scale(): number;
  public set_grow_enabled(_enable: boolean): void;
  public is_grow_enabled(): boolean;
  public set_metallic_texture_channel(_channel: number): void;
  public get_metallic_texture_channel(): number;
  public set_roughness_texture_channel(_channel: number): void;
  public get_roughness_texture_channel(): number;
  public set_ao_texture_channel(_channel: number): void;
  public get_ao_texture_channel(): number;
  public set_refraction_texture_channel(_channel: number): void;
  public get_refraction_texture_channel(): number;
  public set_proximity_fade_enabled(_enabled: boolean): void;
  public is_proximity_fade_enabled(): boolean;
  public set_proximity_fade_distance(_distance: number): void;
  public get_proximity_fade_distance(): number;
  public set_msdf_pixel_range(_range: number): void;
  public get_msdf_pixel_range(): number;
  public set_msdf_outline_size(_size: number): void;
  public get_msdf_outline_size(): number;
  public set_distance_fade(_mode: number): void;
  public get_distance_fade(): number;
  public set_distance_fade_max_distance(_distance: number): void;
  public get_distance_fade_max_distance(): number;
  public set_distance_fade_min_distance(_distance: number): void;
  public get_distance_fade_min_distance(): number;
  public get transparency(): number;
  public set transparency(value): void;
  public get alpha_scissor_threshold(): number;
  public set alpha_scissor_threshold(value): void;
  public get alpha_hash_scale(): number;
  public set alpha_hash_scale(value): void;
  public get alpha_antialiasing_mode(): number;
  public set alpha_antialiasing_mode(value): void;
  public get alpha_antialiasing_edge(): number;
  public set alpha_antialiasing_edge(value): void;
  public get blend_mode(): number;
  public set blend_mode(value): void;
  public get cull_mode(): number;
  public set cull_mode(value): void;
  public get depth_draw_mode(): number;
  public set depth_draw_mode(value): void;
  public get no_depth_test(): boolean;
  public set no_depth_test(value): void;
  public get shading_mode(): number;
  public set shading_mode(value): void;
  public get diffuse_mode(): number;
  public set diffuse_mode(value): void;
  public get specular_mode(): number;
  public set specular_mode(value): void;
  public get disable_ambient_light(): boolean;
  public set disable_ambient_light(value): void;
  public get disable_fog(): boolean;
  public set disable_fog(value): void;
  public get vertex_color_use_as_albedo(): boolean;
  public set vertex_color_use_as_albedo(value): void;
  public get vertex_color_is_srgb(): boolean;
  public set vertex_color_is_srgb(value): void;
  public get albedo_color(): Color;
  public set albedo_color(value): void;
  public get albedo_texture(): Texture2D;
  public set albedo_texture(value): void;
  public get albedo_texture_force_srgb(): boolean;
  public set albedo_texture_force_srgb(value): void;
  public get albedo_texture_msdf(): boolean;
  public set albedo_texture_msdf(value): void;
  public get orm_texture(): Texture2D;
  public set orm_texture(value): void;
  public get metallic(): number;
  public set metallic(value): void;
  public get metallic_specular(): number;
  public set metallic_specular(value): void;
  public get metallic_texture(): Texture2D;
  public set metallic_texture(value): void;
  public get metallic_texture_channel(): number;
  public set metallic_texture_channel(value): void;
  public get roughness(): number;
  public set roughness(value): void;
  public get roughness_texture(): Texture2D;
  public set roughness_texture(value): void;
  public get roughness_texture_channel(): number;
  public set roughness_texture_channel(value): void;
  public get emission_enabled(): boolean;
  public set emission_enabled(value): void;
  public get emission(): Color;
  public set emission(value): void;
  public get emission_energy_multiplier(): number;
  public set emission_energy_multiplier(value): void;
  public get emission_intensity(): number;
  public set emission_intensity(value): void;
  public get emission_operator(): number;
  public set emission_operator(value): void;
  public get emission_on_uv2(): boolean;
  public set emission_on_uv2(value): void;
  public get emission_texture(): Texture2D;
  public set emission_texture(value): void;
  public get normal_enabled(): boolean;
  public set normal_enabled(value): void;
  public get normal_scale(): number;
  public set normal_scale(value): void;
  public get normal_texture(): Texture2D;
  public set normal_texture(value): void;
  public get rim_enabled(): boolean;
  public set rim_enabled(value): void;
  public get rim(): number;
  public set rim(value): void;
  public get rim_tint(): number;
  public set rim_tint(value): void;
  public get rim_texture(): Texture2D;
  public set rim_texture(value): void;
  public get clearcoat_enabled(): boolean;
  public set clearcoat_enabled(value): void;
  public get clearcoat(): number;
  public set clearcoat(value): void;
  public get clearcoat_roughness(): number;
  public set clearcoat_roughness(value): void;
  public get clearcoat_texture(): Texture2D;
  public set clearcoat_texture(value): void;
  public get anisotropy_enabled(): boolean;
  public set anisotropy_enabled(value): void;
  public get anisotropy(): number;
  public set anisotropy(value): void;
  public get anisotropy_flowmap(): Texture2D;
  public set anisotropy_flowmap(value): void;
  public get ao_enabled(): boolean;
  public set ao_enabled(value): void;
  public get ao_light_affect(): number;
  public set ao_light_affect(value): void;
  public get ao_texture(): Texture2D;
  public set ao_texture(value): void;
  public get ao_on_uv2(): boolean;
  public set ao_on_uv2(value): void;
  public get ao_texture_channel(): number;
  public set ao_texture_channel(value): void;
  public get heightmap_enabled(): boolean;
  public set heightmap_enabled(value): void;
  public get heightmap_scale(): number;
  public set heightmap_scale(value): void;
  public get heightmap_deep_parallax(): boolean;
  public set heightmap_deep_parallax(value): void;
  public get heightmap_min_layers(): number;
  public set heightmap_min_layers(value): void;
  public get heightmap_max_layers(): number;
  public set heightmap_max_layers(value): void;
  public get heightmap_flip_tangent(): boolean;
  public set heightmap_flip_tangent(value): void;
  public get heightmap_flip_binormal(): boolean;
  public set heightmap_flip_binormal(value): void;
  public get heightmap_texture(): Texture2D;
  public set heightmap_texture(value): void;
  public get heightmap_flip_texture(): boolean;
  public set heightmap_flip_texture(value): void;
  public get subsurf_scatter_enabled(): boolean;
  public set subsurf_scatter_enabled(value): void;
  public get subsurf_scatter_strength(): number;
  public set subsurf_scatter_strength(value): void;
  public get subsurf_scatter_skin_mode(): boolean;
  public set subsurf_scatter_skin_mode(value): void;
  public get subsurf_scatter_texture(): Texture2D;
  public set subsurf_scatter_texture(value): void;
  public get subsurf_scatter_transmittance_enabled(): boolean;
  public set subsurf_scatter_transmittance_enabled(value): void;
  public get subsurf_scatter_transmittance_color(): Color;
  public set subsurf_scatter_transmittance_color(value): void;
  public get subsurf_scatter_transmittance_texture(): Texture2D;
  public set subsurf_scatter_transmittance_texture(value): void;
  public get subsurf_scatter_transmittance_depth(): number;
  public set subsurf_scatter_transmittance_depth(value): void;
  public get subsurf_scatter_transmittance_boost(): number;
  public set subsurf_scatter_transmittance_boost(value): void;
  public get backlight_enabled(): boolean;
  public set backlight_enabled(value): void;
  public get backlight(): Color;
  public set backlight(value): void;
  public get backlight_texture(): Texture2D;
  public set backlight_texture(value): void;
  public get refraction_enabled(): boolean;
  public set refraction_enabled(value): void;
  public get refraction_scale(): number;
  public set refraction_scale(value): void;
  public get refraction_texture(): Texture2D;
  public set refraction_texture(value): void;
  public get refraction_texture_channel(): number;
  public set refraction_texture_channel(value): void;
  public get detail_enabled(): boolean;
  public set detail_enabled(value): void;
  public get detail_mask(): Texture2D;
  public set detail_mask(value): void;
  public get detail_blend_mode(): number;
  public set detail_blend_mode(value): void;
  public get detail_uv_layer(): number;
  public set detail_uv_layer(value): void;
  public get detail_albedo(): Texture2D;
  public set detail_albedo(value): void;
  public get detail_normal(): Texture2D;
  public set detail_normal(value): void;
  public get uv1_scale(): Vector3;
  public set uv1_scale(value): void;
  public get uv1_offset(): Vector3;
  public set uv1_offset(value): void;
  public get uv1_triplanar(): boolean;
  public set uv1_triplanar(value): void;
  public get uv1_triplanar_sharpness(): number;
  public set uv1_triplanar_sharpness(value): void;
  public get uv1_world_triplanar(): boolean;
  public set uv1_world_triplanar(value): void;
  public get uv2_scale(): Vector3;
  public set uv2_scale(value): void;
  public get uv2_offset(): Vector3;
  public set uv2_offset(value): void;
  public get uv2_triplanar(): boolean;
  public set uv2_triplanar(value): void;
  public get uv2_triplanar_sharpness(): number;
  public set uv2_triplanar_sharpness(value): void;
  public get uv2_world_triplanar(): boolean;
  public set uv2_world_triplanar(value): void;
  public get texture_filter(): number;
  public set texture_filter(value): void;
  public get texture_repeat(): boolean;
  public set texture_repeat(value): void;
  public get disable_receive_shadows(): boolean;
  public set disable_receive_shadows(value): void;
  public get shadow_to_opacity(): boolean;
  public set shadow_to_opacity(value): void;
  public get billboard_mode(): number;
  public set billboard_mode(value): void;
  public get billboard_keep_scale(): boolean;
  public set billboard_keep_scale(value): void;
  public get particles_anim_h_frames(): number;
  public set particles_anim_h_frames(value): void;
  public get particles_anim_v_frames(): number;
  public set particles_anim_v_frames(value): void;
  public get particles_anim_loop(): boolean;
  public set particles_anim_loop(value): void;
  public get grow(): boolean;
  public set grow(value): void;
  public get grow_amount(): number;
  public set grow_amount(value): void;
  public get fixed_size(): boolean;
  public set fixed_size(value): void;
  public get use_point_size(): boolean;
  public set use_point_size(value): void;
  public get point_size(): number;
  public set point_size(value): void;
  public get use_particle_trails(): boolean;
  public set use_particle_trails(value): void;
  public get proximity_fade_enabled(): boolean;
  public set proximity_fade_enabled(value): void;
  public get proximity_fade_distance(): number;
  public set proximity_fade_distance(value): void;
  public get msdf_pixel_range(): number;
  public set msdf_pixel_range(value): void;
  public get msdf_outline_size(): number;
  public set msdf_outline_size(value): void;
  public get distance_fade_mode(): number;
  public set distance_fade_mode(value): void;
  public get distance_fade_min_distance(): number;
  public set distance_fade_min_distance(value): void;
  public get distance_fade_max_distance(): number;
  public set distance_fade_max_distance(value): void;
  static TextureParam = {
    TEXTURE_ALBEDO = 0,
    TEXTURE_METALLIC = 1,
    TEXTURE_ROUGHNESS = 2,
    TEXTURE_EMISSION = 3,
    TEXTURE_NORMAL = 4,
    TEXTURE_RIM = 5,
    TEXTURE_CLEARCOAT = 6,
    TEXTURE_FLOWMAP = 7,
    TEXTURE_AMBIENT_OCCLUSION = 8,
    TEXTURE_HEIGHTMAP = 9,
    TEXTURE_SUBSURFACE_SCATTERING = 10,
    TEXTURE_SUBSURFACE_TRANSMITTANCE = 11,
    TEXTURE_BACKLIGHT = 12,
    TEXTURE_REFRACTION = 13,
    TEXTURE_DETAIL_MASK = 14,
    TEXTURE_DETAIL_ALBEDO = 15,
    TEXTURE_DETAIL_NORMAL = 16,
    TEXTURE_ORM = 17,
    TEXTURE_MAX = 18,
  }
  static TextureFilter = {
    TEXTURE_FILTER_NEAREST = 0,
    TEXTURE_FILTER_LINEAR = 1,
    TEXTURE_FILTER_NEAREST_WITH_MIPMAPS = 2,
    TEXTURE_FILTER_LINEAR_WITH_MIPMAPS = 3,
    TEXTURE_FILTER_NEAREST_WITH_MIPMAPS_ANISOTROPIC = 4,
    TEXTURE_FILTER_LINEAR_WITH_MIPMAPS_ANISOTROPIC = 5,
    TEXTURE_FILTER_MAX = 6,
  }
  static DetailUV = {
    DETAIL_UV_1 = 0,
    DETAIL_UV_2 = 1,
  }
  static Transparency = {
    TRANSPARENCY_DISABLED = 0,
    TRANSPARENCY_ALPHA = 1,
    TRANSPARENCY_ALPHA_SCISSOR = 2,
    TRANSPARENCY_ALPHA_HASH = 3,
    TRANSPARENCY_ALPHA_DEPTH_PRE_PASS = 4,
    TRANSPARENCY_MAX = 5,
  }
  static ShadingMode = {
    SHADING_MODE_UNSHADED = 0,
    SHADING_MODE_PER_PIXEL = 1,
    SHADING_MODE_PER_VERTEX = 2,
    SHADING_MODE_MAX = 3,
  }
  static Feature = {
    FEATURE_EMISSION = 0,
    FEATURE_NORMAL_MAPPING = 1,
    FEATURE_RIM = 2,
    FEATURE_CLEARCOAT = 3,
    FEATURE_ANISOTROPY = 4,
    FEATURE_AMBIENT_OCCLUSION = 5,
    FEATURE_HEIGHT_MAPPING = 6,
    FEATURE_SUBSURFACE_SCATTERING = 7,
    FEATURE_SUBSURFACE_TRANSMITTANCE = 8,
    FEATURE_BACKLIGHT = 9,
    FEATURE_REFRACTION = 10,
    FEATURE_DETAIL = 11,
    FEATURE_MAX = 12,
  }
  static BlendMode = {
    BLEND_MODE_MIX = 0,
    BLEND_MODE_ADD = 1,
    BLEND_MODE_SUB = 2,
    BLEND_MODE_MUL = 3,
    BLEND_MODE_PREMULT_ALPHA = 4,
  }
  static AlphaAntiAliasing = {
    ALPHA_ANTIALIASING_OFF = 0,
    ALPHA_ANTIALIASING_ALPHA_TO_COVERAGE = 1,
    ALPHA_ANTIALIASING_ALPHA_TO_COVERAGE_AND_TO_ONE = 2,
  }
  static DepthDrawMode = {
    DEPTH_DRAW_OPAQUE_ONLY = 0,
    DEPTH_DRAW_ALWAYS = 1,
    DEPTH_DRAW_DISABLED = 2,
  }
  static CullMode = {
    CULL_BACK = 0,
    CULL_FRONT = 1,
    CULL_DISABLED = 2,
  }
  static Flags = {
    FLAG_DISABLE_DEPTH_TEST = 0,
    FLAG_ALBEDO_FROM_VERTEX_COLOR = 1,
    FLAG_SRGB_VERTEX_COLOR = 2,
    FLAG_USE_POINT_SIZE = 3,
    FLAG_FIXED_SIZE = 4,
    FLAG_BILLBOARD_KEEP_SCALE = 5,
    FLAG_UV1_USE_TRIPLANAR = 6,
    FLAG_UV2_USE_TRIPLANAR = 7,
    FLAG_UV1_USE_WORLD_TRIPLANAR = 8,
    FLAG_UV2_USE_WORLD_TRIPLANAR = 9,
    FLAG_AO_ON_UV2 = 10,
    FLAG_EMISSION_ON_UV2 = 11,
    FLAG_ALBEDO_TEXTURE_FORCE_SRGB = 12,
    FLAG_DONT_RECEIVE_SHADOWS = 13,
    FLAG_DISABLE_AMBIENT_LIGHT = 14,
    FLAG_USE_SHADOW_TO_OPACITY = 15,
    FLAG_USE_TEXTURE_REPEAT = 16,
    FLAG_INVERT_HEIGHTMAP = 17,
    FLAG_SUBSURFACE_MODE_SKIN = 18,
    FLAG_PARTICLE_TRAILS_MODE = 19,
    FLAG_ALBEDO_TEXTURE_MSDF = 20,
    FLAG_DISABLE_FOG = 21,
    FLAG_MAX = 22,
  }
  static DiffuseMode = {
    DIFFUSE_BURLEY = 0,
    DIFFUSE_LAMBERT = 1,
    DIFFUSE_LAMBERT_WRAP = 2,
    DIFFUSE_TOON = 3,
  }
  static SpecularMode = {
    SPECULAR_SCHLICK_GGX = 0,
    SPECULAR_TOON = 1,
    SPECULAR_DISABLED = 2,
  }
  static BillboardMode = {
    BILLBOARD_DISABLED = 0,
    BILLBOARD_ENABLED = 1,
    BILLBOARD_FIXED_Y = 2,
    BILLBOARD_PARTICLES = 3,
  }
  static TextureChannel = {
    TEXTURE_CHANNEL_RED = 0,
    TEXTURE_CHANNEL_GREEN = 1,
    TEXTURE_CHANNEL_BLUE = 2,
    TEXTURE_CHANNEL_ALPHA = 3,
    TEXTURE_CHANNEL_GRAYSCALE = 4,
  }
  static EmissionOperator = {
    EMISSION_OP_ADD = 0,
    EMISSION_OP_MULTIPLY = 1,
  }
  static DistanceFadeMode = {
    DISTANCE_FADE_DISABLED = 0,
    DISTANCE_FADE_PIXEL_ALPHA = 1,
    DISTANCE_FADE_PIXEL_DITHER = 2,
    DISTANCE_FADE_OBJECT_DITHER = 3,
  }
}