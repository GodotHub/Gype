
import { InputEvent } from "@godot/classes/input_event";
import { InputEvent } from "@godot/classes/input_event";
import { GodotObject } from "@godot/classes/godot_object";

export declare class InputMap extends GodotObject{
  public has_action(_action: String | StringName | string): boolean;
  public get_actions(): GDArray;
  public add_action(_action: String | StringName | string, _deadzone: number): void;
  public erase_action(_action: String | StringName | string): void;
  public action_set_deadzone(_action: String | StringName | string, _deadzone: number): void;
  public action_get_deadzone(_action: String | StringName | string): number;
  public action_add_event(_action: String | StringName | string, _event: InputEvent): void;
  public action_has_event(_action: String | StringName | string, _event: InputEvent): boolean;
  public action_erase_event(_action: String | StringName | string, _event: InputEvent): void;
  public action_erase_events(_action: String | StringName | string): void;
  public action_get_events(_action: String | StringName | string): GDArray;
  public event_is_action(_event: InputEvent, _action: String | StringName | string, _exact_match: boolean): boolean;
  public load_from_project_settings(): void;
}