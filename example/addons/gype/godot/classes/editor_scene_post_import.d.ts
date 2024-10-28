
import { Node } from "@godot/classes/node";
import { Object } from "@godot/classes/object";
import { RefCounted } from "@godot/classes/ref_counted";

export declare class EditorScenePostImport extends RefCounted{
  public _post_import(_scene: Node): Object;
  public get_source_file(): String;
}