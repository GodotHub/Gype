import * as internal from '__internal__';
import { AcceptDialog } from 'src/js_godot/classesaccept_dialog'
import { GDString } from 'src/js_godot/variant/gd_string'
class _MethodBindings {
    method_get_cancel_button;
    method_set_cancel_button_text;
    method_get_cancel_button_text;
}


export class ConfirmationDialog extends AcceptDialog{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("ConfirmationDialog");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
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
      ClassDB._bindings.method_get_cancel_button,
      this._owner,
			Variant.INT,
      
    );
  }
  set_cancel_button_text(_text) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_cancel_button_text,
      this._owner,
      _text
    );
  }
  get_cancel_button_text() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_cancel_button_text,
      this._owner,
			Variant.Type.STRING
    ,
      
    );
  }
}