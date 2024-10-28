
import { RefCounted } from "@godot/classes/ref_counted";

export declare class ResourceFormatLoader extends RefCounted{
  public _get_recognized_extensions(): PackedStringArray;
  public _recognize_path(_path: String, _type: StringName): boolean;
  public _handles_type(_type: StringName): boolean;
  public _get_resource_type(_path: String): String;
  public _get_resource_script_class(_path: String): String;
  public _get_resource_uid(_path: String): number;
  public _get_dependencies(_path: String, _add_types: boolean): PackedStringArray;
  public _rename_dependencies(_path: String, _renames: Dictionary): number;
  public _exists(_path: String): boolean;
  public _get_classes_used(_path: String): PackedStringArray;
  public _load(_path: String, _original_path: String, _use_sub_threads: boolean, _cache_mode: number): Variant;
  static CacheMode = {
    CACHE_MODE_IGNORE = 0,
    CACHE_MODE_REUSE = 1,
    CACHE_MODE_REPLACE = 2,
    CACHE_MODE_IGNORE_DEEP = 3,
    CACHE_MODE_REPLACE_DEEP = 4,
  }
}