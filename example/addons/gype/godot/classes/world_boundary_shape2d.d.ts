
import { Shape2D } from "@godot/classes/shape2d";

export declare class WorldBoundaryShape2D extends Shape2D{
  public set_normal(_normal: Vector2): void;
  public get_normal(): Vector2;
  public set_distance(_distance: number): void;
  public get_distance(): number;
  public get normal(): Vector2 {
    get_normal();
  }
  public set normal(value: Vector2): void {
    set_normal(value);
  }
  public get distance(): number {
    get_distance();
  }
  public set distance(value: number): void {
    set_distance(value);
  }
}