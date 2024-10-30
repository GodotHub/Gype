
import { SpriteBase3D } from "@godot/classes/sprite_base3d";
import { SpriteFrames } from "@godot/classes/sprite_frames";

export declare class AnimatedSprite3D extends SpriteBase3D{
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
  public const sprite_frames_changed: string = "sprite_frames_changed";
  public const animation_changed: string = "animation_changed";
  public const frame_changed: string = "frame_changed";
  public const animation_looped: string = "animation_looped";
  public const animation_finished: string = "animation_finished";
}