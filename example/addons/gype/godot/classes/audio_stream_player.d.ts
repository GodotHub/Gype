
import { AudioStream } from "@godot/classes/audio_stream";
import { AudioStreamPlayback } from "@godot/classes/audio_stream_playback";
import { Node } from "@godot/classes/node";


export declare class AudioStreamPlayer extends Node{
  public set_stream(_stream: AudioStream): void;
  public get_stream(): AudioStream;
  public set_volume_db(_volume_db: number): void;
  public get_volume_db(): number;
  public set_pitch_scale(_pitch_scale: number): void;
  public get_pitch_scale(): number;
  public play(_from_position: number): void;
  public seek(_to_position: number): void;
  public stop(): void;
  public is_playing(): boolean;
  public get_playback_position(): number;
  public set_bus(_bus: GDString | StringName | string): void;
  public get_bus(): StringName;
  public set_autoplay(_enable: boolean): void;
  public is_autoplay_enabled(): boolean;
  public set_mix_target(_mix_target: number): void;
  public get_mix_target(): number;
  public set_stream_paused(_pause: boolean): void;
  public get_stream_paused(): boolean;
  public set_max_polyphony(_max_polyphony: number): void;
  public get_max_polyphony(): number;
  public has_stream_playback(): boolean;
  public get_stream_playback(): AudioStreamPlayback;
  public set_playback_type(_playback_type: number): void;
  public get_playback_type(): number;
  public get stream(): AudioStream;
  public set stream(value): void;
  public get volume_db(): number;
  public set volume_db(value): void;
  public get pitch_scale(): number;
  public set pitch_scale(value): void;
  public get playing(): boolean;
  public set playing(value): void;
  public get autoplay(): boolean;
  public set autoplay(value): void;
  public get stream_paused(): boolean;
  public set stream_paused(value): void;
  public get mix_target(): number;
  public set mix_target(value): void;
  public get max_polyphony(): number;
  public set max_polyphony(value): void;
  public get bus(): StringName;
  public set bus(value): void;
  public get playback_type(): number;
  public set playback_type(value): void;
  static MixTarget = {
    MIX_TARGET_STEREO = 0,
    MIX_TARGET_SURROUND = 1,
    MIX_TARGET_CENTER = 2,
  }
  public get finished(): Signal;
}