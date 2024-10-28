
import { Shape3D } from "@godot/classes/shape3d";

export declare class BoxShape3D extends Shape3D{
  public set_size(_size: Vector3): void;
  public get_size(): Vector3;
  public get size(): Vector3 {
    get_size();
  }
  public set size(value: Vector3): void {
    set_size(value);
  }
}