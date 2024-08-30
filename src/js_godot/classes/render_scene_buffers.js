import * as internal from '__internal__';
import { RefCounted } from 'src/js_godot/classes/ref_counted'
import { StringName } from 'src/js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

class _MethodBindings {
    method_configure;
}


export class RenderSceneBuffers extends RefCounted{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("RenderSceneBuffers");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
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
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_configure,
      this._owner,
      _config
    );
    
  }
}