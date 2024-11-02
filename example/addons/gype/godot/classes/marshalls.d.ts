
import { GodotObject } from "@godot/classes/godot_object";


export declare class Marshalls extends GodotObject{
  public variant_to_base64(_variant: any, _full_objects: boolean): String;
  public base64_to_variant(_base64_str: GDString | StringName | string, _allow_objects: boolean): any;
  public raw_to_base64(_array: PackedByteArray): String;
  public base64_to_raw(_base64_str: GDString | StringName | string): PackedByteArray;
  public utf8_to_base64(_utf8_str: GDString | StringName | string): String;
  public base64_to_utf8(_base64_str: GDString | StringName | string): String;
}