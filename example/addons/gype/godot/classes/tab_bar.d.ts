
import { Control } from "@godot/classes/control";
import { Texture2D } from "@godot/classes/texture2d";

export declare class TabBar extends Control{
  public set_tab_count(_count: number): void;
  public get_tab_count(): number;
  public set_current_tab(_tab_idx: number): void;
  public get_current_tab(): number;
  public get_previous_tab(): number;
  public select_previous_available(): boolean;
  public select_next_available(): boolean;
  public set_tab_title(_tab_idx: number, _title: String): void;
  public get_tab_title(_tab_idx: number): String;
  public set_tab_tooltip(_tab_idx: number, _tooltip: String): void;
  public get_tab_tooltip(_tab_idx: number): String;
  public set_tab_text_direction(_tab_idx: number, _direction: number): void;
  public get_tab_text_direction(_tab_idx: number): number;
  public set_tab_language(_tab_idx: number, _language: String): void;
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
  public add_tab(_title: String, _icon: Texture2D): void;
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
  public get current_tab(): number {
    get_current_tab();
  }
  public set current_tab(value): void {
    set_current_tab(value);
  }
  public get tab_alignment(): number {
    get_tab_alignment();
  }
  public set tab_alignment(value): void {
    set_tab_alignment(value);
  }
  public get clip_tabs(): boolean {
    get_clip_tabs();
  }
  public set clip_tabs(value): void {
    set_clip_tabs(value);
  }
  public get tab_close_display_policy(): number {
    get_tab_close_display_policy();
  }
  public set tab_close_display_policy(value): void {
    set_tab_close_display_policy(value);
  }
  public get max_tab_width(): number {
    get_max_tab_width();
  }
  public set max_tab_width(value): void {
    set_max_tab_width(value);
  }
  public get scrolling_enabled(): boolean {
    get_scrolling_enabled();
  }
  public set scrolling_enabled(value): void {
    set_scrolling_enabled(value);
  }
  public get drag_to_rearrange_enabled(): boolean {
    get_drag_to_rearrange_enabled();
  }
  public set drag_to_rearrange_enabled(value): void {
    set_drag_to_rearrange_enabled(value);
  }
  public get tabs_rearrange_group(): number {
    get_tabs_rearrange_group();
  }
  public set tabs_rearrange_group(value): void {
    set_tabs_rearrange_group(value);
  }
  public get scroll_to_selected(): boolean {
    get_scroll_to_selected();
  }
  public set scroll_to_selected(value): void {
    set_scroll_to_selected(value);
  }
  public get select_with_rmb(): boolean {
    get_select_with_rmb();
  }
  public set select_with_rmb(value): void {
    set_select_with_rmb(value);
  }
  public get deselect_enabled(): boolean {
    get_deselect_enabled();
  }
  public set deselect_enabled(value): void {
    set_deselect_enabled(value);
  }
  public get tab_count(): number {
    get_tab_count();
  }
  public set tab_count(value): void {
    set_tab_count(value);
  }
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
}