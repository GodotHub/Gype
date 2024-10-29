
import { RefCounted } from "@godot/classes/ref_counted";

export declare class ConfigFile extends RefCounted{
  public set_value(_section: String, _key: String, _value: any): void;
  public get_value(_section: String, _key: String, _default: any): any;
  public has_section(_section: String): boolean;
  public has_section_key(_section: String, _key: String): boolean;
  public get_sections(): PackedStringArray;
  public get_section_keys(_section: String): PackedStringArray;
  public erase_section(_section: String): void;
  public erase_section_key(_section: String, _key: String): void;
  public load(_path: String): number;
  public parse(_data: String): number;
  public save(_path: String): number;
  public encode_to_text(): String;
  public load_encrypted(_path: String, _key: PackedByteArray): number;
  public load_encrypted_pass(_path: String, _password: String): number;
  public save_encrypted(_path: String, _key: PackedByteArray): number;
  public save_encrypted_pass(_path: String, _password: String): number;
  public clear(): void;
}