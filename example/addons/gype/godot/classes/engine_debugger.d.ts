
import { ScriptLanguage } from "@godot/classes/script_language";
import { EngineProfiler } from "@godot/classes/engine_profiler";
import { Object } from "@godot/classes/object";

export declare class EngineDebugger extends Object{
  public is_active(): boolean;
  public register_profiler(_name: StringName, _profiler: EngineProfiler): void;
  public unregister_profiler(_name: StringName): void;
  public is_profiling(_name: StringName): boolean;
  public has_profiler(_name: StringName): boolean;
  public profiler_add_frame_data(_name: StringName, _data: GDArray): void;
  public profiler_enable(_name: StringName, _enable: boolean, _arguments: GDArray): void;
  public register_message_capture(_name: StringName, _callable: Callable): void;
  public unregister_message_capture(_name: StringName): void;
  public has_capture(_name: StringName): boolean;
  public line_poll(): void;
  public send_message(_message: String, _data: GDArray): void;
  public debug(_can_continue: boolean, _is_error_breakpoint: boolean): void;
  public script_debug(_language: ScriptLanguage, _can_continue: boolean, _is_error_breakpoint: boolean): void;
  public set_lines_left(_lines: number): void;
  public get_lines_left(): number;
  public set_depth(_depth: number): void;
  public get_depth(): number;
  public is_breakpoint(_line: number, _source: StringName): boolean;
  public is_skipping_breakpoints(): boolean;
  public insert_breakpoint(_line: number, _source: StringName): void;
  public remove_breakpoint(_line: number, _source: StringName): void;
  public clear_breakpoints(): void;
}