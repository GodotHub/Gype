
import { RefCounted } from "@godot/classes/ref_counted";

export declare class DirAccess extends RefCounted{
  public open(_path: String | StringName | string): DirAccess;
  public get_open_error(): number;
  public list_dir_begin(): number;
  public get_next(): String;
  public current_is_dir(): boolean;
  public list_dir_end(): void;
  public get_files(): PackedStringArray;
  public get_files_at(_path: String | StringName | string): PackedStringArray;
  public get_directories(): PackedStringArray;
  public get_directories_at(_path: String | StringName | string): PackedStringArray;
  public get_drive_count(): number;
  public get_drive_name(_idx: number): String;
  public get_current_drive(): number;
  public change_dir(_to_dir: String | StringName | string): number;
  public get_current_dir(_include_drive: boolean): String;
  public make_dir(_path: String | StringName | string): number;
  public make_dir_absolute(_path: String | StringName | string): number;
  public make_dir_recursive(_path: String | StringName | string): number;
  public make_dir_recursive_absolute(_path: String | StringName | string): number;
  public file_exists(_path: String | StringName | string): boolean;
  public dir_exists(_path: String | StringName | string): boolean;
  public dir_exists_absolute(_path: String | StringName | string): boolean;
  public get_space_left(): number;
  public copy(_from: String | StringName | string, _to: String | StringName | string, _chmod_flags: number): number;
  public copy_absolute(_from: String | StringName | string, _to: String | StringName | string, _chmod_flags: number): number;
  public rename(_from: String | StringName | string, _to: String | StringName | string): number;
  public rename_absolute(_from: String | StringName | string, _to: String | StringName | string): number;
  public remove(_path: String | StringName | string): number;
  public remove_absolute(_path: String | StringName | string): number;
  public is_link(_path: String | StringName | string): boolean;
  public read_link(_path: String | StringName | string): String;
  public create_link(_source: String | StringName | string, _target: String | StringName | string): number;
  public set_include_navigational(_enable: boolean): void;
  public get_include_navigational(): boolean;
  public set_include_hidden(_enable: boolean): void;
  public get_include_hidden(): boolean;
  public is_case_sensitive(_path: String | StringName | string): boolean;
  public get include_navigational(): boolean {
    get_include_navigational();
  }
  public set include_navigational(value): void {
    set_include_navigational(value);
  }
  public get include_hidden(): boolean {
    get_include_hidden();
  }
  public set include_hidden(value): void {
    set_include_hidden(value);
  }
}