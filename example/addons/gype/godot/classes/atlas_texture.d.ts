
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
  public get atlas(): Texture2D;
  public set atlas(value): void;
  public get region(): Rect2;
  public set region(value): void;
  public get margin(): Rect2;
  public set margin(value): void;
  public get filter_clip(): boolean;
  public set filter_clip(value): void;
}