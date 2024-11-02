
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
  public get navigation_mesh(): NavigationMesh;
  public set navigation_mesh(value): void;
  public get enabled(): boolean;
  public set enabled(value): void;
  public get use_edge_connections(): boolean;
  public set use_edge_connections(value): void;
  public get navigation_layers(): number;
  public set navigation_layers(value): void;
  public get enter_cost(): number;
  public set enter_cost(value): void;
  public get travel_cost(): number;
  public set travel_cost(value): void;
  public get navigation_mesh_changed(): Signal;
  public get bake_finished(): Signal;
}