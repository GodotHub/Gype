
import { Control } from "@godot/classes/control";
import { TreeItem } from "@godot/classes/tree_item";
export declare class Tree extends Control{
  public clear(): void;
  public create_item(_parent: TreeItem = null, _index: number = -1): TreeItem;
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
  public edit_selected(_force_edit: boolean = false): boolean;
  public get_custom_popup_rect(): Rect2;
  public get_item_area_rect(_item: TreeItem, _column: number = -1, _button_index: number = -1): Rect2;
  public get_item_at_position(_position: Vector2): TreeItem;
  public get_column_at_position(_position: Vector2): number;
  public get_drop_section_at_position(_position: Vector2): number;
  public get_button_id_at_position(_position: Vector2): number;
  public ensure_cursor_is_visible(): void;
  public set_column_titles_visible(_visible: boolean): void;
  public are_column_titles_visible(): boolean;
  public set_column_title(_column: number, _title: GDString | StringName | string): void;
  public get_column_title(_column: number): String;
  public set_column_title_alignment(_column: number, _title_alignment: number): void;
  public get_column_title_alignment(_column: number): number;
  public set_column_title_direction(_column: number, _direction: number): void;
  public get_column_title_direction(_column: number): number;
  public set_column_title_language(_column: number, _language: GDString | StringName | string): void;
  public get_column_title_language(_column: number): String;
  public get_scroll(): Vector2;
  public scroll_to_item(_item: TreeItem, _center_on_item: boolean = false): void;
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
  public get columns(): number;
  public set columns(value): void;
  public get column_titles_visible(): boolean;
  public set column_titles_visible(value): void;
  public get allow_reselect(): boolean;
  public set allow_reselect(value): void;
  public get allow_rmb_select(): boolean;
  public set allow_rmb_select(value): void;
  public get allow_search(): boolean;
  public set allow_search(value): void;
  public get hide_folding(): boolean;
  public set hide_folding(value): void;
  public get enable_recursive_folding(): boolean;
  public set enable_recursive_folding(value): void;
  public get hide_root(): boolean;
  public set hide_root(value): void;
  public get drop_mode_flags(): number;
  public set drop_mode_flags(value): void;
  public get select_mode(): number;
  public set select_mode(value): void;
  public get scroll_horizontal_enabled(): boolean;
  public set scroll_horizontal_enabled(value): void;
  public get scroll_vertical_enabled(): boolean;
  public set scroll_vertical_enabled(value): void;
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
  public get item_selected(): Signal;
  public get cell_selected(): Signal;
  public get multi_selected(): Signal;
  public get item_mouse_selected(): Signal;
  public get empty_clicked(): Signal;
  public get item_edited(): Signal;
  public get custom_item_clicked(): Signal;
  public get item_icon_double_clicked(): Signal;
  public get item_collapsed(): Signal;
  public get check_propagated_to_item(): Signal;
  public get button_clicked(): Signal;
  public get custom_popup_edited(): Signal;
  public get item_activated(): Signal;
  public get column_title_clicked(): Signal;
  public get nothing_selected(): Signal;
}