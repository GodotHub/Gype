import * as internal from '__internal__';
import { InputEventFromWindow } from '@js_godot/classes/input_event_from_window'
import { StringName } from '@js_godot/variant/string_name'
import { Variant } from '@js_godot/variant/variant'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";
import { GodotClass } from "@js_godot/core/class_define";

class _MethodBindings {
  method_set_index;
  method_get_index;
  method_set_tilt;
  method_get_tilt;
  method_set_pressure;
  method_get_pressure;
  method_set_pen_inverted;
  method_get_pen_inverted;
  method_set_position;
  method_get_position;
  method_set_relative;
  method_get_relative;
  method_set_screen_relative;
  method_get_screen_relative;
  method_set_velocity;
  method_get_velocity;
  method_set_screen_velocity;
  method_get_screen_velocity;
}
@GodotClass
export class InputEventScreenDrag extends InputEventFromWindow{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("InputEventScreenDrag");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_index() {
    if (!this._bindings.method_set_index) {
      let classname = new StringName("InputEventScreenDrag");
      let methodname = new StringName("set_index");
      this._bindings.method_set_index = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_index() {
    if (!this._bindings.method_get_index) {
      let classname = new StringName("InputEventScreenDrag");
      let methodname = new StringName("get_index");
      this._bindings.method_get_index = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_tilt() {
    if (!this._bindings.method_set_tilt) {
      let classname = new StringName("InputEventScreenDrag");
      let methodname = new StringName("set_tilt");
      this._bindings.method_set_tilt = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        743155724
      );
    }
  }
  static init_method_get_tilt() {
    if (!this._bindings.method_get_tilt) {
      let classname = new StringName("InputEventScreenDrag");
      let methodname = new StringName("get_tilt");
      this._bindings.method_get_tilt = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3341600327
      );
    }
  }
  static init_method_set_pressure() {
    if (!this._bindings.method_set_pressure) {
      let classname = new StringName("InputEventScreenDrag");
      let methodname = new StringName("set_pressure");
      this._bindings.method_set_pressure = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_pressure() {
    if (!this._bindings.method_get_pressure) {
      let classname = new StringName("InputEventScreenDrag");
      let methodname = new StringName("get_pressure");
      this._bindings.method_get_pressure = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_pen_inverted() {
    if (!this._bindings.method_set_pen_inverted) {
      let classname = new StringName("InputEventScreenDrag");
      let methodname = new StringName("set_pen_inverted");
      this._bindings.method_set_pen_inverted = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_get_pen_inverted() {
    if (!this._bindings.method_get_pen_inverted) {
      let classname = new StringName("InputEventScreenDrag");
      let methodname = new StringName("get_pen_inverted");
      this._bindings.method_get_pen_inverted = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_position() {
    if (!this._bindings.method_set_position) {
      let classname = new StringName("InputEventScreenDrag");
      let methodname = new StringName("set_position");
      this._bindings.method_set_position = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        743155724
      );
    }
  }
  static init_method_get_position() {
    if (!this._bindings.method_get_position) {
      let classname = new StringName("InputEventScreenDrag");
      let methodname = new StringName("get_position");
      this._bindings.method_get_position = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3341600327
      );
    }
  }
  static init_method_set_relative() {
    if (!this._bindings.method_set_relative) {
      let classname = new StringName("InputEventScreenDrag");
      let methodname = new StringName("set_relative");
      this._bindings.method_set_relative = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        743155724
      );
    }
  }
  static init_method_get_relative() {
    if (!this._bindings.method_get_relative) {
      let classname = new StringName("InputEventScreenDrag");
      let methodname = new StringName("get_relative");
      this._bindings.method_get_relative = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3341600327
      );
    }
  }
  static init_method_set_screen_relative() {
    if (!this._bindings.method_set_screen_relative) {
      let classname = new StringName("InputEventScreenDrag");
      let methodname = new StringName("set_screen_relative");
      this._bindings.method_set_screen_relative = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        743155724
      );
    }
  }
  static init_method_get_screen_relative() {
    if (!this._bindings.method_get_screen_relative) {
      let classname = new StringName("InputEventScreenDrag");
      let methodname = new StringName("get_screen_relative");
      this._bindings.method_get_screen_relative = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3341600327
      );
    }
  }
  static init_method_set_velocity() {
    if (!this._bindings.method_set_velocity) {
      let classname = new StringName("InputEventScreenDrag");
      let methodname = new StringName("set_velocity");
      this._bindings.method_set_velocity = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        743155724
      );
    }
  }
  static init_method_get_velocity() {
    if (!this._bindings.method_get_velocity) {
      let classname = new StringName("InputEventScreenDrag");
      let methodname = new StringName("get_velocity");
      this._bindings.method_get_velocity = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3341600327
      );
    }
  }
  static init_method_set_screen_velocity() {
    if (!this._bindings.method_set_screen_velocity) {
      let classname = new StringName("InputEventScreenDrag");
      let methodname = new StringName("set_screen_velocity");
      this._bindings.method_set_screen_velocity = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        743155724
      );
    }
  }
  static init_method_get_screen_velocity() {
    if (!this._bindings.method_get_screen_velocity) {
      let classname = new StringName("InputEventScreenDrag");
      let methodname = new StringName("get_screen_velocity");
      this._bindings.method_get_screen_velocity = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3341600327
      );
    }
  }

  
  
