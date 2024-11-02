
import { AudioStream } from "@godot/classes/audio_stream";
import { AudioStreamPlayback } from "@godot/classes/audio_stream_playback";


export declare class AudioStreamPlaybackPolyphonic extends AudioStreamPlayback{
  public play_stream(_stream: AudioStream, _from_offset: number, _volume_db: number, _pitch_scale: number, _playback_type: number, _bus: GDString | StringName | string): number;
  public set_stream_volume(_stream: number, _volume_db: number): void;
  public set_stream_pitch_scale(_stream: number, _pitch_scale: number): void;
  public is_stream_playing(_stream: number): boolean;
  public stop_stream(_stream: number): void;
}