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
  method_set_flag;
  method_get_flag;
}
export class HingeJoint3D extends Joint3D{

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("HingeJoint3D");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_param() {
    if (!this.#_bindings.method_set_param) {
      let classname = new StringName("HingeJoint3D");
      let methodname = new StringName("set_param");
      this.#_bindings.method_set_param = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3082977519
      );
    }
  }
  static init_method_get_param() {
    if (!this.#_bindings.method_get_param) {
      let classname = new StringName("HingeJoint3D");
      let methodname = new StringName("get_param");
      this.#_bindings.method_get_param = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4066002676
      );
    }
  }
  static init_method_set_flag() {
    if (!this.#_bindings.method_set_flag) {
      let classname = new StringName("HingeJoint3D");
      let methodname = new StringName("set_flag");
      this.#_bindings.method_set_flag = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1083494620
      );
    }
  }
  static init_method_get_flag() {
    if (!this.#_bindings.method_get_flag) {
      let classname = new StringName("HingeJoint3D");
      let methodname = new StringName("get_flag");
      this.#_bindings.method_get_flag = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2841369610
      );
    }
  }

  
  
  set_param(_param, _value) {
    HingeJoint3D.init_method_set_param();
    return _call_native_mb_no_ret(
      HingeJoint3D.#_bindings.method_set_param,
      this._owner,
      _param, _value
    );
    
  }
  get_param(_param) {
    HingeJoint3D.init_method_get_param();
    return _call_native_mb_ret(
      HingeJoint3D.#_bindings.method_get_param,
      this._owner,
			Variant.Type.FLOAT,
    
      _param
    );
    
  }
  set_flag(_flag, _enabled) {
    HingeJoint3D.init_method_set_flag();
    return _call_native_mb_no_ret(
      HingeJoint3D.#_bindings.method_set_flag,
      this._owner,
      _flag, _enabled
    );
    
  }
  get_flag(_flag) {
    HingeJoint3D.init_method_get_flag();
    return _call_native_mb_ret(
      HingeJoint3D.#_bindings.method_get_flag,
      this._owner,
			Variant.Type.BOOL,
    
      _flag
    );
    
  }
  

  static Param = {
    PARAM_BIAS: 0,
    PARAM_LIMIT_UPPER: 1,
    PARAM_LIMIT_LOWER: 2,
    PARAM_LIMIT_BIAS: 3,
    PARAM_LIMIT_SOFTNESS: 4,
    PARAM_LIMIT_RELAXATION: 5,
    PARAM_MOTOR_TARGET_VELOCITY: 6,
    PARAM_MOTOR_MAX_IMPULSE: 7,
    PARAM_MAX: 8,
  }
  static Flag = {
    FLAG_USE_LIMIT: 0,
    FLAG_ENABLE_MOTOR: 1,
    FLAG_MAX: 2,
  }
}