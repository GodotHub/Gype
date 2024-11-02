
import { AudioStream } from "@godot/classes/audio_stream";


export declare class AudioStreamSynchronized extends AudioStream{
  public set_stream_count(_stream_count: number): void;
  public get_stream_count(): number;
  public set_sync_stream(_stream_index: number, _audio_stream: AudioStream): void;
  public get_sync_stream(_stream_index: number): AudioStream;
  public set_sync_stream_volume(_stream_index: number, _volume_db: number): void;
  public get_sync_stream_volume(_stream_index: number): number;
  public get stream_count(): number;
  public set stream_count(value): void;
}