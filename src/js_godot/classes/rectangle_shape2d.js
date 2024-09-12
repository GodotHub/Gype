import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { Shape2D } from '@js_godot/classes/shape2d'
import { StringName } from '@js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_set_size;
  method_get_size;
}
export class RectangleShape2D extends Shape2D{

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("RectangleShape2D");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_size() {
    if (!this.#_bindings.method_set_size) {
      let classname = new StringName("RectangleShape2D");
      let methodname = new StringName("set_size");
      this.#_bindings.method_set_size = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        743155724
      );
    }
  }
  static init_method_get_size() {
    if (!this.#_bindings.method_get_size) {
      let classname = new StringName("RectangleShape2D");
      let methodname = new StringName("get_size");
      this.#_bindings.method_get_size = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3341600327
      );
    }
  }

  
  
  set_size(_size) {
    RectangleShape2D.init_method_set_size();
    return _call_native_mb_no_ret(
      RectangleShape2D.#_bindings.method_set_size,
      this._owner,
      _size
    );
    
  }
  get_size() {
    RectangleShape2D.init_method_get_size();
    return _call_native_mb_ret(
      RectangleShape2D.#_bindings.method_get_size,
      this._owner,
			Variant.Type.VECTOR2,
    
      
    );
    
  }
  
get size () {
  return this.get_size();
}
set size (new_value) {
  this.set_size(new_value);
}

}