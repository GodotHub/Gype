
import { Node3D } from "@godot/classes/node3d";
import { Shape3D } from "@godot/classes/shape3d";
import { Resource } from "@godot/classes/resource";

export declare class CollisionShape3D extends Node3D{
  public resource_changed(_resource: Resource): void;
  public set_shape(_shape: Shape3D): void;
  public get_shape(): Shape3D;
  public set_disabled(_enable: boolean): void;
  public is_disabled(): boolean;
  public make_convex_from_siblings(): void;
  public get shape(): Shape3D {
    get_shape();
  }
  public set shape(value: Shape3D): void {
    set_shape(value);
  }
  public get disabled(): boolean {
    is_disabled();
  }
  public set disabled(value: boolean): void {
    set_disabled(value);
  }
}