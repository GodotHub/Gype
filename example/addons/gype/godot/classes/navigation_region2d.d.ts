
import { Node2D } from "@godot/classes/node2d";
import { NavigationPolygon } from "@godot/classes/navigation_polygon";

export declare class NavigationRegion2D extends Node2D{
  public get_rid(): RID;
  public set_navigation_polygon(_navigation_polygon: NavigationPolygon): void;
  public get_navigation_polygon(): NavigationPolygon;
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
  public bake_navigation_polygon(_on_thread: boolean): void;
  public is_baking(): boolean;
  public get navigation_polygon(): NavigationPolygon {
    get_navigation_polygon();
  }
  public set navigation_polygon(value: NavigationPolygon): void {
    set_navigation_polygon(value);
  }
  public get enabled(): boolean {
    is_enabled();
  }
  public set enabled(value: boolean): void {
    set_enabled(value);
  }
  public get use_edge_connections(): boolean {
    get_use_edge_connections();
  }
  public set use_edge_connections(value: boolean): void {
    set_use_edge_connections(value);
  }
  public get navigation_layers(): number {
    get_navigation_layers();
  }
  public set navigation_layers(value: number): void {
    set_navigation_layers(value);
  }
  public get enter_cost(): number {
    get_enter_cost();
  }
  public set enter_cost(value: number): void {
    set_enter_cost(value);
  }
  public get travel_cost(): number {
    get_travel_cost();
  }
  public set travel_cost(value: number): void {
    set_travel_cost(value);
  }
}