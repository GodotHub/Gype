
import { Texture2D } from "@godot/classes/texture2d";
import { VisualInstance3D } from "@godot/classes/visual_instance3d";

export declare class Light3D extends VisualInstance3D{
  public set_editor_only(_editor_only: boolean): void;
  public is_editor_only(): boolean;
  public set_param(_param: number, _value: number): void;
  public get_param(_param: number): number;
  public set_shadow(_enabled: boolean): void;
  public has_shadow(): boolean;
  public set_negative(_enabled: boolean): void;
  public is_negative(): boolean;
  public set_cull_mask(_cull_mask: number): void;
  public get_cull_mask(): number;
  public set_enable_distance_fade(_enable: boolean): void;
  public is_distance_fade_enabled(): boolean;
  public set_distance_fade_begin(_distance: number): void;
  public get_distance_fade_begin(): number;
  public set_distance_fade_shadow(_distance: number): void;
  public get_distance_fade_shadow(): number;
  public set_distance_fade_length(_distance: number): void;
  public get_distance_fade_length(): number;
  public set_color(_color: Color): void;
  public get_color(): Color;
  public set_shadow_reverse_cull_face(_enable: boolean): void;
  public get_shadow_reverse_cull_face(): boolean;
  public set_bake_mode(_bake_mode: number): void;
  public get_bake_mode(): number;
  public set_projector(_projector: Texture2D): void;
  public get_projector(): Texture2D;
  public set_temperature(_temperature: number): void;
  public get_temperature(): number;
  public get_correlated_color(): Color;
  public get light_intensity_lumens(): number {
    get_param();
  }
  public set light_intensity_lumens(value): void {
    set_param(value);
  }
  public get light_intensity_lux(): number {
    get_param();
  }
  public set light_intensity_lux(value): void {
    set_param(value);
  }
  public get light_temperature(): number {
    get_temperature();
  }
  public set light_temperature(value): void {
    set_temperature(value);
  }
  public get light_color(): Color {
    get_color();
  }
  public set light_color(value): void {
    set_color(value);
  }
  public get light_energy(): number {
    get_param();
  }
  public set light_energy(value): void {
    set_param(value);
  }
  public get light_indirect_energy(): number {
    get_param();
  }
  public set light_indirect_energy(value): void {
    set_param(value);
  }
  public get light_volumetric_fog_energy(): number {
    get_param();
  }
  public set light_volumetric_fog_energy(value): void {
    set_param(value);
  }
  public get light_projector(): Texture2D {
    get_projector();
  }
  public set light_projector(value): void {
    set_projector(value);
  }
  public get light_size(): number {
    get_param();
  }
  public set light_size(value): void {
    set_param(value);
  }
  public get light_angular_distance(): number {
    get_param();
  }
  public set light_angular_distance(value): void {
    set_param(value);
  }
  public get light_negative(): boolean {
    is_negative();
  }
  public set light_negative(value): void {
    set_negative(value);
  }
  public get light_specular(): number {
    get_param();
  }
  public set light_specular(value): void {
    set_param(value);
  }
  public get light_bake_mode(): number {
    get_bake_mode();
  }
  public set light_bake_mode(value): void {
    set_bake_mode(value);
  }
  public get light_cull_mask(): number {
    get_cull_mask();
  }
  public set light_cull_mask(value): void {
    set_cull_mask(value);
  }
  public get shadow_enabled(): boolean {
    has_shadow();
  }
  public set shadow_enabled(value): void {
    set_shadow(value);
  }
  public get shadow_bias(): number {
    get_param();
  }
  public set shadow_bias(value): void {
    set_param(value);
  }
  public get shadow_normal_bias(): number {
    get_param();
  }
  public set shadow_normal_bias(value): void {
    set_param(value);
  }
  public get shadow_reverse_cull_face(): boolean {
    get_shadow_reverse_cull_face();
  }
  public set shadow_reverse_cull_face(value): void {
    set_shadow_reverse_cull_face(value);
  }
  public get shadow_transmittance_bias(): number {
    get_param();
  }
  public set shadow_transmittance_bias(value): void {
    set_param(value);
  }
  public get shadow_opacity(): number {
    get_param();
  }
  public set shadow_opacity(value): void {
    set_param(value);
  }
  public get shadow_blur(): number {
    get_param();
  }
  public set shadow_blur(value): void {
    set_param(value);
  }
  public get distance_fade_enabled(): boolean {
    is_distance_fade_enabled();
  }
  public set distance_fade_enabled(value): void {
    set_enable_distance_fade(value);
  }
  public get distance_fade_begin(): number {
    get_distance_fade_begin();
  }
  public set distance_fade_begin(value): void {
    set_distance_fade_begin(value);
  }
  public get distance_fade_shadow(): number {
    get_distance_fade_shadow();
  }
  public set distance_fade_shadow(value): void {
    set_distance_fade_shadow(value);
  }
  public get distance_fade_length(): number {
    get_distance_fade_length();
  }
  public set distance_fade_length(value): void {
    set_distance_fade_length(value);
  }
  public get editor_only(): boolean {
    is_editor_only();
  }
  public set editor_only(value): void {
    set_editor_only(value);
  }
  static Param = {
    PARAM_ENERGY = 0,
    PARAM_INDIRECT_ENERGY = 1,
    PARAM_VOLUMETRIC_FOG_ENERGY = 2,
    PARAM_SPECULAR = 3,
    PARAM_RANGE = 4,
    PARAM_SIZE = 5,
    PARAM_ATTENUATION = 6,
    PARAM_SPOT_ANGLE = 7,
    PARAM_SPOT_ATTENUATION = 8,
    PARAM_SHADOW_MAX_DISTANCE = 9,
    PARAM_SHADOW_SPLIT_1_OFFSET = 10,
    PARAM_SHADOW_SPLIT_2_OFFSET = 11,
    PARAM_SHADOW_SPLIT_3_OFFSET = 12,
    PARAM_SHADOW_FADE_START = 13,
    PARAM_SHADOW_NORMAL_BIAS = 14,
    PARAM_SHADOW_BIAS = 15,
    PARAM_SHADOW_PANCAKE_SIZE = 16,
    PARAM_SHADOW_OPACITY = 17,
    PARAM_SHADOW_BLUR = 18,
    PARAM_TRANSMITTANCE_BIAS = 19,
    PARAM_INTENSITY = 20,
    PARAM_MAX = 21,
  }
  static BakeMode = {
    BAKE_DISABLED = 0,
    BAKE_STATIC = 1,
    BAKE_DYNAMIC = 2,
  }
}