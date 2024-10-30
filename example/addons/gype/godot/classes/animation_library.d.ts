
import { Animation } from "@godot/classes/animation";
import { Resource } from "@godot/classes/resource";

export declare class AnimationLibrary extends Resource{
  public add_animation(_name: String | StringName | string, _animation: Animation): number;
  public remove_animation(_name: String | StringName | string): void;
  public rename_animation(_name: String | StringName | string, _newname: String | StringName | string): void;
  public has_animation(_name: String | StringName | string): boolean;
  public get_animation(_name: String | StringName | string): Animation;
  public get_animation_list(): GDArray;
  public const animation_added: string = "animation_added";
  public const animation_removed: string = "animation_removed";
  public const animation_renamed: string = "animation_renamed";
  public const animation_changed: string = "animation_changed";
}