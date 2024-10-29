
import { RefCounted } from "@godot/classes/ref_counted";
import { Control } from "@godot/classes/control";

export declare class EditorDebuggerSession extends RefCounted{
  public send_message(_message: String, _data: GDArray): void;
  public toggle_profiler(_profiler: String, _enable: boolean, _data: GDArray): void;
  public is_breaked(): boolean;
  public is_debuggable(): boolean;
  public is_active(): boolean;
  public add_session_tab(_control: Control): void;
  public remove_session_tab(_control: Control): void;
  public set_breakpoint(_path: String, _line: number, _enabled: boolean): void;
}