
import { AudioStream } from "@godot/classes/audio_stream";


export declare class AudioStreamInteractive extends AudioStream{
  public set_clip_count(_clip_count: number): void;
  public get_clip_count(): number;
  public set_initial_clip(_clip_index: number): void;
  public get_initial_clip(): number;
  public set_clip_name(_clip_index: number, _name: GDString | StringName | string): void;
  public get_clip_name(_clip_index: number): StringName;
  public set_clip_stream(_clip_index: number, _stream: AudioStream): void;
  public get_clip_stream(_clip_index: number): AudioStream;
  public set_clip_auto_advance(_clip_index: number, _mode: number): void;
  public get_clip_auto_advance(_clip_index: number): number;
  public set_clip_auto_advance_next_clip(_clip_index: number, _auto_advance_next_clip: number): void;
  public get_clip_auto_advance_next_clip(_clip_index: number): number;
  public add_transition(_from_clip: number, _to_clip: number, _from_time: number, _to_time: number, _fade_mode: number, _fade_beats: number, _use_filler_clip: boolean, _filler_clip: number, _hold_previous: boolean): void;
  public has_transition(_from_clip: number, _to_clip: number): boolean;
  public erase_transition(_from_clip: number, _to_clip: number): void;
  public get_transition_list(): PackedInt32Array;
  public get_transition_from_time(_from_clip: number, _to_clip: number): number;
  public get_transition_to_time(_from_clip: number, _to_clip: number): number;
  public get_transition_fade_mode(_from_clip: number, _to_clip: number): number;
  public get_transition_fade_beats(_from_clip: number, _to_clip: number): number;
  public is_transition_using_filler_clip(_from_clip: number, _to_clip: number): boolean;
  public get_transition_filler_clip(_from_clip: number, _to_clip: number): number;
  public is_transition_holding_previous(_from_clip: number, _to_clip: number): boolean;
  public get initial_clip(): number;
  public set initial_clip(value): void;
  public get clip_count(): number;
  public set clip_count(value): void;
  static TransitionFromTime = {
    TRANSITION_FROM_TIME_IMMEDIATE = 0,
    TRANSITION_FROM_TIME_NEXT_BEAT = 1,
    TRANSITION_FROM_TIME_NEXT_BAR = 2,
    TRANSITION_FROM_TIME_END = 3,
  }
  static TransitionToTime = {
    TRANSITION_TO_TIME_SAME_POSITION = 0,
    TRANSITION_TO_TIME_START = 1,
  }
  static FadeMode = {
    FADE_DISABLED = 0,
    FADE_IN = 1,
    FADE_OUT = 2,
    FADE_CROSS = 3,
    FADE_AUTOMATIC = 4,
  }
  static AutoAdvanceMode = {
    AUTO_ADVANCE_DISABLED = 0,
    AUTO_ADVANCE_ENABLED = 1,
    AUTO_ADVANCE_RETURN_TO_HOLD = 2,
  }
}