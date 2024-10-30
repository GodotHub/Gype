
import { InputEvent } from "@godot/classes/input_event";
import { Shortcut } from "@godot/classes/shortcut";
import { Popup } from "@godot/classes/popup";
import { Texture2D } from "@godot/classes/texture2d";

export declare class PopupMenu extends Popup{
  public activate_item_by_event(_event: InputEvent, _for_global_only: boolean): boolean;
  public set_prefer_native_menu(_enabled: boolean): void;
  public is_prefer_native_menu(): boolean;
  public is_native_menu(): boolean;
  public add_item(_label: String | StringName | string, _id: number, _accel: number): void;
  public add_icon_item(_texture: Texture2D, _label: String | StringName | string, _id: number, _accel: number): void;
  public add_check_item(_label: String | StringName | string, _id: number, _accel: number): void;
  public add_icon_check_item(_texture: Texture2D, _label: String | StringName | string, _id: number, _accel: number): void;
  public add_radio_check_item(_label: String | StringName | string, _id: number, _accel: number): void;
  public add_icon_radio_check_item(_texture: Texture2D, _label: String | StringName | string, _id: number, _accel: number): void;
  public add_multistate_item(_label: String | StringName | string, _max_states: number, _default_state: number, _id: number, _accel: number): void;
  public add_shortcut(_shortcut: Shortcut, _id: number, _global: boolean, _allow_echo: boolean): void;
  public add_icon_shortcut(_texture: Texture2D, _shortcut: Shortcut, _id: number, _global: boolean, _allow_echo: boolean): void;
  public add_check_shortcut(_shortcut: Shortcut, _id: number, _global: boolean): void;
  public add_icon_check_shortcut(_texture: Texture2D, _shortcut: Shortcut, _id: number, _global: boolean): void;
  public add_radio_check_shortcut(_shortcut: Shortcut, _id: number, _global: boolean): void;
  public add_icon_radio_check_shortcut(_texture: Texture2D, _shortcut: Shortcut, _id: number, _global: boolean): void;
  public add_submenu_item(_label: String | StringName | string, _submenu: String | StringName | string, _id: number): void;
  public add_submenu_node_item(_label: String | StringName | string, _submenu: PopupMenu, _id: number): void;
  public set_item_text(_index: number, _text: String | StringName | string): void;
  public set_item_text_direction(_index: number, _direction: number): void;
  public set_item_language(_index: number, _language: String | StringName | string): void;
  public set_item_icon(_index: number, _icon: Texture2D): void;
  public set_item_icon_max_width(_index: number, _width: number): void;
  public set_item_icon_modulate(_index: number, _modulate: Color): void;
  public set_item_checked(_index: number, _checked: boolean): void;
  public set_item_id(_index: number, _id: number): void;
  public set_item_accelerator(_index: number, _accel: number): void;
  public set_item_metadata(_index: number, _metadata: any): void;
  public set_item_disabled(_index: number, _disabled: boolean): void;
  public set_item_submenu(_index: number, _submenu: String | StringName | string): void;
  public set_item_submenu_node(_index: number, _submenu: PopupMenu): void;
  public set_item_as_separator(_index: number, _enable: boolean): void;
  public set_item_as_checkable(_index: number, _enable: boolean): void;
  public set_item_as_radio_checkable(_index: number, _enable: boolean): void;
  public set_item_tooltip(_index: number, _tooltip: String | StringName | string): void;
  public set_item_shortcut(_index: number, _shortcut: Shortcut, _global: boolean): void;
  public set_item_indent(_index: number, _indent: number): void;
  public set_item_multistate(_index: number, _state: number): void;
  public set_item_multistate_max(_index: number, _max_states: number): void;
  public set_item_shortcut_disabled(_index: number, _disabled: boolean): void;
  public toggle_item_checked(_index: number): void;
  public toggle_item_multistate(_index: number): void;
  public get_item_text(_index: number): String;
  public get_item_text_direction(_index: number): number;
  public get_item_language(_index: number): String;
  public get_item_icon(_index: number): Texture2D;
  public get_item_icon_max_width(_index: number): number;
  public get_item_icon_modulate(_index: number): Color;
  public is_item_checked(_index: number): boolean;
  public get_item_id(_index: number): number;
  public get_item_index(_id: number): number;
  public get_item_accelerator(_index: number): number;
  public get_item_metadata(_index: number): any;
  public is_item_disabled(_index: number): boolean;
  public get_item_submenu(_index: number): String;
  public get_item_submenu_node(_index: number): PopupMenu;
  public is_item_separator(_index: number): boolean;
  public is_item_checkable(_index: number): boolean;
  public is_item_radio_checkable(_index: number): boolean;
  public is_item_shortcut_disabled(_index: number): boolean;
  public get_item_tooltip(_index: number): String;
  public get_item_shortcut(_index: number): Shortcut;
  public get_item_indent(_index: number): number;
  public get_item_multistate_max(_index: number): number;
  public get_item_multistate(_index: number): number;
  public set_focused_item(_index: number): void;
  public get_focused_item(): number;
  public set_item_count(_count: number): void;
  public get_item_count(): number;
  public scroll_to_item(_index: number): void;
  public remove_item(_index: number): void;
  public add_separator(_label: String | StringName | string, _id: number): void;
  public clear(_free_submenus: boolean): void;
  public set_hide_on_item_selection(_enable: boolean): void;
  public is_hide_on_item_selection(): boolean;
  public set_hide_on_checkable_item_selection(_enable: boolean): void;
  public is_hide_on_checkable_item_selection(): boolean;
  public set_hide_on_state_item_selection(_enable: boolean): void;
  public is_hide_on_state_item_selection(): boolean;
  public set_submenu_popup_delay(_seconds: number): void;
  public get_submenu_popup_delay(): number;
  public set_allow_search(_allow: boolean): void;
  public get_allow_search(): boolean;
  public is_system_menu(): boolean;
  public set_system_menu(_system_menu_id: number): void;
  public get_system_menu(): number;
  public get hide_on_item_selection(): boolean {
    is_hide_on_item_selection();
  }
  public set hide_on_item_selection(value): void {
    set_hide_on_item_selection(value);
  }
  public get hide_on_checkable_item_selection(): boolean {
    is_hide_on_checkable_item_selection();
  }
  public set hide_on_checkable_item_selection(value): void {
    set_hide_on_checkable_item_selection(value);
  }
  public get hide_on_state_item_selection(): boolean {
    is_hide_on_state_item_selection();
  }
  public set hide_on_state_item_selection(value): void {
    set_hide_on_state_item_selection(value);
  }
  public get submenu_popup_delay(): number {
    get_submenu_popup_delay();
  }
  public set submenu_popup_delay(value): void {
    set_submenu_popup_delay(value);
  }
  public get allow_search(): boolean {
    get_allow_search();
  }
  public set allow_search(value): void {
    set_allow_search(value);
  }
  public get system_menu_id(): number {
    get_system_menu();
  }
  public set system_menu_id(value): void {
    set_system_menu(value);
  }
  public get prefer_native_menu(): boolean {
    is_prefer_native_menu();
  }
  public set prefer_native_menu(value): void {
    set_prefer_native_menu(value);
  }
  public get item_count(): number {
    get_item_count();
  }
  public set item_count(value): void {
    set_item_count(value);
  }
  public const id_pressed: string = "id_pressed";
  public const id_focused: string = "id_focused";
  public const index_pressed: string = "index_pressed";
  public const menu_changed: string = "menu_changed";
}