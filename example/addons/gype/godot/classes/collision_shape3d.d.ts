
import { Shape3D } from "@godot/classes/shape3d";
import { Resource } from "@godot/classes/resource";
import { Node3D } from "@godot/classes/node3d";
export declare class CollisionShape3D extends Node3D{
  public resource_changed(_resource: Resource): void;
  public set_shape(_shape: Shape3D): void;
  public get_shape(): Shape3D;
  public set_disabled(_enable: boolean): void;
  public is_disabled(): boolean;
  public make_convex_from_siblings(): void;
  public get shape(): Shape3D;
  public set shape(value): void;
  public get disabled(): boolean;
  public set disabled(value): void;
}