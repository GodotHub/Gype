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
    method_get_cache_multipass;
}


export class FramebufferCacheRD extends GodotObject{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("FramebufferCacheRD");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("FramebufferCacheRD");
        let methodname = new StringName("get_cache_multipass");
        this._bindings.method_get_cache_multipass = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3437881813
        );
      }
  }
  get_cache_multipass(_textures, _passes, _views) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_cache_multipass,
      this._owner,
			Variant.Type.RID
    ,
      _textures, _passes, _views
    );
    
  }
}