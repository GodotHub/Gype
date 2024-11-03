
import { RefCounted } from "@godot/classes/ref_counted";
export declare class ConfigFile extends RefCounted{
  public set_value(_section: GDString | StringName | string, _key: GDString | StringName | string, _value: any): void;
  public get_value(_section: GDString | StringName | string, _key: GDString | StringName | string, _default: any = null): any;
  public has_section(_section: GDString | StringName | string): boolean;
  public has_section_key(_section: GDString | StringName | string, _key: GDString | StringName | string): boolean;
  public get_sections(): PackedStringArray;
  public get_section_keys(_section: GDString | StringName | string): PackedStringArray;
  public erase_section(_section: GDString | StringName | string): void;
  public erase_section_key(_section: GDString | StringName | string, _key: GDString | StringName | string): void;
  public load(_path: GDString | StringName | string): number;
  public parse(_data: GDString | StringName | string): number;
  public save(_path: GDString | StringName | string): number;
  public encode_to_text(): String;
  public load_encrypted(_path: GDString | StringName | string, _key: PackedByteArray): number;
  public load_encrypted_pass(_path: GDString | StringName | string, _password: GDString | StringName | string): number;
  public save_encrypted(_path: GDString | StringName | string, _key: PackedByteArray): number;
  public save_encrypted_pass(_path: GDString | StringName | string, _password: GDString | StringName | string): number;
  public clear(): void;
}