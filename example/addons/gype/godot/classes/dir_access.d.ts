
import { RefCounted } from "@godot/classes/ref_counted";
export declare class DirAccess extends RefCounted{
  public
 static open(_path: GDString | StringName | string): DirAccess;
  public
 static get_open_error(): number;
  public list_dir_begin(): number;
  public get_next(): String;
  public current_is_dir(): boolean;
  public list_dir_end(): void;
  public get_files(): PackedStringArray;
  public
 static get_files_at(_path: GDString | StringName | string): PackedStringArray;
  public get_directories(): PackedStringArray;
  public
 static get_directories_at(_path: GDString | StringName | string): PackedStringArray;
  public
 static get_drive_count(): number;
  public
 static get_drive_name(_idx: number): String;
  public get_current_drive(): number;
  public change_dir(_to_dir: GDString | StringName | string): number;
  public get_current_dir(_include_drive: boolean = true): String;
  public make_dir(_path: GDString | StringName | string): number;
  public
 static make_dir_absolute(_path: GDString | StringName | string): number;
  public make_dir_recursive(_path: GDString | StringName | string): number;
  public
 static make_dir_recursive_absolute(_path: GDString | StringName | string): number;
  public file_exists(_path: GDString | StringName | string): boolean;
  public dir_exists(_path: GDString | StringName | string): boolean;
  public
 static dir_exists_absolute(_path: GDString | StringName | string): boolean;
  public get_space_left(): number;
  public copy(_from: GDString | StringName | string, _to: GDString | StringName | string, _chmod_flags: number = -1): number;
  public
 static copy_absolute(_from: GDString | StringName | string, _to: GDString | StringName | string, _chmod_flags: number = -1): number;
  public rename(_from: GDString | StringName | string, _to: GDString | StringName | string): number;
  public
 static rename_absolute(_from: GDString | StringName | string, _to: GDString | StringName | string): number;
  public remove(_path: GDString | StringName | string): number;
  public
 static remove_absolute(_path: GDString | StringName | string): number;
  public is_link(_path: GDString | StringName | string): boolean;
  public read_link(_path: GDString | StringName | string): String;
  public create_link(_source: GDString | StringName | string, _target: GDString | StringName | string): number;
  public set_include_navigational(_enable: boolean): void;
  public get_include_navigational(): boolean;
  public set_include_hidden(_enable: boolean): void;
  public get_include_hidden(): boolean;
  public is_case_sensitive(_path: GDString | StringName | string): boolean;
  public get include_navigational(): boolean;
  public set include_navigational(value): void;
  public get include_hidden(): boolean;
  public set include_hidden(value): void;
}