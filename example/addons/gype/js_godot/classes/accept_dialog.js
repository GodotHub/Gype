import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { GDString } from '@js_godot/variant/gd_string'
import { Window } from '@js_godot/classes/window'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_get_ok_button;
  method_get_label;
  method_set_hide_on_ok;
  method_get_hide_on_ok;
  method_set_close_on_escape;
  method_get_close_on_escape;
  method_add_button;
  method_add_cancel_button;
  method_remove_button;
  method_register_text_enter;
  method_set_text;
  method_get_text;
  method_set_autowrap;
  method_has_autowrap;
  method_set_ok_button_text;
  method_get_ok_button_text;
}
export class AcceptDialog extends Window{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("AcceptDialog");
    } else {
      super(godot_object);
    }
  }
  
  static async _init_bindings() {
    if (this.#initialized) {
      return;
    }
    this.#initialized = true;
    {
      let classname = new StringName("AcceptDialog");
      let methodname = new StringName("get_ok_button");
      this._bindings.method_get_ok_button = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1856205918
      );
    }
    {
      let classname = new StringName("AcceptDialog");
      let methodname = new StringName("get_label");
      this._bindings.method_get_label = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        566733104
      );
    }
    {
      let classname = new StringName("AcceptDialog");
      let methodname = new StringName("set_hide_on_ok");
      this._bindings.method_set_hide_on_ok = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("AcceptDialog");
      let methodname = new StringName("get_hide_on_ok");
      this._bindings.method_get_hide_on_ok = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("AcceptDialog");
      let methodname = new StringName("set_close_on_escape");
      this._bindings.method_set_close_on_escape = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("AcceptDialog");
      let methodname = new StringName("get_close_on_escape");
      this._bindings.method_get_close_on_escape = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("AcceptDialog");
      let methodname = new StringName("add_button");
      this._bindings.method_add_button = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3328440682
      );
    }
    {
      let classname = new StringName("AcceptDialog");
      let methodname = new StringName("add_cancel_button");
      this._bindings.method_add_cancel_button = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        242045556
      );
    }
    {
      let classname = new StringName("AcceptDialog");
      let methodname = new StringName("remove_button");
      this._bindings.method_remove_button = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2068354942
      );
    }
    {
      let classname = new StringName("AcceptDialog");
      let methodname = new StringName("register_text_enter");
      this._bindings.method_register_text_enter = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3714008017
      );
    }
    {
      let classname = new StringName("AcceptDialog");
      let methodname = new StringName("set_text");
      this._bindings.method_set_text = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        83702148
      );
    }
    {
      let classname = new StringName("AcceptDialog");
      let methodname = new StringName("get_text");
      this._bindings.method_get_text = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        201670096
      );
    }
    {
      let classname = new StringName("AcceptDialog");
      let methodname = new StringName("set_autowrap");
      this._bindings.method_set_autowrap = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("AcceptDialog");
      let methodname = new StringName("has_autowrap");
      this._bindings.method_has_autowrap = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2240911060
      );
    }
    {
      let classname = new StringName("AcceptDialog");
      let methodname = new StringName("set_ok_button_text");
      this._bindings.method_set_ok_button_text = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        83702148
      );
    }
    {
      let classname = new StringName("AcceptDialog");
      let methodname = new StringName("get_ok_button_text");
      this._bindings.method_get_ok_button_text = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        201670096
      );
    }
  }
  
  get_ok_button() {
    return _call_native_mb_ret(
      AcceptDialog._bindings.method_get_ok_button,
      this._owner,
			Variant.INT,
      
    );
    
  }
  get_label() {
    return _call_native_mb_ret(
      AcceptDialog._bindings.method_get_label,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_hide_on_ok(_enabled) {
    return _call_native_mb_no_ret(
      AcceptDialog._bindings.method_set_hide_on_ok,
      this._owner,
      _enabled
    );
    
  }
  get_hide_on_ok() {
    return _call_native_mb_ret(
      AcceptDialog._bindings.method_get_hide_on_ok,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_close_on_escape(_enabled) {
    return _call_native_mb_no_ret(
      AcceptDialog._bindings.method_set_close_on_escape,
      this._owner,
      _enabled
    );
    
  }
  get_close_on_escape() {
    return _call_native_mb_ret(
      AcceptDialog._bindings.method_get_close_on_escape,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  add_button(_text, _right, _action) {
    return _call_native_mb_ret(
      AcceptDialog._bindings.method_add_button,
      this._owner,
			Variant.INT,
      _text, _right, _action
    );
    
  }
  add_cancel_button(_name) {
    return _call_native_mb_ret(
      AcceptDialog._bindings.method_add_cancel_button,
      this._owner,
			Variant.INT,
      _name
    );
    
  }
  remove_button(_button) {
    return _call_native_mb_no_ret(
      AcceptDialog._bindings.method_remove_button,
      this._owner,
      _button
    );
    
  }
  register_text_enter(_line_edit) {
    return _call_native_mb_no_ret(
      AcceptDialog._bindings.method_register_text_enter,
      this._owner,
      _line_edit
    );
    
  }
  set_text(_text) {
    return _call_native_mb_no_ret(
      AcceptDialog._bindings.method_set_text,
      this._owner,
      _text
    );
    
  }
  get_text() {
    return _call_native_mb_ret(
      AcceptDialog._bindings.method_get_text,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  set_autowrap(_autowrap) {
    return _call_native_mb_no_ret(
      AcceptDialog._bindings.method_set_autowrap,
      this._owner,
      _autowrap
    );
    
  }
  has_autowrap() {
    return _call_native_mb_ret(
      AcceptDialog._bindings.method_has_autowrap,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_ok_button_text(_text) {
    return _call_native_mb_no_ret(
      AcceptDialog._bindings.method_set_ok_button_text,
      this._owner,
      _text
    );
    
  }
  get_ok_button_text() {
    return _call_native_mb_ret(
      AcceptDialog._bindings.method_get_ok_button_text,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  
get ok_button_text () {
  return this.get_ok_button_text();
}
set ok_button_text (new_value) {
  this.set_ok_button_text(new_value);
}
get dialog_text () {
  return this.get_text();
}
set dialog_text (new_value) {
  this.set_text(new_value);
}
get dialog_hide_on_ok () {
  return this.get_hide_on_ok();
}
set dialog_hide_on_ok (new_value) {
  this.set_hide_on_ok(new_value);
}
get dialog_close_on_escape () {
  return this.get_close_on_escape();
}
set dialog_close_on_escape (new_value) {
  this.set_close_on_escape(new_value);
}
get dialog_autowrap () {
  return this.has_autowrap();
}
set dialog_autowrap (new_value) {
  this.set_autowrap(new_value);
}


  static {
    this._init_bindings();
  }
}