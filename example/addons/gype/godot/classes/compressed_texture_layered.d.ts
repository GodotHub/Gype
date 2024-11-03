
import { TextureLayered } from "@godot/classes/texture_layered";
export declare class CompressedTextureLayered extends TextureLayered{
  public load(_path: GDString | StringName | string): number;
  public get_load_path(): String;
  public get load_path(): String;
  public set load_path(value): void;
}