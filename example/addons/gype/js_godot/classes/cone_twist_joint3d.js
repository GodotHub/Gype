import * as internal from '__internal__';
import { StringName } from '@js_godot/variant/string_name'
import { Joint3D } from '@js_godot/classes/joint3d'
import { Variant } from '@js_godot/variant/variant'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";
import { GodotClass } from "@js_godot/core/class_define";

class _MethodBindings {
  method_set_param;
  method_get_param;
}
@GodotClass
export class ConeTwistJoint3D extends Joint3D{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("ConeTwistJoint3D");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_param() {
    if (!this._bindings.method_set_param) {
      let classname = new StringName("ConeTwistJoint3D");
      let methodname = new StringName("set_param");
      this._bindings.method_set_param = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1062470226
      );
    }
  }
  static init_method_get_param() {
    if (!this._bindings.method_get_param) {
      let classname = new StringName("ConeTwistJoint3D");
      let methodname = new StringName("get_param");
      this._bindings.method_get_param = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2928790850
      );
    }
  }

  
  
  set_param(_param, _value) {
    ConeTwistJoint3D.init_method_set_param();
    return _call_native_mb_no_ret(
      ConeTwistJoint3D._bindings.method_set_param,
      this._owner,
      _param, _value
    );
    
  }
  get_param(_param) {
    ConeTwistJoint3D.init_method_get_param();
    return _call_native_mb_ret(
      ConeTwistJoint3D._bindings.method_get_param,
      this._owner,
			Variant.Type.FLOAT,
    
      _param
    );
    
  }
  
get swing_span () {
  return this.get_param();
}
set swing_span (new_value) {
  this.set_param(new_value);
}
get twist_span () {
  return this.get_param();
}
set twist_span (new_value) {
  this.set_param(new_value);
}
get bias () {
  return this.get_param();
}
set bias (new_value) {
  this.set_param(new_value);
}
get softness () {
  return this.get_param();
}
set softness (new_value) {
  this.set_param(new_value);
}
get relaxation () {
  return this.get_param();
}
set relaxation (new_value) {
  this.set_param(new_value);
}

  static Param = {
    PARAM_SWING_SPAN: 0,
    PARAM_TWIST_SPAN: 1,
    PARAM_BIAS: 2,
    PARAM_SOFTNESS: 3,
    PARAM_RELAXATION: 4,
    PARAM_MAX: 5,
  }
}