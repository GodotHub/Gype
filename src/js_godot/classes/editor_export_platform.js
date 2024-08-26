import * as internal from '__internal__';
import { RefCounted } from 'src/js_godot/classesref_counted'
import { GDString } from 'src/js_godot/variant/gd_string'
class _MethodBindings {
    method_get_os_name;
}


export class EditorExportPlatform extends RefCounted{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("EditorExportPlatform");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
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
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_os_name,
      this._owner,
			Variant.Type.STRING
    ,
      
    );
  }
}