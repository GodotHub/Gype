
import { Light3D } from "@godot/classes/light3d";

export declare class DirectionalLight3D extends Light3D{
  public set_shadow_mode(_mode: number): void;
  public get_shadow_mode(): number;
  public set_blend_splits(_enabled: boolean): void;
  public is_blend_splits_enabled(): boolean;
  public set_sky_mode(_mode: number): void;
  public get_sky_mode(): number;
  public get directional_shadow_mode(): number {
    get_shadow_mode();
  }
  public set directional_shadow_mode(value): void {
    set_shadow_mode(value);
  }
  public get directional_shadow_split_1(): number {
    get_param();
  }
  public set directional_shadow_split_1(value): void {
    set_param(value);
  }
  public get directional_shadow_split_2(): number {
    get_param();
  }
  public set directional_shadow_split_2(value): void {
    set_param(value);
  }
  public get directional_shadow_split_3(): number {
    get_param();
  }
  public set directional_shadow_split_3(value): void {
    set_param(value);
  }
  public get directional_shadow_blend_splits(): boolean {
    is_blend_splits_enabled();
  }
  public set directional_shadow_blend_splits(value): void {
    set_blend_splits(value);
  }
  public get directional_shadow_fade_start(): number {
    get_param();
  }
  public set directional_shadow_fade_start(value): void {
    set_param(value);
  }
  public get directional_shadow_max_distance(): number {
    get_param();
  }
  public set directional_shadow_max_distance(value): void {
    set_param(value);
  }
  public get directional_shadow_pancake_size(): number {
    get_param();
  }
  public set directional_shadow_pancake_size(value): void {
    set_param(value);
  }
  public get sky_mode(): number {
    get_sky_mode();
  }
  public set sky_mode(value): void {
    set_sky_mode(value);
  }
  static ShadowMode = {
    SHADOW_ORTHOGONAL = 0,
    SHADOW_PARALLEL_2_SPLITS = 1,
    SHADOW_PARALLEL_4_SPLITS = 2,
  }
  static SkyMode = {
    SKY_MODE_LIGHT_AND_SKY = 0,
    SKY_MODE_LIGHT_ONLY = 1,
    SKY_MODE_SKY_ONLY = 2,
  }
}