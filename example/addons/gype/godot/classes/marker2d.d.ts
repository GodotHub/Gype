
import { Node2D } from "@godot/classes/node2d";

export declare class Marker2D extends Node2D{
  public set_gizmo_extents(_extents: number): void;
  public get_gizmo_extents(): number;
  public get gizmo_extents(): number {
    get_gizmo_extents();
  }
  public set gizmo_extents(value: number): void {
    set_gizmo_extents(value);
  }
}