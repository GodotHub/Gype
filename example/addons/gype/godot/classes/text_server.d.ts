
import { RefCounted } from "@godot/classes/ref_counted";
import { Image } from "@godot/classes/image";

export declare class TextServer extends RefCounted{
  public has_feature(_feature: number): boolean;
  public get_name(): String;
  public get_features(): number;
  public load_support_data(_filename: String): boolean;
  public get_support_data_filename(): String;
  public get_support_data_info(): String;
  public save_support_data(_filename: String): boolean;
  public is_locale_right_to_left(_locale: String): boolean;
  public name_to_tag(_name: String): number;
  public tag_to_name(_tag: number): String;
  public has(_rid: RID): boolean;
  public free_rid(_rid: RID): void;
  public create_font(): RID;
  public create_font_linked_variation(_font_rid: RID): RID;
  public font_set_data(_font_rid: RID, _data: PackedByteArray): void;
  public font_set_face_index(_font_rid: RID, _face_index: number): void;
  public font_get_face_index(_font_rid: RID): number;
  public font_get_face_count(_font_rid: RID): number;
  public font_set_style(_font_rid: RID, _style: number): void;
  public font_get_style(_font_rid: RID): number;
  public font_set_name(_font_rid: RID, _name: String): void;
  public font_get_name(_font_rid: RID): String;
  public font_get_ot_name_strings(_font_rid: RID): Dictionary;
  public font_set_style_name(_font_rid: RID, _name: String): void;
  public font_get_style_name(_font_rid: RID): String;
  public font_set_weight(_font_rid: RID, _weight: number): void;
  public font_get_weight(_font_rid: RID): number;
  public font_set_stretch(_font_rid: RID, _weight: number): void;
  public font_get_stretch(_font_rid: RID): number;
  public font_set_antialiasing(_font_rid: RID, _antialiasing: number): void;
  public font_get_antialiasing(_font_rid: RID): number;
  public font_set_disable_embedded_bitmaps(_font_rid: RID, _disable_embedded_bitmaps: boolean): void;
  public font_get_disable_embedded_bitmaps(_font_rid: RID): boolean;
  public font_set_generate_mipmaps(_font_rid: RID, _generate_mipmaps: boolean): void;
  public font_get_generate_mipmaps(_font_rid: RID): boolean;
  public font_set_multichannel_signed_distance_field(_font_rid: RID, _msdf: boolean): void;
  public font_is_multichannel_signed_distance_field(_font_rid: RID): boolean;
  public font_set_msdf_pixel_range(_font_rid: RID, _msdf_pixel_range: number): void;
  public font_get_msdf_pixel_range(_font_rid: RID): number;
  public font_set_msdf_size(_font_rid: RID, _msdf_size: number): void;
  public font_get_msdf_size(_font_rid: RID): number;
  public font_set_fixed_size(_font_rid: RID, _fixed_size: number): void;
  public font_get_fixed_size(_font_rid: RID): number;
  public font_set_fixed_size_scale_mode(_font_rid: RID, _fixed_size_scale_mode: number): void;
  public font_get_fixed_size_scale_mode(_font_rid: RID): number;
  public font_set_allow_system_fallback(_font_rid: RID, _allow_system_fallback: boolean): void;
  public font_is_allow_system_fallback(_font_rid: RID): boolean;
  public font_set_force_autohinter(_font_rid: RID, _force_autohinter: boolean): void;
  public font_is_force_autohinter(_font_rid: RID): boolean;
  public font_set_hinting(_font_rid: RID, _hinting: number): void;
  public font_get_hinting(_font_rid: RID): number;
  public font_set_subpixel_positioning(_font_rid: RID, _subpixel_positioning: number): void;
  public font_get_subpixel_positioning(_font_rid: RID): number;
  public font_set_embolden(_font_rid: RID, _strength: number): void;
  public font_get_embolden(_font_rid: RID): number;
  public font_set_spacing(_font_rid: RID, _spacing: number, _value: number): void;
  public font_get_spacing(_font_rid: RID, _spacing: number): number;
  public font_set_baseline_offset(_font_rid: RID, _baseline_offset: number): void;
  public font_get_baseline_offset(_font_rid: RID): number;
  public font_set_transform(_font_rid: RID, _transform: Transform2D): void;
  public font_get_transform(_font_rid: RID): Transform2D;
  public font_set_variation_coordinates(_font_rid: RID, _variation_coordinates: Dictionary): void;
  public font_get_variation_coordinates(_font_rid: RID): Dictionary;
  public font_set_oversampling(_font_rid: RID, _oversampling: number): void;
  public font_get_oversampling(_font_rid: RID): number;
  public font_get_size_cache_list(_font_rid: RID): Array;
  public font_clear_size_cache(_font_rid: RID): void;
  public font_remove_size_cache(_font_rid: RID, _size: Vector2i): void;
  public font_set_ascent(_font_rid: RID, _size: number, _ascent: number): void;
  public font_get_ascent(_font_rid: RID, _size: number): number;
  public font_set_descent(_font_rid: RID, _size: number, _descent: number): void;
  public font_get_descent(_font_rid: RID, _size: number): number;
  public font_set_underline_position(_font_rid: RID, _size: number, _underline_position: number): void;
  public font_get_underline_position(_font_rid: RID, _size: number): number;
  public font_set_underline_thickness(_font_rid: RID, _size: number, _underline_thickness: number): void;
  public font_get_underline_thickness(_font_rid: RID, _size: number): number;
  public font_set_scale(_font_rid: RID, _size: number, _scale: number): void;
  public font_get_scale(_font_rid: RID, _size: number): number;
  public font_get_texture_count(_font_rid: RID, _size: Vector2i): number;
  public font_clear_textures(_font_rid: RID, _size: Vector2i): void;
  public font_remove_texture(_font_rid: RID, _size: Vector2i, _texture_index: number): void;
  public font_set_texture_image(_font_rid: RID, _size: Vector2i, _texture_index: number, _image: Image): void;
  public font_get_texture_image(_font_rid: RID, _size: Vector2i, _texture_index: number): Image;
  public font_set_texture_offsets(_font_rid: RID, _size: Vector2i, _texture_index: number, _offset: PackedInt32Array): void;
  public font_get_texture_offsets(_font_rid: RID, _size: Vector2i, _texture_index: number): PackedInt32Array;
  public font_get_glyph_list(_font_rid: RID, _size: Vector2i): PackedInt32Array;
  public font_clear_glyphs(_font_rid: RID, _size: Vector2i): void;
  public font_remove_glyph(_font_rid: RID, _size: Vector2i, _glyph: number): void;
  public font_get_glyph_advance(_font_rid: RID, _size: number, _glyph: number): Vector2;
  public font_set_glyph_advance(_font_rid: RID, _size: number, _glyph: number, _advance: Vector2): void;
  public font_get_glyph_offset(_font_rid: RID, _size: Vector2i, _glyph: number): Vector2;
  public font_set_glyph_offset(_font_rid: RID, _size: Vector2i, _glyph: number, _offset: Vector2): void;
  public font_get_glyph_size(_font_rid: RID, _size: Vector2i, _glyph: number): Vector2;
  public font_set_glyph_size(_font_rid: RID, _size: Vector2i, _glyph: number, _gl_size: Vector2): void;
  public font_get_glyph_uv_rect(_font_rid: RID, _size: Vector2i, _glyph: number): Rect2;
  public font_set_glyph_uv_rect(_font_rid: RID, _size: Vector2i, _glyph: number, _uv_rect: Rect2): void;
  public font_get_glyph_texture_idx(_font_rid: RID, _size: Vector2i, _glyph: number): number;
  public font_set_glyph_texture_idx(_font_rid: RID, _size: Vector2i, _glyph: number, _texture_idx: number): void;
  public font_get_glyph_texture_rid(_font_rid: RID, _size: Vector2i, _glyph: number): RID;
  public font_get_glyph_texture_size(_font_rid: RID, _size: Vector2i, _glyph: number): Vector2;
  public font_get_glyph_contours(_font: RID, _size: number, _index: number): Dictionary;
  public font_get_kerning_list(_font_rid: RID, _size: number): Array;
  public font_clear_kerning_map(_font_rid: RID, _size: number): void;
  public font_remove_kerning(_font_rid: RID, _size: number, _glyph_pair: Vector2i): void;
  public font_set_kerning(_font_rid: RID, _size: number, _glyph_pair: Vector2i, _kerning: Vector2): void;
  public font_get_kerning(_font_rid: RID, _size: number, _glyph_pair: Vector2i): Vector2;
  public font_get_glyph_index(_font_rid: RID, _size: number, _char: number, _variation_selector: number): number;
  public font_get_char_from_glyph_index(_font_rid: RID, _size: number, _glyph_index: number): number;
  public font_has_char(_font_rid: RID, _char: number): boolean;
  public font_get_supported_chars(_font_rid: RID): String;
  public font_render_range(_font_rid: RID, _size: Vector2i, _start: number, _end: number): void;
  public font_render_glyph(_font_rid: RID, _size: Vector2i, _index: number): void;
  public font_draw_glyph(_font_rid: RID, _canvas: RID, _size: number, _pos: Vector2, _index: number, _color: Color): void;
  public font_draw_glyph_outline(_font_rid: RID, _canvas: RID, _size: number, _outline_size: number, _pos: Vector2, _index: number, _color: Color): void;
  public font_is_language_supported(_font_rid: RID, _language: String): boolean;
  public font_set_language_support_override(_font_rid: RID, _language: String, _supported: boolean): void;
  public font_get_language_support_override(_font_rid: RID, _language: String): boolean;
  public font_remove_language_support_override(_font_rid: RID, _language: String): void;
  public font_get_language_support_overrides(_font_rid: RID): PackedStringArray;
  public font_is_script_supported(_font_rid: RID, _script: String): boolean;
  public font_set_script_support_override(_font_rid: RID, _script: String, _supported: boolean): void;
  public font_get_script_support_override(_font_rid: RID, _script: String): boolean;
  public font_remove_script_support_override(_font_rid: RID, _script: String): void;
  public font_get_script_support_overrides(_font_rid: RID): PackedStringArray;
  public font_set_opentype_feature_overrides(_font_rid: RID, _overrides: Dictionary): void;
  public font_get_opentype_feature_overrides(_font_rid: RID): Dictionary;
  public font_supported_feature_list(_font_rid: RID): Dictionary;
  public font_supported_variation_list(_font_rid: RID): Dictionary;
  public font_get_global_oversampling(): number;
  public font_set_global_oversampling(_oversampling: number): void;
  public get_hex_code_box_size(_size: number, _index: number): Vector2;
  public draw_hex_code_box(_canvas: RID, _size: number, _pos: Vector2, _index: number, _color: Color): void;
  public create_shaped_text(_direction: number, _orientation: number): RID;
  public shaped_text_clear(_rid: RID): void;
  public shaped_text_set_direction(_shaped: RID, _direction: number): void;
  public shaped_text_get_direction(_shaped: RID): number;
  public shaped_text_get_inferred_direction(_shaped: RID): number;
  public shaped_text_set_bidi_override(_shaped: RID, _override: GDArray): void;
  public shaped_text_set_custom_punctuation(_shaped: RID, _punct: String): void;
  public shaped_text_get_custom_punctuation(_shaped: RID): String;
  public shaped_text_set_custom_ellipsis(_shaped: RID, _char: number): void;
  public shaped_text_get_custom_ellipsis(_shaped: RID): number;
  public shaped_text_set_orientation(_shaped: RID, _orientation: number): void;
  public shaped_text_get_orientation(_shaped: RID): number;
  public shaped_text_set_preserve_invalid(_shaped: RID, _enabled: boolean): void;
  public shaped_text_get_preserve_invalid(_shaped: RID): boolean;
  public shaped_text_set_preserve_control(_shaped: RID, _enabled: boolean): void;
  public shaped_text_get_preserve_control(_shaped: RID): boolean;
  public shaped_text_set_spacing(_shaped: RID, _spacing: number, _value: number): void;
  public shaped_text_get_spacing(_shaped: RID, _spacing: number): number;
  public shaped_text_add_string(_shaped: RID, _text: String, _fonts: typedarray::RID, _size: number, _opentype_features: Dictionary, _language: String, _meta: Variant): boolean;
  public shaped_text_add_object(_shaped: RID, _key: Variant, _size: Vector2, _inline_align: number, _length: number, _baseline: number): boolean;
  public shaped_text_resize_object(_shaped: RID, _key: Variant, _size: Vector2, _inline_align: number, _baseline: number): boolean;
  public shaped_get_span_count(_shaped: RID): number;
  public shaped_get_span_meta(_shaped: RID, _index: number): Variant;
  public shaped_set_span_update_font(_shaped: RID, _index: number, _fonts: typedarray::RID, _size: number, _opentype_features: Dictionary): void;
  public shaped_text_substr(_shaped: RID, _start: number, _length: number): RID;
  public shaped_text_get_parent(_shaped: RID): RID;
  public shaped_text_fit_to_width(_shaped: RID, _width: number, _justification_flags: number): number;
  public shaped_text_tab_align(_shaped: RID, _tab_stops: PackedFloat32Array): number;
  public shaped_text_shape(_shaped: RID): boolean;
  public shaped_text_is_ready(_shaped: RID): boolean;
  public shaped_text_has_visible_chars(_shaped: RID): boolean;
  public shaped_text_get_glyphs(_shaped: RID): Array;
  public shaped_text_sort_logical(_shaped: RID): Array;
  public shaped_text_get_glyph_count(_shaped: RID): number;
  public shaped_text_get_range(_shaped: RID): Vector2i;
  public shaped_text_get_line_breaks_adv(_shaped: RID, _width: PackedFloat32Array, _start: number, _once: boolean, _break_flags: number): PackedInt32Array;
  public shaped_text_get_line_breaks(_shaped: RID, _width: number, _start: number, _break_flags: number): PackedInt32Array;
  public shaped_text_get_word_breaks(_shaped: RID, _grapheme_flags: number, _skip_grapheme_flags: number): PackedInt32Array;
  public shaped_text_get_trim_pos(_shaped: RID): number;
  public shaped_text_get_ellipsis_pos(_shaped: RID): number;
  public shaped_text_get_ellipsis_glyphs(_shaped: RID): Array;
  public shaped_text_get_ellipsis_glyph_count(_shaped: RID): number;
  public shaped_text_overrun_trim_to_width(_shaped: RID, _width: number, _overrun_trim_flags: number): void;
  public shaped_text_get_objects(_shaped: RID): GDArray;
  public shaped_text_get_object_rect(_shaped: RID, _key: Variant): Rect2;
  public shaped_text_get_object_range(_shaped: RID, _key: Variant): Vector2i;
  public shaped_text_get_object_glyph(_shaped: RID, _key: Variant): number;
  public shaped_text_get_size(_shaped: RID): Vector2;
  public shaped_text_get_ascent(_shaped: RID): number;
  public shaped_text_get_descent(_shaped: RID): number;
  public shaped_text_get_width(_shaped: RID): number;
  public shaped_text_get_underline_position(_shaped: RID): number;
  public shaped_text_get_underline_thickness(_shaped: RID): number;
  public shaped_text_get_carets(_shaped: RID, _position: number): Dictionary;
  public shaped_text_get_selection(_shaped: RID, _start: number, _end: number): PackedVector2Array;
  public shaped_text_hit_test_grapheme(_shaped: RID, _coords: number): number;
  public shaped_text_hit_test_position(_shaped: RID, _coords: number): number;
  public shaped_text_get_grapheme_bounds(_shaped: RID, _pos: number): Vector2;
  public shaped_text_next_grapheme_pos(_shaped: RID, _pos: number): number;
  public shaped_text_prev_grapheme_pos(_shaped: RID, _pos: number): number;
  public shaped_text_get_character_breaks(_shaped: RID): PackedInt32Array;
  public shaped_text_next_character_pos(_shaped: RID, _pos: number): number;
  public shaped_text_prev_character_pos(_shaped: RID, _pos: number): number;
  public shaped_text_closest_character_pos(_shaped: RID, _pos: number): number;
  public shaped_text_draw(_shaped: RID, _canvas: RID, _pos: Vector2, _clip_l: number, _clip_r: number, _color: Color): void;
  public shaped_text_draw_outline(_shaped: RID, _canvas: RID, _pos: Vector2, _clip_l: number, _clip_r: number, _outline_size: number, _color: Color): void;
  public shaped_text_get_dominant_direction_in_range(_shaped: RID, _start: number, _end: number): number;
  public format_number(_number: String, _language: String): String;
  public parse_number(_number: String, _language: String): String;
  public percent_sign(_language: String): String;
  public string_get_word_breaks(_string: String, _language: String, _chars_per_line: number): PackedInt32Array;
  public string_get_character_breaks(_string: String, _language: String): PackedInt32Array;
  public is_confusable(_string: String, _dict: PackedStringArray): number;
  public spoof_check(_string: String): boolean;
  public strip_diacritics(_string: String): String;
  public is_valid_identifier(_string: String): boolean;
  public is_valid_letter(_unicode: number): boolean;
  public string_to_upper(_string: String, _language: String): String;
  public string_to_lower(_string: String, _language: String): String;
  public string_to_title(_string: String, _language: String): String;
  public parse_structured_text(_parser_type: number, _args: GDArray, _text: String): Array;
  static FontAntialiasing = {
    FONT_ANTIALIASING_NONE = 0,
    FONT_ANTIALIASING_GRAY = 1,
    FONT_ANTIALIASING_LCD = 2,
  }
  static FontLCDSubpixelLayout = {
    FONT_LCD_SUBPIXEL_LAYOUT_NONE = 0,
    FONT_LCD_SUBPIXEL_LAYOUT_HRGB = 1,
    FONT_LCD_SUBPIXEL_LAYOUT_HBGR = 2,
    FONT_LCD_SUBPIXEL_LAYOUT_VRGB = 3,
    FONT_LCD_SUBPIXEL_LAYOUT_VBGR = 4,
    FONT_LCD_SUBPIXEL_LAYOUT_MAX = 5,
  }
  static Direction = {
    DIRECTION_AUTO = 0,
    DIRECTION_LTR = 1,
    DIRECTION_RTL = 2,
    DIRECTION_INHERITED = 3,
  }
  static Orientation = {
    ORIENTATION_HORIZONTAL = 0,
    ORIENTATION_VERTICAL = 1,
  }
  static JustificationFlag = {
    JUSTIFICATION_NONE = 0,
    JUSTIFICATION_KASHIDA = 1,
    JUSTIFICATION_WORD_BOUND = 2,
    JUSTIFICATION_TRIM_EDGE_SPACES = 4,
    JUSTIFICATION_AFTER_LAST_TAB = 8,
    JUSTIFICATION_CONSTRAIN_ELLIPSIS = 16,
    JUSTIFICATION_SKIP_LAST_LINE = 32,
    JUSTIFICATION_SKIP_LAST_LINE_WITH_VISIBLE_CHARS = 64,
    JUSTIFICATION_DO_NOT_SKIP_SINGLE_LINE = 128,
  }
  static AutowrapMode = {
    AUTOWRAP_OFF = 0,
    AUTOWRAP_ARBITRARY = 1,
    AUTOWRAP_WORD = 2,
    AUTOWRAP_WORD_SMART = 3,
  }
  static LineBreakFlag = {
    BREAK_NONE = 0,
    BREAK_MANDATORY = 1,
    BREAK_WORD_BOUND = 2,
    BREAK_GRAPHEME_BOUND = 4,
    BREAK_ADAPTIVE = 8,
    BREAK_TRIM_EDGE_SPACES = 16,
    BREAK_TRIM_INDENT = 32,
  }
  static VisibleCharactersBehavior = {
    VC_CHARS_BEFORE_SHAPING = 0,
    VC_CHARS_AFTER_SHAPING = 1,
    VC_GLYPHS_AUTO = 2,
    VC_GLYPHS_LTR = 3,
    VC_GLYPHS_RTL = 4,
  }
  static OverrunBehavior = {
    OVERRUN_NO_TRIMMING = 0,
    OVERRUN_TRIM_CHAR = 1,
    OVERRUN_TRIM_WORD = 2,
    OVERRUN_TRIM_ELLIPSIS = 3,
    OVERRUN_TRIM_WORD_ELLIPSIS = 4,
  }
  static TextOverrunFlag = {
    OVERRUN_NO_TRIM = 0,
    OVERRUN_TRIM = 1,
    OVERRUN_TRIM_WORD_ONLY = 2,
    OVERRUN_ADD_ELLIPSIS = 4,
    OVERRUN_ENFORCE_ELLIPSIS = 8,
    OVERRUN_JUSTIFICATION_AWARE = 16,
  }
  static GraphemeFlag = {
    GRAPHEME_IS_VALID = 1,
    GRAPHEME_IS_RTL = 2,
    GRAPHEME_IS_VIRTUAL = 4,
    GRAPHEME_IS_SPACE = 8,
    GRAPHEME_IS_BREAK_HARD = 16,
    GRAPHEME_IS_BREAK_SOFT = 32,
    GRAPHEME_IS_TAB = 64,
    GRAPHEME_IS_ELONGATION = 128,
    GRAPHEME_IS_PUNCTUATION = 256,
    GRAPHEME_IS_UNDERSCORE = 512,
    GRAPHEME_IS_CONNECTED = 1024,
    GRAPHEME_IS_SAFE_TO_INSERT_TATWEEL = 2048,
    GRAPHEME_IS_EMBEDDED_OBJECT = 4096,
    GRAPHEME_IS_SOFT_HYPHEN = 8192,
  }
  static Hinting = {
    HINTING_NONE = 0,
    HINTING_LIGHT = 1,
    HINTING_NORMAL = 2,
  }
  static SubpixelPositioning = {
    SUBPIXEL_POSITIONING_DISABLED = 0,
    SUBPIXEL_POSITIONING_AUTO = 1,
    SUBPIXEL_POSITIONING_ONE_HALF = 2,
    SUBPIXEL_POSITIONING_ONE_QUARTER = 3,
    SUBPIXEL_POSITIONING_ONE_HALF_MAX_SIZE = 20,
    SUBPIXEL_POSITIONING_ONE_QUARTER_MAX_SIZE = 16,
  }
  static Feature = {
    FEATURE_SIMPLE_LAYOUT = 1,
    FEATURE_BIDI_LAYOUT = 2,
    FEATURE_VERTICAL_LAYOUT = 4,
    FEATURE_SHAPING = 8,
    FEATURE_KASHIDA_JUSTIFICATION = 16,
    FEATURE_BREAK_ITERATORS = 32,
    FEATURE_FONT_BITMAP = 64,
    FEATURE_FONT_DYNAMIC = 128,
    FEATURE_FONT_MSDF = 256,
    FEATURE_FONT_SYSTEM = 512,
    FEATURE_FONT_VARIABLE = 1024,
    FEATURE_CONTEXT_SENSITIVE_CASE_CONVERSION = 2048,
    FEATURE_USE_SUPPORT_DATA = 4096,
    FEATURE_UNICODE_IDENTIFIERS = 8192,
    FEATURE_UNICODE_SECURITY = 16384,
  }
  static ContourPointTag = {
    CONTOUR_CURVE_TAG_ON = 1,
    CONTOUR_CURVE_TAG_OFF_CONIC = 0,
    CONTOUR_CURVE_TAG_OFF_CUBIC = 2,
  }
  static SpacingType = {
    SPACING_GLYPH = 0,
    SPACING_SPACE = 1,
    SPACING_TOP = 2,
    SPACING_BOTTOM = 3,
    SPACING_MAX = 4,
  }
  static FontStyle = {
    FONT_BOLD = 1,
    FONT_ITALIC = 2,
    FONT_FIXED_WIDTH = 4,
  }
  static StructuredTextParser = {
    STRUCTURED_TEXT_DEFAULT = 0,
    STRUCTURED_TEXT_URI = 1,
    STRUCTURED_TEXT_FILE = 2,
    STRUCTURED_TEXT_EMAIL = 3,
    STRUCTURED_TEXT_LIST = 4,
    STRUCTURED_TEXT_GDSCRIPT = 5,
    STRUCTURED_TEXT_CUSTOM = 6,
  }
  static FixedSizeScaleMode = {
    FIXED_SIZE_SCALE_DISABLE = 0,
    FIXED_SIZE_SCALE_INTEGER_ONLY = 1,
    FIXED_SIZE_SCALE_ENABLED = 2,
  }
}