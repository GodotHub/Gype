
import { Shape3D } from "@godot/classes/shape3d";

export declare class SeparationRayShape3D extends Shape3D{
  public set_length(_length: number): void;
  public get_length(): number;
  public set_slide_on_slope(_active: boolean): void;
  public get_slide_on_slope(): boolean;
  public get length(): number {
    get_length();
  }
  public set length(value): void {
    set_length(value);
  }
  public get slide_on_slope(): boolean {
    get_slide_on_slope();
  }
  public set slide_on_slope(value): void {
    set_slide_on_slope(value);
  }
}