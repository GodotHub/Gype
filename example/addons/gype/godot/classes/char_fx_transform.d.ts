
import { RefCounted } from "@godot/classes/ref_counted";

export declare class CharFXTransform extends RefCounted{
  public get_transform(): Transform2D;
  public set_transform(_transform: Transform2D): void;
  public get_range(): Vector2i;
  public set_range(_range: Vector2i): void;
  public get_elapsed_time(): number;
  public set_elapsed_time(_time: number): void;
  public is_visible(): boolean;
  public set_visibility(_visibility: boolean): void;
  public is_outline(): boolean;
  public set_outline(_outline: boolean): void;
  public get_offset(): Vector2;
  public set_offset(_offset: Vector2): void;
  public get_color(): Color;
  public set_color(_color: Color): void;
  public get_environment(): Dictionary;
  public set_environment(_environment: Dictionary): void;
  public get_glyph_index(): number;
  public set_glyph_index(_glyph_index: number): void;
  public get_relative_index(): number;
  public set_relative_index(_relative_index: number): void;
  public get_glyph_count(): number;
  public set_glyph_count(_glyph_count: number): void;
  public get_glyph_flags(): number;
  public set_glyph_flags(_glyph_flags: number): void;
  public get_font(): RID;
  public set_font(_font: RID): void;
  public get transform(): Transform2D {
    get_transform();
  }
  public set transform(value): void {
    set_transform(value);
  }
  public get range(): Vector2i {
    get_range();
  }
  public set range(value): void {
    set_range(value);
  }
  public get elapsed_time(): number {
    get_elapsed_time();
  }
  public set elapsed_time(value): void {
    set_elapsed_time(value);
  }
  public get visible(): boolean {
    is_visible();
  }
  public set visible(value): void {
    set_visibility(value);
  }
  public get outline(): boolean {
    is_outline();
  }
  public set outline(value): void {
    set_outline(value);
  }
  public get offset(): Vector2 {
    get_offset();
  }
  public set offset(value): void {
    set_offset(value);
  }
  public get color(): Color {
    get_color();
  }
  public set color(value): void {
    set_color(value);
  }
  public get env(): Dictionary {
    get_environment();
  }
  public set env(value): void {
    set_environment(value);
  }
  public get glyph_index(): number {
    get_glyph_index();
  }
  public set glyph_index(value): void {
    set_glyph_index(value);
  }
  public get glyph_count(): number {
    get_glyph_count();
  }
  public set glyph_count(value): void {
    set_glyph_count(value);
  }
  public get glyph_flags(): number {
    get_glyph_flags();
  }
  public set glyph_flags(value): void {
    set_glyph_flags(value);
  }
  public get relative_index(): number {
    get_relative_index();
  }
  public set relative_index(value): void {
    set_relative_index(value);
  }
  public get font(): RID {
    get_font();
  }
  public set font(value): void {
    set_font(value);
  }
}