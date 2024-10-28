
import { Texture2D } from "@godot/classes/texture2d";
import { Material } from "@godot/classes/material";

export declare class ProceduralSkyMaterial extends Material{
  public set_sky_top_color(_color: Color): void;
  public get_sky_top_color(): Color;
  public set_sky_horizon_color(_color: Color): void;
  public get_sky_horizon_color(): Color;
  public set_sky_curve(_curve: number): void;
  public get_sky_curve(): number;
  public set_sky_energy_multiplier(_multiplier: number): void;
  public get_sky_energy_multiplier(): number;
  public set_sky_cover(_sky_cover: Texture2D): void;
  public get_sky_cover(): Texture2D;
  public set_sky_cover_modulate(_color: Color): void;
  public get_sky_cover_modulate(): Color;
  public set_ground_bottom_color(_color: Color): void;
  public get_ground_bottom_color(): Color;
  public set_ground_horizon_color(_color: Color): void;
  public get_ground_horizon_color(): Color;
  public set_ground_curve(_curve: number): void;
  public get_ground_curve(): number;
  public set_ground_energy_multiplier(_energy: number): void;
  public get_ground_energy_multiplier(): number;
  public set_sun_angle_max(_degrees: number): void;
  public get_sun_angle_max(): number;
  public set_sun_curve(_curve: number): void;
  public get_sun_curve(): number;
  public set_use_debanding(_use_debanding: boolean): void;
  public get_use_debanding(): boolean;
  public set_energy_multiplier(_multiplier: number): void;
  public get_energy_multiplier(): number;
  public get sky_top_color(): Color {
    get_sky_top_color();
  }
  public set sky_top_color(value: Color): void {
    set_sky_top_color(value);
  }
  public get sky_horizon_color(): Color {
    get_sky_horizon_color();
  }
  public set sky_horizon_color(value: Color): void {
    set_sky_horizon_color(value);
  }
  public get sky_curve(): number {
    get_sky_curve();
  }
  public set sky_curve(value: number): void {
    set_sky_curve(value);
  }
  public get sky_energy_multiplier(): number {
    get_sky_energy_multiplier();
  }
  public set sky_energy_multiplier(value: number): void {
    set_sky_energy_multiplier(value);
  }
  public get sky_cover(): Texture2D {
    get_sky_cover();
  }
  public set sky_cover(value: Texture2D): void {
    set_sky_cover(value);
  }
  public get sky_cover_modulate(): Color {
    get_sky_cover_modulate();
  }
  public set sky_cover_modulate(value: Color): void {
    set_sky_cover_modulate(value);
  }
  public get ground_bottom_color(): Color {
    get_ground_bottom_color();
  }
  public set ground_bottom_color(value: Color): void {
    set_ground_bottom_color(value);
  }
  public get ground_horizon_color(): Color {
    get_ground_horizon_color();
  }
  public set ground_horizon_color(value: Color): void {
    set_ground_horizon_color(value);
  }
  public get ground_curve(): number {
    get_ground_curve();
  }
  public set ground_curve(value: number): void {
    set_ground_curve(value);
  }
  public get ground_energy_multiplier(): number {
    get_ground_energy_multiplier();
  }
  public set ground_energy_multiplier(value: number): void {
    set_ground_energy_multiplier(value);
  }
  public get sun_angle_max(): number {
    get_sun_angle_max();
  }
  public set sun_angle_max(value: number): void {
    set_sun_angle_max(value);
  }
  public get sun_curve(): number {
    get_sun_curve();
  }
  public set sun_curve(value: number): void {
    set_sun_curve(value);
  }
  public get use_debanding(): boolean {
    get_use_debanding();
  }
  public set use_debanding(value: boolean): void {
    set_use_debanding(value);
  }
  public get energy_multiplier(): number {
    get_energy_multiplier();
  }
  public set energy_multiplier(value: number): void {
    set_energy_multiplier(value);
  }
}