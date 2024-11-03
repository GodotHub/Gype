
import { AudioStream } from "@godot/classes/audio_stream";
export declare class AudioStreamGenerator extends AudioStream{
  public set_mix_rate(_hz: number): void;
  public get_mix_rate(): number;
  public set_buffer_length(_seconds: number): void;
  public get_buffer_length(): number;
  public get mix_rate(): number;
  public set mix_rate(value): void;
  public get buffer_length(): number;
  public set buffer_length(value): void;
}