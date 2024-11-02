
import { InputEvent } from "@godot/classes/input_event";


export declare class InputEventJoypadButton extends InputEvent{
  public set_button_index(_button_index: number): void;
  public get_button_index(): number;
  public set_pressure(_pressure: number): void;
  public get_pressure(): number;
  public set_pressed(_pressed: boolean): void;
  public get button_index(): number;
  public set button_index(value): void;
  public get pressure(): number;
  public set pressure(value): void;
  public get pressed(): boolean;
  public set pressed(value): void;
}