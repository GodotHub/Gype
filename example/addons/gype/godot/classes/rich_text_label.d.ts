
import { Texture2D } from "@godot/classes/texture2d";
import { Control } from "@godot/classes/control";
import { RichTextEffect } from "@godot/classes/rich_text_effect";
import { VScrollBar } from "@godot/classes/v_scroll_bar";
import { Font } from "@godot/classes/font";
import { PopupMenu } from "@godot/classes/popup_menu";
export declare class RichTextLabel extends Control{
  public get_parsed_text(): String;
  public add_text(_text: GDString | StringName | string): void;
  public set_text(_text: GDString | StringName | string): void;
  public add_image(_image: Texture2D, _width: number = 0, _height: number = 0, _color: Color = Color(1, 1, 1, 1), _inline_align: number = 5, _region: Rect2 = Rect2(0, 0, 0, 0), _key: any = null, _pad: boolean = false, _tooltip: GDString | StringName | string = "", _size_in_percent: boolean = false): void;
  public update_image(_key: any, _mask: number, _image: Texture2D, _width: number = 0, _height: number = 0, _color: Color = Color(1, 1, 1, 1), _inline_align: number = 5, _region: Rect2 = Rect2(0, 0, 0, 0), _pad: boolean = false, _tooltip: GDString | StringName | string = "", _size_in_percent: boolean = false): void;
  public newline(): void;
  public remove_paragraph(_paragraph: number, _no_invalidate: boolean = false): boolean;
  public invalidate_paragraph(_paragraph: number): boolean;
  public push_font(_font: Font, _font_size: number = 0): void;
  public push_font_size(_font_size: number): void;
  public push_normal(): void;
  public push_bold(): void;
  public push_bold_italics(): void;
  public push_italics(): void;
  public push_mono(): void;
  public push_color(_color: Color): void;
  public push_outline_size(_outline_size: number): void;
  public push_outline_color(_color: Color): void;
  public push_paragraph(_alignment: number, _base_direction: number = 0, _language: GDString | StringName | string = "", _st_parser: number = 0, _justification_flags: number = 163, _tab_stops: PackedFloat32Array = PackedFloat32Array()): void;
  public push_indent(_level: number): void;
  public push_list(_level: number, _type: number, _capitalize: boolean, _bullet: GDString | StringName | string = "•"): void;
  public push_meta(_data: any, _underline_mode: number = 1): void;
  public push_hint(_description: GDString | StringName | string): void;
  public push_language(_language: GDString | StringName | string): void;
  public push_underline(): void;
  public push_strikethrough(): void;
  public push_table(_columns: number, _inline_align: number = 0, _align_to_row: number = -1): void;
  public push_dropcap(_string: GDString | StringName | string, _font: Font, _size: number, _dropcap_margins: Rect2 = Rect2(0, 0, 0, 0), _color: Color = Color(1, 1, 1, 1), _outline_size: number = 0, _outline_color: Color = Color(0, 0, 0, 0)): void;
  public set_table_column_expand(_column: number, _expand: boolean, _ratio: number = 1): void;
  public set_cell_row_background_color(_odd_row_bg: Color, _even_row_bg: Color): void;
  public set_cell_border_color(_color: Color): void;
  public set_cell_size_override(_min_size: Vector2, _max_size: Vector2): void;
  public set_cell_padding(_padding: Rect2): void;
  public push_cell(): void;
  public push_fgcolor(_fgcolor: Color): void;
  public push_bgcolor(_bgcolor: Color): void;
  public push_customfx(_effect: RichTextEffect, _env: Dictionary): void;
  public push_context(): void;
  public pop_context(): void;
  public pop(): void;
  public pop_all(): void;
  public clear(): void;
  public set_structured_text_bidi_override(_parser: number): void;
  public get_structured_text_bidi_override(): number;
  public set_structured_text_bidi_override_options(_args: GDArray): void;
  public get_structured_text_bidi_override_options(): GDArray;
  public set_text_direction(_direction: number): void;
  public get_text_direction(): number;
  public set_language(_language: GDString | StringName | string): void;
  public get_language(): String;
  public set_autowrap_mode(_autowrap_mode: number): void;
  public get_autowrap_mode(): number;
  public set_meta_underline(_enable: boolean): void;
  public is_meta_underlined(): boolean;
  public set_hint_underline(_enable: boolean): void;
  public is_hint_underlined(): boolean;
  public set_scroll_active(_active: boolean): void;
  public is_scroll_active(): boolean;
  public set_scroll_follow(_follow: boolean): void;
  public is_scroll_following(): boolean;
  public get_v_scroll_bar(): VScrollBar;
  public scroll_to_line(_line: number): void;
  public scroll_to_paragraph(_paragraph: number): void;
  public scroll_to_selection(): void;
  public set_tab_size(_spaces: number): void;
  public get_tab_size(): number;
  public set_fit_content(_enabled: boolean): void;
  public is_fit_content_enabled(): boolean;
  public set_selection_enabled(_enabled: boolean): void;
  public is_selection_enabled(): boolean;
  public set_context_menu_enabled(_enabled: boolean): void;
  public is_context_menu_enabled(): boolean;
  public set_shortcut_keys_enabled(_enabled: boolean): void;
  public is_shortcut_keys_enabled(): boolean;
  public set_deselect_on_focus_loss_enabled(_enable: boolean): void;
  public is_deselect_on_focus_loss_enabled(): boolean;
  public set_drag_and_drop_selection_enabled(_enable: boolean): void;
  public is_drag_and_drop_selection_enabled(): boolean;
  public get_selection_from(): number;
  public get_selection_to(): number;
  public select_all(): void;
  public get_selected_text(): String;
  public deselect(): void;
  public parse_bbcode(_bbcode: GDString | StringName | string): void;
  public append_text(_bbcode: GDString | StringName | string): void;
  public get_text(): String;
  public is_ready(): boolean;
  public set_threaded(_threaded: boolean): void;
  public is_threaded(): boolean;
  public set_progress_bar_delay(_delay_ms: number): void;
  public get_progress_bar_delay(): number;
  public set_visible_characters(_amount: number): void;
  public get_visible_characters(): number;
  public get_visible_characters_behavior(): number;
  public set_visible_characters_behavior(_behavior: number): void;
  public set_visible_ratio(_ratio: number): void;
  public get_visible_ratio(): number;
  public get_character_line(_character: number): number;
  public get_character_paragraph(_character: number): number;
  public get_total_character_count(): number;
  public set_use_bbcode(_enable: boolean): void;
  public is_using_bbcode(): boolean;
  public get_line_count(): number;
  public get_visible_line_count(): number;
  public get_paragraph_count(): number;
  public get_visible_paragraph_count(): number;
  public get_content_height(): number;
  public get_content_width(): number;
  public get_line_offset(_line: number): number;
  public get_paragraph_offset(_paragraph: number): number;
  public parse_expressions_for_values(_expressions: PackedStringArray): Dictionary;
  public set_effects(_effects: GDArray): void;
  public get_effects(): GDArray;
  public install_effect(_effect: any): void;
  public get_menu(): PopupMenu;
  public is_menu_visible(): boolean;
  public menu_option(_option: number): void;
  public get bbcode_enabled(): boolean;
  public set bbcode_enabled(value): void;
  public get text(): String;
  public set text(value): void;
  public get fit_content(): boolean;
  public set fit_content(value): void;
  public get scroll_active(): boolean;
  public set scroll_active(value): void;
  public get scroll_following(): boolean;
  public set scroll_following(value): void;
  public get autowrap_mode(): number;
  public set autowrap_mode(value): void;
  public get tab_size(): number;
  public set tab_size(value): void;
  public get context_menu_enabled(): boolean;
  public set context_menu_enabled(value): void;
  public get shortcut_keys_enabled(): boolean;
  public set shortcut_keys_enabled(value): void;
  public get custom_effects(): GDArray;
  public set custom_effects(value): void;
  public get meta_underlined(): boolean;
  public set meta_underlined(value): void;
  public get hint_underlined(): boolean;
  public set hint_underlined(value): void;
  public get threaded(): boolean;
  public set threaded(value): void;
  public get progress_bar_delay(): number;
  public set progress_bar_delay(value): void;
  public get selection_enabled(): boolean;
  public set selection_enabled(value): void;
  public get deselect_on_focus_loss_enabled(): boolean;
  public set deselect_on_focus_loss_enabled(value): void;
  public get drag_and_drop_selection_enabled(): boolean;
  public set drag_and_drop_selection_enabled(value): void;
  public get visible_characters(): number;
  public set visible_characters(value): void;
  public get visible_characters_behavior(): number;
  public set visible_characters_behavior(value): void;
  public get visible_ratio(): number;
  public set visible_ratio(value): void;
  public get text_direction(): number;
  public set text_direction(value): void;
  public get language(): String;
  public set language(value): void;
  public get structured_text_bidi_override(): number;
  public set structured_text_bidi_override(value): void;
  public get structured_text_bidi_override_options(): GDArray;
  public set structured_text_bidi_override_options(value): void;
  static ListType = {
    LIST_NUMBERS = 0,
    LIST_LETTERS = 1,
    LIST_ROMAN = 2,
    LIST_DOTS = 3,
  }
  static MenuItems = {
    MENU_COPY = 0,
    MENU_SELECT_ALL = 1,
    MENU_MAX = 2,
  }
  static MetaUnderline = {
    META_UNDERLINE_NEVER = 0,
    META_UNDERLINE_ALWAYS = 1,
    META_UNDERLINE_ON_HOVER = 2,
  }
  static ImageUpdateMask = {
    UPDATE_TEXTURE = 1,
    UPDATE_SIZE = 2,
    UPDATE_COLOR = 4,
    UPDATE_ALIGNMENT = 8,
    UPDATE_REGION = 16,
    UPDATE_PAD = 32,
    UPDATE_TOOLTIP = 64,
    UPDATE_WIDTH_IN_PERCENT = 128,
  }
  public get meta_clicked(): Signal;
  public get meta_hover_started(): Signal;
  public get meta_hover_ended(): Signal;
  public get finished(): Signal;
}