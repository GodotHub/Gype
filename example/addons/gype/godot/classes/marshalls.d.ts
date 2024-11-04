
import { GodotObject } from "@godot/classes/godot_object";
declare global {
export declare class _Marshalls extends GodotObject{
  public variant_to_base64(_variant: any, _full_objects: boolean = false): String;
  public base64_to_variant(_base64_str: GDString | StringName | string, _allow_objects: boolean = false): any;
  public raw_to_base64(_array: PackedByteArray): String;
  public base64_to_raw(_base64_str: GDString | StringName | string): PackedByteArray;
  public utf8_to_base64(_utf8_str: GDString | StringName | string): String;
  public base64_to_utf8(_base64_str: GDString | StringName | string): String;
}
const Marshalls: _Marshalls;
}