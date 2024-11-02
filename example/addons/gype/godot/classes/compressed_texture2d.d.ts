
import { Texture2D } from "@godot/classes/texture2d";


export declare class CompressedTexture2D extends Texture2D{
  public load(_path: GDString | StringName | string): number;
  public get_load_path(): String;
  public get load_path(): String;
  public set load_path(value): void;
}