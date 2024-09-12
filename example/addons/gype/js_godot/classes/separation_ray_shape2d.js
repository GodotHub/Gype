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
  method_set_length;
  method_get_length;
  method_set_slide_on_slope;
  method_get_slide_on_slope;
}
export class SeparationRayShape2D extends Shape2D{

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("SeparationRayShape2D");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_length() {
    if (!this.#_bindings.method_set_length) {
      let classname = new StringName("SeparationRayShape2D");
      let methodname = new StringName("set_length");
      this.#_bindings.method_set_length = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_length() {
    if (!this.#_bindings.method_get_length) {
      let classname = new StringName("SeparationRayShape2D");
      let methodname = new StringName("get_length");
      this.#_bindings.method_get_length = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_slide_on_slope() {
    if (!this.#_bindings.method_set_slide_on_slope) {
      let classname = new StringName("SeparationRayShape2D");
      let methodname = new StringName("set_slide_on_slope");
      this.#_bindings.method_set_slide_on_slope = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_get_slide_on_slope() {
    if (!this.#_bindings.method_get_slide_on_slope) {
      let classname = new StringName("SeparationRayShape2D");
      let methodname = new StringName("get_slide_on_slope");
      this.#_bindings.method_get_slide_on_slope = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }

  
  
  set_length(_length) {
    SeparationRayShape2D.init_method_set_length();
    return _call_native_mb_no_ret(
      SeparationRayShape2D.#_bindings.method_set_length,
      this._owner,
      _length
    );
    
  }
  get_length() {
    SeparationRayShape2D.init_method_get_length();
    return _call_native_mb_ret(
      SeparationRayShape2D.#_bindings.method_get_length,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_slide_on_slope(_active) {
    SeparationRayShape2D.init_method_set_slide_on_slope();
    return _call_native_mb_no_ret(
      SeparationRayShape2D.#_bindings.method_set_slide_on_slope,
      this._owner,
      _active
    );
    
  }
  get_slide_on_slope() {
    SeparationRayShape2D.init_method_get_slide_on_slope();
    return _call_native_mb_ret(
      SeparationRayShape2D.#_bindings.method_get_slide_on_slope,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  
get length () {
  return this.get_length();
}
set length (new_value) {
  this.set_length(new_value);
}
get slide_on_slope () {
  return this.get_slide_on_slope();
}
set slide_on_slope (new_value) {
  this.set_slide_on_slope(new_value);
}

}