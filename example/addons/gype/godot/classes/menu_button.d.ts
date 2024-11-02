
import { PopupMenu } from "@godot/classes/popup_menu";
import { Button } from "@godot/classes/button";


export declare class MenuButton extends Button{
  public get_popup(): PopupMenu;
  public show_popup(): void;
  public set_switch_on_hover(_enable: boolean): void;
  public is_switch_on_hover(): boolean;
  public set_disable_shortcuts(_disabled: boolean): void;
  public set_item_count(_count: number): void;
  public get_item_count(): number;
  public get switch_on_hover(): boolean;
  public set switch_on_hover(value): void;
  public get item_count(): number;
  public set item_count(value): void;
  public get about_to_popup(): Signal;
}