
import { AudioEffect } from "@godot/classes/audio_effect";

export declare class AudioEffectPanner extends AudioEffect{
  public set_pan(_cpanume: number): void;
  public get_pan(): number;
  public get pan(): number {
    get_pan();
  }
  public set pan(value): void {
    set_pan(value);
  }
}