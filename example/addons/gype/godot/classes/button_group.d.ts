
import { BaseButton } from "@godot/classes/base_button";
import { Resource } from "@godot/classes/resource";
import { BaseButton } from "@godot/classes/base_button";
export declare class ButtonGroup extends Resource{
  public get_pressed_button(): BaseButton;
  public get_buttons(): GDArray;
  public set_allow_unpress(_enabled: boolean): void;
  public is_allow_unpress(): boolean;
  public get allow_unpress(): boolean;
  public set allow_unpress(value): void;
  public get pressed(): Signal;
}