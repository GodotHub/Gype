import * as internal from '__internal__';
import { StringName } from '@js_godot/variant/string_name'
import { Resource } from '@js_godot/classes/resource'
import { Variant } from '@js_godot/variant/variant'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";
import { GodotClass } from "@js_godot/core/class_define";

class _MethodBindings {
}
@GodotClass
export class GLTFDocumentExtension extends Resource{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("GLTFDocumentExtension");
    } else {
      super(godot_object);
    }
  }

  
  
  _import_preflight(_state, _extensions) {
  }
  _get_supported_extensions() {
  }
  _parse_node_extensions(_state, _gltf_node, _extensions) {
  }
  _parse_image_data(_state, _image_data, _mime_type, _ret_image) {
  }
  _get_image_file_extension() {
  }
  _parse_texture_json(_state, _texture_json, _ret_gltf_texture) {
  }
  _generate_scene_node(_state, _gltf_node, _scene_parent) {
  }
  _import_post_parse(_state) {
  }
  _import_node(_state, _gltf_node, _json, _node) {
  }
  _import_post(_state, _root) {
  }
  _export_preflight(_state, _root) {
  }
  _convert_scene_node(_state, _gltf_node, _scene_node) {
  }
  _export_preserialize(_state) {
  }
  _get_saveable_image_formats() {
  }
  _serialize_image_to_bytes(_state, _image, _image_dict, _image_format, _lossy_quality) {
  }
  _save_image_at_path(_state, _image, _file_path, _image_format, _lossy_quality) {
  }
  _serialize_texture_json(_state, _texture_json, _gltf_texture, _image_format) {
  }
  _export_node(_state, _gltf_node, _json, _node) {
  }
  _export_post(_state) {
  }
  

}