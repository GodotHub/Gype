
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
  public set_sidechain(_sidechain: StringName): void;
  public get_sidechain(): StringName;
  public get threshold(): number {
    get_threshold();
  }
  public set threshold(value: number): void {
    set_threshold(value);
  }
  public get ratio(): number {
    get_ratio();
  }
  public set ratio(value: number): void {
    set_ratio(value);
  }
  public get gain(): number {
    get_gain();
  }
  public set gain(value: number): void {
    set_gain(value);
  }
  public get attack_us(): number {
    get_attack_us();
  }
  public set attack_us(value: number): void {
    set_attack_us(value);
  }
  public get release_ms(): number {
    get_release_ms();
  }
  public set release_ms(value: number): void {
    set_release_ms(value);
  }
  public get mix(): number {
    get_mix();
  }
  public set mix(value: number): void {
    set_mix(value);
  }
  public get sidechain(): StringName {
    get_sidechain();
  }
  public set sidechain(value: StringName): void {
    set_sidechain(value);
  }
}