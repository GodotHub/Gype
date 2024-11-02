
import { Control } from "@godot/classes/control";
import { RefCounted } from "@godot/classes/ref_counted";


export declare class EditorDebuggerSession extends RefCounted{
  public send_message(_message: GDString | StringName | string, _data: GDArray): void;
  public toggle_profiler(_profiler: GDString | StringName | string, _enable: boolean, _data: GDArray): void;
  public is_breaked(): boolean;
  public is_debuggable(): boolean;
  public is_active(): boolean;
  public add_session_tab(_control: Control): void;
  public remove_session_tab(_control: Control): void;
  public set_breakpoint(_path: GDString | StringName | string, _line: number, _enabled: boolean): void;
  public get started(): Signal;
  public get stopped(): Signal;
  public get breaked(): Signal;
  public get continued(): Signal;
}