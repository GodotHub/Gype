
import { AudioEffect } from "@godot/classes/audio_effect";
export declare class AudioEffectPitchShift extends AudioEffect{
  public set_pitch_scale(_rate: number): void;
  public get_pitch_scale(): number;
  public set_oversampling(_amount: number): void;
  public get_oversampling(): number;
  public set_fft_size(_size: number): void;
  public get_fft_size(): number;
  public get pitch_scale(): number;
  public set pitch_scale(value): void;
  public get oversampling(): number;
  public set oversampling(value): void;
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