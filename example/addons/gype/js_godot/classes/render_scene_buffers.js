import * as internal from '__internal__';
import { RefCounted } from '@js_godot/classes/ref_counted'
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
  method_configure;
}
@GodotClass
export class RenderSceneBuffers extends RefCounted{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("RenderSceneBuffers");
    } else {
      super(godot_object);
    }
  }
  static init_method_configure() {
    if (!this._bindings.method_configure) {
      let classname = new StringName("RenderSceneBuffers");
      let methodname = new StringName("configure");
      this._bindings.method_configure = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3072623270
      );
    }
  }

  
  
  configure(_config) {
    RenderSceneBuffers.init_method_configure();
    return _call_native_mb_no_ret(
      RenderSceneBuffers._bindings.method_configure,
      this._owner,
      _config
    );
    
  }
  

}