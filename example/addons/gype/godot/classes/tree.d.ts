
import { TreeItem } from "@godot/classes/tree_item";
import { Control } from "@godot/classes/control";

export declare class Tree extends Control{
  public clear(): void;
  public create_item(_parent: TreeItem, _index: number): TreeItem;
  public get_root(): TreeItem;
  public set_column_custom_minimum_width(_column: number, _min_width: number): void;
  public set_column_expand(_column: number, _expand: boolean): void;
  public set_column_expand_ratio(_column: number, _ratio: number): void;
  public set_column_clip_content(_column: number, _enable: boolean): void;
  public is_column_expanding(_column: number): boolean;
  public is_column_clipping_content(_column: number): boolean;
  public get_column_expand_ratio(_column: number): number;
  public get_column_width(_column: number): number;
  public set_hide_root(_enable: boolean): void;
  public is_root_hidden(): boolean;
  public get_next_selected(_from: TreeItem): TreeItem;
  public get_selected(): TreeItem;
  public set_selected(_item: TreeItem, _column: number): void;
  public get_selected_column(): number;
  public get_pressed_button(): number;
  public set_select_mode(_mode: number): void;
  public get_select_mode(): number;
  public deselect_all(): void;
  public set_columns(_amount: number): void;
  public get_columns(): number;
  public get_edited(): TreeItem;
  public get_edited_column(): number;
  public edit_selected(_force_edit: boolean): boolean;
  public get_custom_popup_rect(): Rect2;
  public get_item_area_rect(_item: TreeItem, _column: number, _button_index: number): Rect2;
  public get_item_at_position(_position: Vector2): TreeItem;
  public get_column_at_position(_position: Vector2): number;
  public get_drop_section_at_position(_position: Vector2): number;
  public get_button_id_at_position(_position: Vector2): number;
  public ensure_cursor_is_visible(): void;
  public set_column_titles_visible(_visible: boolean): void;
  public are_column_titles_visible(): boolean;
  public set_column_title(_column: number, _title: String): void;
  public get_column_title(_column: number): String;
  public set_column_title_alignment(_column: number, _title_alignment: number): void;
  public get_column_title_alignment(_column: number): number;
  public set_column_title_direction(_column: number, _direction: number): void;
  public get_column_title_direction(_column: number): number;
  public set_column_title_language(_column: number, _language: String): void;
  public get_column_title_language(_column: number): String;
  public get_scroll(): Vector2;
  public scroll_to_item(_item: TreeItem, _center_on_item: boolean): void;
  public set_h_scroll_enabled(_h_scroll: boolean): void;
  public is_h_scroll_enabled(): boolean;
  public set_v_scroll_enabled(_h_scroll: boolean): void;
  public is_v_scroll_enabled(): boolean;
  public set_hide_folding(_hide: boolean): void;
  public is_folding_hidden(): boolean;
  public set_enable_recursive_folding(_enable: boolean): void;
  public is_recursive_folding_enabled(): boolean;
  public set_drop_mode_flags(_flags: number): void;
  public get_drop_mode_flags(): number;
  public set_allow_rmb_select(_allow: boolean): void;
  public get_allow_rmb_select(): boolean;
  public set_allow_reselect(_allow: boolean): void;
  public get_allow_reselect(): boolean;
  public set_allow_search(_allow: boolean): void;
  public get_allow_search(): boolean;
  public get columns(): number {
    get_columns();
  }
  public set columns(value): void {
    set_columns(value);
  }
  public get column_titles_visible(): boolean {
    are_column_titles_visible();
  }
  public set column_titles_visible(value): void {
    set_column_titles_visible(value);
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
  public get hide_folding(): boolean {
    is_folding_hidden();
  }
  public set hide_folding(value): void {
    set_hide_folding(value);
  }
  public get enable_recursive_folding(): boolean {
    is_recursive_folding_enabled();
  }
  public set enable_recursive_folding(value): void {
    set_enable_recursive_folding(value);
  }
  public get hide_root(): boolean {
    is_root_hidden();
  }
  public set hide_root(value): void {
    set_hide_root(value);
  }
  public get drop_mode_flags(): number {
    get_drop_mode_flags();
  }
  public set drop_mode_flags(value): void {
    set_drop_mode_flags(value);
  }
  public get select_mode(): number {
    get_select_mode();
  }
  public set select_mode(value): void {
    set_select_mode(value);
  }
  public get scroll_horizontal_enabled(): boolean {
    is_h_scroll_enabled();
  }
  public set scroll_horizontal_enabled(value): void {
    set_h_scroll_enabled(value);
  }
  public get scroll_vertical_enabled(): boolean {
    is_v_scroll_enabled();
  }
  public set scroll_vertical_enabled(value): void {
    set_v_scroll_enabled(value);
  }
  static SelectMode = {
    SELECT_SINGLE = 0,
    SELECT_ROW = 1,
    SELECT_MULTI = 2,
  }
  static DropModeFlags = {
    DROP_MODE_DISABLED = 0,
    DROP_MODE_ON_ITEM = 1,
    DROP_MODE_INBETWEEN = 2,
  }
}