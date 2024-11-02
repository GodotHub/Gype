
import { GodotObject } from "@godot/classes/godot_object";
import { RefCounted } from "@godot/classes/ref_counted";


export declare class EditorSceneFormatImporter extends RefCounted{
  public _get_import_flags(): number;
  public _get_extensions(): PackedStringArray;
  public _import_scene(_path: GDString | StringName | string, _flags: number, _options: Dictionary): GodotObject;
  public _get_import_options(_path: GDString | StringName | string): void;
  public _get_option_visibility(_path: GDString | StringName | string, _for_animation: boolean, _option: GDString | StringName | string): any;
}