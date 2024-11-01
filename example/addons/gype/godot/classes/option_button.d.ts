
import { PopupMenu } from "@godot/classes/popup_menu";
import { Button } from "@godot/classes/button";
import { Texture2D } from "@godot/classes/texture2d";

export declare class OptionButton extends Button{
  public add_item(_label: String | StringName | string, _id: number): void;
  public add_icon_item(_texture: Texture2D, _label: String | StringName | string, _id: number): void;
  public set_item_text(_idx: number, _text: String | StringName | string): void;
  public set_item_icon(_idx: number, _texture: Texture2D): void;
  public set_item_disabled(_idx: number, _disabled: boolean): void;
  public set_item_id(_idx: number, _id: number): void;
  public set_item_metadata(_idx: number, _metadata: any): void;
  public set_item_tooltip(_idx: number, _tooltip: String | StringName | string): void;
  public get_item_text(_idx: number): String;
  public get_item_icon(_idx: number): Texture2D;
  public get_item_id(_idx: number): number;
  public get_item_index(_id: number): number;
  public get_item_metadata(_idx: number): any;
  public get_item_tooltip(_idx: number): String;
  public is_item_disabled(_idx: number): boolean;
  public is_item_separator(_idx: number): boolean;
  public add_separator(_text: String | StringName | string): void;
  public clear(): void;
  public select(_idx: number): void;
  public get_selected(): number;
  public get_selected_id(): number;
  public get_selected_metadata(): any;
  public remove_item(_idx: number): void;
  public get_popup(): PopupMenu;
  public show_popup(): void;
  public set_item_count(_count: number): void;
  public get_item_count(): number;
  public has_selectable_items(): boolean;
  public get_selectable_item(_from_last: boolean): number;
  public set_fit_to_longest_item(_fit: boolean): void;
  public is_fit_to_longest_item(): boolean;
  public set_allow_reselect(_allow: boolean): void;
  public get_allow_reselect(): boolean;
  public set_disable_shortcuts(_disabled: boolean): void;
  public get selected(): number {
    get_selected();
  }
  public set selected(value): void {
    _select_int(value);
  }
  public get fit_to_longest_item(): boolean {
    is_fit_to_longest_item();
  }
  public set fit_to_longest_item(value): void {
    set_fit_to_longest_item(value);
  }
  public get allow_reselect(): boolean {
    get_allow_reselect();
  }
  public set allow_reselect(value): void {
    set_allow_reselect(value);
  }
  public get item_count(): number {
    get_item_count();
  }
  public set item_count(value): void {
    set_item_count(value);
  }
  public get item_selected(): Signal;
  public get item_focused(): Signal;
}