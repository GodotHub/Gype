
import { AudioEffectInstance } from "@godot/classes/audio_effect_instance";


export declare class AudioEffectSpectrumAnalyzerInstance extends AudioEffectInstance{
  public get_magnitude_for_frequency_range(_from_hz: number, _to_hz: number, _mode: number): Vector2;
  static MagnitudeMode = {
    MAGNITUDE_AVERAGE = 0,
    MAGNITUDE_MAX = 1,
  }
}