
import { Resource } from "@godot/classes/resource";
export declare class Curve2D extends Resource{
  public get_point_count(): number;
  public set_point_count(_count: number): void;
  public add_point(_position: Vector2, _in: Vector2 = Vector2(0, 0), _out: Vector2 = Vector2(0, 0), _index: number = -1): void;
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
  public sample_baked(_offset: number = 0.0, _cubic: boolean = false): Vector2;
  public sample_baked_with_rotation(_offset: number = 0.0, _cubic: boolean = false): Transform2D;
  public get_baked_points(): PackedVector2Array;
  public get_closest_point(_to_point: Vector2): Vector2;
  public get_closest_offset(_to_point: Vector2): number;
  public tessellate(_max_stages: number = 5, _tolerance_degrees: number = 4): PackedVector2Array;
  public tessellate_even_length(_max_stages: number = 5, _tolerance_length: number = 20.0): PackedVector2Array;
  public get bake_interval(): number;
  public set bake_interval(value): void;
  public get point_count(): number;
  public set point_count(value): void;
}