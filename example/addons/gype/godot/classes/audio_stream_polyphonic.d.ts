
import { AudioStream } from "@godot/classes/audio_stream";

export declare class AudioStreamPolyphonic extends AudioStream{
  public set_polyphony(_voices: number): void;
  public get_polyphony(): number;
  public get polyphony(): number {
    get_polyphony();
  }
  public set polyphony(value): void {
    set_polyphony(value);
  }
}