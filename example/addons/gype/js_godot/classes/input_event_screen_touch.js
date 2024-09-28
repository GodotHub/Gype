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
  method_set_position;
  method_get_position;
  method_set_pressed;
  method_set_canceled;
  method_set_double_tap;
  method_is_double_tap;
}
@GodotClass
export class InputEventScreenTouch extends InputEventFromWindow{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("InputEventScreenTouch");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_index() {
    if (!this._bindings.method_set_index) {
      let classname = new StringName("InputEventScreenTouch");
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
      let classname = new StringName("InputEventScreenTouch");
      let methodname = new StringName("get_index");
      this._bindings.method_get_index = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_position() {
    if (!this._bindings.method_set_position) {
      let classname = new StringName("InputEventScreenTouch");
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
      let classname = new StringName("InputEventScreenTouch");
      let methodname = new StringName("get_position");
      this._bindings.method_get_position = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3341600327
      );
    }
  }
  static init_method_set_pressed() {
    if (!this._bindings.method_set_pressed) {
      let classname = new StringName("InputEventScreenTouch");
      let methodname = new StringName("set_pressed");
      this._bindings.method_set_pressed = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_set_canceled() {
    if (!this._bindings.method_set_canceled) {
      let classname = new StringName("InputEventScreenTouch");
      let methodname = new StringName("set_canceled");
      this._bindings.method_set_canceled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_set_double_tap() {
    if (!this._bindings.method_set_double_tap) {
      let classname = new StringName("InputEventScreenTouch");
      let methodname = new StringName("set_double_tap");
      this._bindings.method_set_double_tap = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_double_tap() {
    if (!this._bindings.method_is_double_tap) {
      let classname = new StringName("InputEventScreenTouch");
      let methodname = new StringName("is_double_tap");
      this._bindings.method_is_double_tap = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }

  
  
  set_index(_index) {
    InputEventScreenTouch.init_method_set_index();
    return _call_native_mb_no_ret(
      InputEventScreenTouch._bindings.method_set_index,
      this._owner,
      _index
    );
    
  }
  get_index() {
    InputEventScreenTouch.init_method_get_index();
    return _call_native_mb_ret(
      InputEventScreenTouch._bindings.method_get_index,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_position(_position) {
    InputEventScreenTouch.init_method_set_position();
    return _call_native_mb_no_ret(
      InputEventScreenTouch._bindings.method_set_position,
      this._owner,
      _position
    );
    
  }
  get_position() {
    InputEventScreenTouch.init_method_get_position();
    return _call_native_mb_ret(
      InputEventScreenTouch._bindings.method_get_position,
      this._owner,
			Variant.Type.VECTOR2,
    
      
    );
    
  }
  set_pressed(_pressed) {
    InputEventScreenTouch.init_method_set_pressed();
    return _call_native_mb_no_ret(
      InputEventScreenTouch._bindings.method_set_pressed,
      this._owner,
      _pressed
    );
    
  }
  set_canceled(_canceled) {
    InputEventScreenTouch.init_method_set_canceled();
    return _call_native_mb_no_ret(
      InputEventScreenTouch._bindings.method_set_canceled,
      this._owner,
      _canceled
    );
    
  }
  set_double_tap(_double_tap) {
    InputEventScreenTouch.init_method_set_double_tap();
    return _call_native_mb_no_ret(
      InputEventScreenTouch._bindings.method_set_double_tap,
      this._owner,
      _double_tap
    );
    
  }
  is_double_tap() {
    InputEventScreenTouch.init_method_is_double_tap();
    return _call_native_mb_ret(
      InputEventScreenTouch._bindings.method_is_double_tap,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  
get index () {
  return this.get_index();
}
set index (new_value) {
  this.set_index(new_value);
}
get position () {
  return this.get_position();
}
set position (new_value) {
  this.set_position(new_value);
}
get canceled () {
  return this.is_canceled();
}
set canceled (new_value) {
  this.set_canceled(new_value);
}
get pressed () {
  return this.is_pressed();
}
set pressed (new_value) {
  this.set_pressed(new_value);
}
get double_tap () {
  return this.is_double_tap();
}
set double_tap (new_value) {
  this.set_double_tap(new_value);
}

}