
import { Shape3D } from "@godot/classes/shape3d";


export declare class ConvexPolygonShape3D extends Shape3D{
  public set_points(_points: PackedVector3Array): void;
  public get_points(): PackedVector3Array;
  public get points(): GDArray;
  public set points(value): void;
}