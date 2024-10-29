
import { Resource } from "@godot/classes/resource";

export declare class InputEvent extends Resource{
  public set_device(_device: number): void;
  public get_device(): number;
  public is_action(_action: StringName, _exact_match: boolean): boolean;
  public is_action_pressed(_action: StringName, _allow_echo: boolean, _exact_match: boolean): boolean;
  public is_action_released(_action: StringName, _exact_match: boolean): boolean;
  public get_action_strength(_action: StringName, _exact_match: boolean): number;
  public is_canceled(): boolean;
  public is_pressed(): boolean;
  public is_released(): boolean;
  public is_echo(): boolean;
  public as_text(): String;
  public is_match(_event: InputEvent, _exact_match: boolean): boolean;
  public is_action_type(): boolean;
  public accumulate(_with_event: InputEvent): boolean;
  public xformed_by(_xform: Transform2D, _local_ofs: Vector2): InputEvent;
  public get device(): number {
    get_device();
  }
  public set device(value): void {
    set_device(value);
  }
}