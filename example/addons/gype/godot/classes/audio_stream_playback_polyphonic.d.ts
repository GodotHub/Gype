
import { AudioStream } from "@godot/classes/audio_stream";
import { AudioStreamPlayback } from "@godot/classes/audio_stream_playback";
export declare class AudioStreamPlaybackPolyphonic extends AudioStreamPlayback{
  public play_stream(_stream: AudioStream, _from_offset: number = 0, _volume_db: number = 0, _pitch_scale: number = 1.0, _playback_type: number = 0, _bus: GDString | StringName | string = "Master"): number;
  public set_stream_volume(_stream: number, _volume_db: number): void;
  public set_stream_pitch_scale(_stream: number, _pitch_scale: number): void;
  public is_stream_playing(_stream: number): boolean;
  public stop_stream(_stream: number): void;
}