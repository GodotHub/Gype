
import { AnimationRootNode } from "@godot/classes/animation_root_node";
export declare class AnimationNodeAnimation extends AnimationRootNode{
  public set_animation(_name: GDString | StringName | string): void;
  public get_animation(): StringName;
  public set_play_mode(_mode: number): void;
  public get_play_mode(): number;
  public set_use_custom_timeline(_use_custom_timeline: boolean): void;
  public is_using_custom_timeline(): boolean;
  public set_timeline_length(_timeline_length: number): void;
  public get_timeline_length(): number;
  public set_stretch_time_scale(_stretch_time_scale: boolean): void;
  public is_stretching_time_scale(): boolean;
  public set_start_offset(_start_offset: number): void;
  public get_start_offset(): number;
  public set_loop_mode(_loop_mode: number): void;
  public get_loop_mode(): number;
  public get animation(): StringName;
  public set animation(value): void;
  public get play_mode(): number;
  public set play_mode(value): void;
  public get use_custom_timeline(): boolean;
  public set use_custom_timeline(value): void;
  public get timeline_length(): number;
  public set timeline_length(value): void;
  public get stretch_time_scale(): boolean;
  public set stretch_time_scale(value): void;
  public get start_offset(): number;
  public set start_offset(value): void;
  public get loop_mode(): number;
  public set loop_mode(value): void;
  static PlayMode = {
    PLAY_MODE_FORWARD = 0,
    PLAY_MODE_BACKWARD = 1,
  }
}