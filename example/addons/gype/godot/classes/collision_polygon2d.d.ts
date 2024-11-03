
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
  public get build_mode(): number;
  public set build_mode(value): void;
  public get polygon(): PackedVector2Array;
  public set polygon(value): void;
  public get disabled(): boolean;
  public set disabled(value): void;
  public get one_way_collision(): boolean;
  public set one_way_collision(value): void;
  public get one_way_collision_margin(): number;
  public set one_way_collision_margin(value): void;
  static BuildMode = {
    BUILD_SOLIDS = 0,
    BUILD_SEGMENTS = 1,
  }
}