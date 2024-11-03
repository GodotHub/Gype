
import { Texture2D } from "@godot/classes/texture2d";
import { StyleBox } from "@godot/classes/style_box";
export declare class StyleBoxTexture extends StyleBox{
  public set_texture(_texture: Texture2D): void;
  public get_texture(): Texture2D;
  public set_texture_margin(_margin: number, _size: number): void;
  public set_texture_margin_all(_size: number): void;
  public get_texture_margin(_margin: number): number;
  public set_expand_margin(_margin: number, _size: number): void;
  public set_expand_margin_all(_size: number): void;
  public get_expand_margin(_margin: number): number;
  public set_region_rect(_region: Rect2): void;
  public get_region_rect(): Rect2;
  public set_draw_center(_enable: boolean): void;
  public is_draw_center_enabled(): boolean;
  public set_modulate(_color: Color): void;
  public get_modulate(): Color;
  public set_h_axis_stretch_mode(_mode: number): void;
  public get_h_axis_stretch_mode(): number;
  public set_v_axis_stretch_mode(_mode: number): void;
  public get_v_axis_stretch_mode(): number;
  public get texture(): Texture2D;
  public set texture(value): void;
  public get texture_margin_left(): number;
  public set texture_margin_left(value): void;
  public get texture_margin_top(): number;
  public set texture_margin_top(value): void;
  public get texture_margin_right(): number;
  public set texture_margin_right(value): void;
  public get texture_margin_bottom(): number;
  public set texture_margin_bottom(value): void;
  public get expand_margin_left(): number;
  public set expand_margin_left(value): void;
  public get expand_margin_top(): number;
  public set expand_margin_top(value): void;
  public get expand_margin_right(): number;
  public set expand_margin_right(value): void;
  public get expand_margin_bottom(): number;
  public set expand_margin_bottom(value): void;
  public get axis_stretch_horizontal(): number;
  public set axis_stretch_horizontal(value): void;
  public get axis_stretch_vertical(): number;
  public set axis_stretch_vertical(value): void;
  public get region_rect(): Rect2;
  public set region_rect(value): void;
  public get modulate_color(): Color;
  public set modulate_color(value): void;
  public get draw_center(): boolean;
  public set draw_center(value): void;
  static AxisStretchMode = {
    AXIS_STRETCH_MODE_STRETCH = 0,
    AXIS_STRETCH_MODE_TILE = 1,
    AXIS_STRETCH_MODE_TILE_FIT = 2,
  }
}