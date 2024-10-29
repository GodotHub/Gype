
import { Resource } from "@godot/classes/resource";

export declare class Font extends Resource{
  public set_fallbacks(_fallbacks: GDArray): void;
  public get_fallbacks(): GDArray;
  public find_variation(_variation_coordinates: Dictionary, _face_index: number, _strength: number, _transform: Transform2D, _spacing_top: number, _spacing_bottom: number, _spacing_space: number, _spacing_glyph: number, _baseline_offset: number): RID;
  public get_rids(): GDArray;
  public get_height(_font_size: number): number;
  public get_ascent(_font_size: number): number;
  public get_descent(_font_size: number): number;
  public get_underline_position(_font_size: number): number;
  public get_underline_thickness(_font_size: number): number;
  public get_font_name(): String;
  public get_font_style_name(): String;
  public get_ot_name_strings(): Dictionary;
  public get_font_style(): number;
  public get_font_weight(): number;
  public get_font_stretch(): number;
  public get_spacing(_spacing: number): number;
  public get_opentype_features(): Dictionary;
  public set_cache_capacity(_single_line: number, _multi_line: number): void;
  public get_string_size(_text: String, _alignment: number, _width: number, _font_size: number, _justification_flags: number, _direction: number, _orientation: number): Vector2;
  public get_multiline_string_size(_text: String, _alignment: number, _width: number, _font_size: number, _max_lines: number, _brk_flags: number, _justification_flags: number, _direction: number, _orientation: number): Vector2;
  public draw_string(_canvas_item: RID, _pos: Vector2, _text: String, _alignment: number, _width: number, _font_size: number, _modulate: Color, _justification_flags: number, _direction: number, _orientation: number): void;
  public draw_multiline_string(_canvas_item: RID, _pos: Vector2, _text: String, _alignment: number, _width: number, _font_size: number, _max_lines: number, _modulate: Color, _brk_flags: number, _justification_flags: number, _direction: number, _orientation: number): void;
  public draw_string_outline(_canvas_item: RID, _pos: Vector2, _text: String, _alignment: number, _width: number, _font_size: number, _size: number, _modulate: Color, _justification_flags: number, _direction: number, _orientation: number): void;
  public draw_multiline_string_outline(_canvas_item: RID, _pos: Vector2, _text: String, _alignment: number, _width: number, _font_size: number, _max_lines: number, _size: number, _modulate: Color, _brk_flags: number, _justification_flags: number, _direction: number, _orientation: number): void;
  public get_char_size(_char: number, _font_size: number): Vector2;
  public draw_char(_canvas_item: RID, _pos: Vector2, _char: number, _font_size: number, _modulate: Color): number;
  public draw_char_outline(_canvas_item: RID, _pos: Vector2, _char: number, _font_size: number, _size: number, _modulate: Color): number;
  public has_char(_char: number): boolean;
  public get_supported_chars(): String;
  public is_language_supported(_language: String): boolean;
  public is_script_supported(_script: String): boolean;
  public get_supported_feature_list(): Dictionary;
  public get_supported_variation_list(): Dictionary;
  public get_face_count(): number;
  public get fallbacks(): GDArray {
    get_fallbacks();
  }
  public set fallbacks(value): void {
    set_fallbacks(value);
  }
}