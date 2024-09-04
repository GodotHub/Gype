import * as internal from '__internal__';
import { StringName } from '@js_godot/variant/string_name'
import { Variant } from '@js_godot/variant/variant'
import { Container } from '@js_godot/classes/container'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_set_use_top_left;
  method_is_using_top_left;
}
export class CenterContainer extends Container{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("CenterContainer");
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
      let classname = new StringName("CenterContainer");
      let methodname = new StringName("set_use_top_left");
      this._bindings.method_set_use_top_left = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("CenterContainer");
      let methodname = new StringName("is_using_top_left");
      this._bindings.method_is_using_top_left = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
  }
  set_use_top_left(_enable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_use_top_left,
      this._owner,
      _enable
    );
    
  }
  is_using_top_left() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_using_top_left,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  
get use_top_left () {
  return this.is_using_top_left();
}
set use_top_left (new_value) {
  this.set_use_top_left(new_value);
}


  static {
    this._init_bindings();
  }
}