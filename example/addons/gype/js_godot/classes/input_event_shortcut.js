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
  method_set_shortcut;
  method_get_shortcut;
}
@GodotClass
export class InputEventShortcut extends InputEvent{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("InputEventShortcut");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_shortcut() {
    if (!this._bindings.method_set_shortcut) {
      let classname = new StringName("InputEventShortcut");
      let methodname = new StringName("set_shortcut");
      this._bindings.method_set_shortcut = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        857163497
      );
    }
  }
  static init_method_get_shortcut() {
    if (!this._bindings.method_get_shortcut) {
      let classname = new StringName("InputEventShortcut");
      let methodname = new StringName("get_shortcut");
      this._bindings.method_get_shortcut = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3766804753
      );
    }
  }

  
  
  set_shortcut(_shortcut) {
    InputEventShortcut.init_method_set_shortcut();
    return _call_native_mb_no_ret(
      InputEventShortcut._bindings.method_set_shortcut,
      this._owner,
      _shortcut
    );
    
  }
  get_shortcut() {
    InputEventShortcut.init_method_get_shortcut();
    return _call_native_mb_ret(
      InputEventShortcut._bindings.method_get_shortcut,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  
get shortcut () {
  return this.get_shortcut();
}
set shortcut (new_value) {
  this.set_shortcut(new_value);
}

}