
import { Curve } from "@godot/classes/curve";
import { AnimationNodeSync } from "@godot/classes/animation_node_sync";
export declare class AnimationNodeOneShot extends AnimationNodeSync{
  public set_fadein_time(_time: number): void;
  public get_fadein_time(): number;
  public set_fadein_curve(_curve: Curve): void;
  public get_fadein_curve(): Curve;
  public set_fadeout_time(_time: number): void;
  public get_fadeout_time(): number;
  public set_fadeout_curve(_curve: Curve): void;
  public get_fadeout_curve(): Curve;
  public set_break_loop_at_end(_enable: boolean): void;
  public is_loop_broken_at_end(): boolean;
  public set_autorestart(_active: boolean): void;
  public has_autorestart(): boolean;
  public set_autorestart_delay(_time: number): void;
  public get_autorestart_delay(): number;
  public set_autorestart_random_delay(_time: number): void;
  public get_autorestart_random_delay(): number;
  public set_mix_mode(_mode: number): void;
  public get_mix_mode(): number;
  public get mix_mode(): number;
  public set mix_mode(value): void;
  public get fadein_time(): number;
  public set fadein_time(value): void;
  public get fadein_curve(): Curve;
  public set fadein_curve(value): void;
  public get fadeout_time(): number;
  public set fadeout_time(value): void;
  public get fadeout_curve(): Curve;
  public set fadeout_curve(value): void;
  public get break_loop_at_end(): boolean;
  public set break_loop_at_end(value): void;
  public get autorestart(): boolean;
  public set autorestart(value): void;
  public get autorestart_delay(): number;
  public set autorestart_delay(value): void;
  public get autorestart_random_delay(): number;
  public set autorestart_random_delay(value): void;
  static OneShotRequest = {
    ONE_SHOT_REQUEST_NONE = 0,
    ONE_SHOT_REQUEST_FIRE = 1,
    ONE_SHOT_REQUEST_ABORT = 2,
    ONE_SHOT_REQUEST_FADE_OUT = 3,
  }
  static MixMode = {
    MIX_MODE_BLEND = 0,
    MIX_MODE_ADD = 1,
  }
}