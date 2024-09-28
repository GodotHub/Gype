import * as internal from '__internal__';
import { InputEvent } from '@js_godot/classes/input_event'
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
  method_set_action;
  method_get_action;
  method_set_pressed;
  method_set_strength;
  method_get_strength;
  method_set_event_index;
  method_get_event_index;
}
@GodotClass
export class InputEventAction extends InputEvent{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("InputEventAction");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_action() {
    if (!this._bindings.method_set_action) {
      let classname = new StringName("InputEventAction");
      let methodname = new StringName("set_action");
      this._bindings.method_set_action = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3304788590
      );
    }
  }
  static init_method_get_action() {
    if (!this._bindings.method_get_action) {
      let classname = new StringName("InputEventAction");
      let methodname = new StringName("get_action");
      this._bindings.method_get_action = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2002593661
      );
    }
  }
  static init_method_set_pressed() {
    if (!this._bindings.method_set_pressed) {
      let classname = new StringName("InputEventAction");
      let methodname = new StringName("set_pressed");
      this._bindings.method_set_pressed = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_set_strength() {
    if (!this._bindings.method_set_strength) {
      let classname = new StringName("InputEventAction");
      let methodname = new StringName("set_strength");
      this._bindings.method_set_strength = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_strength() {
    if (!this._bindings.method_get_strength) {
      let classname = new StringName("InputEventAction");
      let methodname = new StringName("get_strength");
      this._bindings.method_get_strength = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_event_index() {
    if (!this._bindings.method_set_event_index) {
      let classname = new StringName("InputEventAction");
      let methodname = new StringName("set_event_index");
      this._bindings.method_set_event_index = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_event_index() {
    if (!this._bindings.method_get_event_index) {
      let classname = new StringName("InputEventAction");
      let methodname = new StringName("get_event_index");
      this._bindings.method_get_event_index = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }

  
  
  set_action(_action) {
    InputEventAction.init_method_set_action();
    return _call_native_mb_no_ret(
      InputEventAction._bindings.method_set_action,
      this._owner,
      _action
    );
    
  }
  get_action() {
    InputEventAction.init_method_get_action();
    return _call_native_mb_ret(
      InputEventAction._bindings.method_get_action,
      this._owner,
			Variant.Type.STRING_NAME,
    
      
    );
    
  }
  set_pressed(_pressed) {
    InputEventAction.init_method_set_pressed();
    return _call_native_mb_no_ret(
      InputEventAction._bindings.method_set_pressed,
      this._owner,
      _pressed
    );
    
  }
  set_strength(_strength) {
    InputEventAction.init_method_set_strength();
    return _call_native_mb_no_ret(
      InputEventAction._bindings.method_set_strength,
      this._owner,
      _strength
    );
    
  }
  get_strength() {
    InputEventAction.init_method_get_strength();
    return _call_native_mb_ret(
      InputEventAction._bindings.method_get_strength,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_event_index(_index) {
    InputEventAction.init_method_set_event_index();
    return _call_native_mb_no_ret(
      InputEventAction._bindings.method_set_event_index,
      this._owner,
      _index
    );
    
  }
  get_event_index() {
    InputEventAction.init_method_get_event_index();
    return _call_native_mb_ret(
      InputEventAction._bindings.method_get_event_index,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  
get action () {
  return this.get_action();
}
set action (new_value) {
  this.set_action(new_value);
}
get pressed () {
  return this.is_pressed();
}
set pressed (new_value) {
  this.set_pressed(new_value);
}
get strength () {
  return this.get_strength();
}
set strength (new_value) {
  this.set_strength(new_value);
}
get event_index () {
  return this.get_event_index();
}
set event_index (new_value) {
  this.set_event_index(new_value);
}

}