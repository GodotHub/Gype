import * as internal from '__internal__';
import { StringName } from '@js_godot/variant/string_name'
import { Range } from '@js_godot/classes/range'
import { Variant } from '@js_godot/variant/variant'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_set_custom_step;
  method_get_custom_step;
}
export class ScrollBar extends Range{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("ScrollBar");
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
      let classname = new StringName("ScrollBar");
      let methodname = new StringName("set_custom_step");
      this._bindings.method_set_custom_step = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("ScrollBar");
      let methodname = new StringName("get_custom_step");
      this._bindings.method_get_custom_step = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
  }
  set_custom_step(_step) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_custom_step,
      this._owner,
      _step
    );
    
  }
  get_custom_step() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_custom_step,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  
get custom_step () {
  return this.get_custom_step();
}
set custom_step (new_value) {
  this.set_custom_step(new_value);
}


  static {
    this._init_bindings();
  }
}