
import { RefCounted } from "@godot/classes/ref_counted";
import { GodotObject } from "@godot/classes/godot_object";
import { Node } from "@godot/classes/node";
export declare class EditorScenePostImport extends RefCounted{
  public _post_import(_scene: Node): GodotObject;
  public get_source_file(): String;
}