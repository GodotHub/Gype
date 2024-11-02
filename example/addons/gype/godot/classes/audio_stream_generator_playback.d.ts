
import { AudioStreamPlaybackResampled } from "@godot/classes/audio_stream_playback_resampled";


export declare class AudioStreamGeneratorPlayback extends AudioStreamPlaybackResampled{
  public push_frame(_frame: Vector2): boolean;
  public can_push_buffer(_amount: number): boolean;
  public push_buffer(_frames: PackedVector2Array): boolean;
  public get_frames_available(): number;
  public get_skips(): number;
  public clear_buffer(): void;
}