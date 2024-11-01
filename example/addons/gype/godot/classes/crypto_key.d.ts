
import { Resource } from "@godot/classes/resource";

export declare class CryptoKey extends Resource{
  public save(_path: String | StringName | string, _public_only: boolean): number;
  public load(_path: String | StringName | string, _public_only: boolean): number;
  public is_public_only(): boolean;
  public save_to_string(_public_only: boolean): String;
  public load_from_string(_string_key: String | StringName | string, _public_only: boolean): number;
}