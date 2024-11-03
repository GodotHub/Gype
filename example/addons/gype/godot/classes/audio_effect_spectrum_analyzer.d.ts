
import { AudioEffect } from "@godot/classes/audio_effect";
export declare class AudioEffectSpectrumAnalyzer extends AudioEffect{
  public set_buffer_length(_seconds: number): void;
  public get_buffer_length(): number;
  public set_tap_back_pos(_seconds: number): void;
  public get_tap_back_pos(): number;
  public set_fft_size(_size: number): void;
  public get_fft_size(): number;
  public get buffer_length(): number;
  public set buffer_length(value): void;
  public get tap_back_pos(): number;
  public set tap_back_pos(value): void;
  public get fft_size(): number;
  public set fft_size(value): void;
  static FFTSize = {
    FFT_SIZE_256 = 0,
    FFT_SIZE_512 = 1,
    FFT_SIZE_1024 = 2,
    FFT_SIZE_2048 = 3,
    FFT_SIZE_4096 = 4,
    FFT_SIZE_MAX = 5,
  }
}