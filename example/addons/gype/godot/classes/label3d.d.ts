
import { Font } from "@godot/classes/font";
import { TriangleMesh } from "@godot/classes/triangle_mesh";
import { GeometryInstance3D } from "@godot/classes/geometry_instance3d";

export declare class Label3D extends GeometryInstance3D{
  public set_horizontal_alignment(_alignment: number): void;
  public get_horizontal_alignment(): number;
  public set_vertical_alignment(_alignment: number): void;
  public get_vertical_alignment(): number;
  public set_modulate(_modulate: Color): void;
  public get_modulate(): Color;
  public set_outline_modulate(_modulate: Color): void;
  public get_outline_modulate(): Color;
  public set_text(_text: String | StringName | string): void;
  public get_text(): String;
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
  public set_render_priority(_priority: number): void;
  public get_render_priority(): number;
  public set_outline_render_priority(_priority: number): void;
  public get_outline_render_priority(): number;
  public set_font(_font: Font): void;
  public get_font(): Font;
  public set_font_size(_size: number): void;
  public get_font_size(): number;
  public set_outline_size(_outline_size: number): void;
  public get_outline_size(): number;
  public set_line_spacing(_line_spacing: number): void;
  public get_line_spacing(): number;
  public set_autowrap_mode(_autowrap_mode: number): void;
  public get_autowrap_mode(): number;
  public set_justification_flags(_justification_flags: number): void;
  public get_justification_flags(): number;
  public set_width(_width: number): void;
  public get_width(): number;
  public set_pixel_size(_pixel_size: number): void;
  public get_pixel_size(): number;
  public set_offset(_offset: Vector2): void;
  public get_offset(): Vector2;
  public set_draw_flag(_flag: number, _enabled: boolean): void;
  public get_draw_flag(_flag: number): boolean;
  public set_billboard_mode(_mode: number): void;
  public get_billboard_mode(): number;
  public set_alpha_cut_mode(_mode: number): void;
  public get_alpha_cut_mode(): number;
  public set_alpha_scissor_threshold(_threshold: number): void;
  public get_alpha_scissor_threshold(): number;
  public set_alpha_hash_scale(_threshold: number): void;
  public get_alpha_hash_scale(): number;
  public set_alpha_antialiasing(_alpha_aa: number): void;
  public get_alpha_antialiasing(): number;
  public set_alpha_antialiasing_edge(_edge: number): void;
  public get_alpha_antialiasing_edge(): number;
  public set_texture_filter(_mode: number): void;
  public get_texture_filter(): number;
  public generate_triangle_mesh(): TriangleMesh;
  public get pixel_size(): number {
    get_pixel_size();
  }
  public set pixel_size(value): void {
    set_pixel_size(value);
  }
  public get offset(): Vector2 {
    get_offset();
  }
  public set offset(value): void {
    set_offset(value);
  }
  public get billboard(): number {
    get_billboard_mode();
  }
  public set billboard(value): void {
    set_billboard_mode(value);
  }
  public get shaded(): boolean {
    get_draw_flag();
  }
  public set shaded(value): void {
    set_draw_flag(value);
  }
  public get double_sided(): boolean {
    get_draw_flag();
  }
  public set double_sided(value): void {
    set_draw_flag(value);
  }
  public get no_depth_test(): boolean {
    get_draw_flag();
  }
  public set no_depth_test(value): void {
    set_draw_flag(value);
  }
  public get fixed_size(): boolean {
    get_draw_flag();
  }
  public set fixed_size(value): void {
    set_draw_flag(value);
  }
  public get alpha_cut(): number {
    get_alpha_cut_mode();
  }
  public set alpha_cut(value): void {
    set_alpha_cut_mode(value);
  }
  public get alpha_scissor_threshold(): number {
    get_alpha_scissor_threshold();
  }
  public set alpha_scissor_threshold(value): void {
    set_alpha_scissor_threshold(value);
  }
  public get alpha_hash_scale(): number {
    get_alpha_hash_scale();
  }
  public set alpha_hash_scale(value): void {
    set_alpha_hash_scale(value);
  }
  public get alpha_antialiasing_mode(): number {
    get_alpha_antialiasing();
  }
  public set alpha_antialiasing_mode(value): void {
    set_alpha_antialiasing(value);
  }
  public get alpha_antialiasing_edge(): number {
    get_alpha_antialiasing_edge();
  }
  public set alpha_antialiasing_edge(value): void {
    set_alpha_antialiasing_edge(value);
  }
  public get texture_filter(): number {
    get_texture_filter();
  }
  public set texture_filter(value): void {
    set_texture_filter(value);
  }
  public get render_priority(): number {
    get_render_priority();
  }
  public set render_priority(value): void {
    set_render_priority(value);
  }
  public get outline_render_priority(): number {
    get_outline_render_priority();
  }
  public set outline_render_priority(value): void {
    set_outline_render_priority(value);
  }
  public get modulate(): Color {
    get_modulate();
  }
  public set modulate(value): void {
    set_modulate(value);
  }
  public get outline_modulate(): Color {
    get_outline_modulate();
  }
  public set outline_modulate(value): void {
    set_outline_modulate(value);
  }
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
  public get outline_size(): number {
    get_outline_size();
  }
  public set outline_size(value): void {
    set_outline_size(value);
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
  public get width(): number {
    get_width();
  }
  public set width(value): void {
    set_width(value);
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
  static DrawFlags = {
    FLAG_SHADED = 0,
    FLAG_DOUBLE_SIDED = 1,
    FLAG_DISABLE_DEPTH_TEST = 2,
    FLAG_FIXED_SIZE = 3,
    FLAG_MAX = 4,
  }
  static AlphaCutMode = {
    ALPHA_CUT_DISABLED = 0,
    ALPHA_CUT_DISCARD = 1,
    ALPHA_CUT_OPAQUE_PREPASS = 2,
    ALPHA_CUT_HASH = 3,
  }
}