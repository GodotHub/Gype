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

class _MethodBindings {
  method_set_pressed;
  method_set_keycode;
  method_get_keycode;
  method_set_physical_keycode;
  method_get_physical_keycode;
  method_set_key_label;
  method_get_key_label;
  method_set_unicode;
  method_get_unicode;
  method_set_location;
  method_get_location;
  method_set_echo;
  method_get_keycode_with_modifiers;
  method_get_physical_keycode_with_modifiers;
  method_get_key_label_with_modifiers;
  method_as_text_keycode;
  method_as_text_physical_keycode;
  method_as_text_key_label;
  method_as_text_location;
}
export class InputEventKey extends InputEventWithModifiers{

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("InputEventKey");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_pressed() {
    if (!this.#_bindings.method_set_pressed) {
      let classname = new StringName("InputEventKey");
      let methodname = new StringName("set_pressed");
      this.#_bindings.method_set_pressed = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_set_keycode() {
    if (!this.#_bindings.method_set_keycode) {
      let classname = new StringName("InputEventKey");
      let methodname = new StringName("set_keycode");
      this.#_bindings.method_set_keycode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        888074362
      );
    }
  }
  static init_method_get_keycode() {
    if (!this.#_bindings.method_get_keycode) {
      let classname = new StringName("InputEventKey");
      let methodname = new StringName("get_keycode");
      this.#_bindings.method_get_keycode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1585896689
      );
    }
  }
  static init_method_set_physical_keycode() {
    if (!this.#_bindings.method_set_physical_keycode) {
      let classname = new StringName("InputEventKey");
      let methodname = new StringName("set_physical_keycode");
      this.#_bindings.method_set_physical_keycode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        888074362
      );
    }
  }
  static init_method_get_physical_keycode() {
    if (!this.#_bindings.method_get_physical_keycode) {
      let classname = new StringName("InputEventKey");
      let methodname = new StringName("get_physical_keycode");
      this.#_bindings.method_get_physical_keycode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1585896689
      );
    }
  }
  static init_method_set_key_label() {
    if (!this.#_bindings.method_set_key_label) {
      let classname = new StringName("InputEventKey");
      let methodname = new StringName("set_key_label");
      this.#_bindings.method_set_key_label = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        888074362
      );
    }
  }
  static init_method_get_key_label() {
    if (!this.#_bindings.method_get_key_label) {
      let classname = new StringName("InputEventKey");
      let methodname = new StringName("get_key_label");
      this.#_bindings.method_get_key_label = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1585896689
      );
    }
  }
  static init_method_set_unicode() {
    if (!this.#_bindings.method_set_unicode) {
      let classname = new StringName("InputEventKey");
      let methodname = new StringName("set_unicode");
      this.#_bindings.method_set_unicode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_unicode() {
    if (!this.#_bindings.method_get_unicode) {
      let classname = new StringName("InputEventKey");
      let methodname = new StringName("get_unicode");
      this.#_bindings.method_get_unicode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_location() {
    if (!this.#_bindings.method_set_location) {
      let classname = new StringName("InputEventKey");
      let methodname = new StringName("set_location");
      this.#_bindings.method_set_location = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        634453155
      );
    }
  }
  static init_method_get_location() {
    if (!this.#_bindings.method_get_location) {
      let classname = new StringName("InputEventKey");
      let methodname = new StringName("get_location");
      this.#_bindings.method_get_location = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        211810873
      );
    }
  }
  static init_method_set_echo() {
    if (!this.#_bindings.method_set_echo) {
      let classname = new StringName("InputEventKey");
      let methodname = new StringName("set_echo");
      this.#_bindings.method_set_echo = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_get_keycode_with_modifiers() {
    if (!this.#_bindings.method_get_keycode_with_modifiers) {
      let classname = new StringName("InputEventKey");
      let methodname = new StringName("get_keycode_with_modifiers");
      this.#_bindings.method_get_keycode_with_modifiers = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1585896689
      );
    }
  }
  static init_method_get_physical_keycode_with_modifiers() {
    if (!this.#_bindings.method_get_physical_keycode_with_modifiers) {
      let classname = new StringName("InputEventKey");
      let methodname = new StringName("get_physical_keycode_with_modifiers");
      this.#_bindings.method_get_physical_keycode_with_modifiers = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1585896689
      );
    }
  }
  static init_method_get_key_label_with_modifiers() {
    if (!this.#_bindings.method_get_key_label_with_modifiers) {
      let classname = new StringName("InputEventKey");
      let methodname = new StringName("get_key_label_with_modifiers");
      this.#_bindings.method_get_key_label_with_modifiers = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1585896689
      );
    }
  }
  static init_method_as_text_keycode() {
    if (!this.#_bindings.method_as_text_keycode) {
      let classname = new StringName("InputEventKey");
      let methodname = new StringName("as_text_keycode");
      this.#_bindings.method_as_text_keycode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        201670096
      );
    }
  }
  static init_method_as_text_physical_keycode() {
    if (!this.#_bindings.method_as_text_physical_keycode) {
      let classname = new StringName("InputEventKey");
      let methodname = new StringName("as_text_physical_keycode");
      this.#_bindings.method_as_text_physical_keycode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        201670096
      );
    }
  }
  static init_method_as_text_key_label() {
    if (!this.#_bindings.method_as_text_key_label) {
      let classname = new StringName("InputEventKey");
      let methodname = new StringName("as_text_key_label");
      this.#_bindings.method_as_text_key_label = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        201670096
      );
    }
  }
  static init_method_as_text_location() {
    if (!this.#_bindings.method_as_text_location) {
      let classname = new StringName("InputEventKey");
      let methodname = new StringName("as_text_location");
      this.#_bindings.method_as_text_location = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        201670096
      );
    }
  }

  
  
  set_pressed(_pressed) {
    InputEventKey.init_method_set_pressed();
    return _call_native_mb_no_ret(
      InputEventKey.#_bindings.method_set_pressed,
      this._owner,
      _pressed
    );
    
  }
  set_keycode(_keycode) {
    InputEventKey.init_method_set_keycode();
    return _call_native_mb_no_ret(
      InputEventKey.#_bindings.method_set_keycode,
      this._owner,
      _keycode
    );
    
  }
  get_keycode() {
    InputEventKey.init_method_get_keycode();
    return _call_native_mb_ret(
      InputEventKey.#_bindings.method_get_keycode,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_physical_keycode(_physical_keycode) {
    InputEventKey.init_method_set_physical_keycode();
    return _call_native_mb_no_ret(
      InputEventKey.#_bindings.method_set_physical_keycode,
      this._owner,
      _physical_keycode
    );
    
  }
  get_physical_keycode() {
    InputEventKey.init_method_get_physical_keycode();
    return _call_native_mb_ret(
      InputEventKey.#_bindings.method_get_physical_keycode,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_key_label(_key_label) {
    InputEventKey.init_method_set_key_label();
    return _call_native_mb_no_ret(
      InputEventKey.#_bindings.method_set_key_label,
      this._owner,
      _key_label
    );
    
  }
  get_key_label() {
    InputEventKey.init_method_get_key_label();
    return _call_native_mb_ret(
      InputEventKey.#_bindings.method_get_key_label,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_unicode(_unicode) {
    InputEventKey.init_method_set_unicode();
    return _call_native_mb_no_ret(
      InputEventKey.#_bindings.method_set_unicode,
      this._owner,
      _unicode
    );
    
  }
  get_unicode() {
    InputEventKey.init_method_get_unicode();
    return _call_native_mb_ret(
      InputEventKey.#_bindings.method_get_unicode,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_location(_location) {
    InputEventKey.init_method_set_location();
    return _call_native_mb_no_ret(
      InputEventKey.#_bindings.method_set_location,
      this._owner,
      _location
    );
    
  }
  get_location() {
    InputEventKey.init_method_get_location();
    return _call_native_mb_ret(
      InputEventKey.#_bindings.method_get_location,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_echo(_echo) {
    InputEventKey.init_method_set_echo();
    return _call_native_mb_no_ret(
      InputEventKey.#_bindings.method_set_echo,
      this._owner,
      _echo
    );
    
  }
  get_keycode_with_modifiers() {
    InputEventKey.init_method_get_keycode_with_modifiers();
    return _call_native_mb_ret(
      InputEventKey.#_bindings.method_get_keycode_with_modifiers,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  get_physical_keycode_with_modifiers() {
    InputEventKey.init_method_get_physical_keycode_with_modifiers();
    return _call_native_mb_ret(
      InputEventKey.#_bindings.method_get_physical_keycode_with_modifiers,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  get_key_label_with_modifiers() {
    InputEventKey.init_method_get_key_label_with_modifiers();
    return _call_native_mb_ret(
      InputEventKey.#_bindings.method_get_key_label_with_modifiers,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  as_text_keycode() {
    InputEventKey.init_method_as_text_keycode();
    return _call_native_mb_ret(
      InputEventKey.#_bindings.method_as_text_keycode,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  as_text_physical_keycode() {
    InputEventKey.init_method_as_text_physical_keycode();
    return _call_native_mb_ret(
      InputEventKey.#_bindings.method_as_text_physical_keycode,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  as_text_key_label() {
    InputEventKey.init_method_as_text_key_label();
    return _call_native_mb_ret(
      InputEventKey.#_bindings.method_as_text_key_label,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  as_text_location() {
    InputEventKey.init_method_as_text_location();
    return _call_native_mb_ret(
      InputEventKey.#_bindings.method_as_text_location,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  
get pressed () {
  return this.is_pressed();
}
set pressed (new_value) {
  this.set_pressed(new_value);
}
get keycode () {
  return this.get_keycode();
}
set keycode (new_value) {
  this.set_keycode(new_value);
}
get physical_keycode () {
  return this.get_physical_keycode();
}
set physical_keycode (new_value) {
  this.set_physical_keycode(new_value);
}
get key_label () {
  return this.get_key_label();
}
set key_label (new_value) {
  this.set_key_label(new_value);
}
get unicode () {
  return this.get_unicode();
}
set unicode (new_value) {
  this.set_unicode(new_value);
}
get location () {
  return this.get_location();
}
set location (new_value) {
  this.set_location(new_value);
}
get echo () {
  return this.is_echo();
}
set echo (new_value) {
  this.set_echo(new_value);
}

}