
import { GeometryInstance3D } from "@godot/classes/geometry_instance3d";
import { Font } from "@godot/classes/font";
import { TriangleMesh } from "@godot/classes/triangle_mesh";


export declare class Label3D extends GeometryInstance3D{
  public set_horizontal_alignment(_alignment: number): void;
  public get_horizontal_alignment(): number;
  public set_vertical_alignment(_alignment: number): void;
  public get_vertical_alignment(): number;
  public set_modulate(_modulate: Color): void;
  public get_modulate(): Color;
  public set_outline_modulate(_modulate: Color): void;
  public get_outline_modulate(): Color;
  public set_text(_text: GDString | StringName | string): void;
  public get_text(): String;
  public set_text_direction(_direction: number): void;
  public get_text_direction(): number;
  public set_language(_language: GDString | StringName | string): void;
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
  public get pixel_size(): number;
  public set pixel_size(value): void;
  public get offset(): Vector2;
  public set offset(value): void;
  public get billboard(): number;
  public set billboard(value): void;
  public get shaded(): boolean;
  public set shaded(value): void;
  public get double_sided(): boolean;
  public set double_sided(value): void;
  public get no_depth_test(): boolean;
  public set no_depth_test(value): void;
  public get fixed_size(): boolean;
  public set fixed_size(value): void;
  public get alpha_cut(): number;
  public set alpha_cut(value): void;
  public get alpha_scissor_threshold(): number;
  public set alpha_scissor_threshold(value): void;
  public get alpha_hash_scale(): number;
  public set alpha_hash_scale(value): void;
  public get alpha_antialiasing_mode(): number;
  public set alpha_antialiasing_mode(value): void;
  public get alpha_antialiasing_edge(): number;
  public set alpha_antialiasing_edge(value): void;
  public get texture_filter(): number;
  public set texture_filter(value): void;
  public get render_priority(): number;
  public set render_priority(value): void;
  public get outline_render_priority(): number;
  public set outline_render_priority(value): void;
  public get modulate(): Color;
  public set modulate(value): void;
  public get outline_modulate(): Color;
  public set outline_modulate(value): void;
  public get text(): String;
  public set text(value): void;
  public get font(): Font;
  public set font(value): void;
  public get font_size(): number;
  public set font_size(value): void;
  public get outline_size(): number;
  public set outline_size(value): void;
  public get horizontal_alignment(): number;
  public set horizontal_alignment(value): void;
  public get vertical_alignment(): number;
  public set vertical_alignment(value): void;
  public get uppercase(): boolean;
  public set uppercase(value): void;
  public get line_spacing(): number;
  public set line_spacing(value): void;
  public get autowrap_mode(): number;
  public set autowrap_mode(value): void;
  public get justification_flags(): number;
  public set justification_flags(value): void;
  public get width(): number;
  public set width(value): void;
  public get text_direction(): number;
  public set text_direction(value): void;
  public get language(): String;
  public set language(value): void;
  public get structured_text_bidi_override(): number;
  public set structured_text_bidi_override(value): void;
  public get structured_text_bidi_override_options(): GDArray;
  public set structured_text_bidi_override_options(value): void;
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