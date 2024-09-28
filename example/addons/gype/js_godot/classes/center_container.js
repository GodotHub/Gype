import * as internal from '__internal__';
import { Container } from '@js_godot/classes/container'
import { StringName } from '@js_godot/variant/string_name'
import { Variant } from '@js_godot/variant/variant'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";
import { GodotClass } from "@js_godot/core/class_define";

class _MethodBindings {
  method_set_use_top_left;
  method_is_using_top_left;
}
@GodotClass
export class CenterContainer extends Container{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("CenterContainer");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_use_top_left() {
    if (!this._bindings.method_set_use_top_left) {
      let classname = new StringName("CenterContainer");
      let methodname = new StringName("set_use_top_left");
      this._bindings.method_set_use_top_left = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_using_top_left() {
    if (!this._bindings.method_is_using_top_left) {
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
    CenterContainer.init_method_set_use_top_left();
    return _call_native_mb_no_ret(
      CenterContainer._bindings.method_set_use_top_left,
      this._owner,
      _enable
    );
    
  }
  is_using_top_left() {
    CenterContainer.init_method_is_using_top_left();
    return _call_native_mb_ret(
      CenterContainer._bindings.method_is_using_top_left,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  
get use_top_left () {
  return this.is_using_top_left();
}
set use_top_left (new_value) {
  this.set_use_top_left(new_value);
}

}