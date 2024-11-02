
import { InputEvent } from "@godot/classes/input_event";


export declare class InputEventJoypadMotion extends InputEvent{
  public set_axis(_axis: number): void;
  public get_axis(): number;
  public set_axis_value(_axis_value: number): void;
  public get_axis_value(): number;
  public get axis(): number;
  public set axis(value): void;
  public get axis_value(): number;
  public set axis_value(value): void;
}