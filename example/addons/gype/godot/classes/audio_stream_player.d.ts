
import { AudioStream } from "@godot/classes/audio_stream";
import { Node } from "@godot/classes/node";
import { AudioStreamPlayback } from "@godot/classes/audio_stream_playback";

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
  public set_bus(_bus: String | StringName | string): void;
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
  public get stream(): AudioStream {
    get_stream();
  }
  public set stream(value): void {
    set_stream(value);
  }
  public get volume_db(): number {
    get_volume_db();
  }
  public set volume_db(value): void {
    set_volume_db(value);
  }
  public get pitch_scale(): number {
    get_pitch_scale();
  }
  public set pitch_scale(value): void {
    set_pitch_scale(value);
  }
  public get playing(): boolean {
    is_playing();
  }
  public set playing(value): void {
    _set_playing(value);
  }
  public get autoplay(): boolean {
    is_autoplay_enabled();
  }
  public set autoplay(value): void {
    set_autoplay(value);
  }
  public get stream_paused(): boolean {
    get_stream_paused();
  }
  public set stream_paused(value): void {
    set_stream_paused(value);
  }
  public get mix_target(): number {
    get_mix_target();
  }
  public set mix_target(value): void {
    set_mix_target(value);
  }
  public get max_polyphony(): number {
    get_max_polyphony();
  }
  public set max_polyphony(value): void {
    set_max_polyphony(value);
  }
  public get bus(): StringName {
    get_bus();
  }
  public set bus(value): void {
    set_bus(value);
  }
  public get playback_type(): number {
    get_playback_type();
  }
  public set playback_type(value): void {
    set_playback_type(value);
  }
  static MixTarget = {
    MIX_TARGET_STEREO = 0,
    MIX_TARGET_SURROUND = 1,
    MIX_TARGET_CENTER = 2,
  }
  public const finished: string = "finished";
}