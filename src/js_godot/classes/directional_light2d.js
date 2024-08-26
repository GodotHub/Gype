import * as internal from '__internal__';
import { Light2D } from 'src/js_godot/classeslight2d'
class _MethodBindings {
    method_set_max_distance;
    method_get_max_distance;
}


export class DirectionalLight2D extends Light2D{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("DirectionalLight2D");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("DirectionalLight2D");
      let methodname = new StringName("set_max_distance");
      this._bindings.method_set_max_distance = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("DirectionalLight2D");
      let methodname = new StringName("get_max_distance");
      this._bindings.method_get_max_distance = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
  }
  set_max_distance(_pixels) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_max_distance,
      this._owner,
      _pixels
    );
  }
  get_max_distance() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_max_distance,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
}