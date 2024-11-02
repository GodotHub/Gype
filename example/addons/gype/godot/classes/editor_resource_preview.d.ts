
import { EditorResourcePreviewGenerator } from "@godot/classes/editor_resource_preview_generator";
import { Resource } from "@godot/classes/resource";
import { GodotObject } from "@godot/classes/godot_object";
import { Node } from "@godot/classes/node";


export declare class EditorResourcePreview extends Node{
  public queue_resource_preview(_path: GDString | StringName | string, _receiver: GodotObject, _receiver_func: GDString | StringName | string, _userdata: any): void;
  public queue_edited_resource_preview(_resource: Resource, _receiver: GodotObject, _receiver_func: GDString | StringName | string, _userdata: any): void;
  public add_preview_generator(_generator: EditorResourcePreviewGenerator): void;
  public remove_preview_generator(_generator: EditorResourcePreviewGenerator): void;
  public check_for_invalidation(_path: GDString | StringName | string): void;
  public get preview_invalidated(): Signal;
}