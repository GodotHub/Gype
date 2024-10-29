
import { AudioEffect } from "@godot/classes/audio_effect";

export declare class AudioEffectAmplify extends AudioEffect{
  public set_volume_db(_volume: number): void;
  public get_volume_db(): number;
  public get volume_db(): number {
    get_volume_db();
  }
  public set volume_db(value): void {
    set_volume_db(value);
  }
}