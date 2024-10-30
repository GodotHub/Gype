
import { AudioStreamPlayback } from "@godot/classes/audio_stream_playback";

export declare class AudioStreamPlaybackResampled extends AudioStreamPlayback{
  public _mix_resampled(_dst_buffer: AudioFrame*, _frame_count: number): number;
  public _get_stream_sampling_rate(): number;
  public begin_resample(): void;
}