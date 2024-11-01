
import { Texture2D } from "@godot/classes/texture2d";
import { Material } from "@godot/classes/material";

export declare class PanoramaSkyMaterial extends Material{
  public set_panorama(_texture: Texture2D): void;
  public get_panorama(): Texture2D;
  public set_filtering_enabled(_enabled: boolean): void;
  public is_filtering_enabled(): boolean;
  public set_energy_multiplier(_multiplier: number): void;
  public get_energy_multiplier(): number;
  public get panorama(): Texture2D {
    get_panorama();
  }
  public set panorama(value): void {
    set_panorama(value);
  }
  public get filter(): boolean {
    is_filtering_enabled();
  }
  public set filter(value): void {
    set_filtering_enabled(value);
  }
  public get energy_multiplier(): number {
    get_energy_multiplier();
  }
  public set energy_multiplier(value): void {
    set_energy_multiplier(value);
  }
}