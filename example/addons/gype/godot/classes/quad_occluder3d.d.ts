
import { Occluder3D } from "@godot/classes/occluder3d";

export declare class QuadOccluder3D extends Occluder3D{
  public set_size(_size: Vector2): void;
  public get_size(): Vector2;
  public get size(): Vector2 {
    get_size();
  }
  public set size(value): void {
    set_size(value);
  }
}