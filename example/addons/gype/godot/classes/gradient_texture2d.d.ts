
import { Texture2D } from "@godot/classes/texture2d";
import { Gradient } from "@godot/classes/gradient";
export declare class GradientTexture2D extends Texture2D{
  public set_gradient(_gradient: Gradient): void;
  public get_gradient(): Gradient;
  public set_width(_width: number): void;
  public set_height(_height: number): void;
  public set_use_hdr(_enabled: boolean): void;
  public is_using_hdr(): boolean;
  public set_fill(_fill: number): void;
  public get_fill(): number;
  public set_fill_from(_fill_from: Vector2): void;
  public get_fill_from(): Vector2;
  public set_fill_to(_fill_to: Vector2): void;
  public get_fill_to(): Vector2;
  public set_repeat(_repeat: number): void;
  public get_repeat(): number;
  public get gradient(): Gradient;
  public set gradient(value): void;
  public get width(): number;
  public set width(value): void;
  public get height(): number;
  public set height(value): void;
  public get use_hdr(): boolean;
  public set use_hdr(value): void;
  public get fill(): number;
  public set fill(value): void;
  public get fill_from(): Vector2;
  public set fill_from(value): void;
  public get fill_to(): Vector2;
  public set fill_to(value): void;
  public get repeat(): number;
  public set repeat(value): void;
  static Fill = {
    FILL_LINEAR = 0,
    FILL_RADIAL = 1,
    FILL_SQUARE = 2,
  }
  static Repeat = {
    REPEAT_NONE = 0,
    REPEAT = 1,
    REPEAT_MIRROR = 2,
  }
}