  set_index(_index) {
    InputEventScreenDrag.init_method_set_index();
    return _call_native_mb_no_ret(
      InputEventScreenDrag._bindings.method_set_index,
      this._owner,
      _index
    );
    
  }
  get_index() {
    InputEventScreenDrag.init_method_get_index();
    return _call_native_mb_ret(
      InputEventScreenDrag._bindings.method_get_index,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_tilt(_tilt) {
    InputEventScreenDrag.init_method_set_tilt();
    return _call_native_mb_no_ret(
      InputEventScreenDrag._bindings.method_set_tilt,
      this._owner,
      _tilt
    );
    
  }
  get_tilt() {
    InputEventScreenDrag.init_method_get_tilt();
    return _call_native_mb_ret(
      InputEventScreenDrag._bindings.method_get_tilt,
      this._owner,
			Variant.Type.VECTOR2,
    
      
    );
    
  }
  set_pressure(_pressure) {
    InputEventScreenDrag.init_method_set_pressure();
    return _call_native_mb_no_ret(
      InputEventScreenDrag._bindings.method_set_pressure,
      this._owner,
      _pressure
    );
    
  }
  get_pressure() {
    InputEventScreenDrag.init_method_get_pressure();
    return _call_native_mb_ret(
      InputEventScreenDrag._bindings.method_get_pressure,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_pen_inverted(_pen_inverted) {
    InputEventScreenDrag.init_method_set_pen_inverted();
    return _call_native_mb_no_ret(
      InputEventScreenDrag._bindings.method_set_pen_inverted,
      this._owner,
      _pen_inverted
    );
    
  }
  get_pen_inverted() {
    InputEventScreenDrag.init_method_get_pen_inverted();
    return _call_native_mb_ret(
      InputEventScreenDrag._bindings.method_get_pen_inverted,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_position(_position) {
    InputEventScreenDrag.init_method_set_position();
    return _call_native_mb_no_ret(
      InputEventScreenDrag._bindings.method_set_position,
      this._owner,
      _position
    );
    
  }
  get_position() {
    InputEventScreenDrag.init_method_get_position();
    return _call_native_mb_ret(
      InputEventScreenDrag._bindings.method_get_position,
      this._owner,
			Variant.Type.VECTOR2,
    
      
    );
    
  }
  set_relative(_relative) {
    InputEventScreenDrag.init_method_set_relative();
    return _call_native_mb_no_ret(
      InputEventScreenDrag._bindings.method_set_relative,
      this._owner,
      _relative
    );
    
  }
  get_relative() {
    InputEventScreenDrag.init_method_get_relative();
    return _call_native_mb_ret(
      InputEventScreenDrag._bindings.method_get_relative,
      this._owner,
			Variant.Type.VECTOR2,
    
      
    );
    
  }
  set_screen_relative(_relative) {
    InputEventScreenDrag.init_method_set_screen_relative();
    return _call_native_mb_no_ret(
      InputEventScreenDrag._bindings.method_set_screen_relative,
      this._owner,
      _relative
    );
    
  }
  get_screen_relative() {
    InputEventScreenDrag.init_method_get_screen_relative();
    return _call_native_mb_ret(
      InputEventScreenDrag._bindings.method_get_screen_relative,
      this._owner,
			Variant.Type.VECTOR2,
    
      
    );
    
  }
  set_velocity(_velocity) {
    InputEventScreenDrag.init_method_set_velocity();
    return _call_native_mb_no_ret(
      InputEventScreenDrag._bindings.method_set_velocity,
      this._owner,
      _velocity
    );
    
  }
  get_velocity() {
    InputEventScreenDrag.init_method_get_velocity();
    return _call_native_mb_ret(
      InputEventScreenDrag._bindings.method_get_velocity,
      this._owner,
			Variant.Type.VECTOR2,
    
      
    );
    
  }
  set_screen_velocity(_velocity) {
    InputEventScreenDrag.init_method_set_screen_velocity();
    return _call_native_mb_no_ret(
      InputEventScreenDrag._bindings.method_set_screen_velocity,
      this._owner,
      _velocity
    );
    
  }
  get_screen_velocity() {
    InputEventScreenDrag.init_method_get_screen_velocity();
    return _call_native_mb_ret(
      InputEventScreenDrag._bindings.method_get_screen_velocity,
      this._owner,
			Variant.Type.VECTOR2,
    
      
    );
    
  }
  
get index () {
  return this.get_index();
}
set index (new_value) {
  this.set_index(new_value);
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
get position () {
  return this.get_position();
}
set position (new_value) {
  this.set_position(new_value);
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