import * as internal from '__internal__';
import { Joint3D } from 'src/js_godot/classesjoint3d'
class _MethodBindings {
    method_set_param;
    method_get_param;
}


export class ConeTwistJoint3D extends Joint3D{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("ConeTwistJoint3D");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("ConeTwistJoint3D");
      let methodname = new StringName("set_param");
      this._bindings.method_set_param = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1062470226
      );
    }
    {
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
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_param,
      this._owner,
      _param, _value
    );
  }
  get_param(_param) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_param,
      this._owner,
			Variant.Type.FLOAT,
      _param
    );
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