
import { Texture2D } from "@godot/classes/texture2d";

export declare class CompressedTexture2D extends Texture2D{
  public load(_path: String): number;
  public get_load_path(): String;
  public get load_path(): String {
    get_load_path();
  }
  public set load_path(value): void {
    load(value);
  }
}