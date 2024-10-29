
import { CanvasItem } from "@godot/classes/canvas_item";
import { Resource } from "@godot/classes/resource";

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
  public get content_margin_left(): number {
    get_content_margin();
  }
  public set content_margin_left(value): void {
    set_content_margin(value);
  }
  public get content_margin_top(): number {
    get_content_margin();
  }
  public set content_margin_top(value): void {
    set_content_margin(value);
  }
  public get content_margin_right(): number {
    get_content_margin();
  }
  public set content_margin_right(value): void {
    set_content_margin(value);
  }
  public get content_margin_bottom(): number {
    get_content_margin();
  }
  public set content_margin_bottom(value): void {
    set_content_margin(value);
  }
}