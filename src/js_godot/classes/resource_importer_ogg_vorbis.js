import * as internal from '__internal__';
import { PackedByteArray } from 'src/js_godot/variant/packed_byte_array'
import { ResourceImporter } from 'src/js_godot/classes/resource_importer'
import { GDString } from 'src/js_godot/variant/gd_string'
import { StringName } from 'src/js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

class _MethodBindings {
    method_load_from_buffer;
    method_load_from_file;
}


export class ResourceImporterOggVorbis extends ResourceImporter{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("ResourceImporterOggVorbis");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
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
      ClassDB._bindings.method_load_from_buffer,
      this._owner,
			Variant.INT,
      _buffer
    );
    
  }
  load_from_file(_path) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_load_from_file,
      this._owner,
			Variant.INT,
      _path
    );
    
  }
}