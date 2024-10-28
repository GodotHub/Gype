
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
  public get texture(): Texture2D {
    get_texture();
  }
  public set texture(value: Texture2D): void {
    set_texture(value);
  }
  public get texture_margin_left(): number {
    get_texture_margin();
  }
  public set texture_margin_left(value: number): void {
    set_texture_margin(value);
  }
  public get texture_margin_top(): number {
    get_texture_margin();
  }
  public set texture_margin_top(value: number): void {
    set_texture_margin(value);
  }
  public get texture_margin_right(): number {
    get_texture_margin();
  }
  public set texture_margin_right(value: number): void {
    set_texture_margin(value);
  }
  public get texture_margin_bottom(): number {
    get_texture_margin();
  }
  public set texture_margin_bottom(value: number): void {
    set_texture_margin(value);
  }
  public get expand_margin_left(): number {
    get_expand_margin();
  }
  public set expand_margin_left(value: number): void {
    set_expand_margin(value);
  }
  public get expand_margin_top(): number {
    get_expand_margin();
  }
  public set expand_margin_top(value: number): void {
    set_expand_margin(value);
  }
  public get expand_margin_right(): number {
    get_expand_margin();
  }
  public set expand_margin_right(value: number): void {
    set_expand_margin(value);
  }
  public get expand_margin_bottom(): number {
    get_expand_margin();
  }
  public set expand_margin_bottom(value: number): void {
    set_expand_margin(value);
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
  public get region_rect(): Rect2 {
    get_region_rect();
  }
  public set region_rect(value: Rect2): void {
    set_region_rect(value);
  }
  public get modulate_color(): Color {
    get_modulate();
  }
  public set modulate_color(value: Color): void {
    set_modulate(value);
  }
  public get draw_center(): boolean {
    is_draw_center_enabled();
  }
  public set draw_center(value: boolean): void {
    set_draw_center(value);
  }
  static AxisStretchMode = {
    AXIS_STRETCH_MODE_STRETCH = 0,
    AXIS_STRETCH_MODE_TILE = 1,
    AXIS_STRETCH_MODE_TILE_FIT = 2,
  }
}