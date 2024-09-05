import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { GDString } from '@js_godot/variant/gd_string'
import { ConfirmationDialog } from '@js_godot/classes/confirmation_dialog'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_config;
}
export class ScriptCreateDialog extends ConfirmationDialog{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("ScriptCreateDialog");
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
      ScriptCreateDialog._bindings.method_config,
      this._owner,
      _inherits, _path, _built_in_enabled, _load_enabled
    );
    
  }
  


  static {
    this._init_bindings();
  }
}