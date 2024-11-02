
import { Texture2D } from "@godot/classes/texture2d";
import { Resource } from "@godot/classes/resource";


export declare class VideoStreamPlayback extends Resource{
  public _stop(): void;
  public _play(): void;
  public _is_playing(): boolean;
  public _set_paused(_paused: boolean): void;
  public _is_paused(): boolean;
  public _get_length(): number;
  public _get_playback_position(): number;
  public _seek(_time: number): void;
  public _set_audio_track(_idx: number): void;
  public _get_texture(): Texture2D;
  public _update(_delta: number): void;
  public _get_channels(): number;
  public _get_mix_rate(): number;
  public mix_audio(_num_frames: number, _buffer: PackedFloat32Array, _offset: number): number;
}