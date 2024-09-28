import * as internal from '__internal__';
import { AcceptDialog } from '@js_godot/classes/accept_dialog'
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
  method_get_cancel_button;
  method_set_cancel_button_text;
  method_get_cancel_button_text;
}
@GodotClass
export class ConfirmationDialog extends AcceptDialog{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("ConfirmationDialog");
    } else {
      super(godot_object);
    }
  }
  static init_method_get_cancel_button() {
    if (!this._bindings.method_get_cancel_button) {
      let classname = new StringName("ConfirmationDialog");
      let methodname = new StringName("get_cancel_button");
      this._bindings.method_get_cancel_button = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1856205918
      );
    }
  }
  static init_method_set_cancel_button_text() {
    if (!this._bindings.method_set_cancel_button_text) {
      let classname = new StringName("ConfirmationDialog");
      let methodname = new StringName("set_cancel_button_text");
      this._bindings.method_set_cancel_button_text = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        83702148
      );
    }
  }
  static init_method_get_cancel_button_text() {
    if (!this._bindings.method_get_cancel_button_text) {
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
    ConfirmationDialog.init_method_get_cancel_button();
    return _call_native_mb_ret(
      ConfirmationDialog._bindings.method_get_cancel_button,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  set_cancel_button_text(_text) {
    ConfirmationDialog.init_method_set_cancel_button_text();
    return _call_native_mb_no_ret(
      ConfirmationDialog._bindings.method_set_cancel_button_text,
      this._owner,
      _text
    );
    
  }
  get_cancel_button_text() {
    ConfirmationDialog.init_method_get_cancel_button_text();
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

}