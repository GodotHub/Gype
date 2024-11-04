
import { GodotObject } from "@godot/classes/godot_object";
import { ResourceFormatLoader } from "@godot/classes/resource_format_loader";
import { Resource } from "@godot/classes/resource";
declare global {
export declare class _ResourceLoader extends GodotObject{
  public load_threaded_request(_path: GDString | StringName | string, _type_hint: GDString | StringName | string = "", _use_sub_threads: boolean = false, _cache_mode: number = 1): number;
  public load_threaded_get_status(_path: GDString | StringName | string, _progress: GDArray = []): number;
  public load_threaded_get(_path: GDString | StringName | string): Resource;
  public load(_path: GDString | StringName | string, _type_hint: GDString | StringName | string = "", _cache_mode: number = 1): Resource;
  public get_recognized_extensions_for_type(_type: GDString | StringName | string): PackedStringArray;
  public add_resource_format_loader(_format_loader: ResourceFormatLoader, _at_front: boolean = false): void;
  public remove_resource_format_loader(_format_loader: ResourceFormatLoader): void;
  public set_abort_on_missing_resources(_abort: boolean): void;
  public get_dependencies(_path: GDString | StringName | string): PackedStringArray;
  public has_cached(_path: GDString | StringName | string): boolean;
  public exists(_path: GDString | StringName | string, _type_hint: GDString | StringName | string = ""): boolean;
  public get_resource_uid(_path: GDString | StringName | string): number;
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
const ResourceLoader: _ResourceLoader;
}