
import { RefCounted } from "@godot/classes/ref_counted";
export declare class Thread extends RefCounted{
  public start(_callable: Callable, _priority: number = 1): number;
  public get_id(): String;
  public is_started(): boolean;
  public is_alive(): boolean;
  public wait_to_finish(): any;
  public
 static set_thread_safety_checks_enabled(_enabled: boolean): void;
  static Priority = {
    PRIORITY_LOW = 0,
    PRIORITY_NORMAL = 1,
    PRIORITY_HIGH = 2,
  }
}