
import { AudioStreamPlayback } from "@godot/classes/audio_stream_playback";
export declare class AudioStreamPlaybackInteractive extends AudioStreamPlayback{
  public switch_to_clip_by_name(_clip_name: GDString | StringName | string): void;
  public switch_to_clip(_clip_index: number): void;
}