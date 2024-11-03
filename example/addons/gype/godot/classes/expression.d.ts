
import { RefCounted } from "@godot/classes/ref_counted";
import { GodotObject } from "@godot/classes/godot_object";
export declare class Expression extends RefCounted{
  public parse(_expression: GDString | StringName | string, _input_names: PackedStringArray = PackedStringArray()): number;
  public execute(_inputs: GDArray = [], _base_instance: GodotObject = null, _show_error: boolean = true, _const_calls_only: boolean = false): any;
  public has_execute_failed(): boolean;
  public get_error_text(): String;
}