
import { CSGShape3D } from "@godot/classes/csg_shape3d";

export declare class CSGPrimitive3D extends CSGShape3D{
  public set_flip_faces(_flip_faces: boolean): void;
  public get_flip_faces(): boolean;
  public get flip_faces(): boolean {
    get_flip_faces();
  }
  public set flip_faces(value): void {
    set_flip_faces(value);
  }
}