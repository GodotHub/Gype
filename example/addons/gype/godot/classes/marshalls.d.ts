
import { Object } from "@godot/classes/object";

export declare class Marshalls extends Object{
  public variant_to_base64(_variant: any, _full_objects: boolean): String;
  public base64_to_variant(_base64_str: String, _allow_objects: boolean): any;
  public raw_to_base64(_array: PackedByteArray): String;
  public base64_to_raw(_base64_str: String): PackedByteArray;
  public utf8_to_base64(_utf8_str: String): String;
  public base64_to_utf8(_base64_str: String): String;
}