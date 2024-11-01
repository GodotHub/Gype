
import { Resource } from "@godot/classes/resource";

export declare class Curve2D extends Resource{
  public get_point_count(): number;
  public set_point_count(_count: number): void;
  public add_point(_position: Vector2, _in: Vector2, _out: Vector2, _index: number): void;
  public set_point_position(_idx: number, _position: Vector2): void;
  public get_point_position(_idx: number): Vector2;
  public set_point_in(_idx: number, _position: Vector2): void;
  public get_point_in(_idx: number): Vector2;
  public set_point_out(_idx: number, _position: Vector2): void;
  public get_point_out(_idx: number): Vector2;
  public remove_point(_idx: number): void;
  public clear_points(): void;
  public sample(_idx: number, _t: number): Vector2;
  public samplef(_fofs: number): Vector2;
  public set_bake_interval(_distance: number): void;
  public get_bake_interval(): number;
  public get_baked_length(): number;
  public sample_baked(_offset: number, _cubic: boolean): Vector2;
  public sample_baked_with_rotation(_offset: number, _cubic: boolean): Transform2D;
  public get_baked_points(): PackedVector2Array;
  public get_closest_point(_to_point: Vector2): Vector2;
  public get_closest_offset(_to_point: Vector2): number;
  public tessellate(_max_stages: number, _tolerance_degrees: number): PackedVector2Array;
  public tessellate_even_length(_max_stages: number, _tolerance_length: number): PackedVector2Array;
  public get bake_interval(): number {
    get_bake_interval();
  }
  public set bake_interval(value): void {
    set_bake_interval(value);
  }
  public get point_count(): number {
    get_point_count();
  }
  public set point_count(value): void {
    set_point_count(value);
  }
}