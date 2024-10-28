
import { Shape2D } from "@godot/classes/shape2d";

export declare class RectangleShape2D extends Shape2D{
  public set_size(_size: Vector2): void;
  public get_size(): Vector2;
  public get size(): Vector2 {
    get_size();
  }
  public set size(value: Vector2): void {
    set_size(value);
  }
}