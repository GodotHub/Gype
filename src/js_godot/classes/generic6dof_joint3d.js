import * as internal from '__internal__';
import { Joint3D } from 'src/js_godot/classes/joint3d'
import { StringName } from 'src/js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

class _MethodBindings {
    method_set_param_x;
    method_get_param_x;
    method_set_param_y;
    method_get_param_y;
    method_set_param_z;
    method_get_param_z;
    method_set_flag_x;
    method_get_flag_x;
    method_set_flag_y;
    method_get_flag_y;
    method_set_flag_z;
    method_get_flag_z;
}


export class Generic6DOFJoint3D extends Joint3D{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("Generic6DOFJoint3D");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("Generic6DOFJoint3D");
        let methodname = new StringName("set_param_x");
        this._bindings.method_set_param_x = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2018184242
        );
      }
      {
        let classname = new StringName("Generic6DOFJoint3D");
        let methodname = new StringName("get_param_x");
        this._bindings.method_get_param_x = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2599835054
        );
      }
      {
        let classname = new StringName("Generic6DOFJoint3D");
        let methodname = new StringName("set_param_y");
        this._bindings.method_set_param_y = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2018184242
        );
      }
      {
        let classname = new StringName("Generic6DOFJoint3D");
        let methodname = new StringName("get_param_y");
        this._bindings.method_get_param_y = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2599835054
        );
      }
      {
        let classname = new StringName("Generic6DOFJoint3D");
        let methodname = new StringName("set_param_z");
        this._bindings.method_set_param_z = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2018184242
        );
      }
      {
        let classname = new StringName("Generic6DOFJoint3D");
        let methodname = new StringName("get_param_z");
        this._bindings.method_get_param_z = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2599835054
        );
      }
      {
        let classname = new StringName("Generic6DOFJoint3D");
        let methodname = new StringName("set_flag_x");
        this._bindings.method_set_flag_x = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2451594564
        );
      }
      {
        let classname = new StringName("Generic6DOFJoint3D");
        let methodname = new StringName("get_flag_x");
        this._bindings.method_get_flag_x = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2122427807
        );
      }
      {
        let classname = new StringName("Generic6DOFJoint3D");
        let methodname = new StringName("set_flag_y");
        this._bindings.method_set_flag_y = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2451594564
        );
      }
      {
        let classname = new StringName("Generic6DOFJoint3D");
        let methodname = new StringName("get_flag_y");
        this._bindings.method_get_flag_y = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2122427807
        );
      }
      {
        let classname = new StringName("Generic6DOFJoint3D");
        let methodname = new StringName("set_flag_z");
        this._bindings.method_set_flag_z = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2451594564
        );
      }
      {
        let classname = new StringName("Generic6DOFJoint3D");
        let methodname = new StringName("get_flag_z");
        this._bindings.method_get_flag_z = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2122427807
        );
      }
  }
  set_param_x(_param, _value) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_param_x,
      this._owner,
      _param, _value
    );
    
  }
  get_param_x(_param) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_param_x,
      this._owner,
			Variant.Type.FLOAT,
      _param
    );
    
  }
  set_param_y(_param, _value) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_param_y,
      this._owner,
      _param, _value
    );
    
  }
  get_param_y(_param) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_param_y,
      this._owner,
			Variant.Type.FLOAT,
      _param
    );
    
  }
  set_param_z(_param, _value) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_param_z,
      this._owner,
      _param, _value
    );
    
  }
  get_param_z(_param) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_param_z,
      this._owner,
			Variant.Type.FLOAT,
      _param
    );
    
  }
  set_flag_x(_flag, _value) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_flag_x,
      this._owner,
      _flag, _value
    );
    
  }
  get_flag_x(_flag) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_flag_x,
      this._owner,
			Variant.Type.BOOL,
      _flag
    );
    
  }
  set_flag_y(_flag, _value) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_flag_y,
      this._owner,
      _flag, _value
    );
    
  }
  get_flag_y(_flag) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_flag_y,
      this._owner,
			Variant.Type.BOOL,
      _flag
    );
    
  }
  set_flag_z(_flag, _value) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_flag_z,
      this._owner,
      _flag, _value
    );
    
  }
  get_flag_z(_flag) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_flag_z,
      this._owner,
			Variant.Type.BOOL,
      _flag
    );
    
  }
  static Param = {
    PARAM_LINEAR_LOWER_LIMIT: 0,
    PARAM_LINEAR_UPPER_LIMIT: 1,
    PARAM_LINEAR_LIMIT_SOFTNESS: 2,
    PARAM_LINEAR_RESTITUTION: 3,
    PARAM_LINEAR_DAMPING: 4,
    PARAM_LINEAR_MOTOR_TARGET_VELOCITY: 5,
    PARAM_LINEAR_MOTOR_FORCE_LIMIT: 6,
    PARAM_LINEAR_SPRING_STIFFNESS: 7,
    PARAM_LINEAR_SPRING_DAMPING: 8,
    PARAM_LINEAR_SPRING_EQUILIBRIUM_POINT: 9,
    PARAM_ANGULAR_LOWER_LIMIT: 10,
    PARAM_ANGULAR_UPPER_LIMIT: 11,
    PARAM_ANGULAR_LIMIT_SOFTNESS: 12,
    PARAM_ANGULAR_DAMPING: 13,
    PARAM_ANGULAR_RESTITUTION: 14,
    PARAM_ANGULAR_FORCE_LIMIT: 15,
    PARAM_ANGULAR_ERP: 16,
    PARAM_ANGULAR_MOTOR_TARGET_VELOCITY: 17,
    PARAM_ANGULAR_MOTOR_FORCE_LIMIT: 18,
    PARAM_ANGULAR_SPRING_STIFFNESS: 19,
    PARAM_ANGULAR_SPRING_DAMPING: 20,
    PARAM_ANGULAR_SPRING_EQUILIBRIUM_POINT: 21,
    PARAM_MAX: 22,
  }
  static Flag = {
    FLAG_ENABLE_LINEAR_LIMIT: 0,
    FLAG_ENABLE_ANGULAR_LIMIT: 1,
    FLAG_ENABLE_LINEAR_SPRING: 3,
    FLAG_ENABLE_ANGULAR_SPRING: 2,
    FLAG_ENABLE_MOTOR: 4,
    FLAG_ENABLE_LINEAR_MOTOR: 5,
    FLAG_MAX: 6,
  }
}