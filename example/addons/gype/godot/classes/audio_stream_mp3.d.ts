
import { AudioStream } from "@godot/classes/audio_stream";

export declare class AudioStreamMP3 extends AudioStream{
  public set_data(_data: PackedByteArray): void;
  public get_data(): PackedByteArray;
  public set_loop(_enable: boolean): void;
  public has_loop(): boolean;
  public set_loop_offset(_seconds: number): void;
  public get_loop_offset(): number;
  public set_bpm(_bpm: number): void;
  public get_bpm(): number;
  public set_beat_count(_count: number): void;
  public get_beat_count(): number;
  public set_bar_beats(_count: number): void;
  public get_bar_beats(): number;
  public get data(): PackedByteArray {
    get_data();
  }
  public set data(value): void {
    set_data(value);
  }
  public get bpm(): number {
    get_bpm();
  }
  public set bpm(value): void {
    set_bpm(value);
  }
  public get beat_count(): number {
    get_beat_count();
  }
  public set beat_count(value): void {
    set_beat_count(value);
  }
  public get bar_beats(): number {
    get_bar_beats();
  }
  public set bar_beats(value): void {
    set_bar_beats(value);
  }
  public get loop(): boolean {
    has_loop();
  }
  public set loop(value): void {
    set_loop(value);
  }
  public get loop_offset(): number {
    get_loop_offset();
  }
  public set loop_offset(value): void {
    set_loop_offset(value);
  }
}