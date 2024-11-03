
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
  public save_to_wav(_path: GDString | StringName | string): number;
  public get data(): PackedByteArray;
  public set data(value): void;
  public get format(): number;
  public set format(value): void;
  public get loop_mode(): number;
  public set loop_mode(value): void;
  public get loop_begin(): number;
  public set loop_begin(value): void;
  public get loop_end(): number;
  public set loop_end(value): void;
  public get mix_rate(): number;
  public set mix_rate(value): void;
  public get stereo(): boolean;
  public set stereo(value): void;
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