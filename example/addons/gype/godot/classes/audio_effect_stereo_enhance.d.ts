
import { AudioEffect } from "@godot/classes/audio_effect";

export declare class AudioEffectStereoEnhance extends AudioEffect{
  public set_pan_pullout(_amount: number): void;
  public get_pan_pullout(): number;
  public set_time_pullout(_amount: number): void;
  public get_time_pullout(): number;
  public set_surround(_amount: number): void;
  public get_surround(): number;
  public get pan_pullout(): number {
    get_pan_pullout();
  }
  public set pan_pullout(value): void {
    set_pan_pullout(value);
  }
  public get time_pullout_ms(): number {
    get_time_pullout();
  }
  public set time_pullout_ms(value): void {
    set_time_pullout(value);
  }
  public get surround(): number {
    get_surround();
  }
  public set surround(value): void {
    set_surround(value);
  }
}