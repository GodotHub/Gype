
import { EditorDebuggerSession } from "@godot/classes/editor_debugger_session";
import { Script } from "@godot/classes/script";
import { RefCounted } from "@godot/classes/ref_counted";

export declare class EditorDebuggerPlugin extends RefCounted{
  public _setup_session(_session_id: number): void;
  public _has_capture(_capture: String | StringName | string): boolean;
  public _capture(_message: String | StringName | string, _data: GDArray, _session_id: number): boolean;
  public _goto_script_line(_script: Script, _line: number): void;
  public _breakpoints_cleared_in_tree(): void;
  public _breakpoint_set_in_tree(_script: Script, _line: number, _enabled: boolean): void;
  public get_session(_id: number): EditorDebuggerSession;
  public get_sessions(): GDArray;
}