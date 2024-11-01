
import { Node2D } from "@godot/classes/node2d";
import { SpriteFrames } from "@godot/classes/sprite_frames";

export declare class AnimatedSprite2D extends Node2D{
  public set_sprite_frames(_sprite_frames: SpriteFrames): void;
  public get_sprite_frames(): SpriteFrames;
  public set_animation(_name: String | StringName | string): void;
  public get_animation(): StringName;
  public set_autoplay(_name: String | StringName | string): void;
  public get_autoplay(): String;
  public is_playing(): boolean;
  public play(_name: String | StringName | string, _custom_speed: number, _from_end: boolean): void;
  public play_backwards(_name: String | StringName | string): void;
  public pause(): void;
  public stop(): void;
  public set_centered(_centered: boolean): void;
  public is_centered(): boolean;
  public set_offset(_offset: Vector2): void;
  public get_offset(): Vector2;
  public set_flip_h(_flip_h: boolean): void;
  public is_flipped_h(): boolean;
  public set_flip_v(_flip_v: boolean): void;
  public is_flipped_v(): boolean;
  public set_frame(_frame: number): void;
  public get_frame(): number;
  public set_frame_progress(_progress: number): void;
  public get_frame_progress(): number;
  public set_frame_and_progress(_frame: number, _progress: number): void;
  public set_speed_scale(_speed_scale: number): void;
  public get_speed_scale(): number;
  public get_playing_speed(): number;
  public get sprite_frames(): SpriteFrames {
    get_sprite_frames();
  }
  public set sprite_frames(value): void {
    set_sprite_frames(value);
  }
  public get animation(): StringName {
    get_animation();
  }
  public set animation(value): void {
    set_animation(value);
  }
  public get autoplay(): StringName {
    get_autoplay();
  }
  public set autoplay(value): void {
    set_autoplay(value);
  }
  public get frame(): number {
    get_frame();
  }
  public set frame(value): void {
    set_frame(value);
  }
  public get frame_progress(): number {
    get_frame_progress();
  }
  public set frame_progress(value): void {
    set_frame_progress(value);
  }
  public get speed_scale(): number {
    get_speed_scale();
  }
  public set speed_scale(value): void {
    set_speed_scale(value);
  }
  public get centered(): boolean {
    is_centered();
  }
  public set centered(value): void {
    set_centered(value);
  }
  public get offset(): Vector2 {
    get_offset();
  }
  public set offset(value): void {
    set_offset(value);
  }
  public get flip_h(): boolean {
    is_flipped_h();
  }
  public set flip_h(value): void {
    set_flip_h(value);
  }
  public get flip_v(): boolean {
    is_flipped_v();
  }
  public set flip_v(value): void {
    set_flip_v(value);
  }
  public get sprite_frames_changed(): Signal;
  public get animation_changed(): Signal;
  public get frame_changed(): Signal;
  public get animation_looped(): Signal;
  public get animation_finished(): Signal;
}