
import { Texture3D } from "@godot/classes/texture3d";
import { Material } from "@godot/classes/material";

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
  public get density(): number {
    get_density();
  }
  public set density(value: number): void {
    set_density(value);
  }
  public get albedo(): Color {
    get_albedo();
  }
  public set albedo(value: Color): void {
    set_albedo(value);
  }
  public get emission(): Color {
    get_emission();
  }
  public set emission(value: Color): void {
    set_emission(value);
  }
  public get height_falloff(): number {
    get_height_falloff();
  }
  public set height_falloff(value: number): void {
    set_height_falloff(value);
  }
  public get edge_fade(): number {
    get_edge_fade();
  }
  public set edge_fade(value: number): void {
    set_edge_fade(value);
  }
  public get density_texture(): Texture3D {
    get_density_texture();
  }
  public set density_texture(value: Texture3D): void {
    set_density_texture(value);
  }
}