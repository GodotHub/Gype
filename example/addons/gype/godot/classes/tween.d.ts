
import { IntervalTweener } from "@godot/classes/interval_tweener";
import { Node } from "@godot/classes/node";
import { MethodTweener } from "@godot/classes/method_tweener";
import { PropertyTweener } from "@godot/classes/property_tweener";
import { RefCounted } from "@godot/classes/ref_counted";
import { CallbackTweener } from "@godot/classes/callback_tweener";
import { GodotObject } from "@godot/classes/godot_object";
export declare class Tween extends RefCounted{
  public tween_property(_object: GodotObject, _property: GDString | NodePath | string, _final_val: any, _duration: number): PropertyTweener;
  public tween_interval(_time: number): IntervalTweener;
  public tween_callback(_callback: Callable): CallbackTweener;
  public tween_method(_method: Callable, _from: any, _to: any, _duration: number): MethodTweener;
  public custom_step(_delta: number): boolean;
  public stop(): void;
  public pause(): void;
  public play(): void;
  public kill(): void;
  public get_total_elapsed_time(): number;
  public is_running(): boolean;
  public is_valid(): boolean;
  public bind_node(_node: Node): Tween;
  public set_process_mode(_mode: number): Tween;
  public set_pause_mode(_mode: number): Tween;
  public set_parallel(_parallel: boolean = true): Tween;
  public set_loops(_loops: number = 0): Tween;
  public get_loops_left(): number;
  public set_speed_scale(_speed: number): Tween;
  public set_trans(_trans: number): Tween;
  public set_ease(_ease: number): Tween;
  public parallel(): Tween;
  public chain(): Tween;
  public
 static interpolate_value(_initial_value: any, _delta_value: any, _elapsed_time: number, _duration: number, _trans_type: number, _ease_type: number): any;
  static TweenProcessMode = {
    TWEEN_PROCESS_PHYSICS = 0,
    TWEEN_PROCESS_IDLE = 1,
  }
  static TweenPauseMode = {
    TWEEN_PAUSE_BOUND = 0,
    TWEEN_PAUSE_STOP = 1,
    TWEEN_PAUSE_PROCESS = 2,
  }
  static TransitionType = {
    TRANS_LINEAR = 0,
    TRANS_SINE = 1,
    TRANS_QUINT = 2,
    TRANS_QUART = 3,
    TRANS_QUAD = 4,
    TRANS_EXPO = 5,
    TRANS_ELASTIC = 6,
    TRANS_CUBIC = 7,
    TRANS_CIRC = 8,
    TRANS_BOUNCE = 9,
    TRANS_BACK = 10,
    TRANS_SPRING = 11,
  }
  static EaseType = {
    EASE_IN = 0,
    EASE_OUT = 1,
    EASE_IN_OUT = 2,
    EASE_OUT_IN = 3,
  }
  public get step_finished(): Signal;
  public get loop_finished(): Signal;
  public get finished(): Signal;
}