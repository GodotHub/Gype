
import { TextureLayered } from "@godot/classes/texture_layered";

export declare class CompressedTextureLayered extends TextureLayered{
  public load(_path: String): number;
  public get_load_path(): String;
  public get load_path(): String {
    get_load_path();
  }
  public set load_path(value: String): void {
    load(value);
  }
}