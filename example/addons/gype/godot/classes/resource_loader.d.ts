
import { Resource } from "@godot/classes/resource";
import { ResourceFormatLoader } from "@godot/classes/resource_format_loader";
import { GodotObject } from "@godot/classes/godot_object";

export declare class ResourceLoader extends GodotObject{
  public load_threaded_request(_path: String | StringName | string, _type_hint: String | StringName | string, _use_sub_threads: boolean, _cache_mode: number): number;
  public load_threaded_get_status(_path: String | StringName | string, _progress: GDArray): number;
  public load_threaded_get(_path: String | StringName | string): Resource;
  public load(_path: String | StringName | string, _type_hint: String | StringName | string, _cache_mode: number): Resource;
  public get_recognized_extensions_for_type(_type: String | StringName | string): PackedStringArray;
  public add_resource_format_loader(_format_loader: ResourceFormatLoader, _at_front: boolean): void;
  public remove_resource_format_loader(_format_loader: ResourceFormatLoader): void;
  public set_abort_on_missing_resources(_abort: boolean): void;
  public get_dependencies(_path: String | StringName | string): PackedStringArray;
  public has_cached(_path: String | StringName | string): boolean;
  public exists(_path: String | StringName | string, _type_hint: String | StringName | string): boolean;
  public get_resource_uid(_path: String | StringName | string): number;
  static ThreadLoadStatus = {
    THREAD_LOAD_INVALID_RESOURCE = 0,
    THREAD_LOAD_IN_PROGRESS = 1,
    THREAD_LOAD_FAILED = 2,
    THREAD_LOAD_LOADED = 3,
  }
  static CacheMode = {
    CACHE_MODE_IGNORE = 0,
    CACHE_MODE_REUSE = 1,
    CACHE_MODE_REPLACE = 2,
    CACHE_MODE_IGNORE_DEEP = 3,
    CACHE_MODE_REPLACE_DEEP = 4,
  }
}