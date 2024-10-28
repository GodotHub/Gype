
import { Occluder3D } from "@godot/classes/occluder3d";

export declare class PolygonOccluder3D extends Occluder3D{
  public set_polygon(_polygon: PackedVector2Array): void;
  public get_polygon(): PackedVector2Array;
  public get polygon(): PackedVector2Array {
    get_polygon();
  }
  public set polygon(value: PackedVector2Array): void {
    set_polygon(value);
  }
}