
import { Resource } from "@godot/classes/resource";

export declare class X509Certificate extends Resource{
  public save(_path: String | StringName | string): number;
  public load(_path: String | StringName | string): number;
  public save_to_string(): String;
  public load_from_string(_string: String | StringName | string): number;
}