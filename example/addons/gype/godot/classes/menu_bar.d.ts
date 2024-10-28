
import { PopupMenu } from "@godot/classes/popup_menu";
import { Control } from "@godot/classes/control";

export declare class MenuBar extends Control{
  public set_switch_on_hover(_enable: boolean): void;
  public is_switch_on_hover(): boolean;
  public set_disable_shortcuts(_disabled: boolean): void;
  public set_prefer_global_menu(_enabled: boolean): void;
  public is_prefer_global_menu(): boolean;
  public is_native_menu(): boolean;
  public get_menu_count(): number;
  public set_text_direction(_direction: number): void;
  public get_text_direction(): number;
  public set_language(_language: String): void;
  public get_language(): String;
  public set_flat(_enabled: boolean): void;
  public is_flat(): boolean;
  public set_start_index(_enabled: number): void;
  public get_start_index(): number;
  public set_menu_title(_menu: number, _title: String): void;
  public get_menu_title(_menu: number): String;
  public set_menu_tooltip(_menu: number, _tooltip: String): void;
  public get_menu_tooltip(_menu: number): String;
  public set_menu_disabled(_menu: number, _disabled: boolean): void;
  public is_menu_disabled(_menu: number): boolean;
  public set_menu_hidden(_menu: number, _hidden: boolean): void;
  public is_menu_hidden(_menu: number): boolean;
  public get_menu_popup(_menu: number): PopupMenu;
  public get flat(): boolean {
    is_flat();
  }
  public set flat(value: boolean): void {
    set_flat(value);
  }
  public get start_index(): number {
    get_start_index();
  }
  public set start_index(value: number): void {
    set_start_index(value);
  }
  public get switch_on_hover(): boolean {
    is_switch_on_hover();
  }
  public set switch_on_hover(value: boolean): void {
    set_switch_on_hover(value);
  }
  public get prefer_global_menu(): boolean {
    is_prefer_global_menu();
  }
  public set prefer_global_menu(value: boolean): void {
    set_prefer_global_menu(value);
  }
  public get text_direction(): number {
    get_text_direction();
  }
  public set text_direction(value: number): void {
    set_text_direction(value);
  }
  public get language(): String {
    get_language();
  }
  public set language(value: String): void {
    set_language(value);
  }
}