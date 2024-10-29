
import { RefCounted } from "@godot/classes/ref_counted";
import { Object } from "@godot/classes/object";

export declare class EditorSceneFormatImporter extends RefCounted{
  public _get_import_flags(): number;
  public _get_extensions(): PackedStringArray;
  public _import_scene(_path: String, _flags: number, _options: Dictionary): Object;
  public _get_import_options(_path: String): void;
  public _get_option_visibility(_path: String, _for_animation: boolean, _option: String): any;
}