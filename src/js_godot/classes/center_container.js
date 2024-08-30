import * as internal from '__internal__';
import { Container } from 'src/js_godot/classes/container'
import { StringName } from 'src/js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

class _MethodBindings {
    method_set_use_top_left;
    method_is_using_top_left;
}


export class CenterContainer extends Container{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("CenterContainer");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("CenterContainer");
        let methodname = new StringName("set_use_top_left");
        this._bindings.method_set_use_top_left = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("CenterContainer");
        let methodname = new StringName("is_using_top_left");
        this._bindings.method_is_using_top_left = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
  }
  set_use_top_left(_enable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_use_top_left,
      this._owner,
      _enable
    );
    
  }
  is_using_top_left() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_using_top_left,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
}