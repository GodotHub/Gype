import * as internal from '__internal__';
import { Resource } from 'src/js_godot/classesresource'
class _MethodBindings {
    method__instantiate;
}


export class AudioEffect extends Resource{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("AudioEffect");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("AudioEffect");
      let methodname = new StringName("_instantiate");
      this._bindings.method__instantiate = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
  }
  _instantiate() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__instantiate,
      this._owner,
			Variant.INT,
      
    );
  }
}