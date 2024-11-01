
import { Texture2D } from "@godot/classes/texture2d";
import { Resource } from "@godot/classes/resource";

export declare class SpriteFrames extends Resource{
  public add_animation(_anim: String | StringName | string): void;
  public has_animation(_anim: String | StringName | string): boolean;
  public remove_animation(_anim: String | StringName | string): void;
  public rename_animation(_anim: String | StringName | string, _newname: String | StringName | string): void;
  public get_animation_names(): PackedStringArray;
  public set_animation_speed(_anim: String | StringName | string, _fps: number): void;
  public get_animation_speed(_anim: String | StringName | string): number;
  public set_animation_loop(_anim: String | StringName | string, _loop: boolean): void;
  public get_animation_loop(_anim: String | StringName | string): boolean;
  public add_frame(_anim: String | StringName | string, _texture: Texture2D, _duration: number, _at_position: number): void;
  public set_frame(_anim: String | StringName | string, _idx: number, _texture: Texture2D, _duration: number): void;
  public remove_frame(_anim: String | StringName | string, _idx: number): void;
  public get_frame_count(_anim: String | StringName | string): number;
  public get_frame_texture(_anim: String | StringName | string, _idx: number): Texture2D;
  public get_frame_duration(_anim: String | StringName | string, _idx: number): number;
  public clear(_anim: String | StringName | string): void;
  public clear_all(): void;
  public get animations(): GDArray {
    _get_animations();
  }
  public set animations(value): void {
    _set_animations(value);
  }
}