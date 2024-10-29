
import { Gradient } from "@godot/classes/gradient";
import { Texture2D } from "@godot/classes/texture2d";

export declare class GradientTexture1D extends Texture2D{
  public set_gradient(_gradient: Gradient): void;
  public get_gradient(): Gradient;
  public set_width(_width: number): void;
  public set_use_hdr(_enabled: boolean): void;
  public is_using_hdr(): boolean;
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
  public get use_hdr(): boolean {
    is_using_hdr();
  }
  public set use_hdr(value): void {
    set_use_hdr(value);
  }
}