
import { Resource } from "@godot/classes/resource";
import { Texture2D } from "@godot/classes/texture2d";


export declare class SpriteFrames extends Resource{
  public add_animation(_anim: GDString | StringName | string): void;
  public has_animation(_anim: GDString | StringName | string): boolean;
  public remove_animation(_anim: GDString | StringName | string): void;
  public rename_animation(_anim: GDString | StringName | string, _newname: GDString | StringName | string): void;
  public get_animation_names(): PackedStringArray;
  public set_animation_speed(_anim: GDString | StringName | string, _fps: number): void;
  public get_animation_speed(_anim: GDString | StringName | string): number;
  public set_animation_loop(_anim: GDString | StringName | string, _loop: boolean): void;
  public get_animation_loop(_anim: GDString | StringName | string): boolean;
  public add_frame(_anim: GDString | StringName | string, _texture: Texture2D, _duration: number, _at_position: number): void;
  public set_frame(_anim: GDString | StringName | string, _idx: number, _texture: Texture2D, _duration: number): void;
  public remove_frame(_anim: GDString | StringName | string, _idx: number): void;
  public get_frame_count(_anim: GDString | StringName | string): number;
  public get_frame_texture(_anim: GDString | StringName | string, _idx: number): Texture2D;
  public get_frame_duration(_anim: GDString | StringName | string, _idx: number): number;
  public clear(_anim: GDString | StringName | string): void;
  public clear_all(): void;
  public get animations(): GDArray;
  public set animations(value): void;
}