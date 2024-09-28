import * as internal from '__internal__';
import { ResourceImporter } from '@js_godot/classes/resource_importer'
import { StringName } from '@js_godot/variant/string_name'
import { Variant } from '@js_godot/variant/variant'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";
import { GodotClass } from "@js_godot/core/class_define";

class _MethodBindings {
  method_load_from_buffer;
  method_load_from_file;
}
@GodotClass
export class ResourceImporterOggVorbis extends ResourceImporter{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("ResourceImporterOggVorbis");
    } else {
      super(godot_object);
    }
  }
  static init_method_load_from_buffer() {
    if (!this._bindings.method_load_from_buffer) {
      let classname = new StringName("ResourceImporterOggVorbis");
      let methodname = new StringName("load_from_buffer");
      this._bindings.method_load_from_buffer = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        354904730
      );
    }
  }
  static init_method_load_from_file() {
    if (!this._bindings.method_load_from_file) {
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
    ResourceImporterOggVorbis.init_method_load_from_buffer();
    return _call_native_mb_ret(
      ResourceImporterOggVorbis._bindings.method_load_from_buffer,
      this._owner,
			Variant.Type.OBJECT,
      _buffer
    );
    
  }
  load_from_file(_path) {
    ResourceImporterOggVorbis.init_method_load_from_file();
    return _call_native_mb_ret(
      ResourceImporterOggVorbis._bindings.method_load_from_file,
      this._owner,
			Variant.Type.OBJECT,
      _path
    );
    
  }
  

}