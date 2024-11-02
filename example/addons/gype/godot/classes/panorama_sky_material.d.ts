
import { Material } from "@godot/classes/material";
import { Texture2D } from "@godot/classes/texture2d";


export declare class PanoramaSkyMaterial extends Material{
  public set_panorama(_texture: Texture2D): void;
  public get_panorama(): Texture2D;
  public set_filtering_enabled(_enabled: boolean): void;
  public is_filtering_enabled(): boolean;
  public set_energy_multiplier(_multiplier: number): void;
  public get_energy_multiplier(): number;
  public get panorama(): Texture2D;
  public set panorama(value): void;
  public get filter(): boolean;
  public set filter(value): void;
  public get energy_multiplier(): number;
  public set energy_multiplier(value): void;
}