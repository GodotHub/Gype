import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { GDArray } from '@js_godot/variant/gd_array'
import { ResourceImporter } from '@js_godot/classes/resource_importer'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_append_import_external_resource;
}
export class EditorImportPlugin extends ResourceImporter{

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("EditorImportPlugin");
    } else {
      super(godot_object);
    }
  }
  static init_method_append_import_external_resource() {
    if (!this.#_bindings.method_append_import_external_resource) {
      let classname = new StringName("EditorImportPlugin");
      let methodname = new StringName("append_import_external_resource");
      this.#_bindings.method_append_import_external_resource = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        320493106
      );
    }
  }

  
  
  _get_importer_name() {
  }
  _get_visible_name() {
  }
  _get_preset_count() {
  }
  _get_preset_name(_preset_index) {
  }
  _get_recognized_extensions() {
  }
  _get_import_options(_path, _preset_index) {
  }
  _get_save_extension() {
  }
  _get_resource_type() {
  }
  _get_priority() {
  }
  _get_import_order() {
  }
  _get_option_visibility(_path, _option_name, _options) {
  }
  _import(_source_file, _save_path, _options, _platform_variants, _gen_files) {
  }
  _can_import_threaded() {
  }
  append_import_external_resource(_path, _custom_options, _custom_importer, _generator_parameters) {
    EditorImportPlugin.init_method_append_import_external_resource();
    return _call_native_mb_ret(
      EditorImportPlugin.#_bindings.method_append_import_external_resource,
      this._owner,
			Variant.Type.INT,
    
      _path, _custom_options, _custom_importer, _generator_parameters
    );
    
  }
  

}