
import { GLTFNode } from "@godot/classes/gltf_node";
import { GLTFTexture } from "@godot/classes/gltf_texture";
import { Image } from "@godot/classes/image";
import { Node3D } from "@godot/classes/node3d";
import { Node } from "@godot/classes/node";
import { GLTFState } from "@godot/classes/gltf_state";
import { Resource } from "@godot/classes/resource";

export declare class GLTFDocumentExtension extends Resource{
  public _import_preflight(_state: GLTFState, _extensions: PackedStringArray): number;
  public _get_supported_extensions(): PackedStringArray;
  public _parse_node_extensions(_state: GLTFState, _gltf_node: GLTFNode, _extensions: Dictionary): number;
  public _parse_image_data(_state: GLTFState, _image_data: PackedByteArray, _mime_type: String, _ret_image: Image): number;
  public _get_image_file_extension(): String;
  public _parse_texture_json(_state: GLTFState, _texture_json: Dictionary, _ret_gltf_texture: GLTFTexture): number;
  public _generate_scene_node(_state: GLTFState, _gltf_node: GLTFNode, _scene_parent: Node): Node3D;
  public _import_post_parse(_state: GLTFState): number;
  public _import_node(_state: GLTFState, _gltf_node: GLTFNode, _json: Dictionary, _node: Node): number;
  public _import_post(_state: GLTFState, _root: Node): number;
  public _export_preflight(_state: GLTFState, _root: Node): number;
  public _convert_scene_node(_state: GLTFState, _gltf_node: GLTFNode, _scene_node: Node): void;
  public _export_preserialize(_state: GLTFState): number;
  public _get_saveable_image_formats(): PackedStringArray;
  public _serialize_image_to_bytes(_state: GLTFState, _image: Image, _image_dict: Dictionary, _image_format: String, _lossy_quality: number): PackedByteArray;
  public _save_image_at_path(_state: GLTFState, _image: Image, _file_path: String, _image_format: String, _lossy_quality: number): number;
  public _serialize_texture_json(_state: GLTFState, _texture_json: Dictionary, _gltf_texture: GLTFTexture, _image_format: String): number;
  public _export_node(_state: GLTFState, _gltf_node: GLTFNode, _json: Dictionary, _node: Node): number;
  public _export_post(_state: GLTFState): number;
}