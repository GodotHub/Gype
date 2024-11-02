
import { Gradient } from "@godot/classes/gradient";
import { Texture2D } from "@godot/classes/texture2d";


export declare class GradientTexture1D extends Texture2D{
  public set_gradient(_gradient: Gradient): void;
  public get_gradient(): Gradient;
  public set_width(_width: number): void;
  public set_use_hdr(_enabled: boolean): void;
  public is_using_hdr(): boolean;
  public get gradient(): Gradient;
  public set gradient(value): void;
  public get width(): number;
  public set width(value): void;
  public get use_hdr(): boolean;
  public set use_hdr(value): void;
}