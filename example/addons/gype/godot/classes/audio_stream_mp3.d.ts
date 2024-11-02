
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
  public get data(): PackedByteArray;
  public set data(value): void;
  public get bpm(): number;
  public set bpm(value): void;
  public get beat_count(): number;
  public set beat_count(value): void;
  public get bar_beats(): number;
  public set bar_beats(value): void;
  public get loop(): boolean;
  public set loop(value): void;
  public get loop_offset(): number;
  public set loop_offset(value): void;
}