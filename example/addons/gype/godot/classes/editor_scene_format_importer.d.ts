
import { RefCounted } from "@godot/classes/ref_counted";
import { GodotObject } from "@godot/classes/godot_object";

export declare class EditorSceneFormatImporter extends RefCounted{
  public _get_import_flags(): number;
  public _get_extensions(): PackedStringArray;
  public _import_scene(_path: String | StringName | string, _flags: number, _options: Dictionary): Object;
  public _get_import_options(_path: String | StringName | string): void;
  public _get_option_visibility(_path: String | StringName | string, _for_animation: boolean, _option: String | StringName | string): any;
}