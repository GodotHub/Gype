import * as internal from '__internal__';
import { GLTFState } from '@js_godot/classes/gltf_state'
import { StringName } from '@js_godot/variant/string_name'
import { Variant } from '@js_godot/variant/variant'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_get_allow_geometry_helper_nodes;
  method_set_allow_geometry_helper_nodes;
}
export class FBXState extends GLTFState{

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("FBXState");
    } else {
      super(godot_object);
    }
  }
  static init_method_get_allow_geometry_helper_nodes() {
    if (!this.#_bindings.method_get_allow_geometry_helper_nodes) {
      let classname = new StringName("FBXState");
      let methodname = new StringName("get_allow_geometry_helper_nodes");
      this.#_bindings.method_get_allow_geometry_helper_nodes = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2240911060
      );
    }
  }
  static init_method_set_allow_geometry_helper_nodes() {
    if (!this.#_bindings.method_set_allow_geometry_helper_nodes) {
      let classname = new StringName("FBXState");
      let methodname = new StringName("set_allow_geometry_helper_nodes");
      this.#_bindings.method_set_allow_geometry_helper_nodes = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }

  
  
  get_allow_geometry_helper_nodes() {
    FBXState.init_method_get_allow_geometry_helper_nodes();
    return _call_native_mb_ret(
      FBXState.#_bindings.method_get_allow_geometry_helper_nodes,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_allow_geometry_helper_nodes(_allow) {
    FBXState.init_method_set_allow_geometry_helper_nodes();
    return _call_native_mb_no_ret(
      FBXState.#_bindings.method_set_allow_geometry_helper_nodes,
      this._owner,
      _allow
    );
    
  }
  
get allow_geometry_helper_nodes () {
  return this.get_allow_geometry_helper_nodes();
}
set allow_geometry_helper_nodes (new_value) {
  this.set_allow_geometry_helper_nodes(new_value);
}

}