import * as internal from '__internal__';
import { Vector2 } from 'src/js_godot/variant/vector2'
import { Shape2D } from 'src/js_godot/classes/shape2d'
import { StringName } from 'src/js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

class _MethodBindings {
    method_set_size;
    method_get_size;
}


export class RectangleShape2D extends Shape2D{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("RectangleShape2D");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("RectangleShape2D");
        let methodname = new StringName("set_size");
        this._bindings.method_set_size = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          743155724
        );
      }
      {
        let classname = new StringName("RectangleShape2D");
        let methodname = new StringName("get_size");
        this._bindings.method_get_size = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3341600327
        );
      }
  }
  set_size(_size) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_size,
      this._owner,
      _size
    );
    
  }
  get_size() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_size,
      this._owner,
			Variant.Type.VECTOR2
    ,
      
    );
    
  }
}