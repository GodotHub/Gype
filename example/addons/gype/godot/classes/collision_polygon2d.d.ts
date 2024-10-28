
import { Node2D } from "@godot/classes/node2d";

export declare class CollisionPolygon2D extends Node2D{
  public set_polygon(_polygon: PackedVector2Array): void;
  public get_polygon(): PackedVector2Array;
  public set_build_mode(_build_mode: number): void;
  public get_build_mode(): number;
  public set_disabled(_disabled: boolean): void;
  public is_disabled(): boolean;
  public set_one_way_collision(_enabled: boolean): void;
  public is_one_way_collision_enabled(): boolean;
  public set_one_way_collision_margin(_margin: number): void;
  public get_one_way_collision_margin(): number;
  public get build_mode(): number {
    get_build_mode();
  }
  public set build_mode(value: number): void {
    set_build_mode(value);
  }
  public get polygon(): PackedVector2Array {
    get_polygon();
  }
  public set polygon(value: PackedVector2Array): void {
    set_polygon(value);
  }
  public get disabled(): boolean {
    is_disabled();
  }
  public set disabled(value: boolean): void {
    set_disabled(value);
  }
  public get one_way_collision(): boolean {
    is_one_way_collision_enabled();
  }
  public set one_way_collision(value: boolean): void {
    set_one_way_collision(value);
  }
  public get one_way_collision_margin(): number {
    get_one_way_collision_margin();
  }
  public set one_way_collision_margin(value: number): void {
    set_one_way_collision_margin(value);
  }
  static BuildMode = {
    BUILD_SOLIDS = 0,
    BUILD_SEGMENTS = 1,
  }
}