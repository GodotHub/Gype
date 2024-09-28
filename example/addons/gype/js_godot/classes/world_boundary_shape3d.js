import * as internal from '__internal__';
import { Shape3D } from '@js_godot/classes/shape3d'
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
  method_set_plane;
  method_get_plane;
}
@GodotClass
export class WorldBoundaryShape3D extends Shape3D{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("WorldBoundaryShape3D");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_plane() {
    if (!this._bindings.method_set_plane) {
      let classname = new StringName("WorldBoundaryShape3D");
      let methodname = new StringName("set_plane");
      this._bindings.method_set_plane = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3505987427
      );
    }
  }
  static init_method_get_plane() {
    if (!this._bindings.method_get_plane) {
      let classname = new StringName("WorldBoundaryShape3D");
      let methodname = new StringName("get_plane");
      this._bindings.method_get_plane = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2753500971
      );
    }
  }

  
  
  set_plane(_plane) {
    WorldBoundaryShape3D.init_method_set_plane();
    return _call_native_mb_no_ret(
      WorldBoundaryShape3D._bindings.method_set_plane,
      this._owner,
      _plane
    );
    
  }
  get_plane() {
    WorldBoundaryShape3D.init_method_get_plane();
    return _call_native_mb_ret(
      WorldBoundaryShape3D._bindings.method_get_plane,
      this._owner,
			Variant.Type.PLANE,
    
      
    );
    
  }
  
get plane () {
  return this.get_plane();
}
set plane (new_value) {
  this.set_plane(new_value);
}

}