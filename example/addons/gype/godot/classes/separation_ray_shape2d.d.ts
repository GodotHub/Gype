
import { Shape2D } from "@godot/classes/shape2d";
export declare class SeparationRayShape2D extends Shape2D{
  public set_length(_length: number): void;
  public get_length(): number;
  public set_slide_on_slope(_active: boolean): void;
  public get_slide_on_slope(): boolean;
  public get length(): number;
  public set length(value): void;
  public get slide_on_slope(): boolean;
  public set slide_on_slope(value): void;
}