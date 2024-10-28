
import { Noise } from "@godot/classes/noise";
import { Gradient } from "@godot/classes/gradient";
import { Texture3D } from "@godot/classes/texture3d";

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
  public get width(): number {
    get_width();
  }
  public set width(value: number): void {
    set_width(value);
  }
  public get height(): number {
    get_height();
  }
  public set height(value: number): void {
    set_height(value);
  }
  public get depth(): number {
    get_depth();
  }
  public set depth(value: number): void {
    set_depth(value);
  }
  public get invert(): boolean {
    get_invert();
  }
  public set invert(value: boolean): void {
    set_invert(value);
  }
  public get seamless(): boolean {
    get_seamless();
  }
  public set seamless(value: boolean): void {
    set_seamless(value);
  }
  public get seamless_blend_skirt(): number {
    get_seamless_blend_skirt();
  }
  public set seamless_blend_skirt(value: number): void {
    set_seamless_blend_skirt(value);
  }
  public get normalize(): boolean {
    is_normalized();
  }
  public set normalize(value: boolean): void {
    set_normalize(value);
  }
  public get color_ramp(): Gradient {
    get_color_ramp();
  }
  public set color_ramp(value: Gradient): void {
    set_color_ramp(value);
  }
  public get noise(): Noise {
    get_noise();
  }
  public set noise(value: Noise): void {
    set_noise(value);
  }
}