import * as internal from '__internal__';
import { StringName } from '@js_godot/variant/string_name'
import { Variant } from '@js_godot/variant/variant'
import { Node3D } from '@js_godot/classes/node3d'
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
export class Marker3D extends Node3D{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("Marker3D");
    } else {
      super(godot_object);
    }
  }
  
  static async _init_bindings() {
    if (this.#initialized) {
      return;
    }
    this.#initialized = true;
    {
      let classname = new StringName("Marker3D");
      let methodname = new StringName("set_gizmo_extents");
      this._bindings.method_set_gizmo_extents = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("Marker3D");
      let methodname = new StringName("get_gizmo_extents");
      this._bindings.method_get_gizmo_extents = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
  }
  set_gizmo_extents(_extents) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_gizmo_extents,
      this._owner,
      _extents
    );
    
  }
  get_gizmo_extents() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_gizmo_extents,
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


  static {
    this._init_bindings();
  }
}