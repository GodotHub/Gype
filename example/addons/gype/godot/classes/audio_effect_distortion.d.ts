
import { AudioEffect } from "@godot/classes/audio_effect";

export declare class AudioEffectDistortion extends AudioEffect{
  public set_mode(_mode: number): void;
  public get_mode(): number;
  public set_pre_gain(_pre_gain: number): void;
  public get_pre_gain(): number;
  public set_keep_hf_hz(_keep_hf_hz: number): void;
  public get_keep_hf_hz(): number;
  public set_drive(_drive: number): void;
  public get_drive(): number;
  public set_post_gain(_post_gain: number): void;
  public get_post_gain(): number;
  public get mode(): number {
    get_mode();
  }
  public set mode(value: number): void {
    set_mode(value);
  }
  public get pre_gain(): number {
    get_pre_gain();
  }
  public set pre_gain(value: number): void {
    set_pre_gain(value);
  }
  public get keep_hf_hz(): number {
    get_keep_hf_hz();
  }
  public set keep_hf_hz(value: number): void {
    set_keep_hf_hz(value);
  }
  public get drive(): number {
    get_drive();
  }
  public set drive(value: number): void {
    set_drive(value);
  }
  public get post_gain(): number {
    get_post_gain();
  }
  public set post_gain(value: number): void {
    set_post_gain(value);
  }
  static Mode = {
    MODE_CLIP = 0,
    MODE_ATAN = 1,
    MODE_LOFI = 2,
    MODE_OVERDRIVE = 3,
    MODE_WAVESHAPE = 4,
  }
}