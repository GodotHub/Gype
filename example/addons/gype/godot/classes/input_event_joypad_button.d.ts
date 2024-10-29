
import { InputEvent } from "@godot/classes/input_event";

export declare class InputEventJoypadButton extends InputEvent{
  public set_button_index(_button_index: number): void;
  public get_button_index(): number;
  public set_pressure(_pressure: number): void;
  public get_pressure(): number;
  public set_pressed(_pressed: boolean): void;
  public get button_index(): number {
    get_button_index();
  }
  public set button_index(value): void {
    set_button_index(value);
  }
  public get pressure(): number {
    get_pressure();
  }
  public set pressure(value): void {
    set_pressure(value);
  }
  public get pressed(): boolean {
    is_pressed();
  }
  public set pressed(value): void {
    set_pressed(value);
  }
}