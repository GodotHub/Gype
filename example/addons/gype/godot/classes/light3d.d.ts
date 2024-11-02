
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
  public get light_intensity_lumens(): number;
  public set light_intensity_lumens(value): void;
  public get light_intensity_lux(): number;
  public set light_intensity_lux(value): void;
  public get light_temperature(): number;
  public set light_temperature(value): void;
  public get light_color(): Color;
  public set light_color(value): void;
  public get light_energy(): number;
  public set light_energy(value): void;
  public get light_indirect_energy(): number;
  public set light_indirect_energy(value): void;
  public get light_volumetric_fog_energy(): number;
  public set light_volumetric_fog_energy(value): void;
  public get light_projector(): Texture2D;
  public set light_projector(value): void;
  public get light_size(): number;
  public set light_size(value): void;
  public get light_angular_distance(): number;
  public set light_angular_distance(value): void;
  public get light_negative(): boolean;
  public set light_negative(value): void;
  public get light_specular(): number;
  public set light_specular(value): void;
  public get light_bake_mode(): number;
  public set light_bake_mode(value): void;
  public get light_cull_mask(): number;
  public set light_cull_mask(value): void;
  public get shadow_enabled(): boolean;
  public set shadow_enabled(value): void;
  public get shadow_bias(): number;
  public set shadow_bias(value): void;
  public get shadow_normal_bias(): number;
  public set shadow_normal_bias(value): void;
  public get shadow_reverse_cull_face(): boolean;
  public set shadow_reverse_cull_face(value): void;
  public get shadow_transmittance_bias(): number;
  public set shadow_transmittance_bias(value): void;
  public get shadow_opacity(): number;
  public set shadow_opacity(value): void;
  public get shadow_blur(): number;
  public set shadow_blur(value): void;
  public get distance_fade_enabled(): boolean;
  public set distance_fade_enabled(value): void;
  public get distance_fade_begin(): number;
  public set distance_fade_begin(value): void;
  public get distance_fade_shadow(): number;
  public set distance_fade_shadow(value): void;
  public get distance_fade_length(): number;
  public set distance_fade_length(value): void;
  public get editor_only(): boolean;
  public set editor_only(value): void;
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