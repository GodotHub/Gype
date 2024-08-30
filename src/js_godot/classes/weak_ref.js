import * as internal from '__internal__';
import { Variant } from 'src/js_godot/variant/variant'
import { RefCounted } from 'src/js_godot/classes/ref_counted'
import { StringName } from 'src/js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

class _MethodBindings {
    method_get_ref;
}


export class WeakRef extends RefCounted{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("WeakRef");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("WeakRef");
        let methodname = new StringName("get_ref");
        this._bindings.method_get_ref = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1214101251
        );
      }
  }
  get_ref() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_ref,
      this._owner,
			Variant.Type.VARIANT
    ,
      
    );
    
  }
}