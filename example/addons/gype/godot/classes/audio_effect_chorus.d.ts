
import { AudioEffect } from "@godot/classes/audio_effect";

export declare class AudioEffectChorus extends AudioEffect{
  public set_voice_count(_voices: number): void;
  public get_voice_count(): number;
  public set_voice_delay_ms(_voice_idx: number, _delay_ms: number): void;
  public get_voice_delay_ms(_voice_idx: number): number;
  public set_voice_rate_hz(_voice_idx: number, _rate_hz: number): void;
  public get_voice_rate_hz(_voice_idx: number): number;
  public set_voice_depth_ms(_voice_idx: number, _depth_ms: number): void;
  public get_voice_depth_ms(_voice_idx: number): number;
  public set_voice_level_db(_voice_idx: number, _level_db: number): void;
  public get_voice_level_db(_voice_idx: number): number;
  public set_voice_cutoff_hz(_voice_idx: number, _cutoff_hz: number): void;
  public get_voice_cutoff_hz(_voice_idx: number): number;
  public set_voice_pan(_voice_idx: number, _pan: number): void;
  public get_voice_pan(_voice_idx: number): number;
  public set_wet(_amount: number): void;
  public get_wet(): number;
  public set_dry(_amount: number): void;
  public get_dry(): number;
  public get voice_count(): number {
    get_voice_count();
  }
  public set voice_count(value): void {
    set_voice_count(value);
  }
  public get dry(): number {
    get_dry();
  }
  public set dry(value): void {
    set_dry(value);
  }
  public get wet(): number {
    get_wet();
  }
  public set wet(value): void {
    set_wet(value);
  }
}