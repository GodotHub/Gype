
import { Node2D } from "@godot/classes/node2d";
export declare class NavigationObstacle2D extends Node2D{
  public get_rid(): RID;
  public set_avoidance_enabled(_enabled: boolean): void;
  public get_avoidance_enabled(): boolean;
  public set_navigation_map(_navigation_map: RID): void;
  public get_navigation_map(): RID;
  public set_radius(_radius: number): void;
  public get_radius(): number;
  public set_velocity(_velocity: Vector2): void;
  public get_velocity(): Vector2;
  public set_vertices(_vertices: PackedVector2Array): void;
  public get_vertices(): PackedVector2Array;
  public set_avoidance_layers(_layers: number): void;
  public get_avoidance_layers(): number;
  public set_avoidance_layer_value(_layer_number: number, _value: boolean): void;
  public get_avoidance_layer_value(_layer_number: number): boolean;
  public set_affect_navigation_mesh(_enabled: boolean): void;
  public get_affect_navigation_mesh(): boolean;
  public set_carve_navigation_mesh(_enabled: boolean): void;
  public get_carve_navigation_mesh(): boolean;
  public get radius(): number;
  public set radius(value): void;
  public get vertices(): PackedVector2Array;
  public set vertices(value): void;
  public get affect_navigation_mesh(): boolean;
  public set affect_navigation_mesh(value): void;
  public get carve_navigation_mesh(): boolean;
  public set carve_navigation_mesh(value): void;
  public get avoidance_enabled(): boolean;
  public set avoidance_enabled(value): void;
  public get velocity(): Vector2;
  public set velocity(value): void;
  public get avoidance_layers(): number;
  public set avoidance_layers(value): void;
}