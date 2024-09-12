import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { GDArray } from '@js_godot/variant/gd_array'
import { Resource } from '@js_godot/classes/resource'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_get_pressed_button;
  method_get_buttons;
  method_set_allow_unpress;
  method_is_allow_unpress;
}
export class ButtonGroup extends Resource{

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("ButtonGroup");
    } else {
      super(godot_object);
    }
  }
  static init_method_get_pressed_button() {
    if (!this.#_bindings.method_get_pressed_button) {
      let classname = new StringName("ButtonGroup");
      let methodname = new StringName("get_pressed_button");
      this.#_bindings.method_get_pressed_button = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3886434893
      );
    }
  }
  static init_method_get_buttons() {
    if (!this.#_bindings.method_get_buttons) {
      let classname = new StringName("ButtonGroup");
      let methodname = new StringName("get_buttons");
      this.#_bindings.method_get_buttons = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2915620761
      );
    }
  }
  static init_method_set_allow_unpress() {
    if (!this.#_bindings.method_set_allow_unpress) {
      let classname = new StringName("ButtonGroup");
      let methodname = new StringName("set_allow_unpress");
      this.#_bindings.method_set_allow_unpress = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_allow_unpress() {
    if (!this.#_bindings.method_is_allow_unpress) {
      let classname = new StringName("ButtonGroup");
      let methodname = new StringName("is_allow_unpress");
      this.#_bindings.method_is_allow_unpress = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2240911060
      );
    }
  }

  
  
  get_pressed_button() {
    ButtonGroup.init_method_get_pressed_button();
    return _call_native_mb_ret(
      ButtonGroup.#_bindings.method_get_pressed_button,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  get_buttons() {
    ButtonGroup.init_method_get_buttons();
    return _call_native_mb_ret(
      ButtonGroup.#_bindings.method_get_buttons,
      this._owner,
			Variant.Type.ARRAY,
      
    );
    
  }
  set_allow_unpress(_enabled) {
    ButtonGroup.init_method_set_allow_unpress();
    return _call_native_mb_no_ret(
      ButtonGroup.#_bindings.method_set_allow_unpress,
      this._owner,
      _enabled
    );
    
  }
  is_allow_unpress() {
    ButtonGroup.init_method_is_allow_unpress();
    return _call_native_mb_ret(
      ButtonGroup.#_bindings.method_is_allow_unpress,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  
get allow_unpress () {
  return this.is_allow_unpress();
}
set allow_unpress (new_value) {
  this.set_allow_unpress(new_value);
}

}