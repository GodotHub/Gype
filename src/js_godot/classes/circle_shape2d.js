import * as internal from '__internal__';
import { Shape2D } from 'src/js_godot/classes/shape2d'
import { StringName } from 'src/js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

class _MethodBindings {
    method_set_radius;
    method_get_radius;
}


export class CircleShape2D extends Shape2D{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("CircleShape2D");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("CircleShape2D");
        let methodname = new StringName("set_radius");
        this._bindings.method_set_radius = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
        let classname = new StringName("CircleShape2D");
        let methodname = new StringName("get_radius");
        this._bindings.method_get_radius = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1740695150
        );
      }
  }
  set_radius(_radius) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_radius,
      this._owner,
      _radius
    );
    
  }
  get_radius() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_radius,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
}