
import { InputEventGesture } from "@godot/classes/input_event_gesture";

export declare class InputEventPanGesture extends InputEventGesture{
  public set_delta(_delta: Vector2): void;
  public get_delta(): Vector2;
  public get delta(): Vector2 {
    get_delta();
  }
  public set delta(value: Vector2): void {
    set_delta(value);
  }
}