import * as internal from '__internal__';
import { GDArray } from '@js_godot/variant/gd_array'
import { GodotObject } from '@js_godot/classes/godot_object'
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
  method_get_cache;
}
@GodotClass
export class UniformSetCacheRD extends GodotObject{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("UniformSetCacheRD");
    } else {
      super(godot_object);
    }
  }
  static init_method_get_cache() {
    if (!this._bindings.method_get_cache) {
      let classname = new StringName("UniformSetCacheRD");
      let methodname = new StringName("get_cache");
      this._bindings.method_get_cache = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        658571723
      );
    }
  }

  
  
  get_cache(_shader, _set, _uniforms) {
    UniformSetCacheRD.init_method_get_cache();
    return _call_native_mb_ret(
      UniformSetCacheRD._bindings.method_get_cache,
      this._owner,
			Variant.Type.RID,
    
      _shader, _set, _uniforms
    );
    
  }
  

}