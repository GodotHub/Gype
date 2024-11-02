
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
  public get transform(): Transform2D;
  public set transform(value): void;
  public get range(): Vector2i;
  public set range(value): void;
  public get elapsed_time(): number;
  public set elapsed_time(value): void;
  public get visible(): boolean;
  public set visible(value): void;
  public get outline(): boolean;
  public set outline(value): void;
  public get offset(): Vector2;
  public set offset(value): void;
  public get color(): Color;
  public set color(value): void;
  public get env(): Dictionary;
  public set env(value): void;
  public get glyph_index(): number;
  public set glyph_index(value): void;
  public get glyph_count(): number;
  public set glyph_count(value): void;
  public get glyph_flags(): number;
  public set glyph_flags(value): void;
  public get relative_index(): number;
  public set relative_index(value): void;
  public get font(): RID;
  public set font(value): void;
}