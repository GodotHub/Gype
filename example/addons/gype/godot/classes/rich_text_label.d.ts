
import { PopupMenu } from "@godot/classes/popup_menu";
import { Font } from "@godot/classes/font";
import { VScrollBar } from "@godot/classes/v_scroll_bar";
import { Control } from "@godot/classes/control";
import { RichTextEffect } from "@godot/classes/rich_text_effect";
import { Texture2D } from "@godot/classes/texture2d";

export declare class RichTextLabel extends Control{
  public get_parsed_text(): String;
  public add_text(_text: String | StringName | string): void;
  public set_text(_text: String | StringName | string): void;
  public add_image(_image: Texture2D, _width: number, _height: number, _color: Color, _inline_align: number, _region: Rect2, _key: any, _pad: boolean, _tooltip: String | StringName | string, _size_in_percent: boolean): void;
  public update_image(_key: any, _mask: number, _image: Texture2D, _width: number, _height: number, _color: Color, _inline_align: number, _region: Rect2, _pad: boolean, _tooltip: String | StringName | string, _size_in_percent: boolean): void;
  public newline(): void;
  public remove_paragraph(_paragraph: number, _no_invalidate: boolean): boolean;
  public invalidate_paragraph(_paragraph: number): boolean;
  public push_font(_font: Font, _font_size: number): void;
  public push_font_size(_font_size: number): void;
  public push_normal(): void;
  public push_bold(): void;
  public push_bold_italics(): void;
  public push_italics(): void;
  public push_mono(): void;
  public push_color(_color: Color): void;
  public push_outline_size(_outline_size: number): void;
  public push_outline_color(_color: Color): void;
  public push_paragraph(_alignment: number, _base_direction: number, _language: String | StringName | string, _st_parser: number, _justification_flags: number, _tab_stops: PackedFloat32Array): void;
  public push_indent(_level: number): void;
  public push_list(_level: number, _type: number, _capitalize: boolean, _bullet: String | StringName | string): void;
  public push_meta(_data: any, _underline_mode: number): void;
  public push_hint(_description: String | StringName | string): void;
  public push_language(_language: String | StringName | string): void;
  public push_underline(): void;
  public push_strikethrough(): void;
  public push_table(_columns: number, _inline_align: number, _align_to_row: number): void;
  public push_dropcap(_string: String | StringName | string, _font: Font, _size: number, _dropcap_margins: Rect2, _color: Color, _outline_size: number, _outline_color: Color): void;
  public set_table_column_expand(_column: number, _expand: boolean, _ratio: number): void;
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
  public set_language(_language: String | StringName | string): void;
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
  public parse_bbcode(_bbcode: String | StringName | string): void;
  public append_text(_bbcode: String | StringName | string): void;
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
  public get bbcode_enabled(): boolean {
    is_using_bbcode();
  }
  public set bbcode_enabled(value): void {
    set_use_bbcode(value);
  }
  public get text(): String {
    get_text();
  }
  public set text(value): void {
    set_text(value);
  }
  public get fit_content(): boolean {
    is_fit_content_enabled();
  }
  public set fit_content(value): void {
    set_fit_content(value);
  }
  public get scroll_active(): boolean {
    is_scroll_active();
  }
  public set scroll_active(value): void {
    set_scroll_active(value);
  }
  public get scroll_following(): boolean {
    is_scroll_following();
  }
  public set scroll_following(value): void {
    set_scroll_follow(value);
  }
  public get autowrap_mode(): number {
    get_autowrap_mode();
  }
  public set autowrap_mode(value): void {
    set_autowrap_mode(value);
  }
  public get tab_size(): number {
    get_tab_size();
  }
  public set tab_size(value): void {
    set_tab_size(value);
  }
  public get context_menu_enabled(): boolean {
    is_context_menu_enabled();
  }
  public set context_menu_enabled(value): void {
    set_context_menu_enabled(value);
  }
  public get shortcut_keys_enabled(): boolean {
    is_shortcut_keys_enabled();
  }
  public set shortcut_keys_enabled(value): void {
    set_shortcut_keys_enabled(value);
  }
  public get custom_effects(): GDArray {
    get_effects();
  }
  public set custom_effects(value): void {
    set_effects(value);
  }
  public get meta_underlined(): boolean {
    is_meta_underlined();
  }
  public set meta_underlined(value): void {
    set_meta_underline(value);
  }
  public get hint_underlined(): boolean {
    is_hint_underlined();
  }
  public set hint_underlined(value): void {
    set_hint_underline(value);
  }
  public get threaded(): boolean {
    is_threaded();
  }
  public set threaded(value): void {
    set_threaded(value);
  }
  public get progress_bar_delay(): number {
    get_progress_bar_delay();
  }
  public set progress_bar_delay(value): void {
    set_progress_bar_delay(value);
  }
  public get selection_enabled(): boolean {
    is_selection_enabled();
  }
  public set selection_enabled(value): void {
    set_selection_enabled(value);
  }
  public get deselect_on_focus_loss_enabled(): boolean {
    is_deselect_on_focus_loss_enabled();
  }
  public set deselect_on_focus_loss_enabled(value): void {
    set_deselect_on_focus_loss_enabled(value);
  }
  public get drag_and_drop_selection_enabled(): boolean {
    is_drag_and_drop_selection_enabled();
  }
  public set drag_and_drop_selection_enabled(value): void {
    set_drag_and_drop_selection_enabled(value);
  }
  public get visible_characters(): number {
    get_visible_characters();
  }
  public set visible_characters(value): void {
    set_visible_characters(value);
  }
  public get visible_characters_behavior(): number {
    get_visible_characters_behavior();
  }
  public set visible_characters_behavior(value): void {
    set_visible_characters_behavior(value);
  }
  public get visible_ratio(): number {
    get_visible_ratio();
  }
  public set visible_ratio(value): void {
    set_visible_ratio(value);
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