
import { AudioEffect } from "@godot/classes/audio_effect";
export declare class AudioEffectPhaser extends AudioEffect{
  public set_range_min_hz(_hz: number): void;
  public get_range_min_hz(): number;
  public set_range_max_hz(_hz: number): void;
  public get_range_max_hz(): number;
  public set_rate_hz(_hz: number): void;
  public get_rate_hz(): number;
  public set_feedback(_fbk: number): void;
  public get_feedback(): number;
  public set_depth(_depth: number): void;
  public get_depth(): number;
  public get range_min_hz(): number;
  public set range_min_hz(value): void;
  public get range_max_hz(): number;
  public set range_max_hz(value): void;
  public get rate_hz(): number;
  public set rate_hz(value): void;
  public get feedback(): number;
  public set feedback(value): void;
  public get depth(): number;
  public set depth(value): void;
}