import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { InputEventWithModifiers } from '@js_godot/classes/input_event_with_modifiers'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";
import { GodotClass } from "@js_godot/core/class_define";

class _MethodBindings {
  method_set_button_mask;
  method_get_button_mask;
  method_set_position;
  method_get_position;
  method_set_global_position;
  method_get_global_position;
}
@GodotClass
export class InputEventMouse extends InputEventWithModifiers{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("InputEventMouse");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_button_mask() {
    if (!this._bindings.method_set_button_mask) {
      let classname = new StringName("InputEventMouse");
      let methodname = new StringName("set_button_mask");
      this._bindings.method_set_button_mask = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3950145251
      );
    }
  }
  static init_method_get_button_mask() {
    if (!this._bindings.method_get_button_mask) {
      let classname = new StringName("InputEventMouse");
      let methodname = new StringName("get_button_mask");
      this._bindings.method_get_button_mask = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2512161324
      );
    }
  }
  static init_method_set_position() {
    if (!this._bindings.method_set_position) {
      let classname = new StringName("InputEventMouse");
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
      let classname = new StringName("InputEventMouse");
      let methodname = new StringName("get_position");
      this._bindings.method_get_position = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3341600327
      );
    }
  }
  static init_method_set_global_position() {
    if (!this._bindings.method_set_global_position) {
      let classname = new StringName("InputEventMouse");
      let methodname = new StringName("set_global_position");
      this._bindings.method_set_global_position = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        743155724
      );
    }
  }
  static init_method_get_global_position() {
    if (!this._bindings.method_get_global_position) {
      let classname = new StringName("InputEventMouse");
      let methodname = new StringName("get_global_position");
      this._bindings.method_get_global_position = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3341600327
      );
    }
  }

  
  
  set_button_mask(_button_mask) {
    InputEventMouse.init_method_set_button_mask();
    return _call_native_mb_no_ret(
      InputEventMouse._bindings.method_set_button_mask,
      this._owner,
      _button_mask
    );
    
  }
  get_button_mask() {
    InputEventMouse.init_method_get_button_mask();
    return _call_native_mb_ret(
      InputEventMouse._bindings.method_get_button_mask,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  set_position(_position) {
    InputEventMouse.init_method_set_position();
    return _call_native_mb_no_ret(
      InputEventMouse._bindings.method_set_position,
      this._owner,
      _position
    );
    
  }
  get_position() {
    InputEventMouse.init_method_get_position();
    return _call_native_mb_ret(
      InputEventMouse._bindings.method_get_position,
      this._owner,
			Variant.Type.VECTOR2,
    
      
    );
    
  }
  set_global_position(_global_position) {
    InputEventMouse.init_method_set_global_position();
    return _call_native_mb_no_ret(
      InputEventMouse._bindings.method_set_global_position,
      this._owner,
      _global_position
    );
    
  }
  get_global_position() {
    InputEventMouse.init_method_get_global_position();
    return _call_native_mb_ret(
      InputEventMouse._bindings.method_get_global_position,
      this._owner,
			Variant.Type.VECTOR2,
    
      
    );
    
  }
  
get button_mask () {
  return this.get_button_mask();
}
set button_mask (new_value) {
  this.set_button_mask(new_value);
}
get position () {
  return this.get_position();
}
set position (new_value) {
  this.set_position(new_value);
}
get global_position () {
  return this.get_global_position();
}
set global_position (new_value) {
  this.set_global_position(new_value);
}

}