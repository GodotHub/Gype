
import { Texture2D } from "@godot/classes/texture2d";
import { Control } from "@godot/classes/control";

export declare class NinePatchRect extends Control{
  public set_texture(_texture: Texture2D): void;
  public get_texture(): Texture2D;
  public set_patch_margin(_margin: number, _value: number): void;
  public get_patch_margin(_margin: number): number;
  public set_region_rect(_rect: Rect2): void;
  public get_region_rect(): Rect2;
  public set_draw_center(_draw_center: boolean): void;
  public is_draw_center_enabled(): boolean;
  public set_h_axis_stretch_mode(_mode: number): void;
  public get_h_axis_stretch_mode(): number;
  public set_v_axis_stretch_mode(_mode: number): void;
  public get_v_axis_stretch_mode(): number;
  public get texture(): Texture2D {
    get_texture();
  }
  public set texture(value: Texture2D): void {
    set_texture(value);
  }
  public get draw_center(): boolean {
    is_draw_center_enabled();
  }
  public set draw_center(value: boolean): void {
    set_draw_center(value);
  }
  public get region_rect(): Rect2 {
    get_region_rect();
  }
  public set region_rect(value: Rect2): void {
    set_region_rect(value);
  }
  public get patch_margin_left(): number {
    get_patch_margin();
  }
  public set patch_margin_left(value: number): void {
    set_patch_margin(value);
  }
  public get patch_margin_top(): number {
    get_patch_margin();
  }
  public set patch_margin_top(value: number): void {
    set_patch_margin(value);
  }
  public get patch_margin_right(): number {
    get_patch_margin();
  }
  public set patch_margin_right(value: number): void {
    set_patch_margin(value);
  }
  public get patch_margin_bottom(): number {
    get_patch_margin();
  }
  public set patch_margin_bottom(value: number): void {
    set_patch_margin(value);
  }
  public get axis_stretch_horizontal(): number {
    get_h_axis_stretch_mode();
  }
  public set axis_stretch_horizontal(value: number): void {
    set_h_axis_stretch_mode(value);
  }
  public get axis_stretch_vertical(): number {
    get_v_axis_stretch_mode();
  }
  public set axis_stretch_vertical(value: number): void {
    set_v_axis_stretch_mode(value);
  }
  static AxisStretchMode = {
    AXIS_STRETCH_MODE_STRETCH = 0,
    AXIS_STRETCH_MODE_TILE = 1,
    AXIS_STRETCH_MODE_TILE_FIT = 2,
  }
}