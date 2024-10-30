
import { ResourceFormatSaver } from "@godot/classes/resource_format_saver";
import { Resource } from "@godot/classes/resource";
import { GodotObject } from "@godot/classes/godot_object";

export declare class ResourceSaver extends GodotObject{
  public save(_resource: Resource, _path: String | StringName | string, _flags: number): number;
  public get_recognized_extensions(_type: Resource): PackedStringArray;
  public add_resource_format_saver(_format_saver: ResourceFormatSaver, _at_front: boolean): void;
  public remove_resource_format_saver(_format_saver: ResourceFormatSaver): void;
  static SaverFlags = {
    FLAG_NONE = 0,
    FLAG_RELATIVE_PATHS = 1,
    FLAG_BUNDLE_RESOURCES = 2,
    FLAG_CHANGE_PATH = 4,
    FLAG_OMIT_EDITOR_PROPERTIES = 8,
    FLAG_SAVE_BIG_ENDIAN = 16,
    FLAG_COMPRESS = 32,
    FLAG_REPLACE_SUBRESOURCE_PATHS = 64,
  }
}