
import { AudioEffect } from "@godot/classes/audio_effect";

export declare class AudioEffectEQ extends AudioEffect{
  public set_band_gain_db(_band_idx: number, _volume_db: number): void;
  public get_band_gain_db(_band_idx: number): number;
  public get_band_count(): number;
}