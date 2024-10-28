
import { AudioEffect } from "@godot/classes/audio_effect";

export declare class AudioEffectReverb extends AudioEffect{
  public set_predelay_msec(_msec: number): void;
  public get_predelay_msec(): number;
  public set_predelay_feedback(_feedback: number): void;
  public get_predelay_feedback(): number;
  public set_room_size(_size: number): void;
  public get_room_size(): number;
  public set_damping(_amount: number): void;
  public get_damping(): number;
  public set_spread(_amount: number): void;
  public get_spread(): number;
  public set_dry(_amount: number): void;
  public get_dry(): number;
  public set_wet(_amount: number): void;
  public get_wet(): number;
  public set_hpf(_amount: number): void;
  public get_hpf(): number;
  public get predelay_msec(): number {
    get_predelay_msec();
  }
  public set predelay_msec(value: number): void {
    set_predelay_msec(value);
  }
  public get predelay_feedback(): number {
    get_predelay_feedback();
  }
  public set predelay_feedback(value: number): void {
    set_predelay_feedback(value);
  }
  public get room_size(): number {
    get_room_size();
  }
  public set room_size(value: number): void {
    set_room_size(value);
  }
  public get damping(): number {
    get_damping();
  }
  public set damping(value: number): void {
    set_damping(value);
  }
  public get spread(): number {
    get_spread();
  }
  public set spread(value: number): void {
    set_spread(value);
  }
  public get hipass(): number {
    get_hpf();
  }
  public set hipass(value: number): void {
    set_hpf(value);
  }
  public get dry(): number {
    get_dry();
  }
  public set dry(value: number): void {
    set_dry(value);
  }
  public get wet(): number {
    get_wet();
  }
  public set wet(value: number): void {
    set_wet(value);
  }
}