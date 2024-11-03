
import { InputEventWithModifiers } from "@godot/classes/input_event_with_modifiers";
export declare class InputEventMouse extends InputEventWithModifiers{
  public set_button_mask(_button_mask: number): void;
  public get_button_mask(): number;
  public set_position(_position: Vector2): void;
  public get_position(): Vector2;
  public set_global_position(_global_position: Vector2): void;
  public get_global_position(): Vector2;
  public get button_mask(): number;
  public set button_mask(value): void;
  public get position(): Vector2;
  public set position(value): void;
  public get global_position(): Vector2;
  public set global_position(value): void;
}