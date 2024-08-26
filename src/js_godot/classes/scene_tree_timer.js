import * as internal from '__internal__';
import { RefCounted } from 'src/js_godot/classesref_counted'
class _MethodBindings {
    method_set_time_left;
    method_get_time_left;
}


export class SceneTreeTimer extends RefCounted{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("SceneTreeTimer");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("SceneTreeTimer");
      let methodname = new StringName("set_time_left");
      this._bindings.method_set_time_left = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("SceneTreeTimer");
      let methodname = new StringName("get_time_left");
      this._bindings.method_get_time_left = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
  }
  set_time_left(_time) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_time_left,
      this._owner,
      _time
    );
  }
  get_time_left() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_time_left,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
}