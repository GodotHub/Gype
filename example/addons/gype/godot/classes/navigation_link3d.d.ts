
import { Node3D } from "@godot/classes/node3d";
export declare class NavigationLink3D extends Node3D{
  public get_rid(): RID;
  public set_enabled(_enabled: boolean): void;
  public is_enabled(): boolean;
  public set_bidirectional(_bidirectional: boolean): void;
  public is_bidirectional(): boolean;
  public set_navigation_layers(_navigation_layers: number): void;
  public get_navigation_layers(): number;
  public set_navigation_layer_value(_layer_number: number, _value: boolean): void;
  public get_navigation_layer_value(_layer_number: number): boolean;
  public set_start_position(_position: Vector3): void;
  public get_start_position(): Vector3;
  public set_end_position(_position: Vector3): void;
  public get_end_position(): Vector3;
  public set_global_start_position(_position: Vector3): void;
  public get_global_start_position(): Vector3;
  public set_global_end_position(_position: Vector3): void;
  public get_global_end_position(): Vector3;
  public set_enter_cost(_enter_cost: number): void;
  public get_enter_cost(): number;
  public set_travel_cost(_travel_cost: number): void;
  public get_travel_cost(): number;
  public get enabled(): boolean;
  public set enabled(value): void;
  public get bidirectional(): boolean;
  public set bidirectional(value): void;
  public get navigation_layers(): number;
  public set navigation_layers(value): void;
  public get start_position(): Vector3;
  public set start_position(value): void;
  public get end_position(): Vector3;
  public set end_position(value): void;
  public get enter_cost(): number;
  public set enter_cost(value): void;
  public get travel_cost(): number;
  public set travel_cost(value): void;
}