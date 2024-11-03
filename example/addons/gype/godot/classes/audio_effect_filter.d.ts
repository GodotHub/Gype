
import { AudioEffect } from "@godot/classes/audio_effect";
export declare class AudioEffectFilter extends AudioEffect{
  public set_cutoff(_freq: number): void;
  public get_cutoff(): number;
  public set_resonance(_amount: number): void;
  public get_resonance(): number;
  public set_gain(_amount: number): void;
  public get_gain(): number;
  public set_db(_amount: number): void;
  public get_db(): number;
  public get cutoff_hz(): number;
  public set cutoff_hz(value): void;
  public get resonance(): number;
  public set resonance(value): void;
  public get gain(): number;
  public set gain(value): void;
  public get db(): number;
  public set db(value): void;
  static FilterDB = {
    FILTER_6DB = 0,
    FILTER_12DB = 1,
    FILTER_18DB = 2,
    FILTER_24DB = 3,
  }
}