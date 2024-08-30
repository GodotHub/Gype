import * as internal from '__internal__';
import { GodotObject } from 'src/js_godot/classes/godot_object'
import { RID } from 'src/js_godot/variant/rid'
import { StringName } from 'src/js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

class _MethodBindings {
    method_get_cache;
}


export class UniformSetCacheRD extends GodotObject{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("UniformSetCacheRD");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
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
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_cache,
      this._owner,
			Variant.Type.RID
    ,
      _shader, _set, _uniforms
    );
    
  }
}