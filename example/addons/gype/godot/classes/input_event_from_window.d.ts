
import { InputEvent } from "@godot/classes/input_event";


export declare class InputEventFromWindow extends InputEvent{
  public set_window_id(_id: number): void;
  public get_window_id(): number;
  public get window_id(): number;
  public set window_id(value): void;
}