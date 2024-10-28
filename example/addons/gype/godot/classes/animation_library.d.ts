
import { Animation } from "@godot/classes/animation";
import { Resource } from "@godot/classes/resource";

export declare class AnimationLibrary extends Resource{
  public add_animation(_name: StringName, _animation: Animation): number;
  public remove_animation(_name: StringName): void;
  public rename_animation(_name: StringName, _newname: StringName): void;
  public has_animation(_name: StringName): boolean;
  public get_animation(_name: StringName): Animation;
  public get_animation_list(): Array;
}