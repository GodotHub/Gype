
import { Texture2D } from "@godot/classes/texture2d";

export declare class ViewportTexture extends Texture2D{
  public set_viewport_path_in_scene(_path: NodePath): void;
  public get_viewport_path_in_scene(): NodePath;
  public get viewport_path(): NodePath {
    get_viewport_path_in_scene();
  }
  public set viewport_path(value): void {
    set_viewport_path_in_scene(value);
  }
}