
import { Texture2D } from "@godot/classes/texture2d";
import { Resource } from "@godot/classes/resource";

export declare class SpriteFrames extends Resource{
  public add_animation(_anim: StringName): void;
  public has_animation(_anim: StringName): boolean;
  public remove_animation(_anim: StringName): void;
  public rename_animation(_anim: StringName, _newname: StringName): void;
  public get_animation_names(): PackedStringArray;
  public set_animation_speed(_anim: StringName, _fps: number): void;
  public get_animation_speed(_anim: StringName): number;
  public set_animation_loop(_anim: StringName, _loop: boolean): void;
  public get_animation_loop(_anim: StringName): boolean;
  public add_frame(_anim: StringName, _texture: Texture2D, _duration: number, _at_position: number): void;
  public set_frame(_anim: StringName, _idx: number, _texture: Texture2D, _duration: number): void;
  public remove_frame(_anim: StringName, _idx: number): void;
  public get_frame_count(_anim: StringName): number;
  public get_frame_texture(_anim: StringName, _idx: number): Texture2D;
  public get_frame_duration(_anim: StringName, _idx: number): number;
  public clear(_anim: StringName): void;
  public clear_all(): void;
  public get animations(): Array {
    _get_animations();
  }
  public set animations(value: Array): void {
    _set_animations(value);
  }
}