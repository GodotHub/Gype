import * as internal from '__internal__';
import { ConfirmationDialog } from 'src/js_godot/classes/confirmation_dialog'
import { GDString } from 'src/js_godot/variant/gd_string'
import { StringName } from 'src/js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

class _MethodBindings {
    method_config;
}


export class ScriptCreateDialog extends ConfirmationDialog{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("ScriptCreateDialog");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("ScriptCreateDialog");
        let methodname = new StringName("config");
        this._bindings.method_config = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          869314288
        );
      }
  }
  config(_inherits, _path, _built_in_enabled, _load_enabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_config,
      this._owner,
      _inherits, _path, _built_in_enabled, _load_enabled
    );
    
  }
}