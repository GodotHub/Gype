import * as internal from '__internal__';
import { ScrollContainer } from 'src/js_godot/classes/scroll_container'
import { GDString } from 'src/js_godot/variant/gd_string'
import { StringName } from 'src/js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

class _MethodBindings {
    method_get_selected_path;
    method_get_edited_object;
}


export class EditorInspector extends ScrollContainer{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("EditorInspector");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("EditorInspector");
        let methodname = new StringName("get_selected_path");
        this._bindings.method_get_selected_path = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          201670096
        );
      }
      {
        let classname = new StringName("EditorInspector");
        let methodname = new StringName("get_edited_object");
        this._bindings.method_get_edited_object = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2050059866
        );
      }
  }
  get_selected_path() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_selected_path,
      this._owner,
			Variant.Type.STRING
    ,
      
    );
    
  }
  get_edited_object() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_edited_object,
      this._owner,
			Variant.INT,
      
    );
    
  }
}