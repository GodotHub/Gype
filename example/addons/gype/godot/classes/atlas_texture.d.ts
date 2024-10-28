
import { Texture2D } from "@godot/classes/texture2d";

export declare class AtlasTexture extends Texture2D{
  public set_atlas(_atlas: Texture2D): void;
  public get_atlas(): Texture2D;
  public set_region(_region: Rect2): void;
  public get_region(): Rect2;
  public set_margin(_margin: Rect2): void;
  public get_margin(): Rect2;
  public set_filter_clip(_enable: boolean): void;
  public has_filter_clip(): boolean;
  public get atlas(): Texture2D {
    get_atlas();
  }
  public set atlas(value: Texture2D): void {
    set_atlas(value);
  }
  public get region(): Rect2 {
    get_region();
  }
  public set region(value: Rect2): void {
    set_region(value);
  }
  public get margin(): Rect2 {
    get_margin();
  }
  public set margin(value: Rect2): void {
    set_margin(value);
  }
  public get filter_clip(): boolean {
    has_filter_clip();
  }
  public set filter_clip(value: boolean): void {
    set_filter_clip(value);
  }
}