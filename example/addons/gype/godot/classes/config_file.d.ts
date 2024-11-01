
import { RefCounted } from "@godot/classes/ref_counted";

export declare class ConfigFile extends RefCounted{
  public set_value(_section: String | StringName | string, _key: String | StringName | string, _value: any): void;
  public get_value(_section: String | StringName | string, _key: String | StringName | string, _default: any): any;
  public has_section(_section: String | StringName | string): boolean;
  public has_section_key(_section: String | StringName | string, _key: String | StringName | string): boolean;
  public get_sections(): PackedStringArray;
  public get_section_keys(_section: String | StringName | string): PackedStringArray;
  public erase_section(_section: String | StringName | string): void;
  public erase_section_key(_section: String | StringName | string, _key: String | StringName | string): void;
  public load(_path: String | StringName | string): number;
  public parse(_data: String | StringName | string): number;
  public save(_path: String | StringName | string): number;
  public encode_to_text(): String;
  public load_encrypted(_path: String | StringName | string, _key: PackedByteArray): number;
  public load_encrypted_pass(_path: String | StringName | string, _password: String | StringName | string): number;
  public save_encrypted(_path: String | StringName | string, _key: PackedByteArray): number;
  public save_encrypted_pass(_path: String | StringName | string, _password: String | StringName | string): number;
  public clear(): void;
}