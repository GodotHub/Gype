
import { Material } from "@godot/classes/material";
import { Texture3D } from "@godot/classes/texture3d";


export declare class FogMaterial extends Material{
  public set_density(_density: number): void;
  public get_density(): number;
  public set_albedo(_albedo: Color): void;
  public get_albedo(): Color;
  public set_emission(_emission: Color): void;
  public get_emission(): Color;
  public set_height_falloff(_height_falloff: number): void;
  public get_height_falloff(): number;
  public set_edge_fade(_edge_fade: number): void;
  public get_edge_fade(): number;
  public set_density_texture(_density_texture: Texture3D): void;
  public get_density_texture(): Texture3D;
  public get density(): number;
  public set density(value): void;
  public get albedo(): Color;
  public set albedo(value): void;
  public get emission(): Color;
  public set emission(value): void;
  public get height_falloff(): number;
  public set height_falloff(value): void;
  public get edge_fade(): number;
  public set edge_fade(value): void;
  public get density_texture(): Texture3D;
  public set density_texture(value): void;
}