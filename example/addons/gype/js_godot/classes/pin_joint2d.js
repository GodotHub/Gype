import * as internal from '__internal__';
import { StringName } from '@js_godot/variant/string_name'
import { Variant } from '@js_godot/variant/variant'
import { Joint2D } from '@js_godot/classes/joint2d'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";
import { GodotClass } from "@js_godot/core/class_define";

class _MethodBindings {
  method_set_softness;
  method_get_softness;
  method_set_angular_limit_lower;
  method_get_angular_limit_lower;
  method_set_angular_limit_upper;
  method_get_angular_limit_upper;
  method_set_motor_target_velocity;
  method_get_motor_target_velocity;
  method_set_motor_enabled;
  method_is_motor_enabled;
  method_set_angular_limit_enabled;
  method_is_angular_limit_enabled;
}
@GodotClass
export class PinJoint2D extends Joint2D{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("PinJoint2D");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_softness() {
    if (!this._bindings.method_set_softness) {
      let classname = new StringName("PinJoint2D");
      let methodname = new StringName("set_softness");
      this._bindings.method_set_softness = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_softness() {
    if (!this._bindings.method_get_softness) {
      let classname = new StringName("PinJoint2D");
      let methodname = new StringName("get_softness");
      this._bindings.method_get_softness = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_angular_limit_lower() {
    if (!this._bindings.method_set_angular_limit_lower) {
      let classname = new StringName("PinJoint2D");
      let methodname = new StringName("set_angular_limit_lower");
      this._bindings.method_set_angular_limit_lower = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_angular_limit_lower() {
    if (!this._bindings.method_get_angular_limit_lower) {
      let classname = new StringName("PinJoint2D");
      let methodname = new StringName("get_angular_limit_lower");
      this._bindings.method_get_angular_limit_lower = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_angular_limit_upper() {
    if (!this._bindings.method_set_angular_limit_upper) {
      let classname = new StringName("PinJoint2D");
      let methodname = new StringName("set_angular_limit_upper");
      this._bindings.method_set_angular_limit_upper = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_angular_limit_upper() {
    if (!this._bindings.method_get_angular_limit_upper) {
      let classname = new StringName("PinJoint2D");
      let methodname = new StringName("get_angular_limit_upper");
      this._bindings.method_get_angular_limit_upper = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_motor_target_velocity() {
    if (!this._bindings.method_set_motor_target_velocity) {
      let classname = new StringName("PinJoint2D");
      let methodname = new StringName("set_motor_target_velocity");
      this._bindings.method_set_motor_target_velocity = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_motor_target_velocity() {
    if (!this._bindings.method_get_motor_target_velocity) {
      let classname = new StringName("PinJoint2D");
      let methodname = new StringName("get_motor_target_velocity");
      this._bindings.method_get_motor_target_velocity = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_motor_enabled() {
    if (!this._bindings.method_set_motor_enabled) {
      let classname = new StringName("PinJoint2D");
      let methodname = new StringName("set_motor_enabled");
      this._bindings.method_set_motor_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_motor_enabled() {
    if (!this._bindings.method_is_motor_enabled) {
      let classname = new StringName("PinJoint2D");
      let methodname = new StringName("is_motor_enabled");
      this._bindings.method_is_motor_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_angular_limit_enabled() {
    if (!this._bindings.method_set_angular_limit_enabled) {
      let classname = new StringName("PinJoint2D");
      let methodname = new StringName("set_angular_limit_enabled");
      this._bindings.method_set_angular_limit_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_angular_limit_enabled() {
    if (!this._bindings.method_is_angular_limit_enabled) {
      let classname = new StringName("PinJoint2D");
      let methodname = new StringName("is_angular_limit_enabled");
      this._bindings.method_is_angular_limit_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }

  
  
  set_softness(_softness) {
    PinJoint2D.init_method_set_softness();
    return _call_native_mb_no_ret(
      PinJoint2D._bindings.method_set_softness,
      this._owner,
      _softness
    );
    
  }
  get_softness() {
    PinJoint2D.init_method_get_softness();
    return _call_native_mb_ret(
      PinJoint2D._bindings.method_get_softness,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_angular_limit_lower(_angular_limit_lower) {
    PinJoint2D.init_method_set_angular_limit_lower();
    return _call_native_mb_no_ret(
      PinJoint2D._bindings.method_set_angular_limit_lower,
      this._owner,
      _angular_limit_lower
    );
    
  }
  get_angular_limit_lower() {
    PinJoint2D.init_method_get_angular_limit_lower();
    return _call_native_mb_ret(
      PinJoint2D._bindings.method_get_angular_limit_lower,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_angular_limit_upper(_angular_limit_upper) {
    PinJoint2D.init_method_set_angular_limit_upper();
    return _call_native_mb_no_ret(
      PinJoint2D._bindings.method_set_angular_limit_upper,
      this._owner,
      _angular_limit_upper
    );
    
  }
  get_angular_limit_upper() {
    PinJoint2D.init_method_get_angular_limit_upper();
    return _call_native_mb_ret(
      PinJoint2D._bindings.method_get_angular_limit_upper,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_motor_target_velocity(_motor_target_velocity) {
    PinJoint2D.init_method_set_motor_target_velocity();
    return _call_native_mb_no_ret(
      PinJoint2D._bindings.method_set_motor_target_velocity,
      this._owner,
      _motor_target_velocity
    );
    
  }
  get_motor_target_velocity() {
    PinJoint2D.init_method_get_motor_target_velocity();
    return _call_native_mb_ret(
      PinJoint2D._bindings.method_get_motor_target_velocity,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_motor_enabled(_enabled) {
    PinJoint2D.init_method_set_motor_enabled();
    return _call_native_mb_no_ret(
      PinJoint2D._bindings.method_set_motor_enabled,
      this._owner,
      _enabled
    );
    
  }
  is_motor_enabled() {
    PinJoint2D.init_method_is_motor_enabled();
    return _call_native_mb_ret(
      PinJoint2D._bindings.method_is_motor_enabled,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_angular_limit_enabled(_enabled) {
    PinJoint2D.init_method_set_angular_limit_enabled();
    return _call_native_mb_no_ret(
      PinJoint2D._bindings.method_set_angular_limit_enabled,
      this._owner,
      _enabled
    );
    
  }
  is_angular_limit_enabled() {
    PinJoint2D.init_method_is_angular_limit_enabled();
    return _call_native_mb_ret(
      PinJoint2D._bindings.method_is_angular_limit_enabled,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  
get softness () {
  return this.get_softness();
}
set softness (new_value) {
  this.set_softness(new_value);
}
get angular_limit_enabled () {
  return this.is_angular_limit_enabled();
}
set angular_limit_enabled (new_value) {
  this.set_angular_limit_enabled(new_value);
}
get angular_limit_lower () {
  return this.get_angular_limit_lower();
}
set angular_limit_lower (new_value) {
  this.set_angular_limit_lower(new_value);
}
get angular_limit_upper () {
  return this.get_angular_limit_upper();
}
set angular_limit_upper (new_value) {
  this.set_angular_limit_upper(new_value);
}
get motor_enabled () {
  return this.is_motor_enabled();
}
set motor_enabled (new_value) {
  this.set_motor_enabled(new_value);
}
get motor_target_velocity () {
  return this.get_motor_target_velocity();
}
set motor_target_velocity (new_value) {
  this.set_motor_target_velocity(new_value);
}

}