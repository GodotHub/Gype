import * as internal from '__internal__';
import { EditorResourcePicker } from 'src/js_godot/classeseditor_resource_picker'
class _MethodBindings {
    method_set_script_owner;
    method_get_script_owner;
}


export class EditorScriptPicker extends EditorResourcePicker{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("EditorScriptPicker");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
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
      ClassDB._bindings.method_set_script_owner,
      this._owner,
      _owner_node
    );
  }
  get_script_owner() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_script_owner,
      this._owner,
			Variant.INT,
      
    );
  }
}