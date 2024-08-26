import * as internal from '__internal__';
import { Callable } from 'src/js_godot/variant/callable'
import { GDString } from 'src/js_godot/variant/gd_string'
import { ConfirmationDialog } from 'src/js_godot/classesconfirmation_dialog'
class _MethodBindings {
    method_add_command;
    method_remove_command;
}


export class EditorCommandPalette extends ConfirmationDialog{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("EditorCommandPalette");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("EditorCommandPalette");
      let methodname = new StringName("add_command");
      this._bindings.method_add_command = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        864043298
      );
    }
    {
      let classname = new StringName("EditorCommandPalette");
      let methodname = new StringName("remove_command");
      this._bindings.method_remove_command = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        83702148
      );
    }
  }
  add_command(_command_name, _key_name, _binded_callable, _shortcut_text) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_add_command,
      this._owner,
      _command_name, _key_name, _binded_callable, _shortcut_text
    );
  }
  remove_command(_key_name) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_remove_command,
      this._owner,
      _key_name
    );
  }
}