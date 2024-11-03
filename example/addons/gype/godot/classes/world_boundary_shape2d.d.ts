
import { Shape2D } from "@godot/classes/shape2d";
export declare class WorldBoundaryShape2D extends Shape2D{
  public set_normal(_normal: Vector2): void;
  public get_normal(): Vector2;
  public set_distance(_distance: number): void;
  public get_distance(): number;
  public get normal(): Vector2;
  public set normal(value): void;
  public get distance(): number;
  public set distance(value): void;
}