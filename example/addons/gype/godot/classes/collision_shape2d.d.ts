
import { Node2D } from "@godot/classes/node2d";
import { Shape2D } from "@godot/classes/shape2d";
export declare class CollisionShape2D extends Node2D{
  public set_shape(_shape: Shape2D): void;
  public get_shape(): Shape2D;
  public set_disabled(_disabled: boolean): void;
  public is_disabled(): boolean;
  public set_one_way_collision(_enabled: boolean): void;
  public is_one_way_collision_enabled(): boolean;
  public set_one_way_collision_margin(_margin: number): void;
  public get_one_way_collision_margin(): number;
  public set_debug_color(_color: Color): void;
  public get_debug_color(): Color;
  public get shape(): Shape2D;
  public set shape(value): void;
  public get disabled(): boolean;
  public set disabled(value): void;
  public get one_way_collision(): boolean;
  public set one_way_collision(value): void;
  public get one_way_collision_margin(): number;
  public set one_way_collision_margin(value): void;
  public get debug_color(): Color;
  public set debug_color(value): void;
}