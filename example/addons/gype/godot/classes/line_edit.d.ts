
import { PopupMenu } from "@godot/classes/popup_menu";
import { Texture2D } from "@godot/classes/texture2d";
import { Control } from "@godot/classes/control";
export declare class LineEdit extends Control{
  public set_horizontal_alignment(_alignment: number): void;
  public get_horizontal_alignment(): number;
  public clear(): void;
  public select(_from: number = 0, _to: number = -1): void;
  public select_all(): void;
  public deselect(): void;
  public has_selection(): boolean;
  public get_selected_text(): String;
  public get_selection_from_column(): number;
  public get_selection_to_column(): number;
  public set_text(_text: GDString | StringName | string): void;
  public get_text(): String;
  public get_draw_control_chars(): boolean;
  public set_draw_control_chars(_enable: boolean): void;
  public set_text_direction(_direction: number): void;
  public get_text_direction(): number;
  public set_language(_language: GDString | StringName | string): void;
  public get_language(): String;
  public set_structured_text_bidi_override(_parser: number): void;
  public get_structured_text_bidi_override(): number;
  public set_structured_text_bidi_override_options(_args: GDArray): void;
  public get_structured_text_bidi_override_options(): GDArray;
  public set_placeholder(_text: GDString | StringName | string): void;
  public get_placeholder(): String;
  public set_caret_column(_position: number): void;
  public get_caret_column(): number;
  public get_scroll_offset(): number;
  public set_expand_to_text_length_enabled(_enabled: boolean): void;
  public is_expand_to_text_length_enabled(): boolean;
  public set_caret_blink_enabled(_enabled: boolean): void;
  public is_caret_blink_enabled(): boolean;
  public set_caret_mid_grapheme_enabled(_enabled: boolean): void;
  public is_caret_mid_grapheme_enabled(): boolean;
  public set_caret_force_displayed(_enabled: boolean): void;
  public is_caret_force_displayed(): boolean;
  public set_caret_blink_interval(_interval: number): void;
  public get_caret_blink_interval(): number;
  public set_max_length(_chars: number): void;
  public get_max_length(): number;
  public insert_text_at_caret(_text: GDString | StringName | string): void;
  public delete_char_at_caret(): void;
  public delete_text(_from_column: number, _to_column: number): void;
  public set_editable(_enabled: boolean): void;
  public is_editable(): boolean;
  public set_secret(_enabled: boolean): void;
  public is_secret(): boolean;
  public set_secret_character(_character: GDString | StringName | string): void;
  public get_secret_character(): String;
  public menu_option(_option: number): void;
  public get_menu(): PopupMenu;
  public is_menu_visible(): boolean;
  public set_context_menu_enabled(_enable: boolean): void;
  public is_context_menu_enabled(): boolean;
  public set_virtual_keyboard_enabled(_enable: boolean): void;
  public is_virtual_keyboard_enabled(): boolean;
  public set_virtual_keyboard_type(_type: number): void;
  public get_virtual_keyboard_type(): number;
  public set_clear_button_enabled(_enable: boolean): void;
  public is_clear_button_enabled(): boolean;
  public set_shortcut_keys_enabled(_enable: boolean): void;
  public is_shortcut_keys_enabled(): boolean;
  public set_middle_mouse_paste_enabled(_enable: boolean): void;
  public is_middle_mouse_paste_enabled(): boolean;
  public set_selecting_enabled(_enable: boolean): void;
  public is_selecting_enabled(): boolean;
  public set_deselect_on_focus_loss_enabled(_enable: boolean): void;
  public is_deselect_on_focus_loss_enabled(): boolean;
  public set_drag_and_drop_selection_enabled(_enable: boolean): void;
  public is_drag_and_drop_selection_enabled(): boolean;
  public set_right_icon(_icon: Texture2D): void;
  public get_right_icon(): Texture2D;
  public set_flat(_enabled: boolean): void;
  public is_flat(): boolean;
  public set_select_all_on_focus(_enabled: boolean): void;
  public is_select_all_on_focus(): boolean;
  public get text(): String;
  public set text(value): void;
  public get placeholder_text(): String;
  public set placeholder_text(value): void;
  public get alignment(): number;
  public set alignment(value): void;
  public get max_length(): number;
  public set max_length(value): void;
  public get editable(): boolean;
  public set editable(value): void;
  public get expand_to_text_length(): boolean;
  public set expand_to_text_length(value): void;
  public get context_menu_enabled(): boolean;
  public set context_menu_enabled(value): void;
  public get virtual_keyboard_enabled(): boolean;
  public set virtual_keyboard_enabled(value): void;
  public get virtual_keyboard_type(): number;
  public set virtual_keyboard_type(value): void;
  public get clear_button_enabled(): boolean;
  public set clear_button_enabled(value): void;
  public get shortcut_keys_enabled(): boolean;
  public set shortcut_keys_enabled(value): void;
  public get middle_mouse_paste_enabled(): boolean;
  public set middle_mouse_paste_enabled(value): void;
  public get selecting_enabled(): boolean;
  public set selecting_enabled(value): void;
  public get deselect_on_focus_loss_enabled(): boolean;
  public set deselect_on_focus_loss_enabled(value): void;
  public get drag_and_drop_selection_enabled(): boolean;
  public set drag_and_drop_selection_enabled(value): void;
  public get right_icon(): Texture2D;
  public set right_icon(value): void;
  public get flat(): boolean;
  public set flat(value): void;
  public get draw_control_chars(): boolean;
  public set draw_control_chars(value): void;
  public get select_all_on_focus(): boolean;
  public set select_all_on_focus(value): void;
  public get caret_blink(): boolean;
  public set caret_blink(value): void;
  public get caret_blink_interval(): number;
  public set caret_blink_interval(value): void;
  public get caret_column(): number;
  public set caret_column(value): void;
  public get caret_force_displayed(): boolean;
  public set caret_force_displayed(value): void;
  public get caret_mid_grapheme(): boolean;
  public set caret_mid_grapheme(value): void;
  public get secret(): boolean;
  public set secret(value): void;
  public get secret_character(): String;
  public set secret_character(value): void;
  public get text_direction(): number;
  public set text_direction(value): void;
  public get language(): String;
  public set language(value): void;
  public get structured_text_bidi_override(): number;
  public set structured_text_bidi_override(value): void;
  public get structured_text_bidi_override_options(): GDArray;
  public set structured_text_bidi_override_options(value): void;
  static MenuItems = {
    MENU_CUT = 0,
    MENU_COPY = 1,
    MENU_PASTE = 2,
    MENU_CLEAR = 3,
    MENU_SELECT_ALL = 4,
    MENU_UNDO = 5,
    MENU_REDO = 6,
    MENU_SUBMENU_TEXT_DIR = 7,
    MENU_DIR_INHERITED = 8,
    MENU_DIR_AUTO = 9,
    MENU_DIR_LTR = 10,
    MENU_DIR_RTL = 11,
    MENU_DISPLAY_UCC = 12,
    MENU_SUBMENU_INSERT_UCC = 13,
    MENU_INSERT_LRM = 14,
    MENU_INSERT_RLM = 15,
    MENU_INSERT_LRE = 16,
    MENU_INSERT_RLE = 17,
    MENU_INSERT_LRO = 18,
    MENU_INSERT_RLO = 19,
    MENU_INSERT_PDF = 20,
    MENU_INSERT_ALM = 21,
    MENU_INSERT_LRI = 22,
    MENU_INSERT_RLI = 23,
    MENU_INSERT_FSI = 24,
    MENU_INSERT_PDI = 25,
    MENU_INSERT_ZWJ = 26,
    MENU_INSERT_ZWNJ = 27,
    MENU_INSERT_WJ = 28,
    MENU_INSERT_SHY = 29,
    MENU_MAX = 30,
  }
  static VirtualKeyboardType = {
    KEYBOARD_TYPE_DEFAULT = 0,
    KEYBOARD_TYPE_MULTILINE = 1,
    KEYBOARD_TYPE_NUMBER = 2,
    KEYBOARD_TYPE_NUMBER_DECIMAL = 3,
    KEYBOARD_TYPE_PHONE = 4,
    KEYBOARD_TYPE_EMAIL_ADDRESS = 5,
    KEYBOARD_TYPE_PASSWORD = 6,
    KEYBOARD_TYPE_URL = 7,
  }
  public get text_changed(): Signal;
  public get text_change_rejected(): Signal;
  public get text_submitted(): Signal;
}