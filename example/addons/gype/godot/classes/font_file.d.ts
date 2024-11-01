
import { Font } from "@godot/classes/font";
import { Image } from "@godot/classes/image";

export declare class FontFile extends Font{
  public load_bitmap_font(_path: String | StringName | string): number;
  public load_dynamic_font(_path: String | StringName | string): number;
  public set_data(_data: PackedByteArray): void;
  public get_data(): PackedByteArray;
  public set_font_name(_name: String | StringName | string): void;
  public set_font_style_name(_name: String | StringName | string): void;
  public set_font_style(_style: number): void;
  public set_font_weight(_weight: number): void;
  public set_font_stretch(_stretch: number): void;
  public set_antialiasing(_antialiasing: number): void;
  public get_antialiasing(): number;
  public set_disable_embedded_bitmaps(_disable_embedded_bitmaps: boolean): void;
  public get_disable_embedded_bitmaps(): boolean;
  public set_generate_mipmaps(_generate_mipmaps: boolean): void;
  public get_generate_mipmaps(): boolean;
  public set_multichannel_signed_distance_field(_msdf: boolean): void;
  public is_multichannel_signed_distance_field(): boolean;
  public set_msdf_pixel_range(_msdf_pixel_range: number): void;
  public get_msdf_pixel_range(): number;
  public set_msdf_size(_msdf_size: number): void;
  public get_msdf_size(): number;
  public set_fixed_size(_fixed_size: number): void;
  public get_fixed_size(): number;
  public set_fixed_size_scale_mode(_fixed_size_scale_mode: number): void;
  public get_fixed_size_scale_mode(): number;
  public set_allow_system_fallback(_allow_system_fallback: boolean): void;
  public is_allow_system_fallback(): boolean;
  public set_force_autohinter(_force_autohinter: boolean): void;
  public is_force_autohinter(): boolean;
  public set_hinting(_hinting: number): void;
  public get_hinting(): number;
  public set_subpixel_positioning(_subpixel_positioning: number): void;
  public get_subpixel_positioning(): number;
  public set_oversampling(_oversampling: number): void;
  public get_oversampling(): number;
  public get_cache_count(): number;
  public clear_cache(): void;
  public remove_cache(_cache_index: number): void;
  public get_size_cache_list(_cache_index: number): GDArray;
  public clear_size_cache(_cache_index: number): void;
  public remove_size_cache(_cache_index: number, _size: Vector2i): void;
  public set_variation_coordinates(_cache_index: number, _variation_coordinates: Dictionary): void;
  public get_variation_coordinates(_cache_index: number): Dictionary;
  public set_embolden(_cache_index: number, _strength: number): void;
  public get_embolden(_cache_index: number): number;
  public set_transform(_cache_index: number, _transform: Transform2D): void;
  public get_transform(_cache_index: number): Transform2D;
  public set_extra_spacing(_cache_index: number, _spacing: number, _value: number): void;
  public get_extra_spacing(_cache_index: number, _spacing: number): number;
  public set_extra_baseline_offset(_cache_index: number, _baseline_offset: number): void;
  public get_extra_baseline_offset(_cache_index: number): number;
  public set_face_index(_cache_index: number, _face_index: number): void;
  public get_face_index(_cache_index: number): number;
  public set_cache_ascent(_cache_index: number, _size: number, _ascent: number): void;
  public get_cache_ascent(_cache_index: number, _size: number): number;
  public set_cache_descent(_cache_index: number, _size: number, _descent: number): void;
  public get_cache_descent(_cache_index: number, _size: number): number;
  public set_cache_underline_position(_cache_index: number, _size: number, _underline_position: number): void;
  public get_cache_underline_position(_cache_index: number, _size: number): number;
  public set_cache_underline_thickness(_cache_index: number, _size: number, _underline_thickness: number): void;
  public get_cache_underline_thickness(_cache_index: number, _size: number): number;
  public set_cache_scale(_cache_index: number, _size: number, _scale: number): void;
  public get_cache_scale(_cache_index: number, _size: number): number;
  public get_texture_count(_cache_index: number, _size: Vector2i): number;
  public clear_textures(_cache_index: number, _size: Vector2i): void;
  public remove_texture(_cache_index: number, _size: Vector2i, _texture_index: number): void;
  public set_texture_image(_cache_index: number, _size: Vector2i, _texture_index: number, _image: Image): void;
  public get_texture_image(_cache_index: number, _size: Vector2i, _texture_index: number): Image;
  public set_texture_offsets(_cache_index: number, _size: Vector2i, _texture_index: number, _offset: PackedInt32Array): void;
  public get_texture_offsets(_cache_index: number, _size: Vector2i, _texture_index: number): PackedInt32Array;
  public get_glyph_list(_cache_index: number, _size: Vector2i): PackedInt32Array;
  public clear_glyphs(_cache_index: number, _size: Vector2i): void;
  public remove_glyph(_cache_index: number, _size: Vector2i, _glyph: number): void;
  public set_glyph_advance(_cache_index: number, _size: number, _glyph: number, _advance: Vector2): void;
  public get_glyph_advance(_cache_index: number, _size: number, _glyph: number): Vector2;
  public set_glyph_offset(_cache_index: number, _size: Vector2i, _glyph: number, _offset: Vector2): void;
  public get_glyph_offset(_cache_index: number, _size: Vector2i, _glyph: number): Vector2;
  public set_glyph_size(_cache_index: number, _size: Vector2i, _glyph: number, _gl_size: Vector2): void;
  public get_glyph_size(_cache_index: number, _size: Vector2i, _glyph: number): Vector2;
  public set_glyph_uv_rect(_cache_index: number, _size: Vector2i, _glyph: number, _uv_rect: Rect2): void;
  public get_glyph_uv_rect(_cache_index: number, _size: Vector2i, _glyph: number): Rect2;
  public set_glyph_texture_idx(_cache_index: number, _size: Vector2i, _glyph: number, _texture_idx: number): void;
  public get_glyph_texture_idx(_cache_index: number, _size: Vector2i, _glyph: number): number;
  public get_kerning_list(_cache_index: number, _size: number): GDArray;
  public clear_kerning_map(_cache_index: number, _size: number): void;
  public remove_kerning(_cache_index: number, _size: number, _glyph_pair: Vector2i): void;
  public set_kerning(_cache_index: number, _size: number, _glyph_pair: Vector2i, _kerning: Vector2): void;
  public get_kerning(_cache_index: number, _size: number, _glyph_pair: Vector2i): Vector2;
  public render_range(_cache_index: number, _size: Vector2i, _start: number, _end: number): void;
  public render_glyph(_cache_index: number, _size: Vector2i, _index: number): void;
  public set_language_support_override(_language: String | StringName | string, _supported: boolean): void;
  public get_language_support_override(_language: String | StringName | string): boolean;
  public remove_language_support_override(_language: String | StringName | string): void;
  public get_language_support_overrides(): PackedStringArray;
  public set_script_support_override(_script: String | StringName | string, _supported: boolean): void;
  public get_script_support_override(_script: String | StringName | string): boolean;
  public remove_script_support_override(_script: String | StringName | string): void;
  public get_script_support_overrides(): PackedStringArray;
  public set_opentype_feature_overrides(_overrides: Dictionary): void;
  public get_opentype_feature_overrides(): Dictionary;
  public get_glyph_index(_size: number, _char: number, _variation_selector: number): number;
  public get_char_from_glyph_index(_size: number, _glyph_index: number): number;
  public get data(): PackedByteArray {
    get_data();
  }
  public set data(value): void {
    set_data(value);
  }
  public get generate_mipmaps(): boolean {
    get_generate_mipmaps();
  }
  public set generate_mipmaps(value): void {
    set_generate_mipmaps(value);
  }
  public get disable_embedded_bitmaps(): boolean {
    get_disable_embedded_bitmaps();
  }
  public set disable_embedded_bitmaps(value): void {
    set_disable_embedded_bitmaps(value);
  }
  public get antialiasing(): number {
    get_antialiasing();
  }
  public set antialiasing(value): void {
    set_antialiasing(value);
  }
  public get font_name(): String {
    get_font_name();
  }
  public set font_name(value): void {
    set_font_name(value);
  }
  public get style_name(): String {
    get_font_style_name();
  }
  public set style_name(value): void {
    set_font_style_name(value);
  }
  public get font_style(): number {
    get_font_style();
  }
  public set font_style(value): void {
    set_font_style(value);
  }
  public get font_weight(): number {
    get_font_weight();
  }
  public set font_weight(value): void {
    set_font_weight(value);
  }
  public get font_stretch(): number {
    get_font_stretch();
  }
  public set font_stretch(value): void {
    set_font_stretch(value);
  }
  public get subpixel_positioning(): number {
    get_subpixel_positioning();
  }
  public set subpixel_positioning(value): void {
    set_subpixel_positioning(value);
  }
  public get multichannel_signed_distance_field(): boolean {
    is_multichannel_signed_distance_field();
  }
  public set multichannel_signed_distance_field(value): void {
    set_multichannel_signed_distance_field(value);
  }
  public get msdf_pixel_range(): number {
    get_msdf_pixel_range();
  }
  public set msdf_pixel_range(value): void {
    set_msdf_pixel_range(value);
  }
  public get msdf_size(): number {
    get_msdf_size();
  }
  public set msdf_size(value): void {
    set_msdf_size(value);
  }
  public get allow_system_fallback(): boolean {
    is_allow_system_fallback();
  }
  public set allow_system_fallback(value): void {
    set_allow_system_fallback(value);
  }
  public get force_autohinter(): boolean {
    is_force_autohinter();
  }
  public set force_autohinter(value): void {
    set_force_autohinter(value);
  }
  public get hinting(): number {
    get_hinting();
  }
  public set hinting(value): void {
    set_hinting(value);
  }
  public get oversampling(): number {
    get_oversampling();
  }
  public set oversampling(value): void {
    set_oversampling(value);
  }
  public get fixed_size(): number {
    get_fixed_size();
  }
  public set fixed_size(value): void {
    set_fixed_size(value);
  }
  public get fixed_size_scale_mode(): number {
    get_fixed_size_scale_mode();
  }
  public set fixed_size_scale_mode(value): void {
    set_fixed_size_scale_mode(value);
  }
  public get opentype_feature_overrides(): Dictionary {
    get_opentype_feature_overrides();
  }
  public set opentype_feature_overrides(value): void {
    set_opentype_feature_overrides(value);
  }
}