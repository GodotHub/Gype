
import { Texture2D } from "@godot/classes/texture2d";
import { Material } from "@godot/classes/material";

export declare class PhysicalSkyMaterial extends Material{
  public set_rayleigh_coefficient(_rayleigh: number): void;
  public get_rayleigh_coefficient(): number;
  public set_rayleigh_color(_color: Color): void;
  public get_rayleigh_color(): Color;
  public set_mie_coefficient(_mie: number): void;
  public get_mie_coefficient(): number;
  public set_mie_eccentricity(_eccentricity: number): void;
  public get_mie_eccentricity(): number;
  public set_mie_color(_color: Color): void;
  public get_mie_color(): Color;
  public set_turbidity(_turbidity: number): void;
  public get_turbidity(): number;
  public set_sun_disk_scale(_scale: number): void;
  public get_sun_disk_scale(): number;
  public set_ground_color(_color: Color): void;
  public get_ground_color(): Color;
  public set_energy_multiplier(_multiplier: number): void;
  public get_energy_multiplier(): number;
  public set_use_debanding(_use_debanding: boolean): void;
  public get_use_debanding(): boolean;
  public set_night_sky(_night_sky: Texture2D): void;
  public get_night_sky(): Texture2D;
  public get rayleigh_coefficient(): number {
    get_rayleigh_coefficient();
  }
  public set rayleigh_coefficient(value: number): void {
    set_rayleigh_coefficient(value);
  }
  public get rayleigh_color(): Color {
    get_rayleigh_color();
  }
  public set rayleigh_color(value: Color): void {
    set_rayleigh_color(value);
  }
  public get mie_coefficient(): number {
    get_mie_coefficient();
  }
  public set mie_coefficient(value: number): void {
    set_mie_coefficient(value);
  }
  public get mie_eccentricity(): number {
    get_mie_eccentricity();
  }
  public set mie_eccentricity(value: number): void {
    set_mie_eccentricity(value);
  }
  public get mie_color(): Color {
    get_mie_color();
  }
  public set mie_color(value: Color): void {
    set_mie_color(value);
  }
  public get turbidity(): number {
    get_turbidity();
  }
  public set turbidity(value: number): void {
    set_turbidity(value);
  }
  public get sun_disk_scale(): number {
    get_sun_disk_scale();
  }
  public set sun_disk_scale(value: number): void {
    set_sun_disk_scale(value);
  }
  public get ground_color(): Color {
    get_ground_color();
  }
  public set ground_color(value: Color): void {
    set_ground_color(value);
  }
  public get energy_multiplier(): number {
    get_energy_multiplier();
  }
  public set energy_multiplier(value: number): void {
    set_energy_multiplier(value);
  }
  public get use_debanding(): boolean {
    get_use_debanding();
  }
  public set use_debanding(value: boolean): void {
    set_use_debanding(value);
  }
  public get night_sky(): Texture2D {
    get_night_sky();
  }
  public set night_sky(value: Texture2D): void {
    set_night_sky(value);
  }
}