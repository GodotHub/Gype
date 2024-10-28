
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
  public get range_min_hz(): number {
    get_range_min_hz();
  }
  public set range_min_hz(value: number): void {
    set_range_min_hz(value);
  }
  public get range_max_hz(): number {
    get_range_max_hz();
  }
  public set range_max_hz(value: number): void {
    set_range_max_hz(value);
  }
  public get rate_hz(): number {
    get_rate_hz();
  }
  public set rate_hz(value: number): void {
    set_rate_hz(value);
  }
  public get feedback(): number {
    get_feedback();
  }
  public set feedback(value: number): void {
    set_feedback(value);
  }
  public get depth(): number {
    get_depth();
  }
  public set depth(value: number): void {
    set_depth(value);
  }
}