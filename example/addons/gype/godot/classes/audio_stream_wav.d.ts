
import { AudioStream } from "@godot/classes/audio_stream";

export declare class AudioStreamWAV extends AudioStream{
  public set_data(_data: PackedByteArray): void;
  public get_data(): PackedByteArray;
  public set_format(_format: number): void;
  public get_format(): number;
  public set_loop_mode(_loop_mode: number): void;
  public get_loop_mode(): number;
  public set_loop_begin(_loop_begin: number): void;
  public get_loop_begin(): number;
  public set_loop_end(_loop_end: number): void;
  public get_loop_end(): number;
  public set_mix_rate(_mix_rate: number): void;
  public get_mix_rate(): number;
  public set_stereo(_stereo: boolean): void;
  public is_stereo(): boolean;
  public save_to_wav(_path: String): number;
  public get data(): PackedByteArray {
    get_data();
  }
  public set data(value: PackedByteArray): void {
    set_data(value);
  }
  public get format(): number {
    get_format();
  }
  public set format(value: number): void {
    set_format(value);
  }
  public get loop_mode(): number {
    get_loop_mode();
  }
  public set loop_mode(value: number): void {
    set_loop_mode(value);
  }
  public get loop_begin(): number {
    get_loop_begin();
  }
  public set loop_begin(value: number): void {
    set_loop_begin(value);
  }
  public get loop_end(): number {
    get_loop_end();
  }
  public set loop_end(value: number): void {
    set_loop_end(value);
  }
  public get mix_rate(): number {
    get_mix_rate();
  }
  public set mix_rate(value: number): void {
    set_mix_rate(value);
  }
  public get stereo(): boolean {
    is_stereo();
  }
  public set stereo(value: boolean): void {
    set_stereo(value);
  }
  static Format = {
    FORMAT_8_BITS = 0,
    FORMAT_16_BITS = 1,
    FORMAT_IMA_ADPCM = 2,
    FORMAT_QOA = 3,
  }
  static LoopMode = {
    LOOP_DISABLED = 0,
    LOOP_FORWARD = 1,
    LOOP_PINGPONG = 2,
    LOOP_BACKWARD = 3,
  }
}