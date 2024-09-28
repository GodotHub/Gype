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
  method_get_cache_multipass;
}
@GodotClass
export class FramebufferCacheRD extends GodotObject{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("FramebufferCacheRD");
    } else {
      super(godot_object);
    }
  }
  static init_method_get_cache_multipass() {
    if (!this._bindings.method_get_cache_multipass) {
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
    FramebufferCacheRD.init_method_get_cache_multipass();
    return _call_native_mb_ret(
      FramebufferCacheRD._bindings.method_get_cache_multipass,
      this._owner,
			Variant.Type.RID,
    
      _textures, _passes, _views
    );
    
  }
  

}