
import { Resource } from "@godot/classes/resource";
export declare class Curve extends Resource{
  public get_point_count(): number;
  public set_point_count(_count: number): void;
  public add_point(_position: Vector2, _left_tangent: number = 0, _right_tangent: number = 0, _left_mode: number = 0, _right_mode: number = 0): number;
  public remove_point(_index: number): void;
  public clear_points(): void;
  public get_point_position(_index: number): Vector2;
  public set_point_value(_index: number, _y: number): void;
  public set_point_offset(_index: number, _offset: number): number;
  public sample(_offset: number): number;
  public sample_baked(_offset: number): number;
  public get_point_left_tangent(_index: number): number;
  public get_point_right_tangent(_index: number): number;
  public get_point_left_mode(_index: number): number;
  public get_point_right_mode(_index: number): number;
  public set_point_left_tangent(_index: number, _tangent: number): void;
  public set_point_right_tangent(_index: number, _tangent: number): void;
  public set_point_left_mode(_index: number, _mode: number): void;
  public set_point_right_mode(_index: number, _mode: number): void;
  public get_min_value(): number;
  public set_min_value(_min: number): void;
  public get_max_value(): number;
  public set_max_value(_max: number): void;
  public clean_dupes(): void;
  public bake(): void;
  public get_bake_resolution(): number;
  public set_bake_resolution(_resolution: number): void;
  public get min_value(): number;
  public set min_value(value): void;
  public get max_value(): number;
  public set max_value(value): void;
  public get bake_resolution(): number;
  public set bake_resolution(value): void;
  public get point_count(): number;
  public set point_count(value): void;
  static TangentMode = {
    TANGENT_FREE = 0,
    TANGENT_LINEAR = 1,
    TANGENT_MODE_COUNT = 2,
  }
  public get range_changed(): Signal;
}