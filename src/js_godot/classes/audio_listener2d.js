import * as internal from '__internal__';
import { Node2D } from 'src/js_godot/classesnode2d'
class _MethodBindings {
    method_make_current;
    method_clear_current;
    method_is_current;
}


export class AudioListener2D extends Node2D{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("AudioListener2D");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("AudioListener2D");
      let methodname = new StringName("make_current");
      this._bindings.method_make_current = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("AudioListener2D");
      let methodname = new StringName("clear_current");
      this._bindings.method_clear_current = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("AudioListener2D");
      let methodname = new StringName("is_current");
      this._bindings.method_is_current = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
  }
  make_current() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_make_current,
      this._owner,
      
    );
  }
  clear_current() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_clear_current,
      this._owner,
      
    );
  }
  is_current() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_current,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
}