import * as internal from '__internal__';
import { StringName } from '@js_godot/variant/string_name'
import { ConfirmationDialog } from '@js_godot/classes/confirmation_dialog'
import { Variant } from '@js_godot/variant/variant'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";
import { GodotClass } from "@js_godot/core/class_define";

class _MethodBindings {
  method_config;
}
@GodotClass
export class ScriptCreateDialog extends ConfirmationDialog{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("ScriptCreateDialog");
    } else {
      super(godot_object);
    }
  }
  static init_method_config() {
    if (!this._bindings.method_config) {
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
    ScriptCreateDialog.init_method_config();
    return _call_native_mb_no_ret(
      ScriptCreateDialog._bindings.method_config,
      this._owner,
      _inherits, _path, _built_in_enabled, _load_enabled
    );
    
  }
  

}