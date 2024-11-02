
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
  public get rayleigh_coefficient(): number;
  public set rayleigh_coefficient(value): void;
  public get rayleigh_color(): Color;
  public set rayleigh_color(value): void;
  public get mie_coefficient(): number;
  public set mie_coefficient(value): void;
  public get mie_eccentricity(): number;
  public set mie_eccentricity(value): void;
  public get mie_color(): Color;
  public set mie_color(value): void;
  public get turbidity(): number;
  public set turbidity(value): void;
  public get sun_disk_scale(): number;
  public set sun_disk_scale(value): void;
  public get ground_color(): Color;
  public set ground_color(value): void;
  public get energy_multiplier(): number;
  public set energy_multiplier(value): void;
  public get use_debanding(): boolean;
  public set use_debanding(value): void;
  public get night_sky(): Texture2D;
  public set night_sky(value): void;
}