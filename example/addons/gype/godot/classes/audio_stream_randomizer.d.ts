
import { AudioStream } from "@godot/classes/audio_stream";
export declare class AudioStreamRandomizer extends AudioStream{
  public add_stream(_index: number, _stream: AudioStream, _weight: number = 1.0): void;
  public move_stream(_index_from: number, _index_to: number): void;
  public remove_stream(_index: number): void;
  public set_stream(_index: number, _stream: AudioStream): void;
  public get_stream(_index: number): AudioStream;
  public set_stream_probability_weight(_index: number, _weight: number): void;
  public get_stream_probability_weight(_index: number): number;
  public set_streams_count(_count: number): void;
  public get_streams_count(): number;
  public set_random_pitch(_scale: number): void;
  public get_random_pitch(): number;
  public set_random_volume_offset_db(_db_offset: number): void;
  public get_random_volume_offset_db(): number;
  public set_playback_mode(_mode: number): void;
  public get_playback_mode(): number;
  public get playback_mode(): number;
  public set playback_mode(value): void;
  public get random_pitch(): number;
  public set random_pitch(value): void;
  public get random_volume_offset_db(): number;
  public set random_volume_offset_db(value): void;
  public get streams_count(): number;
  public set streams_count(value): void;
  static PlaybackMode = {
    PLAYBACK_RANDOM_NO_REPEATS = 0,
    PLAYBACK_RANDOM = 1,
    PLAYBACK_SEQUENTIAL = 2,
  }
}