
import { Resource } from "@godot/classes/resource";
import { RefCounted } from "@godot/classes/ref_counted";
export declare class ResourceFormatSaver extends RefCounted{
  public _save(_resource: Resource, _path: GDString | StringName | string, _flags: number): number;
  public _set_uid(_path: GDString | StringName | string, _uid: number): number;
  public _recognize(_resource: Resource): boolean;
  public _get_recognized_extensions(_resource: Resource): PackedStringArray;
  public _recognize_path(_resource: Resource, _path: GDString | StringName | string): boolean;
}