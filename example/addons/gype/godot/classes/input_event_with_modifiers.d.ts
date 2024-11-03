
import { InputEventFromWindow } from "@godot/classes/input_event_from_window";
export declare class InputEventWithModifiers extends InputEventFromWindow{
  public set_command_or_control_autoremap(_enable: boolean): void;
  public is_command_or_control_autoremap(): boolean;
  public is_command_or_control_pressed(): boolean;
  public set_alt_pressed(_pressed: boolean): void;
  public is_alt_pressed(): boolean;
  public set_shift_pressed(_pressed: boolean): void;
  public is_shift_pressed(): boolean;
  public set_ctrl_pressed(_pressed: boolean): void;
  public is_ctrl_pressed(): boolean;
  public set_meta_pressed(_pressed: boolean): void;
  public is_meta_pressed(): boolean;
  public get_modifiers_mask(): number;
  public get command_or_control_autoremap(): boolean;
  public set command_or_control_autoremap(value): void;
  public get alt_pressed(): boolean;
  public set alt_pressed(value): void;
  public get shift_pressed(): boolean;
  public set shift_pressed(value): void;
  public get ctrl_pressed(): boolean;
  public set ctrl_pressed(value): void;
  public get meta_pressed(): boolean;
  public set meta_pressed(value): void;
}