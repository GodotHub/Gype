
import { GLTFDocumentExtension } from "@godot/classes/gltf_document_extension";
import { GLTFState } from "@godot/classes/gltf_state";
import { Resource } from "@godot/classes/resource";
import { Node } from "@godot/classes/node";
export declare class GLTFDocument extends Resource{
  public set_image_format(_image_format: GDString | StringName | string): void;
  public get_image_format(): String;
  public set_lossy_quality(_lossy_quality: number): void;
  public get_lossy_quality(): number;
  public set_root_node_mode(_root_node_mode: number): void;
  public get_root_node_mode(): number;
  public append_from_file(_path: GDString | StringName | string, _state: GLTFState, _flags: number = 0, _base_path: GDString | StringName | string = ""): number;
  public append_from_buffer(_bytes: PackedByteArray, _base_path: GDString | StringName | string, _state: GLTFState, _flags: number = 0): number;
  public append_from_scene(_node: Node, _state: GLTFState, _flags: number = 0): number;
  public generate_scene(_state: GLTFState, _bake_fps: number = 30, _trimming: boolean = false, _remove_immutable_tracks: boolean = true): Node;
  public generate_buffer(_state: GLTFState): PackedByteArray;
  public write_to_filesystem(_state: GLTFState, _path: GDString | StringName | string): number;
  public
 static register_gltf_document_extension(_extension: GLTFDocumentExtension, _first_priority: boolean = false): void;
  public
 static unregister_gltf_document_extension(_extension: GLTFDocumentExtension): void;
  public get image_format(): String;
  public set image_format(value): void;
  public get lossy_quality(): number;
  public set lossy_quality(value): void;
  public get root_node_mode(): number;
  public set root_node_mode(value): void;
  static RootNodeMode = {
    ROOT_NODE_MODE_SINGLE_ROOT = 0,
    ROOT_NODE_MODE_KEEP_ROOT = 1,
    ROOT_NODE_MODE_MULTI_ROOT = 2,
  }
}