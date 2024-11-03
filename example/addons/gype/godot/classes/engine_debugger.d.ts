
import { GodotObject } from "@godot/classes/godot_object";
import { ScriptLanguage } from "@godot/classes/script_language";
import { EngineProfiler } from "@godot/classes/engine_profiler";
declare global {
export declare class _EngineDebugger extends GodotObject{
  public is_active(): boolean;
  public register_profiler(_name: GDString | StringName | string, _profiler: EngineProfiler): void;
  public unregister_profiler(_name: GDString | StringName | string): void;
  public is_profiling(_name: GDString | StringName | string): boolean;
  public has_profiler(_name: GDString | StringName | string): boolean;
  public profiler_add_frame_data(_name: GDString | StringName | string, _data: GDArray): void;
  public profiler_enable(_name: GDString | StringName | string, _enable: boolean, _arguments: GDArray = []): void;
  public register_message_capture(_name: GDString | StringName | string, _callable: Callable): void;
  public unregister_message_capture(_name: GDString | StringName | string): void;
  public has_capture(_name: GDString | StringName | string): boolean;
  public line_poll(): void;
  public send_message(_message: GDString | StringName | string, _data: GDArray): void;
  public debug(_can_continue: boolean = true, _is_error_breakpoint: boolean = false): void;
  public script_debug(_language: ScriptLanguage, _can_continue: boolean = true, _is_error_breakpoint: boolean = false): void;
  public set_lines_left(_lines: number): void;
  public get_lines_left(): number;
  public set_depth(_depth: number): void;
  public get_depth(): number;
  public is_breakpoint(_line: number, _source: GDString | StringName | string): boolean;
  public is_skipping_breakpoints(): boolean;
  public insert_breakpoint(_line: number, _source: GDString | StringName | string): void;
  public remove_breakpoint(_line: number, _source: GDString | StringName | string): void;
  public clear_breakpoints(): void;
}
}
declare global {
  const EngineDebugger: _EngineDebugger;
}