
import { Texture3D } from "@godot/classes/texture3d";

export declare class CompressedTexture3D extends Texture3D{
  public load(_path: String): number;
  public get_load_path(): String;
  public get load_path(): String {
    get_load_path();
  }
  public set load_path(value: String): void {
    load(value);
  }
}