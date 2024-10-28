
import { Popup } from "@godot/classes/popup";
import { Node } from "@godot/classes/node";
import { Texture2D } from "@godot/classes/texture2d";
import { Container } from "@godot/classes/container";
import { TabBar } from "@godot/classes/tab_bar";
import { Control } from "@godot/classes/control";

export declare class TabContainer extends Container{
  public get_tab_count(): number;
  public set_current_tab(_tab_idx: number): void;
  public get_current_tab(): number;
  public get_previous_tab(): number;
  public select_previous_available(): boolean;
  public select_next_available(): boolean;
  public get_current_tab_control(): Control;
  public get_tab_bar(): TabBar;
  public get_tab_control(_tab_idx: number): Control;
  public set_tab_alignment(_alignment: number): void;
  public get_tab_alignment(): number;
  public set_tabs_position(_tabs_position: number): void;
  public get_tabs_position(): number;
  public set_clip_tabs(_clip_tabs: boolean): void;
  public get_clip_tabs(): boolean;
  public set_tabs_visible(_visible: boolean): void;
  public are_tabs_visible(): boolean;
  public set_all_tabs_in_front(_is_front: boolean): void;
  public is_all_tabs_in_front(): boolean;
  public set_tab_title(_tab_idx: number, _title: String): void;
  public get_tab_title(_tab_idx: number): String;
  public set_tab_tooltip(_tab_idx: number, _tooltip: String): void;
  public get_tab_tooltip(_tab_idx: number): String;
  public set_tab_icon(_tab_idx: number, _icon: Texture2D): void;
  public get_tab_icon(_tab_idx: number): Texture2D;
  public set_tab_icon_max_width(_tab_idx: number, _width: number): void;
  public get_tab_icon_max_width(_tab_idx: number): number;
  public set_tab_disabled(_tab_idx: number, _disabled: boolean): void;
  public is_tab_disabled(_tab_idx: number): boolean;
  public set_tab_hidden(_tab_idx: number, _hidden: boolean): void;
  public is_tab_hidden(_tab_idx: number): boolean;
  public set_tab_metadata(_tab_idx: number, _metadata: Variant): void;
  public get_tab_metadata(_tab_idx: number): Variant;
  public set_tab_button_icon(_tab_idx: number, _icon: Texture2D): void;
  public get_tab_button_icon(_tab_idx: number): Texture2D;
  public get_tab_idx_at_point(_point: Vector2): number;
  public get_tab_idx_from_control(_control: Control): number;
  public set_popup(_popup: Node): void;
  public get_popup(): Popup;
  public set_drag_to_rearrange_enabled(_enabled: boolean): void;
  public get_drag_to_rearrange_enabled(): boolean;
  public set_tabs_rearrange_group(_group_id: number): void;
  public get_tabs_rearrange_group(): number;
  public set_use_hidden_tabs_for_min_size(_enabled: boolean): void;
  public get_use_hidden_tabs_for_min_size(): boolean;
  public set_tab_focus_mode(_focus_mode: number): void;
  public get_tab_focus_mode(): number;
  public set_deselect_enabled(_enabled: boolean): void;
  public get_deselect_enabled(): boolean;
  public get tab_alignment(): number {
    get_tab_alignment();
  }
  public set tab_alignment(value: number): void {
    set_tab_alignment(value);
  }
  public get current_tab(): number {
    get_current_tab();
  }
  public set current_tab(value: number): void {
    set_current_tab(value);
  }
  public get tabs_position(): number {
    get_tabs_position();
  }
  public set tabs_position(value: number): void {
    set_tabs_position(value);
  }
  public get clip_tabs(): boolean {
    get_clip_tabs();
  }
  public set clip_tabs(value: boolean): void {
    set_clip_tabs(value);
  }
  public get tabs_visible(): boolean {
    are_tabs_visible();
  }
  public set tabs_visible(value: boolean): void {
    set_tabs_visible(value);
  }
  public get all_tabs_in_front(): boolean {
    is_all_tabs_in_front();
  }
  public set all_tabs_in_front(value: boolean): void {
    set_all_tabs_in_front(value);
  }
  public get drag_to_rearrange_enabled(): boolean {
    get_drag_to_rearrange_enabled();
  }
  public set drag_to_rearrange_enabled(value: boolean): void {
    set_drag_to_rearrange_enabled(value);
  }
  public get tabs_rearrange_group(): number {
    get_tabs_rearrange_group();
  }
  public set tabs_rearrange_group(value: number): void {
    set_tabs_rearrange_group(value);
  }
  public get use_hidden_tabs_for_min_size(): boolean {
    get_use_hidden_tabs_for_min_size();
  }
  public set use_hidden_tabs_for_min_size(value: boolean): void {
    set_use_hidden_tabs_for_min_size(value);
  }
  public get tab_focus_mode(): number {
    get_tab_focus_mode();
  }
  public set tab_focus_mode(value: number): void {
    set_tab_focus_mode(value);
  }
  public get deselect_enabled(): boolean {
    get_deselect_enabled();
  }
  public set deselect_enabled(value: boolean): void {
    set_deselect_enabled(value);
  }
  static TabPosition = {
    POSITION_TOP = 0,
    POSITION_BOTTOM = 1,
    POSITION_MAX = 2,
  }
}