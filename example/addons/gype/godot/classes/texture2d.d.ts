
import { Texture } from "@godot/classes/texture";
import { Image } from "@godot/classes/image";
import { Resource } from "@godot/classes/resource";

export declare class Texture2D extends Texture{
  public _get_width(): number;
  public _get_height(): number;
  public _is_pixel_opaque(_x: number, _y: number): boolean;
  public _has_alpha(): boolean;
  public _draw(_to_canvas_item: RID, _pos: Vector2, _modulate: Color, _transpose: boolean): void;
  public _draw_rect(_to_canvas_item: RID, _rect: Rect2, _tile: boolean, _modulate: Color, _transpose: boolean): void;
  public _draw_rect_region(_to_canvas_item: RID, _rect: Rect2, _src_rect: Rect2, _modulate: Color, _transpose: boolean, _clip_uv: boolean): void;
  public get_width(): number;
  public get_height(): number;
  public get_size(): Vector2;
  public has_alpha(): boolean;
  public draw(_canvas_item: RID, _position: Vector2, _modulate: Color, _transpose: boolean): void;
  public draw_rect(_canvas_item: RID, _rect: Rect2, _tile: boolean, _modulate: Color, _transpose: boolean): void;
  public draw_rect_region(_canvas_item: RID, _rect: Rect2, _src_rect: Rect2, _modulate: Color, _transpose: boolean, _clip_uv: boolean): void;
  public get_image(): Image;
  public create_placeholder(): Resource;
}