
import { AudioStreamPlayback } from "@godot/classes/audio_stream_playback";


export declare class AudioStreamPlaybackResampled extends AudioStreamPlayback{
  public _get_stream_sampling_rate(): number;
  public begin_resample(): void;
}