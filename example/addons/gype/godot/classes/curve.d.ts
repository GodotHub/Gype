
import { Resource } from "@godot/classes/resource";

export declare class Curve extends Resource{
  public get_point_count(): number;
  public set_point_count(_count: number): void;
  public add_point(_position: Vector2, _left_tangent: number, _right_tangent: number, _left_mode: number, _right_mode: number): number;
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
  public get min_value(): number {
    get_min_value();
  }
  public set min_value(value: number): void {
    set_min_value(value);
  }
  public get max_value(): number {
    get_max_value();
  }
  public set max_value(value: number): void {
    set_max_value(value);
  }
  public get bake_resolution(): number {
    get_bake_resolution();
  }
  public set bake_resolution(value: number): void {
    set_bake_resolution(value);
  }
  public get point_count(): number {
    get_point_count();
  }
  public set point_count(value: number): void {
    set_point_count(value);
  }
  static TangentMode = {
    TANGENT_FREE = 0,
    TANGENT_LINEAR = 1,
    TANGENT_MODE_COUNT = 2,
  }
}