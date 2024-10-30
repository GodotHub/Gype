
import { PrimitiveMesh } from "@godot/classes/primitive_mesh";
import { Font } from "@godot/classes/font";

export declare class TextMesh extends PrimitiveMesh{
  public set_horizontal_alignment(_alignment: number): void;
  public get_horizontal_alignment(): number;
  public set_vertical_alignment(_alignment: number): void;
  public get_vertical_alignment(): number;
  public set_text(_text: String | StringName | string): void;
  public get_text(): String;
  public set_font(_font: Font): void;
  public get_font(): Font;
  public set_font_size(_font_size: number): void;
  public get_font_size(): number;
  public set_line_spacing(_line_spacing: number): void;
  public get_line_spacing(): number;
  public set_autowrap_mode(_autowrap_mode: number): void;
  public get_autowrap_mode(): number;
  public set_justification_flags(_justification_flags: number): void;
  public get_justification_flags(): number;
  public set_depth(_depth: number): void;
  public get_depth(): number;
  public set_width(_width: number): void;
  public get_width(): number;
  public set_pixel_size(_pixel_size: number): void;
  public get_pixel_size(): number;
  public set_offset(_offset: Vector2): void;
  public get_offset(): Vector2;
  public set_curve_step(_curve_step: number): void;
  public get_curve_step(): number;
  public set_text_direction(_direction: number): void;
  public get_text_direction(): number;
  public set_language(_language: String | StringName | string): void;
  public get_language(): String;
  public set_structured_text_bidi_override(_parser: number): void;
  public get_structured_text_bidi_override(): number;
  public set_structured_text_bidi_override_options(_args: GDArray): void;
  public get_structured_text_bidi_override_options(): GDArray;
  public set_uppercase(_enable: boolean): void;
  public is_uppercase(): boolean;
  public get text(): String {
    get_text();
  }
  public set text(value): void {
    set_text(value);
  }
  public get font(): Font {
    get_font();
  }
  public set font(value): void {
    set_font(value);
  }
  public get font_size(): number {
    get_font_size();
  }
  public set font_size(value): void {
    set_font_size(value);
  }
  public get horizontal_alignment(): number {
    get_horizontal_alignment();
  }
  public set horizontal_alignment(value): void {
    set_horizontal_alignment(value);
  }
  public get vertical_alignment(): number {
    get_vertical_alignment();
  }
  public set vertical_alignment(value): void {
    set_vertical_alignment(value);
  }
  public get uppercase(): boolean {
    is_uppercase();
  }
  public set uppercase(value): void {
    set_uppercase(value);
  }
  public get line_spacing(): number {
    get_line_spacing();
  }
  public set line_spacing(value): void {
    set_line_spacing(value);
  }
  public get autowrap_mode(): number {
    get_autowrap_mode();
  }
  public set autowrap_mode(value): void {
    set_autowrap_mode(value);
  }
  public get justification_flags(): number {
    get_justification_flags();
  }
  public set justification_flags(value): void {
    set_justification_flags(value);
  }
  public get pixel_size(): number {
    get_pixel_size();
  }
  public set pixel_size(value): void {
    set_pixel_size(value);
  }
  public get curve_step(): number {
    get_curve_step();
  }
  public set curve_step(value): void {
    set_curve_step(value);
  }
  public get depth(): number {
    get_depth();
  }
  public set depth(value): void {
    set_depth(value);
  }
  public get width(): number {
    get_width();
  }
  public set width(value): void {
    set_width(value);
  }
  public get offset(): Vector2 {
    get_offset();
  }
  public set offset(value): void {
    set_offset(value);
  }
  public get text_direction(): number {
    get_text_direction();
  }
  public set text_direction(value): void {
    set_text_direction(value);
  }
  public get language(): String {
    get_language();
  }
  public set language(value): void {
    set_language(value);
  }
  public get structured_text_bidi_override(): number {
    get_structured_text_bidi_override();
  }
  public set structured_text_bidi_override(value): void {
    set_structured_text_bidi_override(value);
  }
  public get structured_text_bidi_override_options(): GDArray {
    get_structured_text_bidi_override_options();
  }
  public set structured_text_bidi_override_options(value): void {
    set_structured_text_bidi_override_options(value);
  }
}