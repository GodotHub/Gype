
import { InputEvent } from "@godot/classes/input_event";
export declare class InputEventAction extends InputEvent{
  public set_action(_action: GDString | StringName | string): void;
  public get_action(): StringName;
  public set_pressed(_pressed: boolean): void;
  public set_strength(_strength: number): void;
  public get_strength(): number;
  public set_event_index(_index: number): void;
  public get_event_index(): number;
  public get action(): StringName;
  public set action(value): void;
  public get pressed(): boolean;
  public set pressed(value): void;
  public get strength(): number;
  public set strength(value): void;
  public get event_index(): number;
  public set event_index(value): void;
}