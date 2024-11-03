
import { AudioStream } from "@godot/classes/audio_stream";
export declare class AudioStreamPolyphonic extends AudioStream{
  public set_polyphony(_voices: number): void;
  public get_polyphony(): number;
  public get polyphony(): number;
  public set polyphony(value): void;
}