
import { Shape3D } from "@godot/classes/shape3d";

export declare class WorldBoundaryShape3D extends Shape3D{
  public set_plane(_plane: Plane): void;
  public get_plane(): Plane;
  public get plane(): Plane {
    get_plane();
  }
  public set plane(value: Plane): void {
    set_plane(value);
  }
}