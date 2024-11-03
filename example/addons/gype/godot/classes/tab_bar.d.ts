
import { Texture2D } from "@godot/classes/texture2d";
import { Control } from "@godot/classes/control";
export declare class TabBar extends Control{
  public set_tab_count(_count: number): void;
  public get_tab_count(): number;
  public set_current_tab(_tab_idx: number): void;
  public get_current_tab(): number;
  public get_previous_tab(): number;
  public select_previous_available(): boolean;
  public select_next_available(): boolean;
  public set_tab_title(_tab_idx: number, _title: GDString | StringName | string): void;
  public get_tab_title(_tab_idx: number): String;
  public set_tab_tooltip(_tab_idx: number, _tooltip: GDString | StringName | string): void;
  public get_tab_tooltip(_tab_idx: number): String;
  public set_tab_text_direction(_tab_idx: number, _direction: number): void;
  public get_tab_text_direction(_tab_idx: number): number;
  public set_tab_language(_tab_idx: number, _language: GDString | StringName | string): void;
  public get_tab_language(_tab_idx: number): String;
  public set_tab_icon(_tab_idx: number, _icon: Texture2D): void;
  public get_tab_icon(_tab_idx: number): Texture2D;
  public set_tab_icon_max_width(_tab_idx: number, _width: number): void;
  public get_tab_icon_max_width(_tab_idx: number): number;
  public set_tab_button_icon(_tab_idx: number, _icon: Texture2D): void;
  public get_tab_button_icon(_tab_idx: number): Texture2D;
  public set_tab_disabled(_tab_idx: number, _disabled: boolean): void;
  public is_tab_disabled(_tab_idx: number): boolean;
  public set_tab_hidden(_tab_idx: number, _hidden: boolean): void;
  public is_tab_hidden(_tab_idx: number): boolean;
  public set_tab_metadata(_tab_idx: number, _metadata: any): void;
  public get_tab_metadata(_tab_idx: number): any;
  public remove_tab(_tab_idx: number): void;
  public add_tab(_title: GDString | StringName | string = "", _icon: Texture2D = null): void;
  public get_tab_idx_at_point(_point: Vector2): number;
  public set_tab_alignment(_alignment: number): void;
  public get_tab_alignment(): number;
  public set_clip_tabs(_clip_tabs: boolean): void;
  public get_clip_tabs(): boolean;
  public get_tab_offset(): number;
  public get_offset_buttons_visible(): boolean;
  public ensure_tab_visible(_idx: number): void;
  public get_tab_rect(_tab_idx: number): Rect2;
  public move_tab(_from: number, _to: number): void;
  public set_tab_close_display_policy(_policy: number): void;
  public get_tab_close_display_policy(): number;
  public set_max_tab_width(_width: number): void;
  public get_max_tab_width(): number;
  public set_scrolling_enabled(_enabled: boolean): void;
  public get_scrolling_enabled(): boolean;
  public set_drag_to_rearrange_enabled(_enabled: boolean): void;
  public get_drag_to_rearrange_enabled(): boolean;
  public set_tabs_rearrange_group(_group_id: number): void;
  public get_tabs_rearrange_group(): number;
  public set_scroll_to_selected(_enabled: boolean): void;
  public get_scroll_to_selected(): boolean;
  public set_select_with_rmb(_enabled: boolean): void;
  public get_select_with_rmb(): boolean;
  public set_deselect_enabled(_enabled: boolean): void;
  public get_deselect_enabled(): boolean;
  public clear_tabs(): void;
  public get current_tab(): number;
  public set current_tab(value): void;
  public get tab_alignment(): number;
  public set tab_alignment(value): void;
  public get clip_tabs(): boolean;
  public set clip_tabs(value): void;
  public get tab_close_display_policy(): number;
  public set tab_close_display_policy(value): void;
  public get max_tab_width(): number;
  public set max_tab_width(value): void;
  public get scrolling_enabled(): boolean;
  public set scrolling_enabled(value): void;
  public get drag_to_rearrange_enabled(): boolean;
  public set drag_to_rearrange_enabled(value): void;
  public get tabs_rearrange_group(): number;
  public set tabs_rearrange_group(value): void;
  public get scroll_to_selected(): boolean;
  public set scroll_to_selected(value): void;
  public get select_with_rmb(): boolean;
  public set select_with_rmb(value): void;
  public get deselect_enabled(): boolean;
  public set deselect_enabled(value): void;
  public get tab_count(): number;
  public set tab_count(value): void;
  static AlignmentMode = {
    ALIGNMENT_LEFT = 0,
    ALIGNMENT_CENTER = 1,
    ALIGNMENT_RIGHT = 2,
    ALIGNMENT_MAX = 3,
  }
  static CloseButtonDisplayPolicy = {
    CLOSE_BUTTON_SHOW_NEVER = 0,
    CLOSE_BUTTON_SHOW_ACTIVE_ONLY = 1,
    CLOSE_BUTTON_SHOW_ALWAYS = 2,
    CLOSE_BUTTON_MAX = 3,
  }
  public get tab_selected(): Signal;
  public get tab_changed(): Signal;
  public get tab_clicked(): Signal;
  public get tab_rmb_clicked(): Signal;
  public get tab_close_pressed(): Signal;
  public get tab_button_pressed(): Signal;
  public get tab_hovered(): Signal;
  public get active_tab_rearranged(): Signal;
}