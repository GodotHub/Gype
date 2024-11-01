
import { Shape2D } from "@godot/classes/shape2d";

export declare class CircleShape2D extends Shape2D{
  public set_radius(_radius: number): void;
  public get_radius(): number;
  public get radius(): number {
    get_radius();
  }
  public set radius(value): void {
    set_radius(value);
  }
}