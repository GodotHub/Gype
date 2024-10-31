
import { VScrollBar } from "@godot/classes/v_scroll_bar";
import { Control } from "@godot/classes/control";
import { Texture2D } from "@godot/classes/texture2d";

export declare class ItemList extends Control{
  public add_item(_text: String | StringName | string, _icon: Texture2D, _selectable: boolean): number;
  public add_icon_item(_icon: Texture2D, _selectable: boolean): number;
  public set_item_text(_idx: number, _text: String | StringName | string): void;
  public get_item_text(_idx: number): String;
  public set_item_icon(_idx: number, _icon: Texture2D): void;
  public get_item_icon(_idx: number): Texture2D;
  public set_item_text_direction(_idx: number, _direction: number): void;
  public get_item_text_direction(_idx: number): number;
  public set_item_language(_idx: number, _language: String | StringName | string): void;
  public get_item_language(_idx: number): String;
  public set_item_icon_transposed(_idx: number, _transposed: boolean): void;
  public is_item_icon_transposed(_idx: number): boolean;
  public set_item_icon_region(_idx: number, _rect: Rect2): void;
  public get_item_icon_region(_idx: number): Rect2;
  public set_item_icon_modulate(_idx: number, _modulate: Color): void;
  public get_item_icon_modulate(_idx: number): Color;
  public set_item_selectable(_idx: number, _selectable: boolean): void;
  public is_item_selectable(_idx: number): boolean;
  public set_item_disabled(_idx: number, _disabled: boolean): void;
  public is_item_disabled(_idx: number): boolean;
  public set_item_metadata(_idx: number, _metadata: any): void;
  public get_item_metadata(_idx: number): any;
  public set_item_custom_bg_color(_idx: number, _custom_bg_color: Color): void;
  public get_item_custom_bg_color(_idx: number): Color;
  public set_item_custom_fg_color(_idx: number, _custom_fg_color: Color): void;
  public get_item_custom_fg_color(_idx: number): Color;
  public get_item_rect(_idx: number, _expand: boolean): Rect2;
  public set_item_tooltip_enabled(_idx: number, _enable: boolean): void;
  public is_item_tooltip_enabled(_idx: number): boolean;
  public set_item_tooltip(_idx: number, _tooltip: String | StringName | string): void;
  public get_item_tooltip(_idx: number): String;
  public select(_idx: number, _single: boolean): void;
  public deselect(_idx: number): void;
  public deselect_all(): void;
  public is_selected(_idx: number): boolean;
  public get_selected_items(): PackedInt32Array;
  public move_item(_from_idx: number, _to_idx: number): void;
  public set_item_count(_count: number): void;
  public get_item_count(): number;
  public remove_item(_idx: number): void;
  public clear(): void;
  public sort_items_by_text(): void;
  public set_fixed_column_width(_width: number): void;
  public get_fixed_column_width(): number;
  public set_same_column_width(_enable: boolean): void;
  public is_same_column_width(): boolean;
  public set_max_text_lines(_lines: number): void;
  public get_max_text_lines(): number;
  public set_max_columns(_amount: number): void;
  public get_max_columns(): number;
  public set_select_mode(_mode: number): void;
  public get_select_mode(): number;
  public set_icon_mode(_mode: number): void;
  public get_icon_mode(): number;
  public set_fixed_icon_size(_size: Vector2i): void;
  public get_fixed_icon_size(): Vector2i;
  public set_icon_scale(_scale: number): void;
  public get_icon_scale(): number;
  public set_allow_rmb_select(_allow: boolean): void;
  public get_allow_rmb_select(): boolean;
  public set_allow_reselect(_allow: boolean): void;
  public get_allow_reselect(): boolean;
  public set_allow_search(_allow: boolean): void;
  public get_allow_search(): boolean;
  public set_auto_height(_enable: boolean): void;
  public has_auto_height(): boolean;
  public is_anything_selected(): boolean;
  public get_item_at_position(_position: Vector2, _exact: boolean): number;
  public ensure_current_is_visible(): void;
  public get_v_scroll_bar(): VScrollBar;
  public set_text_overrun_behavior(_overrun_behavior: number): void;
  public get_text_overrun_behavior(): number;
  public force_update_list_size(): void;
  public get select_mode(): number {
    get_select_mode();
  }
  public set select_mode(value): void {
    set_select_mode(value);
  }
  public get allow_reselect(): boolean {
    get_allow_reselect();
  }
  public set allow_reselect(value): void {
    set_allow_reselect(value);
  }
  public get allow_rmb_select(): boolean {
    get_allow_rmb_select();
  }
  public set allow_rmb_select(value): void {
    set_allow_rmb_select(value);
  }
  public get allow_search(): boolean {
    get_allow_search();
  }
  public set allow_search(value): void {
    set_allow_search(value);
  }
  public get max_text_lines(): number {
    get_max_text_lines();
  }
  public set max_text_lines(value): void {
    set_max_text_lines(value);
  }
  public get auto_height(): boolean {
    has_auto_height();
  }
  public set auto_height(value): void {
    set_auto_height(value);
  }
  public get text_overrun_behavior(): number {
    get_text_overrun_behavior();
  }
  public set text_overrun_behavior(value): void {
    set_text_overrun_behavior(value);
  }
  public get item_count(): number {
    get_item_count();
  }
  public set item_count(value): void {
    set_item_count(value);
  }
  public get max_columns(): number {
    get_max_columns();
  }
  public set max_columns(value): void {
    set_max_columns(value);
  }
  public get same_column_width(): boolean {
    is_same_column_width();
  }
  public set same_column_width(value): void {
    set_same_column_width(value);
  }
  public get fixed_column_width(): number {
    get_fixed_column_width();
  }
  public set fixed_column_width(value): void {
    set_fixed_column_width(value);
  }
  public get icon_mode(): number {
    get_icon_mode();
  }
  public set icon_mode(value): void {
    set_icon_mode(value);
  }
  public get icon_scale(): number {
    get_icon_scale();
  }
  public set icon_scale(value): void {
    set_icon_scale(value);
  }
  public get fixed_icon_size(): Vector2i {
    get_fixed_icon_size();
  }
  public set fixed_icon_size(value): void {
    set_fixed_icon_size(value);
  }
  static IconMode = {
    ICON_MODE_TOP = 0,
    ICON_MODE_LEFT = 1,
  }
  static SelectMode = {
    SELECT_SINGLE = 0,
    SELECT_MULTI = 1,
  }
  public get item_selected(): Signal;
  public get empty_clicked(): Signal;
  public get item_clicked(): Signal;
  public get multi_selected(): Signal;
  public get item_activated(): Signal;
}