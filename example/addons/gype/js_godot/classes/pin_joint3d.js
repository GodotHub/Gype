import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { Joint3D } from '@js_godot/classes/joint3d'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_set_param;
  method_get_param;
}
export class PinJoint3D extends Joint3D{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("PinJoint3D");
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
      let classname = new StringName("PinJoint3D");
      let methodname = new StringName("set_param");
      this._bindings.method_set_param = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2059913726
      );
    }
    {
      let classname = new StringName("PinJoint3D");
      let methodname = new StringName("get_param");
      this._bindings.method_get_param = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1758438771
      );
    }
  }
  
  set_param(_param, _value) {
    return _call_native_mb_no_ret(
      PinJoint3D._bindings.method_set_param,
      this._owner,
      _param, _value
    );
    
  }
  get_param(_param) {
    return _call_native_mb_ret(
      PinJoint3D._bindings.method_get_param,
      this._owner,
			Variant.Type.FLOAT,
      _param
    );
    
  }
  

  static Param = {
    PARAM_BIAS: 0,
    PARAM_DAMPING: 1,
    PARAM_IMPULSE_CLAMP: 2,
  }

  static {
    this._init_bindings();
  }
}