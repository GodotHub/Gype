
import { Node } from "@godot/classes/node";
import { RefCounted } from "@godot/classes/ref_counted";
import { EditorInterface } from "@godot/classes/editor_interface";

export declare class EditorScript extends RefCounted{
  public _run(): void;
  public add_root_node(_node: Node): void;
  public get_scene(): Node;
  public get_editor_interface(): EditorInterface;
}