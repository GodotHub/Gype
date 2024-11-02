
import { AudioEffect } from "@godot/classes/audio_effect";


export declare class AudioEffectHardLimiter extends AudioEffect{
  public set_ceiling_db(_ceiling: number): void;
  public get_ceiling_db(): number;
  public set_pre_gain_db(_p_pre_gain: number): void;
  public get_pre_gain_db(): number;
  public set_release(_p_release: number): void;
  public get_release(): number;
  public get pre_gain_db(): number;
  public set pre_gain_db(value): void;
  public get ceiling_db(): number;
  public set ceiling_db(value): void;
  public get release(): number;
  public set release(value): void;
}