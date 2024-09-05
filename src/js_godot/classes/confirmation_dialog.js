import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { GDString } from '@js_godot/variant/gd_string'
import { AcceptDialog } from '@js_godot/classes/accept_dialog'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_get_cancel_button;
  method_set_cancel_button_text;
  method_get_cancel_button_text;
}
export class ConfirmationDialog extends AcceptDialog{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("ConfirmationDialog");
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
      let classname = new StringName("ConfirmationDialog");
      let methodname = new StringName("get_cancel_button");
      this._bindings.method_get_cancel_button = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1856205918
      );
    }
    {
      let classname = new StringName("ConfirmationDialog");
      let methodname = new StringName("set_cancel_button_text");
      this._bindings.method_set_cancel_button_text = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        83702148
      );
    }
    {
      let classname = new StringName("ConfirmationDialog");
      let methodname = new StringName("get_cancel_button_text");
      this._bindings.method_get_cancel_button_text = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        201670096
      );
    }
  }
  
  get_cancel_button() {
    return _call_native_mb_ret(
      ConfirmationDialog._bindings.method_get_cancel_button,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_cancel_button_text(_text) {
    return _call_native_mb_no_ret(
      ConfirmationDialog._bindings.method_set_cancel_button_text,
      this._owner,
      _text
    );
    
  }
  get_cancel_button_text() {
    return _call_native_mb_ret(
      ConfirmationDialog._bindings.method_get_cancel_button_text,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  
get cancel_button_text () {
  return this.get_cancel_button_text();
}
set cancel_button_text (new_value) {
  this.set_cancel_button_text(new_value);
}


  static {
    this._init_bindings();
  }
}