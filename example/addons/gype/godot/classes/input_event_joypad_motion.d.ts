
import { InputEvent } from "@godot/classes/input_event";

export declare class InputEventJoypadMotion extends InputEvent{
  public set_axis(_axis: number): void;
  public get_axis(): number;
  public set_axis_value(_axis_value: number): void;
  public get_axis_value(): number;
  public get axis(): number {
    get_axis();
  }
  public set axis(value): void {
    set_axis(value);
  }
  public get axis_value(): number {
    get_axis_value();
  }
  public set axis_value(value): void {
    set_axis_value(value);
  }
}