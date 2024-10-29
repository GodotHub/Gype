
import { Font } from "@godot/classes/font";
import { RefCounted } from "@godot/classes/ref_counted";

export declare class TextLine extends RefCounted{
  public clear(): void;
  public set_direction(_direction: number): void;
  public get_direction(): number;
  public set_orientation(_orientation: number): void;
  public get_orientation(): number;
  public set_preserve_invalid(_enabled: boolean): void;
  public get_preserve_invalid(): boolean;
  public set_preserve_control(_enabled: boolean): void;
  public get_preserve_control(): boolean;
  public set_bidi_override(_override: GDArray): void;
  public add_string(_text: String, _font: Font, _font_size: number, _language: String, _meta: any): boolean;
  public add_object(_key: any, _size: Vector2, _inline_align: number, _length: number, _baseline: number): boolean;
  public resize_object(_key: any, _size: Vector2, _inline_align: number, _baseline: number): boolean;
  public set_width(_width: number): void;
  public get_width(): number;
  public set_horizontal_alignment(_alignment: number): void;
  public get_horizontal_alignment(): number;
  public tab_align(_tab_stops: PackedFloat32Array): void;
  public set_flags(_flags: number): void;
  public get_flags(): number;
  public set_text_overrun_behavior(_overrun_behavior: number): void;
  public get_text_overrun_behavior(): number;
  public set_ellipsis_char(_char: String): void;
  public get_ellipsis_char(): String;
  public get_objects(): GDArray;
  public get_object_rect(_key: any): Rect2;
  public get_size(): Vector2;
  public get_rid(): RID;
  public get_line_ascent(): number;
  public get_line_descent(): number;
  public get_line_width(): number;
  public get_line_underline_position(): number;
  public get_line_underline_thickness(): number;
  public draw(_canvas: RID, _pos: Vector2, _color: Color): void;
  public draw_outline(_canvas: RID, _pos: Vector2, _outline_size: number, _color: Color): void;
  public hit_test(_coords: number): number;
  public get direction(): number {
    get_direction();
  }
  public set direction(value): void {
    set_direction(value);
  }
  public get orientation(): number {
    get_orientation();
  }
  public set orientation(value): void {
    set_orientation(value);
  }
  public get preserve_invalid(): boolean {
    get_preserve_invalid();
  }
  public set preserve_invalid(value): void {
    set_preserve_invalid(value);
  }
  public get preserve_control(): boolean {
    get_preserve_control();
  }
  public set preserve_control(value): void {
    set_preserve_control(value);
  }
  public get width(): number {
    get_width();
  }
  public set width(value): void {
    set_width(value);
  }
  public get alignment(): number {
    get_horizontal_alignment();
  }
  public set alignment(value): void {
    set_horizontal_alignment(value);
  }
  public get flags(): number {
    get_flags();
  }
  public set flags(value): void {
    set_flags(value);
  }
  public get text_overrun_behavior(): number {
    get_text_overrun_behavior();
  }
  public set text_overrun_behavior(value): void {
    set_text_overrun_behavior(value);
  }
  public get ellipsis_char(): String {
    get_ellipsis_char();
  }
  public set ellipsis_char(value): void {
    set_ellipsis_char(value);
  }
}