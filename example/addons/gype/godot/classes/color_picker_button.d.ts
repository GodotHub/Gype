
import { PopupPanel } from "@godot/classes/popup_panel";
import { Button } from "@godot/classes/button";
import { ColorPicker } from "@godot/classes/color_picker";

export declare class ColorPickerButton extends Button{
  public set_pick_color(_color: Color): void;
  public get_pick_color(): Color;
  public get_picker(): ColorPicker;
  public get_popup(): PopupPanel;
  public set_edit_alpha(_show: boolean): void;
  public is_editing_alpha(): boolean;
  public get color(): Color {
    get_pick_color();
  }
  public set color(value): void {
    set_pick_color(value);
  }
  public get edit_alpha(): boolean {
    is_editing_alpha();
  }
  public set edit_alpha(value): void {
    set_edit_alpha(value);
  }
  public const color_changed: string = "color_changed";
  public const popup_closed: string = "popup_closed";
  public const picker_created: string = "picker_created";
}