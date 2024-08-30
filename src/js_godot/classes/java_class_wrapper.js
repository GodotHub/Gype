import * as internal from '__internal__';
import { GodotObject } from 'src/js_godot/classes/godot_object'
import { GDString } from 'src/js_godot/variant/gd_string'
import { StringName } from 'src/js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

class _MethodBindings {
    method_wrap;
}

export const JavaClassWrapper = new _JavaClassWrapper();

class _JavaClassWrapper extends GodotObject{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("JavaClassWrapper");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("JavaClassWrapper");
        let methodname = new StringName("wrap");
        this._bindings.method_wrap = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1124367868
        );
      }
  }
  wrap(_name) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_wrap,
      this._owner,
			Variant.INT,
      _name
    );
    
  }
}