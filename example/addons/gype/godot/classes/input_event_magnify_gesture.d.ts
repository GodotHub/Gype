
import { InputEventGesture } from "@godot/classes/input_event_gesture";

export declare class InputEventMagnifyGesture extends InputEventGesture{
  public set_factor(_factor: number): void;
  public get_factor(): number;
  public get factor(): number {
    get_factor();
  }
  public set factor(value: number): void {
    set_factor(value);
  }
}