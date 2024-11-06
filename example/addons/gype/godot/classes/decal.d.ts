
import { VisualInstance3D } from "@godot/classes/visual_instance3d";
import { Texture2D } from "@godot/classes/texture2d";
export declare class Decal extends VisualInstance3D{
  public set_size(_size: Vector3): void;
  public get_size(): Vector3;
  public set_texture(_type: number, _texture: Texture2D): void;
  public get_texture(_type: number): Texture2D;
  public set_emission_energy(_energy: number): void;
  public get_emission_energy(): number;
  public set_albedo_mix(_energy: number): void;
  public get_albedo_mix(): number;
  public set_modulate(_color: Color): void;
  public get_modulate(): Color;
  public set_upper_fade(_fade: number): void;
  public get_upper_fade(): number;
  public set_lower_fade(_fade: number): void;
  public get_lower_fade(): number;
  public set_normal_fade(_fade: number): void;
  public get_normal_fade(): number;
  public set_enable_distance_fade(_enable: boolean): void;
  public is_distance_fade_enabled(): boolean;
  public set_distance_fade_begin(_distance: number): void;
  public get_distance_fade_begin(): number;
  public set_distance_fade_length(_distance: number): void;
  public get_distance_fade_length(): number;
  public set_cull_mask(_mask: number): void;
  public get_cull_mask(): number;
  public get size(): Vector3;
  public set size(value): void;
  public get texture_albedo(): Texture2D;
  public set texture_albedo(value): void;
  public get texture_normal(): Texture2D;
  public set texture_normal(value): void;
  public get texture_orm(): Texture2D;
  public set texture_orm(value): void;
  public get texture_emission(): Texture2D;
  public set texture_emission(value): void;
  public get emission_energy(): number;
  public set emission_energy(value): void;
  public get modulate(): Color;
  public set modulate(value): void;
  public get albedo_mix(): number;
  public set albedo_mix(value): void;
  public get normal_fade(): number;
  public set normal_fade(value): void;
  public get upper_fade(): number;
  public set upper_fade(value): void;
  public get lower_fade(): number;
  public set lower_fade(value): void;
  public get distance_fade_enabled(): boolean;
  public set distance_fade_enabled(value): void;
  public get distance_fade_begin(): number;
  public set distance_fade_begin(value): void;
  public get distance_fade_length(): number;
  public set distance_fade_length(value): void;
  public get cull_mask(): number;
  public set cull_mask(value): void;
  static DecalTexture = {
    TEXTURE_ALBEDO = 0,
    TEXTURE_NORMAL = 1,
    TEXTURE_ORM = 2,
    TEXTURE_EMISSION = 3,
    TEXTURE_MAX = 4,
  }
}