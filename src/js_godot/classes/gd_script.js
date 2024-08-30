import * as internal from '__internal__';
import { StringName } from 'src/js_godot/variant/string_name'
import { Variant } from 'src/js_godot/variant/variant'
import { Script } from 'src/js_godot/classes/script'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

class _MethodBindings {
    method_new;
}


export class GDScript extends Script{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("GDScript");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("GDScript");
        let methodname = new StringName("new");
        this._bindings.method_new = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1545262638
        );
      }
  }
  new() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_new,
      this._owner,
			Variant.Type.VARIANT
    ,
      
    );
    
  }
}