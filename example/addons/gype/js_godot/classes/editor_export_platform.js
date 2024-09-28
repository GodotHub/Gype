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
  method_get_os_name;
}
@GodotClass
export class EditorExportPlatform extends RefCounted{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("EditorExportPlatform");
    } else {
      super(godot_object);
    }
  }
  static init_method_get_os_name() {
    if (!this._bindings.method_get_os_name) {
      let classname = new StringName("EditorExportPlatform");
      let methodname = new StringName("get_os_name");
      this._bindings.method_get_os_name = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        201670096
      );
    }
  }

  
  
  get_os_name() {
    EditorExportPlatform.init_method_get_os_name();
    return _call_native_mb_ret(
      EditorExportPlatform._bindings.method_get_os_name,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  

}