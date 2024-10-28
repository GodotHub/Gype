
import { Shape2D } from "@godot/classes/shape2d";

export declare class ConvexPolygonShape2D extends Shape2D{
  public set_point_cloud(_point_cloud: PackedVector2Array): void;
  public set_points(_points: PackedVector2Array): void;
  public get_points(): PackedVector2Array;
  public get points(): PackedVector2Array {
    get_points();
  }
  public set points(value: PackedVector2Array): void {
    set_points(value);
  }
}