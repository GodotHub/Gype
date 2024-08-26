import * as internal from '__internal__';
import { RefCounted } from 'src/js_godot/classesref_counted'
import { GDString } from 'src/js_godot/variant/gd_string'
class _MethodBindings {
    method__converts_to;
    method__handles;
    method__convert;
}


export class EditorResourceConversionPlugin extends RefCounted{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("EditorResourceConversionPlugin");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("EditorResourceConversionPlugin");
      let methodname = new StringName("_converts_to");
      this._bindings.method__converts_to = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("EditorResourceConversionPlugin");
      let methodname = new StringName("_handles");
      this._bindings.method__handles = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("EditorResourceConversionPlugin");
      let methodname = new StringName("_convert");
      this._bindings.method__convert = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
  }
  _converts_to() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__converts_to,
      this._owner,
			Variant.Type.STRING
    ,
      
    );
  }
  _handles(_resource) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__handles,
      this._owner,
			Variant.Type.BOOL,
      _resource
    );
  }
  _convert(_resource) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__convert,
      this._owner,
			Variant.INT,
      _resource
    );
  }
}