
import { Node } from "@godot/classes/node";
export declare class Timer extends Node{
  public set_wait_time(_time_sec: number): void;
  public get_wait_time(): number;
  public set_one_shot(_enable: boolean): void;
  public is_one_shot(): boolean;
  public set_autostart(_enable: boolean): void;
  public has_autostart(): boolean;
  public start(_time_sec: number = -1): void;
  public stop(): void;
  public set_paused(_paused: boolean): void;
  public is_paused(): boolean;
  public is_stopped(): boolean;
  public get_time_left(): number;
  public set_timer_process_callback(_callback: number): void;
  public get_timer_process_callback(): number;
  public get process_callback(): number;
  public set process_callback(value): void;
  public get wait_time(): number;
  public set wait_time(value): void;
  public get one_shot(): boolean;
  public set one_shot(value): void;
  public get autostart(): boolean;
  public set autostart(value): void;
  public get paused(): boolean;
  public set paused(value): void;
  public get time_left(): number;
  static TimerProcessCallback = {
    TIMER_PROCESS_PHYSICS = 0,
    TIMER_PROCESS_IDLE = 1,
  }
  public get timeout(): Signal;
}