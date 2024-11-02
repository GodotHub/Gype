
import { AudioEffect } from "@godot/classes/audio_effect";


export declare class AudioEffectDelay extends AudioEffect{
  public set_dry(_amount: number): void;
  public get_dry(): number;
  public set_tap1_active(_amount: boolean): void;
  public is_tap1_active(): boolean;
  public set_tap1_delay_ms(_amount: number): void;
  public get_tap1_delay_ms(): number;
  public set_tap1_level_db(_amount: number): void;
  public get_tap1_level_db(): number;
  public set_tap1_pan(_amount: number): void;
  public get_tap1_pan(): number;
  public set_tap2_active(_amount: boolean): void;
  public is_tap2_active(): boolean;
  public set_tap2_delay_ms(_amount: number): void;
  public get_tap2_delay_ms(): number;
  public set_tap2_level_db(_amount: number): void;
  public get_tap2_level_db(): number;
  public set_tap2_pan(_amount: number): void;
  public get_tap2_pan(): number;
  public set_feedback_active(_amount: boolean): void;
  public is_feedback_active(): boolean;
  public set_feedback_delay_ms(_amount: number): void;
  public get_feedback_delay_ms(): number;
  public set_feedback_level_db(_amount: number): void;
  public get_feedback_level_db(): number;
  public set_feedback_lowpass(_amount: number): void;
  public get_feedback_lowpass(): number;
  public get dry(): number;
  public set dry(value): void;
  public get tap1_active(): boolean;
  public set tap1_active(value): void;
  public get tap1_delay_ms(): number;
  public set tap1_delay_ms(value): void;
  public get tap1_level_db(): number;
  public set tap1_level_db(value): void;
  public get tap1_pan(): number;
  public set tap1_pan(value): void;
  public get tap2_active(): boolean;
  public set tap2_active(value): void;
  public get tap2_delay_ms(): number;
  public set tap2_delay_ms(value): void;
  public get tap2_level_db(): number;
  public set tap2_level_db(value): void;
  public get tap2_pan(): number;
  public set tap2_pan(value): void;
  public get feedback_active(): boolean;
  public set feedback_active(value): void;
  public get feedback_delay_ms(): number;
  public set feedback_delay_ms(value): void;
  public get feedback_level_db(): number;
  public set feedback_level_db(value): void;
  public get feedback_lowpass(): number;
  public set feedback_lowpass(value): void;
}