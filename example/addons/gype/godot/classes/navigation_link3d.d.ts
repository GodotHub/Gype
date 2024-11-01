
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
  public get enabled(): boolean {
    is_enabled();
  }
  public set enabled(value): void {
    set_enabled(value);
  }
  public get bidirectional(): boolean {
    is_bidirectional();
  }
  public set bidirectional(value): void {
    set_bidirectional(value);
  }
  public get navigation_layers(): number {
    get_navigation_layers();
  }
  public set navigation_layers(value): void {
    set_navigation_layers(value);
  }
  public get start_position(): Vector3 {
    get_start_position();
  }
  public set start_position(value): void {
    set_start_position(value);
  }
  public get end_position(): Vector3 {
    get_end_position();
  }
  public set end_position(value): void {
    set_end_position(value);
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