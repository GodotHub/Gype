
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
  public get radius(): number {
    get_radius();
  }
  public set radius(value): void {
    set_radius(value);
  }
  public get height(): number {
    get_height();
  }
  public set height(value): void {
    set_height(value);
  }
  public get vertices(): PackedVector3Array {
    get_vertices();
  }
  public set vertices(value): void {
    set_vertices(value);
  }
  public get affect_navigation_mesh(): boolean {
    get_affect_navigation_mesh();
  }
  public set affect_navigation_mesh(value): void {
    set_affect_navigation_mesh(value);
  }
  public get carve_navigation_mesh(): boolean {
    get_carve_navigation_mesh();
  }
  public set carve_navigation_mesh(value): void {
    set_carve_navigation_mesh(value);
  }
  public get avoidance_enabled(): boolean {
    get_avoidance_enabled();
  }
  public set avoidance_enabled(value): void {
    set_avoidance_enabled(value);
  }
  public get velocity(): Vector3 {
    get_velocity();
  }
  public set velocity(value): void {
    set_velocity(value);
  }
  public get avoidance_layers(): number {
    get_avoidance_layers();
  }
  public set avoidance_layers(value): void {
    set_avoidance_layers(value);
  }
  public get use_3d_avoidance(): boolean {
    get_use_3d_avoidance();
  }
  public set use_3d_avoidance(value): void {
    set_use_3d_avoidance(value);
  }
}