
import { Node3D } from "@godot/classes/node3d";


export declare class NavigationObstacle3D extends Node3D{
  public get_rid(): RID;
  public set_avoidance_enabled(_enabled: boolean): void;
  public get_avoidance_enabled(): boolean;
  public set_navigation_map(_navigation_map: RID): void;
  public get_navigation_map(): RID;
  public set_radius(_radius: number): void;
  public get_radius(): number;
  public set_height(_height: number): void;
  public get_height(): number;
  public set_velocity(_velocity: Vector3): void;
  public get_velocity(): Vector3;
  public set_vertices(_vertices: PackedVector3Array): void;
  public get_vertices(): PackedVector3Array;
  public set_avoidance_layers(_layers: number): void;
  public get_avoidance_layers(): number;
  public set_avoidance_layer_value(_layer_number: number, _value: boolean): void;
  public get_avoidance_layer_value(_layer_number: number): boolean;
  public set_use_3d_avoidance(_enabled: boolean): void;
  public get_use_3d_avoidance(): boolean;
  public set_affect_navigation_mesh(_enabled: boolean): void;
  public get_affect_navigation_mesh(): boolean;
  public set_carve_navigation_mesh(_enabled: boolean): void;
  public get_carve_navigation_mesh(): boolean;
  public get radius(): number;
  public set radius(value): void;
  public get height(): number;
  public set height(value): void;
  public get vertices(): PackedVector3Array;
  public set vertices(value): void;
  public get affect_navigation_mesh(): boolean;
  public set affect_navigation_mesh(value): void;
  public get carve_navigation_mesh(): boolean;
  public set carve_navigation_mesh(value): void;
  public get avoidance_enabled(): boolean;
  public set avoidance_enabled(value): void;
  public get velocity(): Vector3;
  public set velocity(value): void;
  public get avoidance_layers(): number;
  public set avoidance_layers(value): void;
  public get use_3d_avoidance(): boolean;
  public set use_3d_avoidance(value): void;
}