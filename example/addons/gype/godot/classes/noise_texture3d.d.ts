
import { Noise } from "@godot/classes/noise";
import { Texture3D } from "@godot/classes/texture3d";
import { Gradient } from "@godot/classes/gradient";
export declare class NoiseTexture3D extends Texture3D{
  public set_width(_width: number): void;
  public set_height(_height: number): void;
  public set_depth(_depth: number): void;
  public set_invert(_invert: boolean): void;
  public get_invert(): boolean;
  public set_seamless(_seamless: boolean): void;
  public get_seamless(): boolean;
  public set_seamless_blend_skirt(_seamless_blend_skirt: number): void;
  public get_seamless_blend_skirt(): number;
  public set_normalize(_normalize: boolean): void;
  public is_normalized(): boolean;
  public set_color_ramp(_gradient: Gradient): void;
  public get_color_ramp(): Gradient;
  public set_noise(_noise: Noise): void;
  public get_noise(): Noise;
  public get width(): number;
  public set width(value): void;
  public get height(): number;
  public set height(value): void;
  public get depth(): number;
  public set depth(value): void;
  public get invert(): boolean;
  public set invert(value): void;
  public get seamless(): boolean;
  public set seamless(value): void;
  public get seamless_blend_skirt(): number;
  public set seamless_blend_skirt(value): void;
  public get normalize(): boolean;
  public set normalize(value): void;
  public get color_ramp(): Gradient;
  public set color_ramp(value): void;
  public get noise(): Noise;
  public set noise(value): void;
}