
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
  public get scroll_offset(): Vector2;
  public set scroll_offset(value): void;
  public get scroll_base_offset(): Vector2;
  public set scroll_base_offset(value): void;
  public get scroll_base_scale(): Vector2;
  public set scroll_base_scale(value): void;
  public get scroll_limit_begin(): Vector2;
  public set scroll_limit_begin(value): void;
  public get scroll_limit_end(): Vector2;
  public set scroll_limit_end(value): void;
  public get scroll_ignore_camera_zoom(): boolean;
  public set scroll_ignore_camera_zoom(value): void;
}