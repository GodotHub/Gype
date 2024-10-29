
import { Font } from "@godot/classes/font";
import { RefCounted } from "@godot/classes/ref_counted";

export declare class TextParagraph extends RefCounted{
  public clear(): void;
  public set_direction(_direction: number): void;
  public get_direction(): number;
  public set_custom_punctuation(_custom_punctuation: String): void;
  public get_custom_punctuation(): String;
  public set_orientation(_orientation: number): void;
  public get_orientation(): number;
  public set_preserve_invalid(_enabled: boolean): void;
  public get_preserve_invalid(): boolean;
  public set_preserve_control(_enabled: boolean): void;
  public get_preserve_control(): boolean;
  public set_bidi_override(_override: GDArray): void;
  public set_dropcap(_text: String, _font: Font, _font_size: number, _dropcap_margins: Rect2, _language: String): boolean;
  public clear_dropcap(): void;
  public add_string(_text: String, _font: Font, _font_size: number, _language: String, _meta: any): boolean;
  public add_object(_key: any, _size: Vector2, _inline_align: number, _length: number, _baseline: number): boolean;
  public resize_object(_key: any, _size: Vector2, _inline_align: number, _baseline: number): boolean;
  public set_alignment(_alignment: number): void;
  public get_alignment(): number;
  public tab_align(_tab_stops: PackedFloat32Array): void;
  public set_break_flags(_flags: number): void;
  public get_break_flags(): number;
  public set_justification_flags(_flags: number): void;
  public get_justification_flags(): number;
  public set_text_overrun_behavior(_overrun_behavior: number): void;
  public get_text_overrun_behavior(): number;
  public set_ellipsis_char(_char: String): void;
  public get_ellipsis_char(): String;
  public set_width(_width: number): void;
  public get_width(): number;
  public get_non_wrapped_size(): Vector2;
  public get_size(): Vector2;
  public get_rid(): RID;
  public get_line_rid(_line: number): RID;
  public get_dropcap_rid(): RID;
  public get_line_count(): number;
  public set_max_lines_visible(_max_lines_visible: number): void;
  public get_max_lines_visible(): number;
  public get_line_objects(_line: number): GDArray;
  public get_line_object_rect(_line: number, _key: any): Rect2;
  public get_line_size(_line: number): Vector2;
  public get_line_range(_line: number): Vector2i;
  public get_line_ascent(_line: number): number;
  public get_line_descent(_line: number): number;
  public get_line_width(_line: number): number;
  public get_line_underline_position(_line: number): number;
  public get_line_underline_thickness(_line: number): number;
  public get_dropcap_size(): Vector2;
  public get_dropcap_lines(): number;
  public draw(_canvas: RID, _pos: Vector2, _color: Color, _dc_color: Color): void;
  public draw_outline(_canvas: RID, _pos: Vector2, _outline_size: number, _color: Color, _dc_color: Color): void;
  public draw_line(_canvas: RID, _pos: Vector2, _line: number, _color: Color): void;
  public draw_line_outline(_canvas: RID, _pos: Vector2, _line: number, _outline_size: number, _color: Color): void;
  public draw_dropcap(_canvas: RID, _pos: Vector2, _color: Color): void;
  public draw_dropcap_outline(_canvas: RID, _pos: Vector2, _outline_size: number, _color: Color): void;
  public hit_test(_coords: Vector2): number;
  public get direction(): number {
    get_direction();
  }
  public set direction(value): void {
    set_direction(value);
  }
  public get custom_punctuation(): String {
    get_custom_punctuation();
  }
  public set custom_punctuation(value): void {
    set_custom_punctuation(value);
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
  public get alignment(): number {
    get_alignment();
  }
  public set alignment(value): void {
    set_alignment(value);
  }
  public get break_flags(): number {
    get_break_flags();
  }
  public set break_flags(value): void {
    set_break_flags(value);
  }
  public get justification_flags(): number {
    get_justification_flags();
  }
  public set justification_flags(value): void {
    set_justification_flags(value);
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
  public get width(): number {
    get_width();
  }
  public set width(value): void {
    set_width(value);
  }
  public get max_lines_visible(): number {
    get_max_lines_visible();
  }
  public set max_lines_visible(value): void {
    set_max_lines_visible(value);
  }
}