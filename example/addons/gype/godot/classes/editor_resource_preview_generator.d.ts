
import { RefCounted } from "@godot/classes/ref_counted";
import { Texture2D } from "@godot/classes/texture2d";
import { Resource } from "@godot/classes/resource";

export declare class EditorResourcePreviewGenerator extends RefCounted{
  public _handles(_type: String): boolean;
  public _generate(_resource: Resource, _size: Vector2i, _metadata: Dictionary): Texture2D;
  public _generate_from_path(_path: String, _size: Vector2i, _metadata: Dictionary): Texture2D;
  public _generate_small_preview_automatically(): boolean;
  public _can_generate_small_preview(): boolean;
}