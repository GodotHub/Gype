
import { Resource } from "@godot/classes/resource";


export declare class Gradient extends Resource{
  public add_point(_offset: number, _color: Color): void;
  public remove_point(_point: number): void;
  public set_offset(_point: number, _offset: number): void;
  public get_offset(_point: number): number;
  public reverse(): void;
  public set_color(_point: number, _color: Color): void;
  public get_color(_point: number): Color;
  public sample(_offset: number): Color;
  public get_point_count(): number;
  public set_offsets(_offsets: PackedFloat32Array): void;
  public get_offsets(): PackedFloat32Array;
  public set_colors(_colors: PackedColorArray): void;
  public get_colors(): PackedColorArray;
  public set_interpolation_mode(_interpolation_mode: number): void;
  public get_interpolation_mode(): number;
  public set_interpolation_color_space(_interpolation_color_space: number): void;
  public get_interpolation_color_space(): number;
  public get interpolation_mode(): number;
  public set interpolation_mode(value): void;
  public get interpolation_color_space(): number;
  public set interpolation_color_space(value): void;
  public get offsets(): PackedFloat32Array;
  public set offsets(value): void;
  public get colors(): PackedColorArray;
  public set colors(value): void;
  static InterpolationMode = {
    GRADIENT_INTERPOLATE_LINEAR = 0,
    GRADIENT_INTERPOLATE_CONSTANT = 1,
    GRADIENT_INTERPOLATE_CUBIC = 2,
  }
  static ColorSpace = {
    GRADIENT_COLOR_SPACE_SRGB = 0,
    GRADIENT_COLOR_SPACE_LINEAR_SRGB = 1,
    GRADIENT_COLOR_SPACE_OKLAB = 2,
  }
}