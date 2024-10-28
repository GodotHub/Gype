
import { AudioEffect } from "@godot/classes/audio_effect";

export declare class AudioEffectPitchShift extends AudioEffect{
  public set_pitch_scale(_rate: number): void;
  public get_pitch_scale(): number;
  public set_oversampling(_amount: number): void;
  public get_oversampling(): number;
  public set_fft_size(_size: number): void;
  public get_fft_size(): number;
  public get pitch_scale(): number {
    get_pitch_scale();
  }
  public set pitch_scale(value: number): void {
    set_pitch_scale(value);
  }
  public get oversampling(): number {
    get_oversampling();
  }
  public set oversampling(value: number): void {
    set_oversampling(value);
  }
  public get fft_size(): number {
    get_fft_size();
  }
  public set fft_size(value: number): void {
    set_fft_size(value);
  }
  static FFTSize = {
    FFT_SIZE_256 = 0,
    FFT_SIZE_512 = 1,
    FFT_SIZE_1024 = 2,
    FFT_SIZE_2048 = 3,
    FFT_SIZE_4096 = 4,
    FFT_SIZE_MAX = 5,
  }
}