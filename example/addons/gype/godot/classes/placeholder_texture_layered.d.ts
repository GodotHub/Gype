
import { TextureLayered } from "@godot/classes/texture_layered";

export declare class PlaceholderTextureLayered extends TextureLayered{
  public set_size(_size: Vector2i): void;
  public get_size(): Vector2i;
  public set_layers(_layers: number): void;
  public get size(): Vector2i {
    get_size();
  }
  public set size(value): void {
    set_size(value);
  }
  public get layers(): number {
    get_layers();
  }
  public set layers(value): void {
    set_layers(value);
  }
}