
import { Control } from "@godot/classes/control";
import { Texture2D } from "@godot/classes/texture2d";


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
  public get texture(): Texture2D;
  public set texture(value): void;
  public get draw_center(): boolean;
  public set draw_center(value): void;
  public get region_rect(): Rect2;
  public set region_rect(value): void;
  public get patch_margin_left(): number;
  public set patch_margin_left(value): void;
  public get patch_margin_top(): number;
  public set patch_margin_top(value): void;
  public get patch_margin_right(): number;
  public set patch_margin_right(value): void;
  public get patch_margin_bottom(): number;
  public set patch_margin_bottom(value): void;
  public get axis_stretch_horizontal(): number;
  public set axis_stretch_horizontal(value): void;
  public get axis_stretch_vertical(): number;
  public set axis_stretch_vertical(value): void;
  static AxisStretchMode = {
    AXIS_STRETCH_MODE_STRETCH = 0,
    AXIS_STRETCH_MODE_TILE = 1,
    AXIS_STRETCH_MODE_TILE_FIT = 2,
  }
  public get texture_changed(): Signal;
}