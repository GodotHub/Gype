
import { Material } from "@godot/classes/material";
import { VisualInstance3D } from "@godot/classes/visual_instance3d";

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
  public set_instance_shader_parameter(_name: StringName, _value: any): void;
  public get_instance_shader_parameter(_name: StringName): any;
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
  public get material_override(): BaseMaterial3D {
    get_material_override();
  }
  public set material_override(value): void {
    set_material_override(value);
  }
  public get material_overlay(): BaseMaterial3D {
    get_material_overlay();
  }
  public set material_overlay(value): void {
    set_material_overlay(value);
  }
  public get transparency(): number {
    get_transparency();
  }
  public set transparency(value): void {
    set_transparency(value);
  }
  public get cast_shadow(): number {
    get_cast_shadows_setting();
  }
  public set cast_shadow(value): void {
    set_cast_shadows_setting(value);
  }
  public get extra_cull_margin(): number {
    get_extra_cull_margin();
  }
  public set extra_cull_margin(value): void {
    set_extra_cull_margin(value);
  }
  public get custom_aabb(): AABB {
    get_custom_aabb();
  }
  public set custom_aabb(value): void {
    set_custom_aabb(value);
  }
  public get lod_bias(): number {
    get_lod_bias();
  }
  public set lod_bias(value): void {
    set_lod_bias(value);
  }
  public get ignore_occlusion_culling(): boolean {
    is_ignoring_occlusion_culling();
  }
  public set ignore_occlusion_culling(value): void {
    set_ignore_occlusion_culling(value);
  }
  public get gi_mode(): number {
    get_gi_mode();
  }
  public set gi_mode(value): void {
    set_gi_mode(value);
  }
  public get gi_lightmap_scale(): number {
    get_lightmap_scale();
  }
  public set gi_lightmap_scale(value): void {
    set_lightmap_scale(value);
  }
  public get visibility_range_begin(): number {
    get_visibility_range_begin();
  }
  public set visibility_range_begin(value): void {
    set_visibility_range_begin(value);
  }
  public get visibility_range_begin_margin(): number {
    get_visibility_range_begin_margin();
  }
  public set visibility_range_begin_margin(value): void {
    set_visibility_range_begin_margin(value);
  }
  public get visibility_range_end(): number {
    get_visibility_range_end();
  }
  public set visibility_range_end(value): void {
    set_visibility_range_end(value);
  }
  public get visibility_range_end_margin(): number {
    get_visibility_range_end_margin();
  }
  public set visibility_range_end_margin(value): void {
    set_visibility_range_end_margin(value);
  }
  public get visibility_range_fade_mode(): number {
    get_visibility_range_fade_mode();
  }
  public set visibility_range_fade_mode(value): void {
    set_visibility_range_fade_mode(value);
  }
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