import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { Container } from '@js_godot/classes/container'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_set_stretch;
  method_is_stretch_enabled;
  method_set_stretch_shrink;
  method_get_stretch_shrink;
}
export class SubViewportContainer extends Container{

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("SubViewportContainer");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_stretch() {
    if (!this.#_bindings.method_set_stretch) {
      let classname = new StringName("SubViewportContainer");
      let methodname = new StringName("set_stretch");
      this.#_bindings.method_set_stretch = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_stretch_enabled() {
    if (!this.#_bindings.method_is_stretch_enabled) {
      let classname = new StringName("SubViewportContainer");
      let methodname = new StringName("is_stretch_enabled");
      this.#_bindings.method_is_stretch_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_stretch_shrink() {
    if (!this.#_bindings.method_set_stretch_shrink) {
      let classname = new StringName("SubViewportContainer");
      let methodname = new StringName("set_stretch_shrink");
      this.#_bindings.method_set_stretch_shrink = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_stretch_shrink() {
    if (!this.#_bindings.method_get_stretch_shrink) {
      let classname = new StringName("SubViewportContainer");
      let methodname = new StringName("get_stretch_shrink");
      this.#_bindings.method_get_stretch_shrink = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }

  
  
  _propagate_input_event(_event) {
  }
  set_stretch(_enable) {
    SubViewportContainer.init_method_set_stretch();
    return _call_native_mb_no_ret(
      SubViewportContainer.#_bindings.method_set_stretch,
      this._owner,
      _enable
    );
    
  }
  is_stretch_enabled() {
    SubViewportContainer.init_method_is_stretch_enabled();
    return _call_native_mb_ret(
      SubViewportContainer.#_bindings.method_is_stretch_enabled,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_stretch_shrink(_amount) {
    SubViewportContainer.init_method_set_stretch_shrink();
    return _call_native_mb_no_ret(
      SubViewportContainer.#_bindings.method_set_stretch_shrink,
      this._owner,
      _amount
    );
    
  }
  get_stretch_shrink() {
    SubViewportContainer.init_method_get_stretch_shrink();
    return _call_native_mb_ret(
      SubViewportContainer.#_bindings.method_get_stretch_shrink,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  
get stretch () {
  return this.is_stretch_enabled();
}
set stretch (new_value) {
  this.set_stretch(new_value);
}
get stretch_shrink () {
  return this.get_stretch_shrink();
}
set stretch_shrink (new_value) {
  this.set_stretch_shrink(new_value);
}

}