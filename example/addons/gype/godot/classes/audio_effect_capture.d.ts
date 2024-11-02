
import { AudioEffect } from "@godot/classes/audio_effect";


export declare class AudioEffectCapture extends AudioEffect{
  public can_get_buffer(_frames: number): boolean;
  public get_buffer(_frames: number): PackedVector2Array;
  public clear_buffer(): void;
  public set_buffer_length(_buffer_length_seconds: number): void;
  public get_buffer_length(): number;
  public get_frames_available(): number;
  public get_discarded_frames(): number;
  public get_buffer_length_frames(): number;
  public get_pushed_frames(): number;
  public get buffer_length(): number;
  public set buffer_length(value): void;
}