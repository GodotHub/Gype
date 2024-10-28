
import { RefCounted } from "@godot/classes/ref_counted";
import { AudioSamplePlayback } from "@godot/classes/audio_sample_playback";

export declare class AudioStreamPlayback extends RefCounted{
  public _start(_from_pos: number): void;
  public _stop(): void;
  public _is_playing(): boolean;
  public _get_loop_count(): number;
  public _get_playback_position(): number;
  public _seek(_position: number): void;
  public _mix(_buffer: AudioFrame*, _rate_scale: number, _frames: number): number;
  public _tag_used_streams(): void;
  public _set_parameter(_name: StringName, _value: Variant): void;
  public _get_parameter(_name: StringName): Variant;
  public set_sample_playback(_playback_sample: AudioSamplePlayback): void;
  public get_sample_playback(): AudioSamplePlayback;
}