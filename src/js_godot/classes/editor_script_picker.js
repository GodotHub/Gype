import * as internal from '__internal__';
import { EditorResourcePicker } from '@js_godot/classes/editor_resource_picker'
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_set_script_owner;
  method_get_script_owner;
}
export class EditorScriptPicker extends EditorResourcePicker{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("EditorScriptPicker");
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
      let classname = new StringName("EditorScriptPicker");
      let methodname = new StringName("set_script_owner");
      this._bindings.method_set_script_owner = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1078189570
      );
    }
    {
      let classname = new StringName("EditorScriptPicker");
      let methodname = new StringName("get_script_owner");
      this._bindings.method_get_script_owner = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3160264692
      );
    }
  }
  
  set_script_owner(_owner_node) {
    return _call_native_mb_no_ret(
      EditorScriptPicker._bindings.method_set_script_owner,
      this._owner,
      _owner_node
    );
    
  }
  get_script_owner() {
    return _call_native_mb_ret(
      EditorScriptPicker._bindings.method_get_script_owner,
      this._owner,
			Variant.INT,
      
    );
    
  }
  
get script_owner () {
  return this.get_script_owner();
}
set script_owner (new_value) {
  this.set_script_owner(new_value);
}


  static {
    this._init_bindings();
  }
}