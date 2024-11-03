
import { AudioEffect } from "@godot/classes/audio_effect";
export declare class AudioEffectCompressor extends AudioEffect{
  public set_threshold(_threshold: number): void;
  public get_threshold(): number;
  public set_ratio(_ratio: number): void;
  public get_ratio(): number;
  public set_gain(_gain: number): void;
  public get_gain(): number;
  public set_attack_us(_attack_us: number): void;
  public get_attack_us(): number;
  public set_release_ms(_release_ms: number): void;
  public get_release_ms(): number;
  public set_mix(_mix: number): void;
  public get_mix(): number;
  public set_sidechain(_sidechain: GDString | StringName | string): void;
  public get_sidechain(): StringName;
  public get threshold(): number;
  public set threshold(value): void;
  public get ratio(): number;
  public set ratio(value): void;
  public get gain(): number;
  public set gain(value): void;
  public get attack_us(): number;
  public set attack_us(value): void;
  public get release_ms(): number;
  public set release_ms(value): void;
  public get mix(): number;
  public set mix(value): void;
  public get sidechain(): StringName;
  public set sidechain(value): void;
}