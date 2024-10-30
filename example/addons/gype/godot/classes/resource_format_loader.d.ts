
import { RefCounted } from "@godot/classes/ref_counted";

export declare class ResourceFormatLoader extends RefCounted{
  public _get_recognized_extensions(): PackedStringArray;
  public _recognize_path(_path: String | StringName | string, _type: String | StringName | string): boolean;
  public _handles_type(_type: String | StringName | string): boolean;
  public _get_resource_type(_path: String | StringName | string): String;
  public _get_resource_script_class(_path: String | StringName | string): String;
  public _get_resource_uid(_path: String | StringName | string): number;
  public _get_dependencies(_path: String | StringName | string, _add_types: boolean): PackedStringArray;
  public _rename_dependencies(_path: String | StringName | string, _renames: Dictionary): number;
  public _exists(_path: String | StringName | string): boolean;
  public _get_classes_used(_path: String | StringName | string): PackedStringArray;
  public _load(_path: String | StringName | string, _original_path: String | StringName | string, _use_sub_threads: boolean, _cache_mode: number): any;
  static CacheMode = {
    CACHE_MODE_IGNORE = 0,
    CACHE_MODE_REUSE = 1,
    CACHE_MODE_REPLACE = 2,
    CACHE_MODE_IGNORE_DEEP = 3,
    CACHE_MODE_REPLACE_DEEP = 4,
  }
}