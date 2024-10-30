
import { InputEvent } from "@godot/classes/input_event";

export declare class InputEventAction extends InputEvent{
  public set_action(_action: String | StringName | string): void;
  public get_action(): StringName;
  public set_pressed(_pressed: boolean): void;
  public set_strength(_strength: number): void;
  public get_strength(): number;
  public set_event_index(_index: number): void;
  public get_event_index(): number;
  public get action(): StringName {
    get_action();
  }
  public set action(value): void {
    set_action(value);
  }
  public get pressed(): boolean {
    is_pressed();
  }
  public set pressed(value): void {
    set_pressed(value);
  }
  public get strength(): number {
    get_strength();
  }
  public set strength(value): void {
    set_strength(value);
  }
  public get event_index(): number {
    get_event_index();
  }
  public set event_index(value): void {
    set_event_index(value);
  }
}