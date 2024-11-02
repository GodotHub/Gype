
import { Texture2D } from "@godot/classes/texture2d";


export declare class ViewportTexture extends Texture2D{
  public set_viewport_path_in_scene(_path: GDString | NodePath | string): void;
  public get_viewport_path_in_scene(): NodePath;
  public get viewport_path(): NodePath;
  public set viewport_path(value): void;
}