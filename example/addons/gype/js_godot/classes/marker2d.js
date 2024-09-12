import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { Node2D } from '@js_godot/classes/node2d'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_set_gizmo_extents;
  method_get_gizmo_extents;
}
export class Marker2D extends Node2D{

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("Marker2D");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_gizmo_extents() {
    if (!this.#_bindings.method_set_gizmo_extents) {
      let classname = new StringName("Marker2D");
      let methodname = new StringName("set_gizmo_extents");
      this.#_bindings.method_set_gizmo_extents = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_gizmo_extents() {
    if (!this.#_bindings.method_get_gizmo_extents) {
      let classname = new StringName("Marker2D");
      let methodname = new StringName("get_gizmo_extents");
      this.#_bindings.method_get_gizmo_extents = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }

  
  
  set_gizmo_extents(_extents) {
    Marker2D.init_method_set_gizmo_extents();
    return _call_native_mb_no_ret(
      Marker2D.#_bindings.method_set_gizmo_extents,
      this._owner,
      _extents
    );
    
  }
  get_gizmo_extents() {
    Marker2D.init_method_get_gizmo_extents();
    return _call_native_mb_ret(
      Marker2D.#_bindings.method_get_gizmo_extents,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  
get gizmo_extents () {
  return this.get_gizmo_extents();
}
set gizmo_extents (new_value) {
  this.set_gizmo_extents(new_value);
}

}