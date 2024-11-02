
import { Resource } from "@godot/classes/resource";
import { CanvasItem } from "@godot/classes/canvas_item";


export declare class StyleBox extends Resource{
  public _draw(_to_canvas_item: RID, _rect: Rect2): void;
  public _get_draw_rect(_rect: Rect2): Rect2;
  public _get_minimum_size(): Vector2;
  public _test_mask(_point: Vector2, _rect: Rect2): boolean;
  public get_minimum_size(): Vector2;
  public set_content_margin(_margin: number, _offset: number): void;
  public set_content_margin_all(_offset: number): void;
  public get_content_margin(_margin: number): number;
  public get_margin(_margin: number): number;
  public get_offset(): Vector2;
  public draw(_canvas_item: RID, _rect: Rect2): void;
  public get_current_item_drawn(): CanvasItem;
  public test_mask(_point: Vector2, _rect: Rect2): boolean;
  public get content_margin_left(): number;
  public set content_margin_left(value): void;
  public get content_margin_top(): number;
  public set content_margin_top(value): void;
  public get content_margin_right(): number;
  public set content_margin_right(value): void;
  public get content_margin_bottom(): number;
  public set content_margin_bottom(value): void;
}