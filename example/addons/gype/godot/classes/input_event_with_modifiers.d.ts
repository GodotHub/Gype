
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
  public get command_or_control_autoremap(): boolean {
    is_command_or_control_autoremap();
  }
  public set command_or_control_autoremap(value): void {
    set_command_or_control_autoremap(value);
  }
  public get alt_pressed(): boolean {
    is_alt_pressed();
  }
  public set alt_pressed(value): void {
    set_alt_pressed(value);
  }
  public get shift_pressed(): boolean {
    is_shift_pressed();
  }
  public set shift_pressed(value): void {
    set_shift_pressed(value);
  }
  public get ctrl_pressed(): boolean {
    is_ctrl_pressed();
  }
  public set ctrl_pressed(value): void {
    set_ctrl_pressed(value);
  }
  public get meta_pressed(): boolean {
    is_meta_pressed();
  }
  public set meta_pressed(value): void {
    set_meta_pressed(value);
  }
}