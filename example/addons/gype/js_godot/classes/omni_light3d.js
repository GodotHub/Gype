import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { Light3D } from '@js_godot/classes/light3d'
import { StringName } from '@js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_set_shadow_mode;
  method_get_shadow_mode;
}
export class OmniLight3D extends Light3D{

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("OmniLight3D");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_shadow_mode() {
    if (!this.#_bindings.method_set_shadow_mode) {
      let classname = new StringName("OmniLight3D");
      let methodname = new StringName("set_shadow_mode");
      this.#_bindings.method_set_shadow_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        121862228
      );
    }
  }
  static init_method_get_shadow_mode() {
    if (!this.#_bindings.method_get_shadow_mode) {
      let classname = new StringName("OmniLight3D");
      let methodname = new StringName("get_shadow_mode");
      this.#_bindings.method_get_shadow_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4181586331
      );
    }
  }

  
  
  set_shadow_mode(_mode) {
    OmniLight3D.init_method_set_shadow_mode();
    return _call_native_mb_no_ret(
      OmniLight3D.#_bindings.method_set_shadow_mode,
      this._owner,
      _mode
    );
    
  }
  get_shadow_mode() {
    OmniLight3D.init_method_get_shadow_mode();
    return _call_native_mb_ret(
      OmniLight3D.#_bindings.method_get_shadow_mode,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  
get omni_range () {
  return this.get_param();
}
set omni_range (new_value) {
  this.set_param(new_value);
}
get omni_attenuation () {
  return this.get_param();
}
set omni_attenuation (new_value) {
  this.set_param(new_value);
}
get omni_shadow_mode () {
  return this.get_shadow_mode();
}
set omni_shadow_mode (new_value) {
  this.set_shadow_mode(new_value);
}

  static ShadowMode = {
    SHADOW_DUAL_PARABOLOID: 0,
    SHADOW_CUBE: 1,
  }
}