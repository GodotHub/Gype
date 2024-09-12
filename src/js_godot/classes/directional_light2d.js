import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { Light2D } from '@js_godot/classes/light2d'
import { StringName } from '@js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_set_max_distance;
  method_get_max_distance;
}
export class DirectionalLight2D extends Light2D{

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("DirectionalLight2D");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_max_distance() {
    if (!this.#_bindings.method_set_max_distance) {
      let classname = new StringName("DirectionalLight2D");
      let methodname = new StringName("set_max_distance");
      this.#_bindings.method_set_max_distance = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_max_distance() {
    if (!this.#_bindings.method_get_max_distance) {
      let classname = new StringName("DirectionalLight2D");
      let methodname = new StringName("get_max_distance");
      this.#_bindings.method_get_max_distance = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }

  
  
  set_max_distance(_pixels) {
    DirectionalLight2D.init_method_set_max_distance();
    return _call_native_mb_no_ret(
      DirectionalLight2D.#_bindings.method_set_max_distance,
      this._owner,
      _pixels
    );
    
  }
  get_max_distance() {
    DirectionalLight2D.init_method_get_max_distance();
    return _call_native_mb_ret(
      DirectionalLight2D.#_bindings.method_get_max_distance,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  
get height () {
  return this.get_height();
}
set height (new_value) {
  this.set_height(new_value);
}
get max_distance () {
  return this.get_max_distance();
}
set max_distance (new_value) {
  this.set_max_distance(new_value);
}

}