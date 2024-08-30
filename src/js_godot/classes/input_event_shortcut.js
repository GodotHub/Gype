import * as internal from '__internal__';
import { InputEvent } from 'src/js_godot/classes/input_event'
import { StringName } from 'src/js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

class _MethodBindings {
    method_set_shortcut;
    method_get_shortcut;
}


export class InputEventShortcut extends InputEvent{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("InputEventShortcut");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("InputEventShortcut");
        let methodname = new StringName("set_shortcut");
        this._bindings.method_set_shortcut = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          857163497
        );
      }
      {
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
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_shortcut,
      this._owner,
      _shortcut
    );
    
  }
  get_shortcut() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_shortcut,
      this._owner,
			Variant.INT,
      
    );
    
  }
}