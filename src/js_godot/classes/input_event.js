import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { Resource } from '@js_godot/classes/resource'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_set_device;
  method_get_device;
  method_is_action;
  method_is_action_pressed;
  method_is_action_released;
  method_get_action_strength;
  method_is_canceled;
  method_is_pressed;
  method_is_released;
  method_is_echo;
  method_as_text;
  method_is_match;
  method_is_action_type;
  method_accumulate;
  method_xformed_by;
}
export class InputEvent extends Resource{

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("InputEvent");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_device() {
    if (!this.#_bindings.method_set_device) {
      let classname = new StringName("InputEvent");
      let methodname = new StringName("set_device");
      this.#_bindings.method_set_device = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_device() {
    if (!this.#_bindings.method_get_device) {
      let classname = new StringName("InputEvent");
      let methodname = new StringName("get_device");
      this.#_bindings.method_get_device = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_is_action() {
    if (!this.#_bindings.method_is_action) {
      let classname = new StringName("InputEvent");
      let methodname = new StringName("is_action");
      this.#_bindings.method_is_action = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1558498928
      );
    }
  }
  static init_method_is_action_pressed() {
    if (!this.#_bindings.method_is_action_pressed) {
      let classname = new StringName("InputEvent");
      let methodname = new StringName("is_action_pressed");
      this.#_bindings.method_is_action_pressed = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1631499404
      );
    }
  }
  static init_method_is_action_released() {
    if (!this.#_bindings.method_is_action_released) {
      let classname = new StringName("InputEvent");
      let methodname = new StringName("is_action_released");
      this.#_bindings.method_is_action_released = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1558498928
      );
    }
  }
  static init_method_get_action_strength() {
    if (!this.#_bindings.method_get_action_strength) {
      let classname = new StringName("InputEvent");
      let methodname = new StringName("get_action_strength");
      this.#_bindings.method_get_action_strength = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        801543509
      );
    }
  }
  static init_method_is_canceled() {
    if (!this.#_bindings.method_is_canceled) {
      let classname = new StringName("InputEvent");
      let methodname = new StringName("is_canceled");
      this.#_bindings.method_is_canceled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_is_pressed() {
    if (!this.#_bindings.method_is_pressed) {
      let classname = new StringName("InputEvent");
      let methodname = new StringName("is_pressed");
      this.#_bindings.method_is_pressed = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_is_released() {
    if (!this.#_bindings.method_is_released) {
      let classname = new StringName("InputEvent");
      let methodname = new StringName("is_released");
      this.#_bindings.method_is_released = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_is_echo() {
    if (!this.#_bindings.method_is_echo) {
      let classname = new StringName("InputEvent");
      let methodname = new StringName("is_echo");
      this.#_bindings.method_is_echo = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_as_text() {
    if (!this.#_bindings.method_as_text) {
      let classname = new StringName("InputEvent");
      let methodname = new StringName("as_text");
      this.#_bindings.method_as_text = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        201670096
      );
    }
  }
  static init_method_is_match() {
    if (!this.#_bindings.method_is_match) {
      let classname = new StringName("InputEvent");
      let methodname = new StringName("is_match");
      this.#_bindings.method_is_match = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1754951977
      );
    }
  }
  static init_method_is_action_type() {
    if (!this.#_bindings.method_is_action_type) {
      let classname = new StringName("InputEvent");
      let methodname = new StringName("is_action_type");
      this.#_bindings.method_is_action_type = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_accumulate() {
    if (!this.#_bindings.method_accumulate) {
      let classname = new StringName("InputEvent");
      let methodname = new StringName("accumulate");
      this.#_bindings.method_accumulate = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1062211774
      );
    }
  }
  static init_method_xformed_by() {
    if (!this.#_bindings.method_xformed_by) {
      let classname = new StringName("InputEvent");
      let methodname = new StringName("xformed_by");
      this.#_bindings.method_xformed_by = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1282766827
      );
    }
  }

  
  
  set_device(_device) {
    InputEvent.init_method_set_device();
    return _call_native_mb_no_ret(
      InputEvent.#_bindings.method_set_device,
      this._owner,
      _device
    );
    
  }
  get_device() {
    InputEvent.init_method_get_device();
    return _call_native_mb_ret(
      InputEvent.#_bindings.method_get_device,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  is_action(_action, _exact_match) {
    InputEvent.init_method_is_action();
    return _call_native_mb_ret(
      InputEvent.#_bindings.method_is_action,
      this._owner,
			Variant.Type.BOOL,
    
      _action, _exact_match
    );
    
  }
  is_action_pressed(_action, _allow_echo, _exact_match) {
    InputEvent.init_method_is_action_pressed();
    return _call_native_mb_ret(
      InputEvent.#_bindings.method_is_action_pressed,
      this._owner,
			Variant.Type.BOOL,
    
      _action, _allow_echo, _exact_match
    );
    
  }
  is_action_released(_action, _exact_match) {
    InputEvent.init_method_is_action_released();
    return _call_native_mb_ret(
      InputEvent.#_bindings.method_is_action_released,
      this._owner,
			Variant.Type.BOOL,
    
      _action, _exact_match
    );
    
  }
  get_action_strength(_action, _exact_match) {
    InputEvent.init_method_get_action_strength();
    return _call_native_mb_ret(
      InputEvent.#_bindings.method_get_action_strength,
      this._owner,
			Variant.Type.FLOAT,
    
      _action, _exact_match
    );
    
  }
  is_canceled() {
    InputEvent.init_method_is_canceled();
    return _call_native_mb_ret(
      InputEvent.#_bindings.method_is_canceled,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  is_pressed() {
    InputEvent.init_method_is_pressed();
    return _call_native_mb_ret(
      InputEvent.#_bindings.method_is_pressed,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  is_released() {
    InputEvent.init_method_is_released();
    return _call_native_mb_ret(
      InputEvent.#_bindings.method_is_released,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  is_echo() {
    InputEvent.init_method_is_echo();
    return _call_native_mb_ret(
      InputEvent.#_bindings.method_is_echo,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  as_text() {
    InputEvent.init_method_as_text();
    return _call_native_mb_ret(
      InputEvent.#_bindings.method_as_text,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  is_match(_event, _exact_match) {
    InputEvent.init_method_is_match();
    return _call_native_mb_ret(
      InputEvent.#_bindings.method_is_match,
      this._owner,
			Variant.Type.BOOL,
    
      _event, _exact_match
    );
    
  }
  is_action_type() {
    InputEvent.init_method_is_action_type();
    return _call_native_mb_ret(
      InputEvent.#_bindings.method_is_action_type,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  accumulate(_with_event) {
    InputEvent.init_method_accumulate();
    return _call_native_mb_ret(
      InputEvent.#_bindings.method_accumulate,
      this._owner,
			Variant.Type.BOOL,
    
      _with_event
    );
    
  }
  xformed_by(_xform, _local_ofs) {
    InputEvent.init_method_xformed_by();
    return _call_native_mb_ret(
      InputEvent.#_bindings.method_xformed_by,
      this._owner,
			Variant.Type.OBJECT,
      _xform, _local_ofs
    );
    
  }
  
get device () {
  return this.get_device();
}
set device (new_value) {
  this.set_device(new_value);
}

}