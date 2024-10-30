
import { Resource } from "@godot/classes/resource";
import { AudioSample } from "@godot/classes/audio_sample";
import { AudioStreamPlayback } from "@godot/classes/audio_stream_playback";

export declare class AudioStream extends Resource{
  public _instantiate_playback(): AudioStreamPlayback;
  public _get_stream_name(): String;
  public _get_length(): number;
  public _is_monophonic(): boolean;
  public _get_bpm(): number;
  public _get_beat_count(): number;
  public _get_parameter_list(): GDArray;
  public get_length(): number;
  public is_monophonic(): boolean;
  public instantiate_playback(): AudioStreamPlayback;
  public can_be_sampled(): boolean;
  public generate_sample(): AudioSample;
  public is_meta_stream(): boolean;
  public const parameter_list_changed: string = "parameter_list_changed";
}