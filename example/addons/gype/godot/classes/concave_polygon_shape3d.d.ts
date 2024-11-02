
import { Shape3D } from "@godot/classes/shape3d";


export declare class ConcavePolygonShape3D extends Shape3D{
  public set_faces(_faces: PackedVector3Array): void;
  public get_faces(): PackedVector3Array;
  public set_backface_collision_enabled(_enabled: boolean): void;
  public is_backface_collision_enabled(): boolean;
  public get data(): PackedVector3Array;
  public set data(value): void;
  public get backface_collision(): boolean;
  public set backface_collision(value): void;
}