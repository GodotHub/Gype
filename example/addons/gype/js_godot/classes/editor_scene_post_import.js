import * as internal from '__internal__';
import { RefCounted } from '@js_godot/classes/ref_counted'
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
  method_get_source_file;
}
@GodotClass
export class EditorScenePostImport extends RefCounted{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("EditorScenePostImport");
    } else {
      super(godot_object);
    }
  }
  static init_method_get_source_file() {
    if (!this._bindings.method_get_source_file) {
      let classname = new StringName("EditorScenePostImport");
      let methodname = new StringName("get_source_file");
      this._bindings.method_get_source_file = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        201670096
      );
    }
  }

  
  
  _post_import(_scene) {
  }
  get_source_file() {
    EditorScenePostImport.init_method_get_source_file();
    return _call_native_mb_ret(
      EditorScenePostImport._bindings.method_get_source_file,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  

}