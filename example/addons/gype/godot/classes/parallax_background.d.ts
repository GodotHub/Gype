
import { CanvasLayer } from "@godot/classes/canvas_layer";

export declare class ParallaxBackground extends CanvasLayer{
  public set_scroll_offset(_offset: Vector2): void;
  public get_scroll_offset(): Vector2;
  public set_scroll_base_offset(_offset: Vector2): void;
  public get_scroll_base_offset(): Vector2;
  public set_scroll_base_scale(_scale: Vector2): void;
  public get_scroll_base_scale(): Vector2;
  public set_limit_begin(_offset: Vector2): void;
  public get_limit_begin(): Vector2;
  public set_limit_end(_offset: Vector2): void;
  public get_limit_end(): Vector2;
  public set_ignore_camera_zoom(_ignore: boolean): void;
  public is_ignore_camera_zoom(): boolean;
  public get scroll_offset(): Vector2 {
    get_scroll_offset();
  }
  public set scroll_offset(value): void {
    set_scroll_offset(value);
  }
  public get scroll_base_offset(): Vector2 {
    get_scroll_base_offset();
  }
  public set scroll_base_offset(value): void {
    set_scroll_base_offset(value);
  }
  public get scroll_base_scale(): Vector2 {
    get_scroll_base_scale();
  }
  public set scroll_base_scale(value): void {
    set_scroll_base_scale(value);
  }
  public get scroll_limit_begin(): Vector2 {
    get_limit_begin();
  }
  public set scroll_limit_begin(value): void {
    set_limit_begin(value);
  }
  public get scroll_limit_end(): Vector2 {
    get_limit_end();
  }
  public set scroll_limit_end(value): void {
    set_limit_end(value);
  }
  public get scroll_ignore_camera_zoom(): boolean {
    is_ignore_camera_zoom();
  }
  public set scroll_ignore_camera_zoom(value): void {
    set_ignore_camera_zoom(value);
  }
}