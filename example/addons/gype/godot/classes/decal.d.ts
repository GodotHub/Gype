
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
  public get size(): Vector3 {
    get_size();
  }
  public set size(value): void {
    set_size(value);
  }
  public get texture_albedo(): Texture2D {
    get_texture();
  }
  public set texture_albedo(value): void {
    set_texture(value);
  }
  public get texture_normal(): Texture2D {
    get_texture();
  }
  public set texture_normal(value): void {
    set_texture(value);
  }
  public get texture_orm(): Texture2D {
    get_texture();
  }
  public set texture_orm(value): void {
    set_texture(value);
  }
  public get texture_emission(): Texture2D {
    get_texture();
  }
  public set texture_emission(value): void {
    set_texture(value);
  }
  public get emission_energy(): number {
    get_emission_energy();
  }
  public set emission_energy(value): void {
    set_emission_energy(value);
  }
  public get modulate(): Color {
    get_modulate();
  }
  public set modulate(value): void {
    set_modulate(value);
  }
  public get albedo_mix(): number {
    get_albedo_mix();
  }
  public set albedo_mix(value): void {
    set_albedo_mix(value);
  }
  public get normal_fade(): number {
    get_normal_fade();
  }
  public set normal_fade(value): void {
    set_normal_fade(value);
  }
  public get upper_fade(): number {
    get_upper_fade();
  }
  public set upper_fade(value): void {
    set_upper_fade(value);
  }
  public get lower_fade(): number {
    get_lower_fade();
  }
  public set lower_fade(value): void {
    set_lower_fade(value);
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
  public get distance_fade_length(): number {
    get_distance_fade_length();
  }
  public set distance_fade_length(value): void {
    set_distance_fade_length(value);
  }
  public get cull_mask(): number {
    get_cull_mask();
  }
  public set cull_mask(value): void {
    set_cull_mask(value);
  }
  static DecalTexture = {
    TEXTURE_ALBEDO = 0,
    TEXTURE_NORMAL = 1,
    TEXTURE_ORM = 2,
    TEXTURE_EMISSION = 3,
    TEXTURE_MAX = 4,
  }
}