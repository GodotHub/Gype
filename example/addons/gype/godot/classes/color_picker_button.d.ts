
import { Button } from "@godot/classes/button";
import { ColorPicker } from "@godot/classes/color_picker";
import { PopupPanel } from "@godot/classes/popup_panel";
export declare class ColorPickerButton extends Button{
  public set_pick_color(_color: Color): void;
  public get_pick_color(): Color;
  public get_picker(): ColorPicker;
  public get_popup(): PopupPanel;
  public set_edit_alpha(_show: boolean): void;
  public is_editing_alpha(): boolean;
  public get color(): Color;
  public set color(value): void;
  public get edit_alpha(): boolean;
  public set edit_alpha(value): void;
  public get color_changed(): Signal;
  public get popup_closed(): Signal;
  public get picker_created(): Signal;
}