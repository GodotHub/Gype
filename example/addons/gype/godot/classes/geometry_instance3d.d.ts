
import { VisualInstance3D } from "@godot/classes/visual_instance3d";
import { Material } from "@godot/classes/material";
export declare class GeometryInstance3D extends VisualInstance3D{
  public set_material_override(_material: Material): void;
  public get_material_override(): Material;
  public set_material_overlay(_material: Material): void;
  public get_material_overlay(): Material;
  public set_cast_shadows_setting(_shadow_casting_setting: number): void;
  public get_cast_shadows_setting(): number;
  public set_lod_bias(_bias: number): void;
  public get_lod_bias(): number;
  public set_transparency(_transparency: number): void;
  public get_transparency(): number;
  public set_visibility_range_end_margin(_distance: number): void;
  public get_visibility_range_end_margin(): number;
  public set_visibility_range_end(_distance: number): void;
  public get_visibility_range_end(): number;
  public set_visibility_range_begin_margin(_distance: number): void;
  public get_visibility_range_begin_margin(): number;
  public set_visibility_range_begin(_distance: number): void;
  public get_visibility_range_begin(): number;
  public set_visibility_range_fade_mode(_mode: number): void;
  public get_visibility_range_fade_mode(): number;
  public set_instance_shader_parameter(_name: GDString | StringName | string, _value: any): void;
  public get_instance_shader_parameter(_name: GDString | StringName | string): any;
  public set_extra_cull_margin(_margin: number): void;
  public get_extra_cull_margin(): number;
  public set_lightmap_scale(_scale: number): void;
  public get_lightmap_scale(): number;
  public set_gi_mode(_mode: number): void;
  public get_gi_mode(): number;
  public set_ignore_occlusion_culling(_ignore_culling: boolean): void;
  public is_ignoring_occlusion_culling(): boolean;
  public set_custom_aabb(_aabb: AABB): void;
  public get_custom_aabb(): AABB;
  public get material_override(): BaseMaterial3D;
  public set material_override(value): void;
  public get material_overlay(): BaseMaterial3D;
  public set material_overlay(value): void;
  public get transparency(): number;
  public set transparency(value): void;
  public get cast_shadow(): number;
  public set cast_shadow(value): void;
  public get extra_cull_margin(): number;
  public set extra_cull_margin(value): void;
  public get custom_aabb(): AABB;
  public set custom_aabb(value): void;
  public get lod_bias(): number;
  public set lod_bias(value): void;
  public get ignore_occlusion_culling(): boolean;
  public set ignore_occlusion_culling(value): void;
  public get gi_mode(): number;
  public set gi_mode(value): void;
  public get gi_lightmap_scale(): number;
  public set gi_lightmap_scale(value): void;
  public get visibility_range_begin(): number;
  public set visibility_range_begin(value): void;
  public get visibility_range_begin_margin(): number;
  public set visibility_range_begin_margin(value): void;
  public get visibility_range_end(): number;
  public set visibility_range_end(value): void;
  public get visibility_range_end_margin(): number;
  public set visibility_range_end_margin(value): void;
  public get visibility_range_fade_mode(): number;
  public set visibility_range_fade_mode(value): void;
  static ShadowCastingSetting = {
    SHADOW_CASTING_SETTING_OFF = 0,
    SHADOW_CASTING_SETTING_ON = 1,
    SHADOW_CASTING_SETTING_DOUBLE_SIDED = 2,
    SHADOW_CASTING_SETTING_SHADOWS_ONLY = 3,
  }
  static GIMode = {
    GI_MODE_DISABLED = 0,
    GI_MODE_STATIC = 1,
    GI_MODE_DYNAMIC = 2,
  }
  static LightmapScale = {
    LIGHTMAP_SCALE_1X = 0,
    LIGHTMAP_SCALE_2X = 1,
    LIGHTMAP_SCALE_4X = 2,
    LIGHTMAP_SCALE_8X = 3,
    LIGHTMAP_SCALE_MAX = 4,
  }
  static VisibilityRangeFadeMode = {
    VISIBILITY_RANGE_FADE_DISABLED = 0,
    VISIBILITY_RANGE_FADE_SELF = 1,
    VISIBILITY_RANGE_FADE_DEPENDENCIES = 2,
  }
}