
import { RefCounted } from "@godot/classes/ref_counted";
import { Control } from "@godot/classes/control";

export declare class EditorDebuggerSession extends RefCounted{
  public send_message(_message: String | StringName | string, _data: GDArray): void;
  public toggle_profiler(_profiler: String | StringName | string, _enable: boolean, _data: GDArray): void;
  public is_breaked(): boolean;
  public is_debuggable(): boolean;
  public is_active(): boolean;
  public add_session_tab(_control: Control): void;
  public remove_session_tab(_control: Control): void;
  public set_breakpoint(_path: String | StringName | string, _line: number, _enabled: boolean): void;
  public const started: string = "started";
  public const stopped: string = "stopped";
  public const breaked: string = "breaked";
  public const continued: string = "continued";
}