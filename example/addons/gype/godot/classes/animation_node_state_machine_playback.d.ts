
import { Resource } from "@godot/classes/resource";
export declare class AnimationNodeStateMachinePlayback extends Resource{
  public travel(_to_node: GDString | StringName | string, _reset_on_teleport: boolean = true): void;
  public start(_node: GDString | StringName | string, _reset: boolean = true): void;
  public next(): void;
  public stop(): void;
  public is_playing(): boolean;
  public get_current_node(): StringName;
  public get_current_play_position(): number;
  public get_current_length(): number;
  public get_fading_from_node(): StringName;
  public get_travel_path(): GDArray;
}