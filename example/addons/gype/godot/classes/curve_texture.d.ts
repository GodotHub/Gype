
import { Texture2D } from "@godot/classes/texture2d";
import { Curve } from "@godot/classes/curve";
export declare class CurveTexture extends Texture2D{
  public set_width(_width: number): void;
  public set_curve(_curve: Curve): void;
  public get_curve(): Curve;
  public set_texture_mode(_texture_mode: number): void;
  public get_texture_mode(): number;
  public get width(): number;
  public set width(value): void;
  public get texture_mode(): number;
  public set texture_mode(value): void;
  public get curve(): Curve;
  public set curve(value): void;
  static TextureMode = {
    TEXTURE_MODE_RGB = 0,
    TEXTURE_MODE_RED = 1,
  }
}