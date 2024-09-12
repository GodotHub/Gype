import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { Resource } from '@js_godot/classes/resource'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_get_canvas;
  method_get_space;
  method_get_navigation_map;
  method_get_direct_space_state;
}
export class World2D extends Resource{

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("World2D");
    } else {
      super(godot_object);
    }
  }
  static init_method_get_canvas() {
    if (!this.#_bindings.method_get_canvas) {
      let classname = new StringName("World2D");
      let methodname = new StringName("get_canvas");
      this.#_bindings.method_get_canvas = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2944877500
      );
    }
  }
  static init_method_get_space() {
    if (!this.#_bindings.method_get_space) {
      let classname = new StringName("World2D");
      let methodname = new StringName("get_space");
      this.#_bindings.method_get_space = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2944877500
      );
    }
  }
  static init_method_get_navigation_map() {
    if (!this.#_bindings.method_get_navigation_map) {
      let classname = new StringName("World2D");
      let methodname = new StringName("get_navigation_map");
      this.#_bindings.method_get_navigation_map = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2944877500
      );
    }
  }
  static init_method_get_direct_space_state() {
    if (!this.#_bindings.method_get_direct_space_state) {
      let classname = new StringName("World2D");
      let methodname = new StringName("get_direct_space_state");
      this.#_bindings.method_get_direct_space_state = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2506717822
      );
    }
  }

  
  
  get_canvas() {
    World2D.init_method_get_canvas();
    return _call_native_mb_ret(
      World2D.#_bindings.method_get_canvas,
      this._owner,
			Variant.Type.RID,
    
      
    );
    
  }
  get_space() {
    World2D.init_method_get_space();
    return _call_native_mb_ret(
      World2D.#_bindings.method_get_space,
      this._owner,
			Variant.Type.RID,
    
      
    );
    
  }
  get_navigation_map() {
    World2D.init_method_get_navigation_map();
    return _call_native_mb_ret(
      World2D.#_bindings.method_get_navigation_map,
      this._owner,
			Variant.Type.RID,
    
      
    );
    
  }
  get_direct_space_state() {
    World2D.init_method_get_direct_space_state();
    return _call_native_mb_ret(
      World2D.#_bindings.method_get_direct_space_state,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  
get canvas () {
  return this.get_canvas();
}
get space () {
  return this.get_space();
}
get navigation_map () {
  return this.get_navigation_map();
}
get direct_space_state () {
  return this.get_direct_space_state();
}

}