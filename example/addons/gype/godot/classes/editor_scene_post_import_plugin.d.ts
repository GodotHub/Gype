
import { RefCounted } from "@godot/classes/ref_counted";
import { Node } from "@godot/classes/node";
import { Resource } from "@godot/classes/resource";
export declare class EditorScenePostImportPlugin extends RefCounted{
  public _get_internal_import_options(_category: number): void;
  public _get_internal_option_visibility(_category: number, _for_animation: boolean, _option: GDString | StringName | string): any;
  public _get_internal_option_update_view_required(_category: number, _option: GDString | StringName | string): any;
  public _internal_process(_category: number, _base_node: Node, _node: Node, _resource: Resource): void;
  public _get_import_options(_path: GDString | StringName | string): void;
  public _get_option_visibility(_path: GDString | StringName | string, _for_animation: boolean, _option: GDString | StringName | string): any;
  public _pre_process(_scene: Node): void;
  public _post_process(_scene: Node): void;
  public get_option_value(_name: GDString | StringName | string): any;
  public add_import_option(_name: GDString | StringName | string, _value: any): void;
  public add_import_option_advanced(_type: number, _name: GDString | StringName | string, _default_value: any, _hint: number = 0, _hint_string: GDString | StringName | string = "", _usage_flags: number = 6): void;
  static InternalImportCategory = {
    INTERNAL_IMPORT_CATEGORY_NODE = 0,
    INTERNAL_IMPORT_CATEGORY_MESH_3D_NODE = 1,
    INTERNAL_IMPORT_CATEGORY_MESH = 2,
    INTERNAL_IMPORT_CATEGORY_MATERIAL = 3,
    INTERNAL_IMPORT_CATEGORY_ANIMATION = 4,
    INTERNAL_IMPORT_CATEGORY_ANIMATION_NODE = 5,
    INTERNAL_IMPORT_CATEGORY_SKELETON_3D_NODE = 6,
    INTERNAL_IMPORT_CATEGORY_MAX = 7,
  }
}