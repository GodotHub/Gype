
import { NavigationMesh } from "@godot/classes/navigation_mesh";
import { Node3D } from "@godot/classes/node3d";

export declare class NavigationRegion3D extends Node3D{
  public get_rid(): RID;
  public set_navigation_mesh(_navigation_mesh: NavigationMesh): void;
  public get_navigation_mesh(): NavigationMesh;
  public set_enabled(_enabled: boolean): void;
  public is_enabled(): boolean;
  public set_navigation_map(_navigation_map: RID): void;
  public get_navigation_map(): RID;
  public set_use_edge_connections(_enabled: boolean): void;
  public get_use_edge_connections(): boolean;
  public set_navigation_layers(_navigation_layers: number): void;
  public get_navigation_layers(): number;
  public set_navigation_layer_value(_layer_number: number, _value: boolean): void;
  public get_navigation_layer_value(_layer_number: number): boolean;
  public get_region_rid(): RID;
  public set_enter_cost(_enter_cost: number): void;
  public get_enter_cost(): number;
  public set_travel_cost(_travel_cost: number): void;
  public get_travel_cost(): number;
  public bake_navigation_mesh(_on_thread: boolean): void;
  public is_baking(): boolean;
  public get navigation_mesh(): NavigationMesh {
    get_navigation_mesh();
  }
  public set navigation_mesh(value): void {
    set_navigation_mesh(value);
  }
  public get enabled(): boolean {
    is_enabled();
  }
  public set enabled(value): void {
    set_enabled(value);
  }
  public get use_edge_connections(): boolean {
    get_use_edge_connections();
  }
  public set use_edge_connections(value): void {
    set_use_edge_connections(value);
  }
  public get navigation_layers(): number {
    get_navigation_layers();
  }
  public set navigation_layers(value): void {
    set_navigation_layers(value);
  }
  public get enter_cost(): number {
    get_enter_cost();
  }
  public set enter_cost(value): void {
    set_enter_cost(value);
  }
  public get travel_cost(): number {
    get_travel_cost();
  }
  public set travel_cost(value): void {
    set_travel_cost(value);
  }
}