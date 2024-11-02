
import { Animation } from "@godot/classes/animation";
import { Resource } from "@godot/classes/resource";


export declare class AnimationLibrary extends Resource{
  public add_animation(_name: GDString | StringName | string, _animation: Animation): number;
  public remove_animation(_name: GDString | StringName | string): void;
  public rename_animation(_name: GDString | StringName | string, _newname: GDString | StringName | string): void;
  public has_animation(_name: GDString | StringName | string): boolean;
  public get_animation(_name: GDString | StringName | string): Animation;
  public get_animation_list(): GDArray;
  public get animation_added(): Signal;
  public get animation_removed(): Signal;
  public get animation_renamed(): Signal;
  public get animation_changed(): Signal;
}