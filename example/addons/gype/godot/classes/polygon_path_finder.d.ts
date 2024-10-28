
import { Resource } from "@godot/classes/resource";

export declare class PolygonPathFinder extends Resource{
  public setup(_points: PackedVector2Array, _connections: PackedInt32Array): void;
  public find_path(_from: Vector2, _to: Vector2): PackedVector2Array;
  public get_intersections(_from: Vector2, _to: Vector2): PackedVector2Array;
  public get_closest_point(_point: Vector2): Vector2;
  public is_point_inside(_point: Vector2): boolean;
  public set_point_penalty(_idx: number, _penalty: number): void;
  public get_point_penalty(_idx: number): number;
  public get_bounds(): Rect2;
  public get data(): Dictionary {
    _get_data();
  }
  public set data(value: Dictionary): void {
    _set_data(value);
  }
}