
import { Node3D } from "@godot/classes/node3d";


export declare class Marker3D extends Node3D{
  public set_gizmo_extents(_extents: number): void;
  public get_gizmo_extents(): number;
  public get gizmo_extents(): number;
  public set gizmo_extents(value): void;
}