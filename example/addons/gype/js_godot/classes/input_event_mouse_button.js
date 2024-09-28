import * as internal from '__internal__';
import { InputEventMouse } from '@js_godot/classes/input_event_mouse'
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
  method_set_factor;
  method_get_factor;
  method_set_button_index;
  method_get_button_index;
  method_set_pressed;
  method_set_canceled;
  method_set_double_click;
  method_is_double_click;
}
@GodotClass
export class InputEventMouseButton extends InputEventMouse{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("InputEventMouseButton");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_factor() {
    if (!this._bindings.method_set_factor) {
      let classname = new StringName("InputEventMouseButton");
      let methodname = new StringName("set_factor");
      this._bindings.method_set_factor = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_factor() {
    if (!this._bindings.method_get_factor) {
      let classname = new StringName("InputEventMouseButton");
      let methodname = new StringName("get_factor");
      this._bindings.method_get_factor = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_button_index() {
    if (!this._bindings.method_set_button_index) {
      let classname = new StringName("InputEventMouseButton");
      let methodname = new StringName("set_button_index");
      this._bindings.method_set_button_index = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3624991109
      );
    }
  }
  static init_method_get_button_index() {
    if (!this._bindings.method_get_button_index) {
      let classname = new StringName("InputEventMouseButton");
      let methodname = new StringName("get_button_index");
      this._bindings.method_get_button_index = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1132662608
      );
    }
  }
  static init_method_set_pressed() {
    if (!this._bindings.method_set_pressed) {
      let classname = new StringName("InputEventMouseButton");
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
      let classname = new StringName("InputEventMouseButton");
      let methodname = new StringName("set_canceled");
      this._bindings.method_set_canceled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_set_double_click() {
    if (!this._bindings.method_set_double_click) {
      let classname = new StringName("InputEventMouseButton");
      let methodname = new StringName("set_double_click");
      this._bindings.method_set_double_click = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_double_click() {
    if (!this._bindings.method_is_double_click) {
      let classname = new StringName("InputEventMouseButton");
      let methodname = new StringName("is_double_click");
      this._bindings.method_is_double_click = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }

  
  
  set_factor(_factor) {
    InputEventMouseButton.init_method_set_factor();
    return _call_native_mb_no_ret(
      InputEventMouseButton._bindings.method_set_factor,
      this._owner,
      _factor
    );
    
  }
  get_factor() {
    InputEventMouseButton.init_method_get_factor();
    return _call_native_mb_ret(
      InputEventMouseButton._bindings.method_get_factor,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_button_index(_button_index) {
    InputEventMouseButton.init_method_set_button_index();
    return _call_native_mb_no_ret(
      InputEventMouseButton._bindings.method_set_button_index,
      this._owner,
      _button_index
    );
    
  }
  get_button_index() {
    InputEventMouseButton.init_method_get_button_index();
    return _call_native_mb_ret(
      InputEventMouseButton._bindings.method_get_button_index,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_pressed(_pressed) {
    InputEventMouseButton.init_method_set_pressed();
    return _call_native_mb_no_ret(
      InputEventMouseButton._bindings.method_set_pressed,
      this._owner,
      _pressed
    );
    
  }
  set_canceled(_canceled) {
    InputEventMouseButton.init_method_set_canceled();
    return _call_native_mb_no_ret(
      InputEventMouseButton._bindings.method_set_canceled,
      this._owner,
      _canceled
    );
    
  }
  set_double_click(_double_click) {
    InputEventMouseButton.init_method_set_double_click();
    return _call_native_mb_no_ret(
      InputEventMouseButton._bindings.method_set_double_click,
      this._owner,
      _double_click
    );
    
  }
  is_double_click() {
    InputEventMouseButton.init_method_is_double_click();
    return _call_native_mb_ret(
      InputEventMouseButton._bindings.method_is_double_click,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  
get factor () {
  return this.get_factor();
}
set factor (new_value) {
  this.set_factor(new_value);
}
get button_index () {
  return this.get_button_index();
}
set button_index (new_value) {
  this.set_button_index(new_value);
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
get double_click () {
  return this.is_double_click();
}
set double_click (new_value) {
  this.set_double_click(new_value);
}

}