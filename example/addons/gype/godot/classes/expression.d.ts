
import { Object } from "@godot/classes/object";
import { RefCounted } from "@godot/classes/ref_counted";

export declare class Expression extends RefCounted{
  public parse(_expression: String, _input_names: PackedStringArray): number;
  public execute(_inputs: GDArray, _base_instance: Object, _show_error: boolean, _const_calls_only: boolean): Variant;
  public has_execute_failed(): boolean;
  public get_error_text(): String;
}