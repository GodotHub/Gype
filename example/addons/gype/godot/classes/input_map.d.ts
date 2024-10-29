
import { InputEvent } from "@godot/classes/input_event";
import { InputEvent } from "@godot/classes/input_event";
import { Object } from "@godot/classes/object";

export declare class InputMap extends Object{
  public has_action(_action: StringName): boolean;
  public get_actions(): GDArray;
  public add_action(_action: StringName, _deadzone: number): void;
  public erase_action(_action: StringName): void;
  public action_set_deadzone(_action: StringName, _deadzone: number): void;
  public action_get_deadzone(_action: StringName): number;
  public action_add_event(_action: StringName, _event: InputEvent): void;
  public action_has_event(_action: StringName, _event: InputEvent): boolean;
  public action_erase_event(_action: StringName, _event: InputEvent): void;
  public action_erase_events(_action: StringName): void;
  public action_get_events(_action: StringName): GDArray;
  public event_is_action(_event: InputEvent, _action: StringName, _exact_match: boolean): boolean;
  public load_from_project_settings(): void;
}