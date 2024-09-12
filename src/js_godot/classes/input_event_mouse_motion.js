import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { InputEventMouse } from '@js_godot/classes/input_event_mouse'
import { StringName } from '@js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_set_tilt;
  method_get_tilt;
  method_set_pressure;
  method_get_pressure;
  method_set_pen_inverted;
  method_get_pen_inverted;
  method_set_relative;
  method_get_relative;
  method_set_screen_relative;
  method_get_screen_relative;
  method_set_velocity;
  method_get_velocity;
  method_set_screen_velocity;
  method_get_screen_velocity;
}
export class InputEventMouseMotion extends InputEventMouse{

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("InputEventMouseMotion");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_tilt() {
    if (!this.#_bindings.method_set_tilt) {
      let classname = new StringName("InputEventMouseMotion");
      let methodname = new StringName("set_tilt");
      this.#_bindings.method_set_tilt = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        743155724
      );
    }
  }
  static init_method_get_tilt() {
    if (!this.#_bindings.method_get_tilt) {
      let classname = new StringName("InputEventMouseMotion");
      let methodname = new StringName("get_tilt");
      this.#_bindings.method_get_tilt = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3341600327
      );
    }
  }
  static init_method_set_pressure() {
    if (!this.#_bindings.method_set_pressure) {
      let classname = new StringName("InputEventMouseMotion");
      let methodname = new StringName("set_pressure");
      this.#_bindings.method_set_pressure = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_pressure() {
    if (!this.#_bindings.method_get_pressure) {
      let classname = new StringName("InputEventMouseMotion");
      let methodname = new StringName("get_pressure");
      this.#_bindings.method_get_pressure = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_pen_inverted() {
    if (!this.#_bindings.method_set_pen_inverted) {
      let classname = new StringName("InputEventMouseMotion");
      let methodname = new StringName("set_pen_inverted");
      this.#_bindings.method_set_pen_inverted = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_get_pen_inverted() {
    if (!this.#_bindings.method_get_pen_inverted) {
      let classname = new StringName("InputEventMouseMotion");
      let methodname = new StringName("get_pen_inverted");
      this.#_bindings.method_get_pen_inverted = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_relative() {
    if (!this.#_bindings.method_set_relative) {
      let classname = new StringName("InputEventMouseMotion");
      let methodname = new StringName("set_relative");
      this.#_bindings.method_set_relative = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        743155724
      );
    }
  }
  static init_method_get_relative() {
    if (!this.#_bindings.method_get_relative) {
      let classname = new StringName("InputEventMouseMotion");
      let methodname = new StringName("get_relative");
      this.#_bindings.method_get_relative = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3341600327
      );
    }
  }
  static init_method_set_screen_relative() {
    if (!this.#_bindings.method_set_screen_relative) {
      let classname = new StringName("InputEventMouseMotion");
      let methodname = new StringName("set_screen_relative");
      this.#_bindings.method_set_screen_relative = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        743155724
      );
    }
  }
  static init_method_get_screen_relative() {
    if (!this.#_bindings.method_get_screen_relative) {
      let classname = new StringName("InputEventMouseMotion");
      let methodname = new StringName("get_screen_relative");
      this.#_bindings.method_get_screen_relative = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3341600327
      );
    }
  }
  static init_method_set_velocity() {
    if (!this.#_bindings.method_set_velocity) {
      let classname = new StringName("InputEventMouseMotion");
      let methodname = new StringName("set_velocity");
      this.#_bindings.method_set_velocity = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        743155724
      );
    }
  }
  static init_method_get_velocity() {
    if (!this.#_bindings.method_get_velocity) {
      let classname = new StringName("InputEventMouseMotion");
      let methodname = new StringName("get_velocity");
      this.#_bindings.method_get_velocity = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3341600327
      );
    }
  }
  static init_method_set_screen_velocity() {
    if (!this.#_bindings.method_set_screen_velocity) {
      let classname = new StringName("InputEventMouseMotion");
      let methodname = new StringName("set_screen_velocity");
      this.#_bindings.method_set_screen_velocity = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        743155724
      );
    }
  }
  static init_method_get_screen_velocity() {
    if (!this.#_bindings.method_get_screen_velocity) {
      let classname = new StringName("InputEventMouseMotion");
      let methodname = new StringName("get_screen_velocity");
      this.#_bindings.method_get_screen_velocity = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3341600327
      );
    }
  }

  
  
  set_tilt(_tilt) {
    InputEventMouseMotion.init_method_set_tilt();
    return _call_native_mb_no_ret(
      InputEventMouseMotion.#_bindings.method_set_tilt,
      this._owner,
      _tilt
    );
    
  }
  get_tilt() {
    InputEventMouseMotion.init_method_get_tilt();
    return _call_native_mb_ret(
      InputEventMouseMotion.#_bindings.method_get_tilt,
      this._owner,
			Variant.Type.VECTOR2,
    
      
    );
    
  }
  set_pressure(_pressure) {
    InputEventMouseMotion.init_method_set_pressure();
    return _call_native_mb_no_ret(
      InputEventMouseMotion.#_bindings.method_set_pressure,
      this._owner,
      _pressure
    );
    
  }
  get_pressure() {
    InputEventMouseMotion.init_method_get_pressure();
    return _call_native_mb_ret(
      InputEventMouseMotion.#_bindings.method_get_pressure,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_pen_inverted(_pen_inverted) {
    InputEventMouseMotion.init_method_set_pen_inverted();
    return _call_native_mb_no_ret(
      InputEventMouseMotion.#_bindings.method_set_pen_inverted,
      this._owner,
      _pen_inverted
    );
    
  }
  get_pen_inverted() {
    InputEventMouseMotion.init_method_get_pen_inverted();
    return _call_native_mb_ret(
      InputEventMouseMotion.#_bindings.method_get_pen_inverted,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_relative(_relative) {
    InputEventMouseMotion.init_method_set_relative();
    return _call_native_mb_no_ret(
      InputEventMouseMotion.#_bindings.method_set_relative,
      this._owner,
      _relative
    );
    
  }
  get_relative() {
    InputEventMouseMotion.init_method_get_relative();
    return _call_native_mb_ret(
      InputEventMouseMotion.#_bindings.method_get_relative,
      this._owner,
			Variant.Type.VECTOR2,
    
      
    );
    
  }
  set_screen_relative(_relative) {
    InputEventMouseMotion.init_method_set_screen_relative();
    return _call_native_mb_no_ret(
      InputEventMouseMotion.#_bindings.method_set_screen_relative,
      this._owner,
      _relative
    );
    
  }
  get_screen_relative() {
    InputEventMouseMotion.init_method_get_screen_relative();
    return _call_native_mb_ret(
      InputEventMouseMotion.#_bindings.method_get_screen_relative,
      this._owner,
			Variant.Type.VECTOR2,
    
      
    );
    
  }
  set_velocity(_velocity) {
    InputEventMouseMotion.init_method_set_velocity();
    return _call_native_mb_no_ret(
      InputEventMouseMotion.#_bindings.method_set_velocity,
      this._owner,
      _velocity
    );
    
  }
  get_velocity() {
    InputEventMouseMotion.init_method_get_velocity();
    return _call_native_mb_ret(
      InputEventMouseMotion.#_bindings.method_get_velocity,
      this._owner,
			Variant.Type.VECTOR2,
    
      
    );
    
  }
  set_screen_velocity(_velocity) {
    InputEventMouseMotion.init_method_set_screen_velocity();
    return _call_native_mb_no_ret(
      InputEventMouseMotion.#_bindings.method_set_screen_velocity,
      this._owner,
      _velocity
    );
    
  }
  get_screen_velocity() {
    InputEventMouseMotion.init_method_get_screen_velocity();
    return _call_native_mb_ret(
      InputEventMouseMotion.#_bindings.method_get_screen_velocity,
      this._owner,
			Variant.Type.VECTOR2,
    
      
    );
    
  }
  
get tilt () {
  return this.get_tilt();
}
set tilt (new_value) {
  this.set_tilt(new_value);
}
get pressure () {
  return this.get_pressure();
}
set pressure (new_value) {
  this.set_pressure(new_value);
}
get pen_inverted () {
  return this.get_pen_inverted();
}
set pen_inverted (new_value) {
  this.set_pen_inverted(new_value);
}
get relative () {
  return this.get_relative();
}
set relative (new_value) {
  this.set_relative(new_value);
}
get screen_relative () {
  return this.get_screen_relative();
}
set screen_relative (new_value) {
  this.set_screen_relative(new_value);
}
get velocity () {
  return this.get_velocity();
}
set velocity (new_value) {
  this.set_velocity(new_value);
}
get screen_velocity () {
  return this.get_screen_velocity();
}
set screen_velocity (new_value) {
  this.set_screen_velocity(new_value);
}

}