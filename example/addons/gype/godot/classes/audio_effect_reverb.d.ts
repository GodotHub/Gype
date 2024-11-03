
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
  public get predelay_msec(): number;
  public set predelay_msec(value): void;
  public get predelay_feedback(): number;
  public set predelay_feedback(value): void;
  public get room_size(): number;
  public set room_size(value): void;
  public get damping(): number;
  public set damping(value): void;
  public get spread(): number;
  public set spread(value): void;
  public get hipass(): number;
  public set hipass(value): void;
  public get dry(): number;
  public set dry(value): void;
  public get wet(): number;
  public set wet(value): void;
}