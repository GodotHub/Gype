import * as internal from '__internal__';
import { RefCounted } from 'src/js_godot/classesref_counted'
import { GDString } from 'src/js_godot/variant/gd_string'
class _MethodBindings {
    method__post_import;
    method_get_source_file;
}


export class EditorScenePostImport extends RefCounted{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("EditorScenePostImport");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("EditorScenePostImport");
      let methodname = new StringName("_post_import");
      this._bindings.method__post_import = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
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
    return _call_native_mb_ret(
      ClassDB._bindings.method__post_import,
      this._owner,
			Variant.INT,
      _scene
    );
  }
  get_source_file() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_source_file,
      this._owner,
			Variant.Type.STRING
    ,
      
    );
  }
}