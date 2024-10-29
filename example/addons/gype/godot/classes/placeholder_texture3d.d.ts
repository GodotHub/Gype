
import { Texture3D } from "@godot/classes/texture3d";

export declare class PlaceholderTexture3D extends Texture3D{
  public set_size(_size: Vector3i): void;
  public get_size(): Vector3i;
  public get size(): Vector3i {
    get_size();
  }
  public set size(value): void {
    set_size(value);
  }
}