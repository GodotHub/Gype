import * as internal from '__internal__';
import { ResourceImporter } from '@js_godot/classes/resource_importer'
import { Variant } from '@js_godot/variant/variant'
import { PackedByteArray } from '@js_godot/variant/packed_byte_array'
import { StringName } from '@js_godot/variant/string_name'
import { GDString } from '@js_godot/variant/gd_string'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_load_from_buffer;
  method_load_from_file;
}
export class ResourceImporterOggVorbis extends ResourceImporter{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("ResourceImporterOggVorbis");
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
      let classname = new StringName("ResourceImporterOggVorbis");
      let methodname = new StringName("load_from_buffer");
      this._bindings.method_load_from_buffer = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        354904730
      );
    }
    {
      let classname = new StringName("ResourceImporterOggVorbis");
      let methodname = new StringName("load_from_file");
      this._bindings.method_load_from_file = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        797568536
      );
    }
  }
  
  load_from_buffer(_buffer) {
    return _call_native_mb_ret(
      ResourceImporterOggVorbis._bindings.method_load_from_buffer,
      this._owner,
			Variant.INT,
      _buffer
    );
    
  }
  load_from_file(_path) {
    return _call_native_mb_ret(
      ResourceImporterOggVorbis._bindings.method_load_from_file,
      this._owner,
			Variant.INT,
      _path
    );
    
  }
  


  static {
    this._init_bindings();
  }
}