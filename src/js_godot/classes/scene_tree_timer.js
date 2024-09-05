import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { RefCounted } from '@js_godot/classes/ref_counted'
import { StringName } from '@js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_set_time_left;
  method_get_time_left;
}
export class SceneTreeTimer extends RefCounted{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("SceneTreeTimer");
    } else {
      super(godot_object);
    }
  }
  
  static async _init_bindings() {
    if (this.#initialized) {
      return;
    }
    this.#initialized = true;
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
      SceneTreeTimer._bindings.method_set_time_left,
      this._owner,
      _time
    );
    
  }
  get_time_left() {
    return _call_native_mb_ret(
      SceneTreeTimer._bindings.method_get_time_left,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  
get time_left () {
  return this.get_time_left();
}
set time_left (new_value) {
  this.set_time_left(new_value);
}


  static {
    this._init_bindings();
  }
}