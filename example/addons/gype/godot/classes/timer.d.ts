
import { Node } from "@godot/classes/node";

export declare class Timer extends Node{
  public set_wait_time(_time_sec: number): void;
  public get_wait_time(): number;
  public set_one_shot(_enable: boolean): void;
  public is_one_shot(): boolean;
  public set_autostart(_enable: boolean): void;
  public has_autostart(): boolean;
  public start(_time_sec: number): void;
  public stop(): void;
  public set_paused(_paused: boolean): void;
  public is_paused(): boolean;
  public is_stopped(): boolean;
  public get_time_left(): number;
  public set_timer_process_callback(_callback: number): void;
  public get_timer_process_callback(): number;
  public get process_callback(): number {
    get_timer_process_callback();
  }
  public set process_callback(value: number): void {
    set_timer_process_callback(value);
  }
  public get wait_time(): number {
    get_wait_time();
  }
  public set wait_time(value: number): void {
    set_wait_time(value);
  }
  public get one_shot(): boolean {
    is_one_shot();
  }
  public set one_shot(value: boolean): void {
    set_one_shot(value);
  }
  public get autostart(): boolean {
    has_autostart();
  }
  public set autostart(value: boolean): void {
    set_autostart(value);
  }
  public get paused(): boolean {
    is_paused();
  }
  public set paused(value: boolean): void {
    set_paused(value);
  }
  public get time_left(): number {
    get_time_left();
  }
  static TimerProcessCallback = {
    TIMER_PROCESS_PHYSICS = 0,
    TIMER_PROCESS_IDLE = 1,
  }
}