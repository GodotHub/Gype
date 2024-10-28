
import { Texture2D } from "@godot/classes/texture2d";

export declare class PlaceholderTexture2D extends Texture2D{
  public set_size(_size: Vector2): void;
  public get size(): Vector2 {
    get_size();
  }
  public set size(value: Vector2): void {
    set_size(value);
  }
}