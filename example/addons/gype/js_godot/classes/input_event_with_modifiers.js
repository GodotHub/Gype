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
  method_set_command_or_control_autoremap;
  method_is_command_or_control_autoremap;
  method_is_command_or_control_pressed;
  method_set_alt_pressed;
  method_is_alt_pressed;
  method_set_shift_pressed;
  method_is_shift_pressed;
  method_set_ctrl_pressed;
  method_is_ctrl_pressed;
  method_set_meta_pressed;
  method_is_meta_pressed;
  method_get_modifiers_mask;
}
@GodotClass
export class InputEventWithModifiers extends InputEventFromWindow{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("InputEventWithModifiers");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_command_or_control_autoremap() {
    if (!this._bindings.method_set_command_or_control_autoremap) {
      let classname = new StringName("InputEventWithModifiers");
      let methodname = new StringName("set_command_or_control_autoremap");
      this._bindings.method_set_command_or_control_autoremap = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_command_or_control_autoremap() {
    if (!this._bindings.method_is_command_or_control_autoremap) {
      let classname = new StringName("InputEventWithModifiers");
      let methodname = new StringName("is_command_or_control_autoremap");
      this._bindings.method_is_command_or_control_autoremap = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_is_command_or_control_pressed() {
    if (!this._bindings.method_is_command_or_control_pressed) {
      let classname = new StringName("InputEventWithModifiers");
      let methodname = new StringName("is_command_or_control_pressed");
      this._bindings.method_is_command_or_control_pressed = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_alt_pressed() {
    if (!this._bindings.method_set_alt_pressed) {
      let classname = new StringName("InputEventWithModifiers");
      let methodname = new StringName("set_alt_pressed");
      this._bindings.method_set_alt_pressed = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_alt_pressed() {
    if (!this._bindings.method_is_alt_pressed) {
      let classname = new StringName("InputEventWithModifiers");
      let methodname = new StringName("is_alt_pressed");
      this._bindings.method_is_alt_pressed = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_shift_pressed() {
    if (!this._bindings.method_set_shift_pressed) {
      let classname = new StringName("InputEventWithModifiers");
      let methodname = new StringName("set_shift_pressed");
      this._bindings.method_set_shift_pressed = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_shift_pressed() {
    if (!this._bindings.method_is_shift_pressed) {
      let classname = new StringName("InputEventWithModifiers");
      let methodname = new StringName("is_shift_pressed");
      this._bindings.method_is_shift_pressed = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_ctrl_pressed() {
    if (!this._bindings.method_set_ctrl_pressed) {
      let classname = new StringName("InputEventWithModifiers");
      let methodname = new StringName("set_ctrl_pressed");
      this._bindings.method_set_ctrl_pressed = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_ctrl_pressed() {
    if (!this._bindings.method_is_ctrl_pressed) {
      let classname = new StringName("InputEventWithModifiers");
      let methodname = new StringName("is_ctrl_pressed");
      this._bindings.method_is_ctrl_pressed = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_meta_pressed() {
    if (!this._bindings.method_set_meta_pressed) {
      let classname = new StringName("InputEventWithModifiers");
      let methodname = new StringName("set_meta_pressed");
      this._bindings.method_set_meta_pressed = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_meta_pressed() {
    if (!this._bindings.method_is_meta_pressed) {
      let classname = new StringName("InputEventWithModifiers");
      let methodname = new StringName("is_meta_pressed");
      this._bindings.method_is_meta_pressed = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_get_modifiers_mask() {
    if (!this._bindings.method_get_modifiers_mask) {
      let classname = new StringName("InputEventWithModifiers");
      let methodname = new StringName("get_modifiers_mask");
      this._bindings.method_get_modifiers_mask = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1258259499
      );
    }
  }

  
  
  set_command_or_control_autoremap(_enable) {
    InputEventWithModifiers.init_method_set_command_or_control_autoremap();
    return _call_native_mb_no_ret(
      InputEventWithModifiers._bindings.method_set_command_or_control_autoremap,
      this._owner,
      _enable
    );
    
  }
  is_command_or_control_autoremap() {
    InputEventWithModifiers.init_method_is_command_or_control_autoremap();
    return _call_native_mb_ret(
      InputEventWithModifiers._bindings.method_is_command_or_control_autoremap,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  is_command_or_control_pressed() {
    InputEventWithModifiers.init_method_is_command_or_control_pressed();
    return _call_native_mb_ret(
      InputEventWithModifiers._bindings.method_is_command_or_control_pressed,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_alt_pressed(_pressed) {
    InputEventWithModifiers.init_method_set_alt_pressed();
    return _call_native_mb_no_ret(
      InputEventWithModifiers._bindings.method_set_alt_pressed,
      this._owner,
      _pressed
    );
    
  }
  is_alt_pressed() {
    InputEventWithModifiers.init_method_is_alt_pressed();
    return _call_native_mb_ret(
      InputEventWithModifiers._bindings.method_is_alt_pressed,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_shift_pressed(_pressed) {
    InputEventWithModifiers.init_method_set_shift_pressed();
    return _call_native_mb_no_ret(
      InputEventWithModifiers._bindings.method_set_shift_pressed,
      this._owner,
      _pressed
    );
    
  }
  is_shift_pressed() {
    InputEventWithModifiers.init_method_is_shift_pressed();
    return _call_native_mb_ret(
      InputEventWithModifiers._bindings.method_is_shift_pressed,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_ctrl_pressed(_pressed) {
    InputEventWithModifiers.init_method_set_ctrl_pressed();
    return _call_native_mb_no_ret(
      InputEventWithModifiers._bindings.method_set_ctrl_pressed,
      this._owner,
      _pressed
    );
    
  }
  is_ctrl_pressed() {
    InputEventWithModifiers.init_method_is_ctrl_pressed();
    return _call_native_mb_ret(
      InputEventWithModifiers._bindings.method_is_ctrl_pressed,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_meta_pressed(_pressed) {
    InputEventWithModifiers.init_method_set_meta_pressed();
    return _call_native_mb_no_ret(
      InputEventWithModifiers._bindings.method_set_meta_pressed,
      this._owner,
      _pressed
    );
    
  }
  is_meta_pressed() {
    InputEventWithModifiers.init_method_is_meta_pressed();
    return _call_native_mb_ret(
      InputEventWithModifiers._bindings.method_is_meta_pressed,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  get_modifiers_mask() {
    InputEventWithModifiers.init_method_get_modifiers_mask();
    return _call_native_mb_ret(
      InputEventWithModifiers._bindings.method_get_modifiers_mask,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  
get command_or_control_autoremap () {
  return this.is_command_or_control_autoremap();
}
set command_or_control_autoremap (new_value) {
  this.set_command_or_control_autoremap(new_value);
}
get alt_pressed () {
  return this.is_alt_pressed();
}
set alt_pressed (new_value) {
  this.set_alt_pressed(new_value);
}
get shift_pressed () {
  return this.is_shift_pressed();
}
set shift_pressed (new_value) {
  this.set_shift_pressed(new_value);
}
get ctrl_pressed () {
  return this.is_ctrl_pressed();
}
set ctrl_pressed (new_value) {
  this.set_ctrl_pressed(new_value);
}
get meta_pressed () {
  return this.is_meta_pressed();
}
set meta_pressed (new_value) {
  this.set_meta_pressed(new_value);
}

}