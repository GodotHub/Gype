
import { AudioEffect } from "@godot/classes/audio_effect";

export declare class AudioEffectLimiter extends AudioEffect{
  public set_ceiling_db(_ceiling: number): void;
  public get_ceiling_db(): number;
  public set_threshold_db(_threshold: number): void;
  public get_threshold_db(): number;
  public set_soft_clip_db(_soft_clip: number): void;
  public get_soft_clip_db(): number;
  public set_soft_clip_ratio(_soft_clip: number): void;
  public get_soft_clip_ratio(): number;
  public get ceiling_db(): number {
    get_ceiling_db();
  }
  public set ceiling_db(value: number): void {
    set_ceiling_db(value);
  }
  public get threshold_db(): number {
    get_threshold_db();
  }
  public set threshold_db(value: number): void {
    set_threshold_db(value);
  }
  public get soft_clip_db(): number {
    get_soft_clip_db();
  }
  public set soft_clip_db(value: number): void {
    set_soft_clip_db(value);
  }
  public get soft_clip_ratio(): number {
    get_soft_clip_ratio();
  }
  public set soft_clip_ratio(value: number): void {
    set_soft_clip_ratio(value);
  }
}