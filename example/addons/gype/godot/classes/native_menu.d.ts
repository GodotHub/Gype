
import { Texture2D } from "@godot/classes/texture2d";
import { GodotObject } from "@godot/classes/godot_object";
declare global {
export declare class _NativeMenu extends GodotObject{
  public has_feature(_feature: number): boolean;
  public has_system_menu(_menu_id: number): boolean;
  public get_system_menu(_menu_id: number): RID;
  public get_system_menu_name(_menu_id: number): String;
  public create_menu(): RID;
  public has_menu(_rid: RID): boolean;
  public free_menu(_rid: RID): void;
  public get_size(_rid: RID): Vector2;
  public popup(_rid: RID, _position: Vector2i): void;
  public set_interface_direction(_rid: RID, _is_rtl: boolean): void;
  public set_popup_open_callback(_rid: RID, _callback: Callable): void;
  public get_popup_open_callback(_rid: RID): Callable;
  public set_popup_close_callback(_rid: RID, _callback: Callable): void;
  public get_popup_close_callback(_rid: RID): Callable;
  public set_minimum_width(_rid: RID, _width: number): void;
  public get_minimum_width(_rid: RID): number;
  public is_opened(_rid: RID): boolean;
  public add_submenu_item(_rid: RID, _label: GDString | StringName | string, _submenu_rid: RID, _tag: any = null, _index: number = -1): number;
  public add_item(_rid: RID, _label: GDString | StringName | string, _callback: Callable = Callable(), _key_callback: Callable = Callable(), _tag: any = null, _accelerator: number = 0, _index: number = -1): number;
  public add_check_item(_rid: RID, _label: GDString | StringName | string, _callback: Callable = Callable(), _key_callback: Callable = Callable(), _tag: any = null, _accelerator: number = 0, _index: number = -1): number;
  public add_icon_item(_rid: RID, _icon: Texture2D, _label: GDString | StringName | string, _callback: Callable = Callable(), _key_callback: Callable = Callable(), _tag: any = null, _accelerator: number = 0, _index: number = -1): number;
  public add_icon_check_item(_rid: RID, _icon: Texture2D, _label: GDString | StringName | string, _callback: Callable = Callable(), _key_callback: Callable = Callable(), _tag: any = null, _accelerator: number = 0, _index: number = -1): number;
  public add_radio_check_item(_rid: RID, _label: GDString | StringName | string, _callback: Callable = Callable(), _key_callback: Callable = Callable(), _tag: any = null, _accelerator: number = 0, _index: number = -1): number;
  public add_icon_radio_check_item(_rid: RID, _icon: Texture2D, _label: GDString | StringName | string, _callback: Callable = Callable(), _key_callback: Callable = Callable(), _tag: any = null, _accelerator: number = 0, _index: number = -1): number;
  public add_multistate_item(_rid: RID, _label: GDString | StringName | string, _max_states: number, _default_state: number, _callback: Callable = Callable(), _key_callback: Callable = Callable(), _tag: any = null, _accelerator: number = 0, _index: number = -1): number;
  public add_separator(_rid: RID, _index: number = -1): number;
  public find_item_index_with_text(_rid: RID, _text: GDString | StringName | string): number;
  public find_item_index_with_tag(_rid: RID, _tag: any): number;
  public find_item_index_with_submenu(_rid: RID, _submenu_rid: RID): number;
  public is_item_checked(_rid: RID, _idx: number): boolean;
  public is_item_checkable(_rid: RID, _idx: number): boolean;
  public is_item_radio_checkable(_rid: RID, _idx: number): boolean;
  public get_item_callback(_rid: RID, _idx: number): Callable;
  public get_item_key_callback(_rid: RID, _idx: number): Callable;
  public get_item_tag(_rid: RID, _idx: number): any;
  public get_item_text(_rid: RID, _idx: number): String;
  public get_item_submenu(_rid: RID, _idx: number): RID;
  public get_item_accelerator(_rid: RID, _idx: number): number;
  public is_item_disabled(_rid: RID, _idx: number): boolean;
  public is_item_hidden(_rid: RID, _idx: number): boolean;
  public get_item_tooltip(_rid: RID, _idx: number): String;
  public get_item_state(_rid: RID, _idx: number): number;
  public get_item_max_states(_rid: RID, _idx: number): number;
  public get_item_icon(_rid: RID, _idx: number): Texture2D;
  public get_item_indentation_level(_rid: RID, _idx: number): number;
  public set_item_checked(_rid: RID, _idx: number, _checked: boolean): void;
  public set_item_checkable(_rid: RID, _idx: number, _checkable: boolean): void;
  public set_item_radio_checkable(_rid: RID, _idx: number, _checkable: boolean): void;
  public set_item_callback(_rid: RID, _idx: number, _callback: Callable): void;
  public set_item_hover_callbacks(_rid: RID, _idx: number, _callback: Callable): void;
  public set_item_key_callback(_rid: RID, _idx: number, _key_callback: Callable): void;
  public set_item_tag(_rid: RID, _idx: number, _tag: any): void;
  public set_item_text(_rid: RID, _idx: number, _text: GDString | StringName | string): void;
  public set_item_submenu(_rid: RID, _idx: number, _submenu_rid: RID): void;
  public set_item_accelerator(_rid: RID, _idx: number, _keycode: number): void;
  public set_item_disabled(_rid: RID, _idx: number, _disabled: boolean): void;
  public set_item_hidden(_rid: RID, _idx: number, _hidden: boolean): void;
  public set_item_tooltip(_rid: RID, _idx: number, _tooltip: GDString | StringName | string): void;
  public set_item_state(_rid: RID, _idx: number, _state: number): void;
  public set_item_max_states(_rid: RID, _idx: number, _max_states: number): void;
  public set_item_icon(_rid: RID, _idx: number, _icon: Texture2D): void;
  public set_item_indentation_level(_rid: RID, _idx: number, _level: number): void;
  public get_item_count(_rid: RID): number;
  public is_system_menu(_rid: RID): boolean;
  public remove_item(_rid: RID, _idx: number): void;
  public clear(_rid: RID): void;
  static Feature = {
    FEATURE_GLOBAL_MENU = 0,
    FEATURE_POPUP_MENU = 1,
    FEATURE_OPEN_CLOSE_CALLBACK = 2,
    FEATURE_HOVER_CALLBACK = 3,
    FEATURE_KEY_CALLBACK = 4,
  }
  static SystemMenus = {
    INVALID_MENU_ID = 0,
    MAIN_MENU_ID = 1,
    APPLICATION_MENU_ID = 2,
    WINDOW_MENU_ID = 3,
    HELP_MENU_ID = 4,
    DOCK_MENU_ID = 5,
  }
}
const NativeMenu: _NativeMenu;
}