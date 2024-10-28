
import { InputEventWithModifiers } from "@godot/classes/input_event_with_modifiers";

export declare class InputEventMouse extends InputEventWithModifiers{
  public set_button_mask(_button_mask: number): void;
  public get_button_mask(): number;
  public set_position(_position: Vector2): void;
  public get_position(): Vector2;
  public set_global_position(_global_position: Vector2): void;
  public get_global_position(): Vector2;
  public get button_mask(): number {
    get_button_mask();
  }
  public set button_mask(value: number): void {
    set_button_mask(value);
  }
  public get position(): Vector2 {
    get_position();
  }
  public set position(value: Vector2): void {
    set_position(value);
  }
  public get global_position(): Vector2 {
    get_global_position();
  }
  public set global_position(value: Vector2): void {
    set_global_position(value);
  }
}