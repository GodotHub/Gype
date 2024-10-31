
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
  public get gradient(): Gradient {
    get_gradient();
  }
  public set gradient(value): void {
    set_gradient(value);
  }
  public get width(): number {
    get_width();
  }
  public set width(value): void {
    set_width(value);
  }
  public get height(): number {
    get_height();
  }
  public set height(value): void {
    set_height(value);
  }
  public get use_hdr(): boolean {
    is_using_hdr();
  }
  public set use_hdr(value): void {
    set_use_hdr(value);
  }
  public get fill(): number {
    get_fill();
  }
  public set fill(value): void {
    set_fill(value);
  }
  public get fill_from(): Vector2 {
    get_fill_from();
  }
  public set fill_from(value): void {
    set_fill_from(value);
  }
  public get fill_to(): Vector2 {
    get_fill_to();
  }
  public set fill_to(value): void {
    set_fill_to(value);
  }
  public get repeat(): number {
    get_repeat();
  }
  public set repeat(value): void {
    set_repeat(value);
  }
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