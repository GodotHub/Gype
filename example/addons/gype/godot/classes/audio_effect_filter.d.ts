
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
  public get cutoff_hz(): number {
    get_cutoff();
  }
  public set cutoff_hz(value): void {
    set_cutoff(value);
  }
  public get resonance(): number {
    get_resonance();
  }
  public set resonance(value): void {
    set_resonance(value);
  }
  public get gain(): number {
    get_gain();
  }
  public set gain(value): void {
    set_gain(value);
  }
  public get db(): number {
    get_db();
  }
  public set db(value): void {
    set_db(value);
  }
  static FilterDB = {
    FILTER_6DB = 0,
    FILTER_12DB = 1,
    FILTER_18DB = 2,
    FILTER_24DB = 3,
  }
}