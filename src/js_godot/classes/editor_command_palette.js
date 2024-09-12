import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { ConfirmationDialog } from '@js_godot/classes/confirmation_dialog'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_add_command;
  method_remove_command;
}
export class EditorCommandPalette extends ConfirmationDialog{

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("EditorCommandPalette");
    } else {
      super(godot_object);
    }
  }
  static init_method_add_command() {
    if (!this.#_bindings.method_add_command) {
      let classname = new StringName("EditorCommandPalette");
      let methodname = new StringName("add_command");
      this.#_bindings.method_add_command = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        864043298
      );
    }
  }
  static init_method_remove_command() {
    if (!this.#_bindings.method_remove_command) {
      let classname = new StringName("EditorCommandPalette");
      let methodname = new StringName("remove_command");
      this.#_bindings.method_remove_command = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        83702148
      );
    }
  }

  
  
  add_command(_command_name, _key_name, _binded_callable, _shortcut_text) {
    EditorCommandPalette.init_method_add_command();
    return _call_native_mb_no_ret(
      EditorCommandPalette.#_bindings.method_add_command,
      this._owner,
      _command_name, _key_name, _binded_callable, _shortcut_text
    );
    
  }
  remove_command(_key_name) {
    EditorCommandPalette.init_method_remove_command();
    return _call_native_mb_no_ret(
      EditorCommandPalette.#_bindings.method_remove_command,
      this._owner,
      _key_name
    );
    
  }
  

}