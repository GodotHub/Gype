
import { StyleBox } from "@godot/classes/style_box";

export declare class StyleBoxFlat extends StyleBox{
  public set_bg_color(_color: Color): void;
  public get_bg_color(): Color;
  public set_border_color(_color: Color): void;
  public get_border_color(): Color;
  public set_border_width_all(_width: number): void;
  public get_border_width_min(): number;
  public set_border_width(_margin: number, _width: number): void;
  public get_border_width(_margin: number): number;
  public set_border_blend(_blend: boolean): void;
  public get_border_blend(): boolean;
  public set_corner_radius_all(_radius: number): void;
  public set_corner_radius(_corner: number, _radius: number): void;
  public get_corner_radius(_corner: number): number;
  public set_expand_margin(_margin: number, _size: number): void;
  public set_expand_margin_all(_size: number): void;
  public get_expand_margin(_margin: number): number;
  public set_draw_center(_draw_center: boolean): void;
  public is_draw_center_enabled(): boolean;
  public set_skew(_skew: Vector2): void;
  public get_skew(): Vector2;
  public set_shadow_color(_color: Color): void;
  public get_shadow_color(): Color;
  public set_shadow_size(_size: number): void;
  public get_shadow_size(): number;
  public set_shadow_offset(_offset: Vector2): void;
  public get_shadow_offset(): Vector2;
  public set_anti_aliased(_anti_aliased: boolean): void;
  public is_anti_aliased(): boolean;
  public set_aa_size(_size: number): void;
  public get_aa_size(): number;
  public set_corner_detail(_detail: number): void;
  public get_corner_detail(): number;
  public get bg_color(): Color {
    get_bg_color();
  }
  public set bg_color(value): void {
    set_bg_color(value);
  }
  public get draw_center(): boolean {
    is_draw_center_enabled();
  }
  public set draw_center(value): void {
    set_draw_center(value);
  }
  public get skew(): Vector2 {
    get_skew();
  }
  public set skew(value): void {
    set_skew(value);
  }
  public get border_width_left(): number {
    get_border_width();
  }
  public set border_width_left(value): void {
    set_border_width(value);
  }
  public get border_width_top(): number {
    get_border_width();
  }
  public set border_width_top(value): void {
    set_border_width(value);
  }
  public get border_width_right(): number {
    get_border_width();
  }
  public set border_width_right(value): void {
    set_border_width(value);
  }
  public get border_width_bottom(): number {
    get_border_width();
  }
  public set border_width_bottom(value): void {
    set_border_width(value);
  }
  public get border_color(): Color {
    get_border_color();
  }
  public set border_color(value): void {
    set_border_color(value);
  }
  public get border_blend(): boolean {
    get_border_blend();
  }
  public set border_blend(value): void {
    set_border_blend(value);
  }
  public get corner_radius_top_left(): number {
    get_corner_radius();
  }
  public set corner_radius_top_left(value): void {
    set_corner_radius(value);
  }
  public get corner_radius_top_right(): number {
    get_corner_radius();
  }
  public set corner_radius_top_right(value): void {
    set_corner_radius(value);
  }
  public get corner_radius_bottom_right(): number {
    get_corner_radius();
  }
  public set corner_radius_bottom_right(value): void {
    set_corner_radius(value);
  }
  public get corner_radius_bottom_left(): number {
    get_corner_radius();
  }
  public set corner_radius_bottom_left(value): void {
    set_corner_radius(value);
  }
  public get corner_detail(): number {
    get_corner_detail();
  }
  public set corner_detail(value): void {
    set_corner_detail(value);
  }
  public get expand_margin_left(): number {
    get_expand_margin();
  }
  public set expand_margin_left(value): void {
    set_expand_margin(value);
  }
  public get expand_margin_top(): number {
    get_expand_margin();
  }
  public set expand_margin_top(value): void {
    set_expand_margin(value);
  }
  public get expand_margin_right(): number {
    get_expand_margin();
  }
  public set expand_margin_right(value): void {
    set_expand_margin(value);
  }
  public get expand_margin_bottom(): number {
    get_expand_margin();
  }
  public set expand_margin_bottom(value): void {
    set_expand_margin(value);
  }
  public get shadow_color(): Color {
    get_shadow_color();
  }
  public set shadow_color(value): void {
    set_shadow_color(value);
  }
  public get shadow_size(): number {
    get_shadow_size();
  }
  public set shadow_size(value): void {
    set_shadow_size(value);
  }
  public get shadow_offset(): Vector2 {
    get_shadow_offset();
  }
  public set shadow_offset(value): void {
    set_shadow_offset(value);
  }
  public get anti_aliasing(): boolean {
    is_anti_aliased();
  }
  public set anti_aliasing(value): void {
    set_anti_aliased(value);
  }
  public get anti_aliasing_size(): number {
    get_aa_size();
  }
  public set anti_aliasing_size(value): void {
    set_aa_size(value);
  }
}