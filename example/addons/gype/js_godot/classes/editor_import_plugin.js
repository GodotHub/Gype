import * as internal from '__internal__';
import { Dictionary } from '@js_godot/variant/dictionary'
import { StringName } from '@js_godot/variant/string_name'
import { PackedStringArray } from '@js_godot/variant/packed_string_array'
import { ResourceImporter } from '@js_godot/classes/resource_importer'
import { GDString } from '@js_godot/variant/gd_string'
import { Variant } from '@js_godot/variant/variant'
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

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("EditorImportPlugin");
    } else {
      super(godot_object);
    }
  }
  
  static async _init_bindings() {
    if (this.#initialized) {
      return;
    }
    this.#initialized = true;
    {
      let classname = new StringName("EditorImportPlugin");
      let methodname = new StringName("append_import_external_resource");
      this._bindings.method_append_import_external_resource = internal.classdb_get_method_bind(
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
    return _call_native_mb_ret(
      EditorImportPlugin._bindings.method_append_import_external_resource,
      this._owner,
			Variant.INT,
      _path, _custom_options, _custom_importer, _generator_parameters
    );
    
  }
  


  static {
    this._init_bindings();
  }
}